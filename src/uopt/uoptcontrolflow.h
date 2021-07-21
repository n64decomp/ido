#ifndef UOPTCONTROLFLOW_H
#define UOPTCONTROLFLOW_H

#include "uoptdata.h"

void incorp_feedback(void);
void bb_frequencies(void);
struct Graphnode *ingraph(int blockno);
void init_graphnode(struct Graphnode *node);
void init_node_vectors(struct Graphnode *graphnode);
void appendgraph(void);
void controlflow(void);

#endif
