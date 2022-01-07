#pragma once

#include "uopt/uoptdata.h"
#include "uopt/debug/dlprint.h"
#include "uopt/debug/vec.h"

struct LineBuffer {
    int maxWidth;
    int numLines;
    Vec(struct DisplayLine *) *lines;
};

struct LineBuffer build_proc_buffer();
struct LineBuffer build_stack_buffer();
struct LineBuffer build_var_access_buffer();
struct LineBuffer build_ichain_buffer();
struct LineBuffer build_liverange_buffer();
struct LineBuffer build_reg_assignment_buffer();
struct LineBuffer build_bitvect_buffer();
struct LineBuffer build_ucode_output_buffer();
void linebuffer_free(struct LineBuffer dbg);
