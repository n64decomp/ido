#ifndef UOPTLOC_H
#define UOPTLOC_H
bool binaryovfw(Datatype dtype, Uopcode opc, struct Expression *left, struct Expression *right);
bool ixaovfw(struct Expression *expr, struct Expression *left, struct Expression *right);
bool unaryovfw(struct Expression *expr);

void binaryfold(Uopcode opc, Datatype dtype, struct Expression *left, struct Expression *right, struct Expression *dest);
void ixafold(struct Expression *ixa, struct Expression *left, struct Expression *right, struct Expression *dest);
struct Expression *ilodfold(struct Expression *ilod);
void istrfold(struct Statement *stmt);
void cvtfold(struct Expression *cvt);
void unaryfold(struct Expression *expr);

void reduceixa(struct Expression *ixa);
void constarith(void);


#endif
