#ifndef UOPTFEEDBACK_H
#define UOPTFEEDBACK_H
#include "feedback.h"

extern bool sym_file_updated;
extern unsigned char *feedback; // TODO: pointer to a feedback struct
extern unsigned char *feedback_end;

void read_feedback_file(const char *path);
void local_in_reg(int blockno, int var_addr, int reg);
int path_blockno(char *name, int length);

#endif
