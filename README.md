# IDO uopt debugger

![Screenshot](/screenshots/screenshot2.png)

An interactive ncurses debugger for the global optimization pass of the IDO C compiler.

# Compilation

### Requires 32-bit ncurses to compile and run.

Due to hardware differences, alignment issues, and probably subtle bugs in the decompilation, only the 32-bit version of uopt on x86 behaves correctly.

Install 32-bit ncurses and gcc, then type `make`.

## Ubuntu

To install 32-bit packages on Ubuntu run the following:
`sudo dpkg --add-architecture i386 && sudo apt update`

These are some of the requirements (not comprehensive):
`sudo apt install libncurses6:i386 libtinfo-dev:i386`

# Running the Debugger

Run `./udb.py path/to/source/file.c [make flags]`

This compiles the given file, but runs the debugger instead of the normal uopt.

The script assumes that your decomp project uses make as a build system and n64decomp/ido-static-recomp instead of qemu-irix.

## Controls

The main keys to know are `c` (`c`olor) and `x`/`X` (e`x`amine).

| Key  | Action |
|------|--------|
| hjkl | Move the cursor |
| ^$   | Move cursor to start/end of line |
| gG   | Jump to top / bottom of tile |
| du   | Jump half a page down / up |
|Ctrl-F| Jump one page down |
|Ctrl-B| Jump one page up   |
| s    | Split window horizontally, creating a new window below the current one |
| S    | Split window vertically, creating a new window to the right of the current one |
| HJKL | Move cursor to a different window |
| q    | Close the current window (unless the current window is the main procedure window) |
| Q    | Stop debugging the current function, and switch to the next one in the file |
| c    | Globally highlight whatever object the cursor is on |
| xX   | Examine whatever object the cursor is on. Opens a new window that displays the struct's fields and their values |
| v    | Highlight each distinct object on the current line in a different color, up to a depth that increases with each press |
| V    | Like v, but decreases the depth instead |

See also the functions named `*_tile_input` in [ncdebug.c](/src/uopt/debug/ncdebug.c) for other controls specific to certain windows. 
These keys will probably be removed, so they aren't worth including in the table above.

# IDO decompilation project

This project aims to decompile IDO 7.1, and maybe 5.3 too.

The src directory for uopt was created using the following command:

```
mkdir src
cd src
../mipsdisasm/elfdump -i -p ~/ido7.1_compiler/usr/lib/uopt -t ../uopt_split_specification.txt
```

To generate an assembly file that can easily be used with mips_to_c, run the following command:

```
mipsdisasm/elfdump -i -r -p ~/ido7.1_compiler/usr/lib/uopt > uopt71.s
```

The resulting C files can be compiled with `mips-linux-gnu-gcc` with the args `-c -fPIC`.
