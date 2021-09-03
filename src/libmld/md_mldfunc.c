#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "libmld.h"

extern CHDRR* st_pchdr;
extern CFDR* pcfdcur;

/*
Not really sure what this is doing
void* _md_st_malloc(void* arg0, void* arg1, int arg2, int arg3) {
    int temp_lo;
    int temp_t0;
    int temp_v0;
    void* temp_s1;
    void* temp_s1_2;
    void* temp_v0_2;
    void* temp_v0_4;
    void* ret;

    temp_v0 = *arg1;
    if ((arg1 == NULL) || (arg0 == NULL) || (temp_t0 = temp_v0 * 2, (arg0 == -1))) {
        *arg1 = arg3;
        if (arg3 == 0) {
            ret = malloc(1);
            if (ret == NULL) {
                _md_st_error("_md_st_malloc: cannot allocate item of 1 byte with malloc(3)\n");
            }
        } else {
            ret = malloc(*arg1 * arg2);
            if (ret == NULL) {
                temp_lo = *arg1 * arg2;
                if (temp_lo != 0) {
                    _md_st_error("_md_st_malloc: cannot allocate item of %ld bytes with malloc(3)\n", temp_lo);
                }
            }
        }
    } else {
        *arg1 = temp_t0;
        ret = realloc(arg0, temp_t0 * arg2);
        if (ret == NULL) {
            _md_st_error("_md_st_malloc: cannot grow item to %ld bytes with realloc(3)\n", *arg1 * arg2);
        }
    }
    return ret;
}*/

__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000EF84:
    # 0048A704 _md_st_malloc
    .asciz "_md_st_malloc: cannot allocate item of 1 byte with malloc(3)\n"

RO_1000EFC4:
    # 0048A704 _md_st_malloc
    .asciz "_md_st_malloc: cannot allocate item of %ld bytes with malloc(3)\n"

RO_1000F008:
    # 0048A704 _md_st_malloc
    .asciz "_md_st_malloc: cannot grow item to %ld bytes with realloc(3)\n"

.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
)"");

/*
00489CA0 st_symadd
00489F38 st_ifd_pcfd
00489FC4 st_pcfd_ifd
0048A06C st_psym_ifd_isym
0048A194 st_paux_iaux
0048A260 st_str_ifd_iss
0048A330 st_ppd_ifd_isym
0048A5E8 _md_st_str_iss
0048A86C _md_st_setfd
0048A954 st_extadd
0048AB3C st_pext_iext
0048ABB0 st_idn_index_fext
0048ACEC st_pdn_idn
*/
void _md_st_internal(const char *format, ...) {
    va_list arglist;

    fprintf(stderr, "%s: Internal: ", st_errname);
    va_start(arglist, format);
    vfprintf(stderr, format, arglist);
    va_end(arglist);
    fprintf(stderr, "\n");
    exit(1);
}

/*
0048A704 _md_st_malloc
0048A8E0 st_cuinit
*/
void _md_st_error(const char *format, ...) {
    va_list arglist;

    fprintf(stderr, "%s: Error: ", st_errname);
    va_start(arglist, format);
    vfprintf(stderr, format, arglist);
    va_end(arglist);
    fprintf(stderr, "\n");
    exit(1);
}

/* 
0048A260 st_str_ifd_iss
*/
char *_md_st_str_extiss(int index) {

    if ((index >= 0) && (index < st_pchdr->cbssext)) {
        return &st_pchdr->pssext[index];
    } else {
        return NULL;
    }
}

int _md_st_str_iss(int arg0) {
    if (st_pchdr->pcfd == NULL) {
        _md_st_internal("routine: you didn't initialize with st_cuinit or st_readst\n");
    }
    if (pcfdcur == NULL) {
        _md_st_internal("routine: no current routine, see fdadd or setfd\n");
    }
    if ((pcfdcur->pfd->cbSs != 0) && (arg0 < pcfdcur->pfd->cbSs)) {
        return pcfdcur->pss[arg0];
    }
    return 0;
}

int _md_st_iextmax(void) {
    return st_pchdr->cext;
}

/*
0048A954 st_extadd
0048ABB0 st_idn_index_fext
*/
int _md_st_currentifd(void) {
    if (pcfdcur == NULL) {
        return -1;
    } else {
        return st_ifd_pcfd(pcfdcur);
    }
}
__asm__(R""(
.set noreorder

glabel _md_st_malloc
    .ent _md_st_malloc
    # 00489CA0 st_symadd
    # 0048A954 st_extadd
    # 0048ABB0 st_idn_index_fext
/* 0048A704 3C1C0FB9 */  .cpload $t9
/* 0048A708 279CFB8C */  
/* 0048A70C 0399E021 */  
/* 0048A710 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0048A714 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0048A718 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0048A71C AFB1001C */  sw    $s1, 0x1c($sp)
/* 0048A720 AFB00018 */  sw    $s0, 0x18($sp)
/* 0048A724 AFA60030 */  sw    $a2, 0x30($sp)
/* 0048A728 8CA20000 */  lw    $v0, ($a1)
/* 0048A72C 00A08025 */  move  $s0, $a1
/* 0048A730 00808825 */  move  $s1, $a0
/* 0048A734 10400005 */  beqz  $v0, .L0048A74C
/* 0048A738 00000000 */   nop   
/* 0048A73C 10800003 */  beqz  $a0, .L0048A74C
/* 0048A740 2401FFFF */   li    $at, -1
/* 0048A744 14810027 */  bne   $a0, $at, .L0048A7E4
/* 0048A748 00024040 */   sll   $t0, $v0, 1
.L0048A74C:
/* 0048A74C 14E0000F */  bnez  $a3, .L0048A78C
/* 0048A750 AE070000 */   sw    $a3, ($s0)
/* 0048A754 8F9980C8 */  lw    $t9, %call16(malloc)($gp)
/* 0048A758 24040001 */  li    $a0, 1
/* 0048A75C 0320F809 */  jalr  $t9
/* 0048A760 00000000 */   nop   
/* 0048A764 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048A768 14400006 */  bnez  $v0, .L0048A784
/* 0048A76C 00408825 */   move  $s1, $v0
/* 0048A770 8F9987D4 */  lw    $t9, %call16(_md_st_error)($gp)
/* 0048A774 8F848044 */  lw    $a0, %got(RO_1000EF84)($gp)
/* 0048A778 0320F809 */  jalr  $t9
/* 0048A77C 2484EF84 */   addiu $a0, %lo(RO_1000EF84) # addiu $a0, $a0, -0x107c
/* 0048A780 8FBC0020 */  lw    $gp, 0x20($sp)
.L0048A784:
/* 0048A784 1000002D */  b     .L0048A83C
/* 0048A788 02201025 */   move  $v0, $s1
.L0048A78C:
/* 0048A78C 8E0E0000 */  lw    $t6, ($s0)
/* 0048A790 8FAF0030 */  lw    $t7, 0x30($sp)
/* 0048A794 8F9980C8 */  lw    $t9, %call16(malloc)($gp)
/* 0048A798 01CF0019 */  multu $t6, $t7
/* 0048A79C 00002012 */  mflo  $a0
/* 0048A7A0 0320F809 */  jalr  $t9
/* 0048A7A4 00000000 */   nop   
/* 0048A7A8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048A7AC 14400022 */  bnez  $v0, .L0048A838
/* 0048A7B0 00408825 */   move  $s1, $v0
/* 0048A7B4 8E180000 */  lw    $t8, ($s0)
/* 0048A7B8 8FB90030 */  lw    $t9, 0x30($sp)
/* 0048A7BC 03190019 */  multu $t8, $t9
/* 0048A7C0 00002812 */  mflo  $a1
/* 0048A7C4 50A0001D */  beql  $a1, $zero, .L0048A83C
/* 0048A7C8 02201025 */   move  $v0, $s1
/* 0048A7CC 8F9987D4 */  lw    $t9, %call16(_md_st_error)($gp)
/* 0048A7D0 8F848044 */  lw    $a0, %got(RO_1000EFC4)($gp)
/* 0048A7D4 0320F809 */  jalr  $t9
/* 0048A7D8 2484EFC4 */   addiu $a0, %lo(RO_1000EFC4) # addiu $a0, $a0, -0x103c
/* 0048A7DC 10000016 */  b     .L0048A838
/* 0048A7E0 8FBC0020 */   lw    $gp, 0x20($sp)
.L0048A7E4:
/* 0048A7E4 AE080000 */  sw    $t0, ($s0)
/* 0048A7E8 8FAA0030 */  lw    $t2, 0x30($sp)
/* 0048A7EC 8F9980E8 */  lw    $t9, %call16(realloc)($gp)
/* 0048A7F0 02202025 */  move  $a0, $s1
/* 0048A7F4 010A0019 */  multu $t0, $t2
/* 0048A7F8 00002812 */  mflo  $a1
/* 0048A7FC 0320F809 */  jalr  $t9
/* 0048A800 00000000 */   nop   
/* 0048A804 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048A808 1440000B */  bnez  $v0, .L0048A838
/* 0048A80C 00408825 */   move  $s1, $v0
/* 0048A810 8E0B0000 */  lw    $t3, ($s0)
/* 0048A814 8FAC0030 */  lw    $t4, 0x30($sp)
/* 0048A818 8F9987D4 */  lw    $t9, %call16(_md_st_error)($gp)
/* 0048A81C 8F848044 */  lw    $a0, %got(RO_1000F008)($gp)
/* 0048A820 016C0019 */  multu $t3, $t4
/* 0048A824 2484F008 */  addiu $a0, %lo(RO_1000F008) # addiu $a0, $a0, -0xff8
/* 0048A828 00002812 */  mflo  $a1
/* 0048A82C 0320F809 */  jalr  $t9
/* 0048A830 00000000 */   nop   
/* 0048A834 8FBC0020 */  lw    $gp, 0x20($sp)
.L0048A838:
/* 0048A838 02201025 */  move  $v0, $s1
.L0048A83C:
/* 0048A83C 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0048A840 8FB00018 */  lw    $s0, 0x18($sp)
/* 0048A844 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0048A848 03E00008 */  jr    $ra
/* 0048A84C 27BD0028 */   addiu $sp, $sp, 0x28
    .type _md_st_malloc, @function
    .size _md_st_malloc, .-_md_st_malloc
    .end _md_st_malloc
)"");

int _md_st_ifdmax(void) {
    return st_pchdr->cfd;
}

void _md_st_setfd(int arg0) {
    if (st_pchdr->pcfd == NULL) {
        _md_st_internal("routine: you didn't initialize with st_cuinit or st_readst\n");
    } else {
        pcfdcur = &st_pchdr->pcfd[arg0 << 6]; //*64?
    }
}
