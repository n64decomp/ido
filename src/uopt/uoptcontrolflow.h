#ifndef UOPTCONTROLFLOW_H
#define UOPTCONTROLFLOW_H

#include "uoptdata.h"

void incorp_feedback(void);
void bb_frequencies(void);
void init_node_vectors(struct Graphnode *graphnode);
void appendgraph(void);
void controlflow(void);

#endif
