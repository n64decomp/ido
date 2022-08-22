#ifndef UOPTROLL_H
#define UOPTROLL_H

struct Expression *change_to_const_eq(bool loopIfTrue, struct Expression *loopCond, struct Graphnode *node, int rem);
struct Expression *change_to_var_eq(bool loop_if_true, bool inc_var_op1, struct Expression *loopCond, struct Graphnode *body, int incre);
void del_orig_cond(struct Expression *loopCond, struct Graphnode *body);
struct Expression *unroll_searchloop(unsigned short tableIdx, struct Expression *expr, struct Expression *arg3, struct Expression *arg4);
struct Expression *unroll_resetincr(struct Expression *expr, int spCC);
struct Expression *unroll_resetincr_mod(struct Expression *expr, int *incr);
bool unroll_check_istr_propcopy(struct Expression *arg1, int arg2, Datatype dtype, int unk3C, struct Expression **expr);
bool unroll_check_irst_propcopy(struct Expression *arg1, int arg2, Datatype dtype, int unk3C, struct Expression **expr);
struct Expression *oneloopblockexpr(struct Expression *expr, int *arg1);
void oneloopblockstmt(struct Statement *stat);
void create_edge(struct Graphnode *from, struct Graphnode *to);
void new_header_node(bool arg0);
void record_labels(void);
void new_set_of_labels(void);
struct LabelMap *get_labelmap(int blockno);
void link_jump_in_loop(struct Statement *stat, bool arg1);
void pre_loopblock(bool arg0, bool arg1);
void post_loopblock(bool arg0, bool arg1, bool arg2);
void termination_test(struct Statement *stat_s3, int unroll_times_local);
int expr_instr(struct Expression *expr);
int estimate_instr(struct Graphnode *body, struct Graphnode *bodyend);
void change_adj_node(struct GraphnodeList *nodelist, struct Graphnode *from, struct Graphnode *to);
void del_adj_node(struct GraphnodeList **nodelist, struct Graphnode *source);
struct Expression *form_bop(Uopcode opc, struct Expression *left, struct Expression *right);
struct Expression *form_rem(struct Expression *expr, int arg1);
struct Expression *form_neq0(struct Expression *expr);
struct Expression *form_neg(struct Expression *expr);
struct Expression *str_to_temporary(int addr, struct Expression *store);
void reset_images(struct Expression *expr);
void loopunroll(void);
void change_adj_node(struct GraphnodeList *list, struct Graphnode *node1, struct Graphnode *node2);
void par_to_str(struct Statement *par, bool arg1, int arg2);
void pmov_to_mov(struct Statement *pmov);

#endif
