#include "libmld.h"
/*
0040C0C0 local_in_reg
*/
SYMR *st_psym_idn_offset(int idn, int offset) {
    DNR sp60;
    AUXU *aux;
    DNR *dn;
    EXTR *ext;
    SYMR *sym;

    dn = st_pdn_idn(idn);
    sp60 = *dn;
    if (sp60.rfd == ST_EXTIFD) {
        ext = st_pext_iext(sp60.index);
        sp60.rfd = ext->ifd;
        sp60.index = ext->asym.index;
    }

    sym = st_psym_ifd_isym(sp60.rfd, sp60.index);
    if (sym->index == indexNil) {
        return NULL;
    }

    aux = st_paux_ifd_iaux(sp60.rfd, sym->index);
    if (aux == NULL) {
        return NULL;
    }

    sp60.index++;
    while (sp60.index < aux->isym) {
        sym = st_psym_ifd_isym(sp60.rfd, sp60.index);
        if ((sym->st == stLocal || sym->st == stParam) && (sym->sc == scAbs || sym->sc == scVar) && sym->value == offset) {
            return sym;
        }

        if (sym->st == stProc || sym->st == stStaticProc) {
            break;
        }

        if (sym->sc == 11 && (sym->st == stBlock || sym->st == stStruct || sym->st == stUnion || sym->st == stEnum)) {
            sp60.index = sym->index - 1;
        }
        
        sp60.index++;
    }

    return NULL;
}
