#!/usr/bin/env python3
import sys
import os
import platform
import re
import subprocess
import shutil
import argparse
import shlex
import tempfile
from typing import Callable, Dict, List, Match, Mapping, Optional, Pattern, Set, Tuple
from collections import defaultdict

is_macos = platform.system() == "Darwin"
make_cmd = "gmake" if is_macos else "make"

DEFAULT_AS_CMDLINE: List[str] = ["mips-linux-gnu-as", "-march=vr4300", "-mabi=32"]

def formatcmd(cmdline: List[str]) -> str:
    return " ".join(shlex.quote(arg) for arg in cmdline)

def find_root_dir(filename: str, pattern: List[str]) -> Optional[str]:
    old_dirname = None
    dirname = os.path.abspath(os.path.dirname(filename))

    while dirname and (not old_dirname or len(dirname) < len(old_dirname)):
        for fname in pattern:
            if os.path.isfile(os.path.join(dirname, fname)):
                return dirname
        old_dirname = dirname
        dirname = os.path.dirname(dirname)

    return None


def fixup_build_command(
    parts: List[str], ignore_part: str
) -> Tuple[List[str], Optional[List[str]]]:
    res = []
    skip_count = 0
    for part in parts:
        if skip_count > 0:
            skip_count -= 1
            continue
        if part == ["-MF", "-o"]:
            skip_count = 1
            continue
        if part == ignore_part:
            continue
        res.append(part)

    try:
        ind0 = min(
            i
            for i, arg in enumerate(res)
            if any(
                cmd in arg
                for cmd in ["asm_processor", "asm-processor", "preprocess.py"]
            )
        )
        ind1 = res.index("--", ind0 + 1)
        ind2 = res.index("--", ind1 + 1)
        res = res[ind0 + 1 : ind1] + res[ind2 + 1 :]
    except ValueError:
        pass

    return res


def find_build_command_line(
    root_dir: str, c_file: str, make_flags: List[str], build_system: str
) -> Tuple[List[str], List[str]]:
    build_invocation = [
        make_cmd,
        "--always-make",
        "--dry-run",
        "--debug=j",
    ] + make_flags

    rel_c_file = os.path.relpath(c_file, root_dir)
    debug_output = (
        subprocess.check_output(build_invocation, cwd=root_dir)
        .decode("utf-8")
        .split("\n")
    )

    output = []
    close_match = False

    for line in debug_output:
        while "//" in line:
            line = line.replace("//", "/")
        while "/./" in line:
            line = line.replace("/./", "/")
        if rel_c_file not in line:
            continue

        close_match = True
        parts = shlex.split(line)

        # extract actual command from 'bash -c "..."'
        if parts[0] == "bash" and "-c" in parts:
            for part in parts:
                if rel_c_file in part:
                    parts = shlex.split(part)
                    break

        if rel_c_file not in parts:
            continue
        if "-o" not in parts:
            continue
        if "-fsyntax-only" in parts:
            continue
        cmdline = fixup_build_command(parts, rel_c_file)
        output.append(cmdline)

    if not output:
        close_extra = (
            "\n(Found one possible candidate, but didn't match due to "
            "either spaces in paths, having -fsyntax-only, or missing an -o flag.)"
            if close_match
            else ""
        )
        print(
            "Failed to find compile command from build script output. "
            f"Please ensure running '{' '.join(build_invocation)}' "
            f"contains a line with the string '{rel_c_file}'.{close_extra}",
            file=sys.stderr,
        )
        sys.exit(1)

    if len(output) > 1:
        output_lines = "\n".join(map(formatcmd, output))
        print(
            f"Error: found multiple compile commands for {rel_c_file}:\n{output_lines}\n"
            f"Please modify the build script such that '{' '.join(build_invocation)}' "
            "produces a single compile command.",
            file=sys.stderr,
        )
        sys.exit(1)

    return output[0]


def main():
    parser = argparse.ArgumentParser(
        description="""Compile a file using the uopt debugger."""
    )
    parser.add_argument(
        "c_file",
        help="""C source file to be compiled.
        Assumes that the file can be built with 'make' to create a .o file.""",
    )
    parser.add_argument(
        "make_flags",
        nargs="*",
        help="Arguments to pass to 'make'.",
    )
    args = parser.parse_args()

    root_dir = find_root_dir(
        args.c_file, ["Makefile", "makefile"]
    )

    if not root_dir:
        print(f"Can't find root dir of project!", file=sys.stderr)
        sys.exit(1)

    build_system = "make"
    make_flags = args.make_flags

    compiler = find_build_command_line(
        root_dir, args.c_file, make_flags, build_system
    )

    # get the recomp directory
    compiler_directory = os.path.dirname(shlex.quote(compiler[0]))

    cfe_bin = compiler_directory + "/cfe"
    uopt_bin = sys.path[0] + "/build/uopt"

    # change to project directory to avoid changing include arguments
    try:
        os.chdir(root_dir)
    except FileNotFoundError:
        print(f"Root directory {root_dir} does not exist")
        sys.exit(1)
    except NotADirectoryError:
        print(f"{root_dir} is not a directory")
        sys.exit(1)
    except PermissionError:
        print(f"Did not have permission to change working directory to {root_dir}")
        sys.exit(1)

    # run cc with -show to get the commands for each binary
    temp_o_file = tempfile.NamedTemporaryFile()
    cc_result = subprocess.run(compiler + ["-show", args.c_file, "-o", temp_o_file.name], stderr=subprocess.PIPE)

    cfe_command = [cfe_bin]
    uopt_command = [uopt_bin]

    # collect the args for commands to run cfe and uopt
    temp_files = {}
    cfe_out = None
    for command in cc_result.stderr.decode("utf-8").splitlines():
        args = command.split(" ") # shlex.split(command) # lines have debug output, so might trip up shlex...
        cur_command = None
        next_is_output = False

        for arg in args:
            # cfe prints debug output on the same line as the uopt command,
            # need to ignore words until /usr/lib/uopt or /usr/lib/cfe
            if arg.startswith(("/usr/lib/cfe", "/usr/bin/cfe")):
                cur_command = cfe_command
                continue
            elif arg.startswith(("/usr/lib/uopt", "/usr/bin/uopt")):
                cur_command = uopt_command
                continue

            if arg == ">":
                next_is_output = True
                continue

            # replace original temp files with a file that the will close when the script ends
            try:
                temp_file_name = arg[arg.index('/tmp/ctm'):]
                if temp_file_name not in temp_files:
                    temp_files[temp_file_name] = tempfile.NamedTemporaryFile()

                # don't want to add output redirection file to cfe's args, but
                # need to keep track of the name, because it appears in uopt's
                # arguments
                if next_is_output and cur_command is cfe_command:
                    cfe_out = temp_files[temp_file_name]
                    next_is_output = False
                    continue

                arg = arg.replace(temp_file_name, temp_files[temp_file_name].name)
            except ValueError:
                pass

            if cur_command and arg:
                cur_command.append(arg)

    #print("CFE COMMAND:", ' '.join(cfe_command))
    #print("UOPT COMMAND:", ' '.join(uopt_command))
    try:
        with open(os.devnull, 'w') as FNULL:
            subprocess.check_call(cfe_command, stdout=cfe_out, stderr=FNULL)
            subprocess.check_call(uopt_command, stderr=FNULL)
    except KeyboardInterrupt as e:
        pass
    except:
        print("\x1b[91mfailed for some reason!!! haHA!\x1b[m")

    #print(f"Compiler: {formatcmd(compiler)} -show {{input}} -o {{output}}")

if __name__ == "__main__":
    main()
