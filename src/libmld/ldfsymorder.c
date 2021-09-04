#include "libmld.h"

/*
0048D0E0 st_readst
*/
int ldfsymorder(HDRR *hdr, int offset) {
    int temp_v1;
    int temp_v1_10;
    int temp_v1_11;
    int temp_v1_3;
    int temp_v1_4;
    int temp_v1_5;
    int temp_v1_6;
    int temp_v1_7;
    int temp_v1_8;
    int temp_v1_9;

    if ((hdr->cbLineOffset != 0) && (hdr->cbLine != 0) && ((offset + 0x60) != hdr->cbLineOffset)) {
        return 0;
    }
    if ((hdr->cbLine & 3) != 0) {
        return 0;
    }
    if ((hdr->cbPdOffset != 0) && (hdr->ipdMax != 0) && (((offset + 0x60) +  hdr->cbLine) != hdr->cbPdOffset)) {
        return 0;
    }
    temp_v1_3 =  hdr->cbLine + (hdr->ipdMax * 0x34);
    if ((temp_v1_3 & 3) != 0) {
        return 0;
    }
    if (( hdr->cbSymOffset != 0) && (hdr->isymMax != 0) && (((offset + 0x60) + temp_v1_3) !=  hdr->cbSymOffset)) {
        return 0;
    }
    temp_v1_4 = temp_v1_3 + (hdr->isymMax * 0xC);
    if ((temp_v1_4 & 3) != 0) {
        return 0;
    }
    if (( hdr->cbOptOffset != 0) && (hdr->ioptMax != 0) && (((offset + 0x60) + temp_v1_4) !=  hdr->cbOptOffset)) {
        return 0;
    }
    temp_v1_5 = temp_v1_4 + (hdr->ioptMax * 0xC);
    if ((temp_v1_5 & 3) != 0) {
        return 0;
    } 
    if ((hdr->cbAuxOffset != 0) && (hdr->iauxMax != 0) && (((offset + 0x60) + temp_v1_5) != hdr->cbAuxOffset)) {
        return 0;
    }
    temp_v1_6 = temp_v1_5 + (hdr->iauxMax * 4);
    if ((temp_v1_6 & 3) != 0) {
        return 0;
    }
    if (( hdr->cbSsOffset != 0) && (hdr->issMax != 0) && (((offset + 0x60) + temp_v1_6) !=  hdr->cbSsOffset)) {
        return 0;
    }
    temp_v1_7 = temp_v1_6 + hdr->issMax;
    if ((temp_v1_7 & 3) != 0) {
        return 0;
    }
    if (( hdr->cbSsExtOffset != 0) && (hdr->issExtMax != 0) && (((offset + 0x60) + temp_v1_7) !=  hdr->cbSsExtOffset)) {
        return 0;
    }
    temp_v1_8 = temp_v1_7 + hdr->issExtMax;
    if ((temp_v1_8 & 3) != 0) {
        return 0;
    }
    if ((hdr->cbFdOffset != 0) && (hdr->ifdMax != 0) && (((offset + 0x60) + temp_v1_8) != hdr->cbFdOffset)) {
        return 0;
    }
    temp_v1_9 = temp_v1_8 + (hdr->ifdMax * 0x48);
    if ((temp_v1_9 & 3) != 0) {
        return 0;
    }
    if ((hdr->cbRfdOffset != 0) && (hdr->crfd != 0) && (((offset + 0x60) + temp_v1_9) != hdr->cbRfdOffset)) {
        return 0;
    }
    temp_v1_10 = temp_v1_9 + (hdr->crfd * 4);
    if ((temp_v1_10 & 3) != 0) {
        return 0;
    }
    if ((hdr->cbExtOffset != 0) && (hdr->iextMax != 0) && (((offset + 0x60) + temp_v1_10) != hdr->cbExtOffset)) {
        return 0;
    }
    temp_v1_11 = temp_v1_10 + (hdr->iextMax * 0x10);
    if ((temp_v1_11 & 3) != 0) {
        return 0;
    }
    if ((hdr->cbDnOffset != 0) && (hdr->idnMax != 0) && (((offset + 0x60) + temp_v1_11) != hdr->cbDnOffset)) {
        return 0;
    }
    temp_v1 = temp_v1_11 + (hdr->idnMax * 8);
    if ((temp_v1 & 3) != 0) {
        return 0;
    }
    return temp_v1;
}

