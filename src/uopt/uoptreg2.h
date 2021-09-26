#ifndef UOPTREG2_H
#define UOPTREG2_H
#include "uoptdata.h"

void regdataflow(void);
void localcolor(void);
void spilltemps(void);
bool contiguous(struct LiveRange *lr);
void globalcolor(void);

#endif
