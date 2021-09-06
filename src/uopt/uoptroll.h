#ifndef UOPTROLL_H
#define UOPTROLL_H

void loopunroll(void);
void change_adj_node(struct GraphnodeList *list, struct Graphnode *node1, struct Graphnode *node2);
void oneloopblockstmt(struct Statement *stmt);
void par_to_str(struct Statement *par, bool arg1, int arg2);
void pmov_to_mov(struct Statement *pmov);

#endif
