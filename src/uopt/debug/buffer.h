#pragma once

#include "uopt/uoptdata.h"
#include "uopt/debug/dlprint.h"

struct LineBuffer {
    int numLines;
    int maxWidth;
    struct DisplayLine **lines;
};

struct LineBuffer build_proc_buffer();
struct LineBuffer build_var_access_buffer();
struct LineBuffer build_ichain_buffer();
struct LineBuffer build_liverange_buffer();
void linebuffer_free(struct LineBuffer dbg);
