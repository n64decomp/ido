#ifndef FEEDBACK_H
#define FEEDBACK_H

extern bool sym_file_updated;

void read_feedback_file(const char *path);
void local_in_reg(int block, Uopcode opc, int reg_offset);

#endif
