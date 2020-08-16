#include "libxmalloc/xmalloc.h"
#include "uoptdata.h"
#include "uoptitab.h"
#include "uoptions.h"
#include "uoptcontrolflow.h"
#include "libu/libu.h"
#include "uoptkill.h"
#include "uoptutil.h"
#include "uoptmtag.h"

__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000C770:
    # 00444A84 isearchloop
    .ascii "uoptitab.p"

RO_1000C77A:
    # 00444A84 isearchloop
    .ascii "uoptitab.p"

RO_1000C784:
    # 00444A84 isearchloop
    .ascii "Warning: kind dumped: ignored"

RO_1000C7A1:
    # 00444A84 isearchloop
    .ascii "uoptitab.p"

RO_1000C7AB:
    # 00444A84 isearchloop
    .asciz "uoptitab.p"

    .balign 4
jtbl_1000C7B8:
    # 00444A84 isearchloop
    .gpword .L00444EFC
    .gpword .L00444D74
    .gpword .L00444FB8
    .gpword .L00445214
    .gpword .L00444D74
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00444E0C
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00444F30
    .gpword .L00444F30
    .gpword .L00444FEC

    .balign 4
jtbl_1000C7F4:
    # 00444A84 isearchloop
    .gpword .L00444F74
    .gpword .L00444F30
    .gpword .L00444F30
    .gpword .L00445214
    .gpword .L00444E0C
    .gpword .L00444E0C

    .balign 4
jtbl_1000C80C:
    # 00444A84 isearchloop
    .gpword .L00444E4C
    .gpword .L00444E4C
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00445044
    .gpword .L00445088
    .gpword .L00445088
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00445000
    .gpword .L00445088
    .gpword .L00445088
    .gpword .L00445000
    .gpword .L00444F30
    .gpword .L00445044
    .gpword .L00445214
    .gpword .L00444E7C
    .gpword .L00444D74
    .gpword .L00444D74

    .balign 4
jtbl_1000C860:
    # 00444A84 isearchloop
    .gpword .L00444E4C
    .gpword .L00444E4C
    .gpword .L00445214
    .gpword .L00444EFC
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00444E0C
    .gpword .L00444E0C
    .gpword .L00444E0C
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00444D74
    .gpword .L00445214
    .gpword .L00444E0C
    .gpword .L00444EFC
    .gpword .L00444DC8
    .gpword .L00445214
    .gpword .L00444EFC
    .gpword .L00444EFC

    .balign 4
jtbl_1000C8B8:
    # 00444A84 isearchloop
    .gpword .L00444F74
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00444EFC
    .gpword .L00444E0C
    .gpword .L00444E0C
    .gpword .L00444E0C
    .gpword .L00444EFC
    .gpword .L00444EFC

    .balign 4
jtbl_1000C8E0:
    # 00444A84 isearchloop
    .gpword .L00444F74
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00444D74
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00444D74

    .balign 4
jtbl_1000C900:
    # 00444A84 isearchloop
    .gpword .L00444BFC
    .gpword .L00444B08
    .gpword .L00444CAC
    .gpword .L00444D4C
    .gpword .L00444C3C
    .gpword .L00444CFC
    .gpword .L00445290
    .gpword .L00444BC4

    .balign 4
jtbl_1000C920:
    # 00444A84 isearchloop
    .gpword .L00445768
    .gpword .L00445768
    .gpword .L0044552C
    .gpword .L00445598
    .gpword .L00445768
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445768
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445514
    .gpword .L00445514
    .gpword .L00445768

    .balign 4
jtbl_1000C95C:
    # 00444A84 isearchloop
    .gpword .L00445520
    .gpword .L00445514
    .gpword .L00445514
    .gpword .L00445598
    .gpword .L004454E8
    .gpword .L00445768

    .balign 4
jtbl_1000C974:
    # 00444A84 isearchloop
    .gpword .L00445768
    .gpword .L00445768
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445568
    .gpword .L00445580
    .gpword .L00445580
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445540
    .gpword .L00445580
    .gpword .L00445580
    .gpword .L00445540
    .gpword .L00445514
    .gpword .L00445568
    .gpword .L00445598
    .gpword .L004454F4
    .gpword .L004454E8
    .gpword .L00445768
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445508
    .gpword .L00445598
    .gpword .L00445768

    .balign 4
jtbl_1000C9E4:
    # 00444A84 isearchloop
    .gpword .L00445768
    .gpword .L00445768
    .gpword .L00445598
    .gpword .L00445768
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445768
    .gpword .L00445768
    .gpword .L00445768
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445768
    .gpword .L00445598
    .gpword .L004454E8
    .gpword .L00445768
    .gpword .L00445768
    .gpword .L00445598
    .gpword .L00445768
    .gpword .L00445768

    .balign 4
jtbl_1000CA3C:
    # 00444A84 isearchloop
    .gpword .L00445520
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L004454E8
    .gpword .L00445768
    .gpword .L00445768
    .gpword .L00445768
    .gpword .L00445768
    .gpword .L00445768

    .balign 4
jtbl_1000CA64:
    # 00444A84 isearchloop
    .gpword .L00445520
    .gpword .L00445768
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L004454E8
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445768

    .balign 4
jtbl_1000CA84:
    # 00444A84 isearchloop
    .gpword .L004453C4
    .gpword .L00445394
    .gpword .L00445418
    .gpword .L00445484
    .gpword .L004453E8
    .gpword .L00445448
    .gpword .L00445358
    .gpword .L004453B0

RO_1000CAA4:
    # 00445E44 exprimage
    .asciz "uoptitab.p"

    .balign 4
jtbl_1000CAB0:
    # 00445E44 exprimage
    .gpword .L00446310
    .gpword .L00446320
    .gpword .L00446318

    .balign 4
jtbl_1000CABC:
    # 00445E44 exprimage
    .gpword .L0044606C
    .gpword .L00445F58
    .gpword .L0044625C
    .gpword .L00446888
    .gpword .L004460C8
    .gpword .L00446688
    .gpword .L00446DFC
    .gpword .L0044601C

RO_1000CADC:
    # 00446E18 searchstore
    .asciz "uoptitab.p"

    .balign 4
jtbl_1000CAE8:
    # 00446E18 searchstore
    .gpword .L00446EA0
    .gpword .L00446EB4
    .gpword .L00446EB4

.data
D_10010910:
    # 00444A84 isearchloop
    .byte 0x10,0xc0,0x00,0x20,0x00,0x06,0x00,0x01

D_10010918:
    # 00444A84 isearchloop
    .byte 0x40,0x00,0x00,0x20,0x00,0x00,0x01,0x00,0x40,0x00,0x00,0x02,0x00,0x00,0x00,0x04

D_10010928:
    # 00444A84 isearchloop
    .byte 0x10,0xc0,0x00,0x00,0x00,0x06,0x00,0x01

D_10010930:
    # 00445E44 exprimage
    .byte 0x10,0xc0,0x00,0x00,0x00,0x06,0x00,0x01

D_10010938:
    # 00445E44 exprimage
    .byte 0x00,0x00,0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x20

D_10010948:
    # 00445E44 exprimage
    .byte 0x20,0x0c,0x00,0x60,0x00,0x00,0x11,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20

D_1001095C:
    # 00445E44 exprimage
    .byte 0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00

D_1001096C:
    # 00445E44 exprimage
    .byte 0x10,0xc0,0x00,0x20,0x00,0x06,0x00,0x01

D_10010974:
    # 00446E18 searchstore
    .byte 0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfc,0x00,0x00,0x00

D_10010988:
    # 004471AC codeimage
    .byte 0x00,0x00,0x00,0x01,0x80,0x00,0x00,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x10

D_10010998:
    # 004471AC codeimage
    .byte 0x00,0x00,0x00,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x10

D_100109A8:
    # 004471AC codeimage
    .byte 0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfc,0x00,0x00,0x00

D_100109BC:
    # 004471AC codeimage
    .byte 0x00,0x00,0x00,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfc,0x00,0x08,0x10

D_100109CC:
    # 004471AC codeimage
    .byte 0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x01,0x80,0x00,0x00,0xc0,0x00,0x00,0x00,0x00,0xfc,0x00,0x08,0x10

D_100109E0:
    # 004471AC codeimage
    .byte 0x10,0x80,0xe7,0x10,0x80,0x08,0x00,0x00,0x2c,0x08,0x48,0x08,0x80,0x20,0x00,0x40,0x00,0x80,0x01,0x00

D_100109F4:
    # 004471AC codeimage
    .byte 0x10,0xc0,0x00,0x20,0x00,0x06,0x00,0x01

D_100109FC:
    # 004471AC codeimage
    .byte 0x00,0x00,0x01,0x00,0x00,0x08,0x00,0x00

D_10010A04:
    # 004471AC codeimage
    .byte 0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text

glabel isconstihash
    .ent isconstihash
    # 004150E4 func_004150E4
    # 0041550C func_0041550C
    # 004175BC copypropagate
    # 00445E44 exprimage
    # 0046BA10 change_to_const_eq
    # 0046BD90 change_to_var_eq
/* 004447A0 24010653 */  li    $at, 1619
/* 004447A4 0081001A */  div   $zero, $a0, $at
/* 004447A8 00001010 */  mfhi  $v0
/* 004447AC 04410002 */  bgez  $v0, .L004447B8
/* 004447B0 00000000 */   nop
/* 004447B4 20420653 */  addi  $v0, $v0, 0x653
.L004447B8:
/* 004447B8 03E00008 */  jr    $ra
/* 004447BC 00000000 */   nop
    .type isconstihash, @function
    .size isconstihash, .-isconstihash
    .end isconstihash

glabel realihash
    .ent realihash
    # 0041550C func_0041550C
    # 00445E44 exprimage
/* 004447C0 AFA40000 */  sw    $a0, ($sp)
/* 004447C4 97AF0002 */  lhu   $t7, 2($sp)
/* 004447C8 97AE0000 */  lhu   $t6, ($sp)
/* 004447CC 24010653 */  li    $at, 1619
/* 004447D0 AFA50004 */  sw    $a1, 4($sp)
/* 004447D4 01CF0019 */  multu $t6, $t7
/* 004447D8 0000C012 */  mflo  $t8
/* 004447DC 0018C980 */  sll   $t9, $t8, 6
/* 004447E0 00000000 */  nop
/* 004447E4 0321001A */  div   $zero, $t9, $at
/* 004447E8 00001010 */  mfhi  $v0
/* 004447EC 04410002 */  bgez  $v0, .L004447F8
/* 004447F0 00000000 */   nop
/* 004447F4 20420653 */  addi  $v0, $v0, 0x653
.L004447F8:
/* 004447F8 03E00008 */  jr    $ra
/* 004447FC 00000000 */   nop
    .type realihash, @function
    .size realihash, .-realihash
    .end realihash
)"");

/*
# 0041550C func_0041550C
# 004175BC copypropagate
# 0042020C gen_static_link
# 00445E44 exprimage
# 004471AC codeimage
*/
int isvarihash(struct VariableInner vari) {
    int hash = (((vari.memtype << 6) + vari.blockno + vari.addr) << 4) % 0x653;
    if (hash < 0) hash += 0x653;
    return hash;
}

/* 
# 0041550C func_0041550C
# 00445E44 exprimage
# 0046BA10 change_to_const_eq
*/
int isldaihash(struct VariableInner vari, unsigned int addr) {
    int hash = (((vari.memtype << 6) + vari.blockno + addr) << 4) % 0x653;
    if (hash < 0) hash += 0x653;
    return hash;
}

__asm__(R""(
.set noat
.set noreorder

glabel isopihash
    .ent isopihash
    # 00410204 codemotion
    # 0041550C func_0041550C
    # 004175BC copypropagate
    # 00445E44 exprimage
    # 004471AC codeimage
    # 0046BA10 change_to_const_eq
    # 0046BD90 change_to_var_eq
/* 00444888 10C0001A */  beqz  $a2, .L004448F4
/* 0044488C AFA40000 */   sw    $a0, ($sp)
/* 00444890 94AE0004 */  lhu   $t6, 4($a1)
/* 00444894 94CF0004 */  lhu   $t7, 4($a2)
/* 00444898 94A90006 */  lhu   $t1, 6($a1)
/* 0044489C 94CB0006 */  lhu   $t3, 6($a2)
/* 004448A0 01CF0019 */  multu $t6, $t7
/* 004448A4 252A0002 */  addiu $t2, $t1, 2
/* 004448A8 256C0002 */  addiu $t4, $t3, 2
/* 004448AC 0004C8C0 */  sll   $t9, $a0, 3
/* 004448B0 24010653 */  li    $at, 1619
/* 004448B4 0000C012 */  mflo  $t8
/* 004448B8 03384021 */  addu  $t0, $t9, $t8
/* 004448BC 00000000 */  nop
/* 004448C0 014C0019 */  multu $t2, $t4
/* 004448C4 00006812 */  mflo  $t5
/* 004448C8 010D7021 */  addu  $t6, $t0, $t5
/* 004448CC 000E7880 */  sll   $t7, $t6, 2
/* 004448D0 01EE7821 */  addu  $t7, $t7, $t6
/* 004448D4 000F7840 */  sll   $t7, $t7, 1
/* 004448D8 01E1001A */  div   $zero, $t7, $at
/* 004448DC 00001810 */  mfhi  $v1
/* 004448E0 04610014 */  bgez  $v1, .L00444934
/* 004448E4 00000000 */   nop
/* 004448E8 20630653 */  addi  $v1, $v1, 0x653
/* 004448EC 03E00008 */  jr    $ra
/* 004448F0 00601025 */   move  $v0, $v1

.L004448F4:
/* 004448F4 94B80006 */  lhu   $t8, 6($a1)
/* 004448F8 94B90004 */  lhu   $t9, 4($a1)
/* 004448FC 000450C0 */  sll   $t2, $a0, 3
/* 00444900 27090002 */  addiu $t1, $t8, 2
/* 00444904 03290019 */  multu $t9, $t1
/* 00444908 24010653 */  li    $at, 1619
/* 0044490C 00005812 */  mflo  $t3
/* 00444910 014B6021 */  addu  $t4, $t2, $t3
/* 00444914 000C4080 */  sll   $t0, $t4, 2
/* 00444918 010C4021 */  addu  $t0, $t0, $t4
/* 0044491C 00084040 */  sll   $t0, $t0, 1
/* 00444920 0101001A */  div   $zero, $t0, $at
/* 00444924 00001810 */  mfhi  $v1
/* 00444928 04610002 */  bgez  $v1, .L00444934
/* 0044492C 00000000 */   nop
/* 00444930 20630653 */  addi  $v1, $v1, 0x653
.L00444934:
/* 00444934 03E00008 */  jr    $ra
/* 00444938 00601025 */   move  $v0, $v1
    .type isopihash, @function
    .size isopihash, .-isopihash
    .end isopihash

glabel opvalihash
    .ent opvalihash
    # 004150E4 func_004150E4
    # 0041550C func_0041550C
    # 00445AEC trep_image
    # 00445E44 exprimage
/* 0044493C 94AE0004 */  lhu   $t6, 4($a1)
/* 00444940 94B80006 */  lhu   $t8, 6($a1)
/* 00444944 000448C0 */  sll   $t1, $a0, 3
/* 00444948 01C67821 */  addu  $t7, $t6, $a2
/* 0044494C 27190002 */  addiu $t9, $t8, 2
/* 00444950 01F90019 */  multu $t7, $t9
/* 00444954 24010653 */  li    $at, 1619
/* 00444958 AFA40000 */  sw    $a0, ($sp)
/* 0044495C 00004012 */  mflo  $t0
/* 00444960 01285021 */  addu  $t2, $t1, $t0
/* 00444964 00000000 */  nop
/* 00444968 0141001A */  div   $zero, $t2, $at
/* 0044496C 00001810 */  mfhi  $v1
/* 00444970 04610002 */  bgez  $v1, .L0044497C
/* 00444974 00000000 */   nop
/* 00444978 20630653 */  addi  $v1, $v1, 0x653
.L0044497C:
/* 0044497C 03E00008 */  jr    $ra
/* 00444980 00601025 */   move  $v0, $v1
    .type opvalihash, @function
    .size opvalihash, .-opvalihash
    .end opvalihash

)"");

/*
00444A84 isearchloop
00445AEC trep_image
00446E18 searchstore
*/
struct IChain *appendichain(unsigned short table_index, bool arg1_unused) {
    struct IChain *pos;
    struct IChain *new_entry;
    unsigned short chain_index;

    pos = itable[table_index];
    if (pos == NULL) {
        new_entry = (struct IChain *)alloc_new(sizeof(struct IChain), &perm_heap);
        pos = new_entry;
        itable[table_index] = new_entry;
        chain_index = 0;
    } else {
        while (pos->next != NULL) {
            pos = pos->next;
        }
        new_entry = (struct IChain *)alloc_new(sizeof(struct IChain), &perm_heap);
        pos->next = new_entry;
        chain_index = pos->chain_index + 1;
    }
    if (new_entry == NULL) {
        outofmem = true;
        return NULL; // originally some unused stack slot value was returned
    }
#ifdef AVOID_UB
    *new_entry = (struct IChain){0};
    new_entry->chain_index = chain_index;
    new_entry->table_index = table_index;
#else
    new_entry->unk0 = 0;
    new_entry->chain_index = chain_index;
    new_entry->next = NULL;
    new_entry->stat = NULL;
    new_entry->unk8 = 0;
    new_entry->table_index = table_index;
#endif
    return new_entry;
}

__asm__(R""(
.set noat
.set noreorder

glabel isearchloop
    .ent isearchloop
    # 004150E4 func_004150E4
    # 0041550C func_0041550C
    # 004175BC copypropagate
    # 00445E44 exprimage
    # 004471AC codeimage
    # 0046BA10 change_to_const_eq
    # 0046BD90 change_to_var_eq
/* 00444A84 3C1C0FBD */  .cpload $t9
/* 00444A88 279C580C */
/* 00444A8C 0399E021 */
/* 00444A90 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 00444A94 AFA40040 */  sw    $a0, 0x40($sp)
/* 00444A98 97AE0042 */  lhu   $t6, 0x42($sp)
/* 00444A9C 8F988DF0 */  lw     $t8, %got(itable)($gp)
/* 00444AA0 AFBF002C */  sw    $ra, 0x2c($sp)
/* 00444AA4 000E7880 */  sll   $t7, $t6, 2
/* 00444AA8 AFBC0028 */  sw    $gp, 0x28($sp)
/* 00444AAC AFB30024 */  sw    $s3, 0x24($sp)
/* 00444AB0 AFB20020 */  sw    $s2, 0x20($sp)
/* 00444AB4 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00444AB8 AFB00018 */  sw    $s0, 0x18($sp)
/* 00444ABC 01F8C821 */  addu  $t9, $t7, $t8
/* 00444AC0 8F300000 */  lw    $s0, ($t9)
/* 00444AC4 00A08825 */  move  $s1, $a1
/* 00444AC8 00C09025 */  move  $s2, $a2
/* 00444ACC 00E09825 */  move  $s3, $a3
/* 00444AD0 12000200 */  beqz  $s0, .L004452D4
/* 00444AD4 00004025 */   move  $t0, $zero
/* 00444AD8 92230000 */  lbu   $v1, ($s1)
.L00444ADC:
/* 00444ADC 2469FFFF */  addiu $t1, $v1, -1
/* 00444AE0 2D210008 */  sltiu $at, $t1, 8
/* 00444AE4 102001EA */  beqz  $at, .L00445290
/* 00444AE8 00000000 */   nop
/* 00444AEC 8F818044 */  lw    $at, %got(jtbl_1000C900)($gp)
/* 00444AF0 00094880 */  sll   $t1, $t1, 2
/* 00444AF4 00290821 */  addu  $at, $at, $t1
/* 00444AF8 8C29C900 */  lw    $t1, %lo(jtbl_1000C900)($at)
/* 00444AFC 013C4821 */  addu  $t1, $t1, $gp
/* 00444B00 01200008 */  jr    $t1
/* 00444B04 00000000 */   nop
.L00444B08:
/* 00444B08 920A0000 */  lbu   $t2, ($s0)
/* 00444B0C 24010002 */  li    $at, 2
/* 00444B10 154101E9 */  bne   $t2, $at, .L004452B8
/* 00444B14 00000000 */   nop
/* 00444B18 92020001 */  lbu   $v0, 1($s0)
/* 00444B1C 922B0001 */  lbu   $t3, 1($s1)
/* 00444B20 3C01BAA0 */  lui   $at, 0xbaa0
/* 00444B24 2C4C0020 */  sltiu $t4, $v0, 0x20
/* 00444B28 156201E3 */  bne   $t3, $v0, .L004452B8
/* 00444B2C 000C6823 */   negu  $t5, $t4
/* 00444B30 01A17024 */  and   $t6, $t5, $at
/* 00444B34 004E7804 */  sllv  $t7, $t6, $v0
/* 00444B38 05E10007 */  bgez  $t7, .L00444B58
/* 00444B3C 2C490020 */   sltiu $t1, $v0, 0x20
/* 00444B40 8E380020 */  lw    $t8, 0x20($s1)
/* 00444B44 8E190010 */  lw    $t9, 0x10($s0)
/* 00444B48 171901DB */  bne   $t8, $t9, .L004452B8
/* 00444B4C 00000000 */   nop
/* 00444B50 100001D9 */  b     .L004452B8
/* 00444B54 24080001 */   li    $t0, 1
.L00444B58:
/* 00444B58 00095023 */  negu  $t2, $t1
/* 00444B5C 3C010500 */  lui   $at, 0x500
/* 00444B60 01415824 */  and   $t3, $t2, $at
/* 00444B64 004B6004 */  sllv  $t4, $t3, $v0
/* 00444B68 0581000B */  bgez  $t4, .L00444B98
/* 00444B6C 24010009 */   li    $at, 9
/* 00444B70 8E2E0020 */  lw    $t6, 0x20($s1)
/* 00444B74 8E180010 */  lw    $t8, 0x10($s0)
/* 00444B78 8E2F0024 */  lw    $t7, 0x24($s1)
/* 00444B7C 8E190014 */  lw    $t9, 0x14($s0)
/* 00444B80 15D801CD */  bne   $t6, $t8, .L004452B8
/* 00444B84 00000000 */   nop
/* 00444B88 15F901CB */  bne   $t7, $t9, .L004452B8
/* 00444B8C 00000000 */   nop
/* 00444B90 100001C9 */  b     .L004452B8
/* 00444B94 24080001 */   li    $t0, 1
.L00444B98:
/* 00444B98 96230020 */  lhu   $v1, 0x20($s1)
/* 00444B9C 14410005 */  bne   $v0, $at, .L00444BB4
/* 00444BA0 96040010 */   lhu   $a0, 0x10($s0)
/* 00444BA4 146401C4 */  bne   $v1, $a0, .L004452B8
/* 00444BA8 00000000 */   nop
/* 00444BAC 100001C2 */  b     .L004452B8
/* 00444BB0 24080001 */   li    $t0, 1
.L00444BB4:
/* 00444BB4 146401C0 */  bne   $v1, $a0, .L004452B8
/* 00444BB8 00000000 */   nop
/* 00444BBC 100001BE */  b     .L004452B8
/* 00444BC0 24080001 */   li    $t0, 1
.L00444BC4:
/* 00444BC4 920D0000 */  lbu   $t5, ($s0)
/* 00444BC8 24010008 */  li    $at, 8
/* 00444BCC 15A101BA */  bne   $t5, $at, .L004452B8
/* 00444BD0 00000000 */   nop
/* 00444BD4 92290001 */  lbu   $t1, 1($s1)
/* 00444BD8 920A0001 */  lbu   $t2, 1($s0)
/* 00444BDC 152A01B6 */  bne   $t1, $t2, .L004452B8
/* 00444BE0 00000000 */   nop
/* 00444BE4 962B0020 */  lhu   $t3, 0x20($s1)
/* 00444BE8 960C0010 */  lhu   $t4, 0x10($s0)
/* 00444BEC 156C01B2 */  bne   $t3, $t4, .L004452B8
/* 00444BF0 00000000 */   nop
/* 00444BF4 100001B0 */  b     .L004452B8
/* 00444BF8 24080001 */   li    $t0, 1
.L00444BFC:
/* 00444BFC 920E0000 */  lbu   $t6, ($s0)
/* 00444C00 24010001 */  li    $at, 1
/* 00444C04 15C101AC */  bne   $t6, $at, .L004452B8
/* 00444C08 00000000 */   nop
/* 00444C0C 8E2F0020 */  lw    $t7, 0x20($s1)
/* 00444C10 8E180010 */  lw    $t8, 0x10($s0)
/* 00444C14 15F801A8 */  bne   $t7, $t8, .L004452B8
/* 00444C18 00000000 */   nop
/* 00444C1C 8E390030 */  lw    $t9, 0x30($s1)
/* 00444C20 8E09001C */  lw    $t1, 0x1c($s0)
/* 00444C24 00196AC2 */  srl   $t5, $t9, 0xb
/* 00444C28 000952C2 */  srl   $t2, $t1, 0xb
/* 00444C2C 15AA01A2 */  bne   $t5, $t2, .L004452B8
/* 00444C30 00000000 */   nop
/* 00444C34 100001A0 */  b     .L004452B8
/* 00444C38 24080001 */   li    $t0, 1
.L00444C3C:
/* 00444C3C 920B0000 */  lbu   $t3, ($s0)
/* 00444C40 24010005 */  li    $at, 5
/* 00444C44 1561019C */  bne   $t3, $at, .L004452B8
/* 00444C48 00000000 */   nop
/* 00444C4C 8E2C0020 */  lw    $t4, 0x20($s1)
/* 00444C50 8E0E0010 */  lw    $t6, 0x10($s0)
/* 00444C54 158E0198 */  bne   $t4, $t6, .L004452B8
/* 00444C58 00000000 */   nop
/* 00444C5C 8E2F0024 */  lw    $t7, 0x24($s1)
/* 00444C60 8E180014 */  lw    $t8, 0x14($s0)
/* 00444C64 15F80194 */  bne   $t7, $t8, .L004452B8
/* 00444C68 00000000 */   nop
/* 00444C6C 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 00444C70 8E040018 */  lw    $a0, 0x18($s0)
/* 00444C74 8E05001C */  lw    $a1, 0x1c($s0)
/* 00444C78 8E26002C */  lw    $a2, 0x2c($s1)
/* 00444C7C 8E270030 */  lw    $a3, 0x30($s1)
/* 00444C80 A3A80037 */  sb    $t0, 0x37($sp)
/* 00444C84 AFA40000 */  sw    $a0, ($sp)
/* 00444C88 AFA50004 */  sw    $a1, 4($sp)
/* 00444C8C AFA60008 */  sw    $a2, 8($sp)
/* 00444C90 0320F809 */  jalr  $t9
/* 00444C94 AFA7000C */   sw    $a3, 0xc($sp)
/* 00444C98 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00444C9C 10400186 */  beqz  $v0, .L004452B8
/* 00444CA0 93A80037 */   lbu   $t0, 0x37($sp)
/* 00444CA4 10000184 */  b     .L004452B8
/* 00444CA8 24080001 */   li    $t0, 1
.L00444CAC:
/* 00444CAC 920B0000 */  lbu   $t3, ($s0)
/* 00444CB0 24010003 */  li    $at, 3
/* 00444CB4 15610180 */  bne   $t3, $at, .L004452B8
/* 00444CB8 00000000 */   nop
/* 00444CBC 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 00444CC0 8E040010 */  lw    $a0, 0x10($s0)
/* 00444CC4 8E050014 */  lw    $a1, 0x14($s0)
/* 00444CC8 8E260028 */  lw    $a2, 0x28($s1)
/* 00444CCC 8E27002C */  lw    $a3, 0x2c($s1)
/* 00444CD0 A3A80037 */  sb    $t0, 0x37($sp)
/* 00444CD4 AFA40000 */  sw    $a0, ($sp)
/* 00444CD8 AFA50004 */  sw    $a1, 4($sp)
/* 00444CDC AFA60008 */  sw    $a2, 8($sp)
/* 00444CE0 0320F809 */  jalr  $t9
/* 00444CE4 AFA7000C */   sw    $a3, 0xc($sp)
/* 00444CE8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00444CEC 10400172 */  beqz  $v0, .L004452B8
/* 00444CF0 93A80037 */   lbu   $t0, 0x37($sp)
/* 00444CF4 10000170 */  b     .L004452B8
/* 00444CF8 24080001 */   li    $t0, 1
.L00444CFC:
/* 00444CFC 92190000 */  lbu   $t9, ($s0)
/* 00444D00 24010006 */  li    $at, 6
/* 00444D04 1721016C */  bne   $t9, $at, .L004452B8
/* 00444D08 00000000 */   nop
/* 00444D0C 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 00444D10 8E040010 */  lw    $a0, 0x10($s0)
/* 00444D14 8E050014 */  lw    $a1, 0x14($s0)
/* 00444D18 8E260028 */  lw    $a2, 0x28($s1)
/* 00444D1C 8E27002C */  lw    $a3, 0x2c($s1)
/* 00444D20 A3A80037 */  sb    $t0, 0x37($sp)
/* 00444D24 AFA40000 */  sw    $a0, ($sp)
/* 00444D28 AFA50004 */  sw    $a1, 4($sp)
/* 00444D2C AFA60008 */  sw    $a2, 8($sp)
/* 00444D30 0320F809 */  jalr  $t9
/* 00444D34 AFA7000C */   sw    $a3, 0xc($sp)
/* 00444D38 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00444D3C 1040015E */  beqz  $v0, .L004452B8
/* 00444D40 93A80037 */   lbu   $t0, 0x37($sp)
/* 00444D44 1000015C */  b     .L004452B8
/* 00444D48 24080001 */   li    $t0, 1
.L00444D4C:
/* 00444D4C 920C0000 */  lbu   $t4, ($s0)
/* 00444D50 24010004 */  li    $at, 4
/* 00444D54 15810158 */  bne   $t4, $at, .L004452B8
/* 00444D58 00000000 */   nop
/* 00444D5C 92220020 */  lbu   $v0, 0x20($s1)
/* 00444D60 920E0010 */  lbu   $t6, 0x10($s0)
/* 00444D64 144E0154 */  bne   $v0, $t6, .L004452B8
/* 00444D68 00000000 */   nop
/* 00444D6C 100000D2 */  b     .L004450B8
/* 00444D70 304300FF */   andi  $v1, $v0, 0xff
.L00444D74:
/* 00444D74 922F0001 */  lbu   $t7, 1($s1)
/* 00444D78 92180001 */  lbu   $t8, 1($s0)
/* 00444D7C 15F8014E */  bne   $t7, $t8, .L004452B8
/* 00444D80 00000000 */   nop
/* 00444D84 8E040014 */  lw    $a0, 0x14($s0)
/* 00444D88 16440004 */  bne   $s2, $a0, .L00444D9C
/* 00444D8C 00000000 */   nop
/* 00444D90 8E190018 */  lw    $t9, 0x18($s0)
/* 00444D94 52790007 */  beql  $s3, $t9, .L00444DB4
/* 00444D98 922D003E */   lbu   $t5, 0x3e($s1)
.L00444D9C:
/* 00444D9C 16640146 */  bne   $s3, $a0, .L004452B8
/* 00444DA0 00000000 */   nop
/* 00444DA4 8E090018 */  lw    $t1, 0x18($s0)
/* 00444DA8 16490143 */  bne   $s2, $t1, .L004452B8
/* 00444DAC 00000000 */   nop
/* 00444DB0 922D003E */  lbu   $t5, 0x3e($s1)
.L00444DB4:
/* 00444DB4 920A0011 */  lbu   $t2, 0x11($s0)
/* 00444DB8 15AA013F */  bne   $t5, $t2, .L004452B8
/* 00444DBC 00000000 */   nop
/* 00444DC0 1000013D */  b     .L004452B8
/* 00444DC4 24080001 */   li    $t0, 1
.L00444DC8:
/* 00444DC8 922B0001 */  lbu   $t3, 1($s1)
.L00444DCC:
/* 00444DCC 920C0001 */  lbu   $t4, 1($s0)
/* 00444DD0 156C0139 */  bne   $t3, $t4, .L004452B8
/* 00444DD4 00000000 */   nop
/* 00444DD8 8E040014 */  lw    $a0, 0x14($s0)
/* 00444DDC 16440004 */  bne   $s2, $a0, .L00444DF0
/* 00444DE0 00000000 */   nop
/* 00444DE4 8E0E0018 */  lw    $t6, 0x18($s0)
/* 00444DE8 126E0006 */  beq   $s3, $t6, .L00444E04
/* 00444DEC 00000000 */   nop
.L00444DF0:
/* 00444DF0 16640131 */  bne   $s3, $a0, .L004452B8
/* 00444DF4 00000000 */   nop
/* 00444DF8 8E0F0018 */  lw    $t7, 0x18($s0)
/* 00444DFC 164F012E */  bne   $s2, $t7, .L004452B8
/* 00444E00 00000000 */   nop
.L00444E04:
/* 00444E04 1000012C */  b     .L004452B8
/* 00444E08 24080001 */   li    $t0, 1
.L00444E0C:
/* 00444E0C 92380001 */  lbu   $t8, 1($s1)
.L00444E10:
/* 00444E10 92190001 */  lbu   $t9, 1($s0)
/* 00444E14 17190128 */  bne   $t8, $t9, .L004452B8
/* 00444E18 00000000 */   nop
/* 00444E1C 8E090014 */  lw    $t1, 0x14($s0)
/* 00444E20 16490125 */  bne   $s2, $t1, .L004452B8
/* 00444E24 00000000 */   nop
/* 00444E28 8E0D0018 */  lw    $t5, 0x18($s0)
/* 00444E2C 166D0122 */  bne   $s3, $t5, .L004452B8
/* 00444E30 00000000 */   nop
/* 00444E34 922A003E */  lbu   $t2, 0x3e($s1)
/* 00444E38 920B0011 */  lbu   $t3, 0x11($s0)
/* 00444E3C 154B011E */  bne   $t2, $t3, .L004452B8
/* 00444E40 00000000 */   nop
/* 00444E44 1000011C */  b     .L004452B8
/* 00444E48 24080001 */   li    $t0, 1
.L00444E4C:
/* 00444E4C 922C0001 */  lbu   $t4, 1($s1)
/* 00444E50 920E0001 */  lbu   $t6, 1($s0)
/* 00444E54 158E0118 */  bne   $t4, $t6, .L004452B8
/* 00444E58 00000000 */   nop
/* 00444E5C 8E0F0014 */  lw    $t7, 0x14($s0)
/* 00444E60 164F0115 */  bne   $s2, $t7, .L004452B8
/* 00444E64 00000000 */   nop
/* 00444E68 8E180018 */  lw    $t8, 0x18($s0)
/* 00444E6C 16780112 */  bne   $s3, $t8, .L004452B8
/* 00444E70 00000000 */   nop
/* 00444E74 10000110 */  b     .L004452B8
/* 00444E78 24080001 */   li    $t0, 1
.L00444E7C:
/* 00444E7C 92390001 */  lbu   $t9, 1($s1)
/* 00444E80 92090001 */  lbu   $t1, 1($s0)
/* 00444E84 1729010C */  bne   $t9, $t1, .L004452B8
/* 00444E88 00000000 */   nop
/* 00444E8C 8E0D0014 */  lw    $t5, 0x14($s0)
/* 00444E90 164D0109 */  bne   $s2, $t5, .L004452B8
/* 00444E94 00000000 */   nop
/* 00444E98 8E0A0018 */  lw    $t2, 0x18($s0)
/* 00444E9C 166A0106 */  bne   $s3, $t2, .L004452B8
/* 00444EA0 00000000 */   nop
/* 00444EA4 962B003C */  lhu   $t3, 0x3c($s1)
/* 00444EA8 960C0024 */  lhu   $t4, 0x24($s0)
/* 00444EAC 156C0102 */  bne   $t3, $t4, .L004452B8
/* 00444EB0 00000000 */   nop
/* 00444EB4 10000100 */  b     .L004452B8
/* 00444EB8 24080001 */   li    $t0, 1
/* 00444EBC 922E0001 */  lbu   $t6, 1($s1)
.L00444EC0:
/* 00444EC0 920F0001 */  lbu   $t7, 1($s0)
/* 00444EC4 15CF00FC */  bne   $t6, $t7, .L004452B8
/* 00444EC8 00000000 */   nop
/* 00444ECC 8E38002C */  lw    $t8, 0x2c($s1)
/* 00444ED0 8E19001C */  lw    $t9, 0x1c($s0)
/* 00444ED4 171900F8 */  bne   $t8, $t9, .L004452B8
/* 00444ED8 00000000 */   nop
/* 00444EDC 8E090014 */  lw    $t1, 0x14($s0)
/* 00444EE0 164900F5 */  bne   $s2, $t1, .L004452B8
/* 00444EE4 00000000 */   nop
/* 00444EE8 8E0D0018 */  lw    $t5, 0x18($s0)
/* 00444EEC 166D00F2 */  bne   $s3, $t5, .L004452B8
/* 00444EF0 00000000 */   nop
/* 00444EF4 100000F0 */  b     .L004452B8
/* 00444EF8 24080001 */   li    $t0, 1
.L00444EFC:
/* 00444EFC 922A0001 */  lbu   $t2, 1($s1)
/* 00444F00 920B0001 */  lbu   $t3, 1($s0)
/* 00444F04 154B00EC */  bne   $t2, $t3, .L004452B8
/* 00444F08 00000000 */   nop
/* 00444F0C 8E0C0014 */  lw    $t4, 0x14($s0)
/* 00444F10 164C00E9 */  bne   $s2, $t4, .L004452B8
/* 00444F14 00000000 */   nop
/* 00444F18 922E003E */  lbu   $t6, 0x3e($s1)
/* 00444F1C 920F0011 */  lbu   $t7, 0x11($s0)
/* 00444F20 15CF00E5 */  bne   $t6, $t7, .L004452B8
/* 00444F24 00000000 */   nop
/* 00444F28 100000E3 */  b     .L004452B8
/* 00444F2C 24080001 */   li    $t0, 1
.L00444F30:
/* 00444F30 92380001 */  lbu   $t8, 1($s1)
/* 00444F34 92190001 */  lbu   $t9, 1($s0)
/* 00444F38 171900DF */  bne   $t8, $t9, .L004452B8
/* 00444F3C 00000000 */   nop
/* 00444F40 8E090014 */  lw    $t1, 0x14($s0)
/* 00444F44 164900DC */  bne   $s2, $t1, .L004452B8
/* 00444F48 00000000 */   nop
/* 00444F4C 8E2D002C */  lw    $t5, 0x2c($s1)
/* 00444F50 8E0A001C */  lw    $t2, 0x1c($s0)
/* 00444F54 15AA00D8 */  bne   $t5, $t2, .L004452B8
/* 00444F58 00000000 */   nop
/* 00444F5C 922B003E */  lbu   $t3, 0x3e($s1)
/* 00444F60 920C0011 */  lbu   $t4, 0x11($s0)
/* 00444F64 156C00D4 */  bne   $t3, $t4, .L004452B8
/* 00444F68 00000000 */   nop
/* 00444F6C 100000D2 */  b     .L004452B8
/* 00444F70 24080001 */   li    $t0, 1
.L00444F74:
/* 00444F74 922E0001 */  lbu   $t6, 1($s1)
/* 00444F78 920F0001 */  lbu   $t7, 1($s0)
/* 00444F7C 15CF00CE */  bne   $t6, $t7, .L004452B8
/* 00444F80 00000000 */   nop
/* 00444F84 92380038 */  lbu   $t8, 0x38($s1)
/* 00444F88 92190024 */  lbu   $t9, 0x24($s0)
/* 00444F8C 171900CA */  bne   $t8, $t9, .L004452B8
/* 00444F90 00000000 */   nop
/* 00444F94 8E090014 */  lw    $t1, 0x14($s0)
/* 00444F98 164900C7 */  bne   $s2, $t1, .L004452B8
/* 00444F9C 00000000 */   nop
/* 00444FA0 922D003E */  lbu   $t5, 0x3e($s1)
/* 00444FA4 920A0011 */  lbu   $t2, 0x11($s0)
/* 00444FA8 15AA00C3 */  bne   $t5, $t2, .L004452B8
/* 00444FAC 00000000 */   nop
/* 00444FB0 100000C1 */  b     .L004452B8
/* 00444FB4 24080001 */   li    $t0, 1
.L00444FB8:
/* 00444FB8 8E2B002C */  lw    $t3, 0x2c($s1)
/* 00444FBC 8E0C001C */  lw    $t4, 0x1c($s0)
/* 00444FC0 156C00BD */  bne   $t3, $t4, .L004452B8
/* 00444FC4 00000000 */   nop
/* 00444FC8 962E003C */  lhu   $t6, 0x3c($s1)
/* 00444FCC 960F0024 */  lhu   $t7, 0x24($s0)
/* 00444FD0 15CF00B9 */  bne   $t6, $t7, .L004452B8
/* 00444FD4 00000000 */   nop
/* 00444FD8 8E180014 */  lw    $t8, 0x14($s0)
/* 00444FDC 165800B6 */  bne   $s2, $t8, .L004452B8
/* 00444FE0 00000000 */   nop
/* 00444FE4 100000B4 */  b     .L004452B8
/* 00444FE8 24080001 */   li    $t0, 1
.L00444FEC:
/* 00444FEC 8E190014 */  lw    $t9, 0x14($s0)
/* 00444FF0 165900B1 */  bne   $s2, $t9, .L004452B8
/* 00444FF4 00000000 */   nop
/* 00444FF8 100000AF */  b     .L004452B8
/* 00444FFC 24080001 */   li    $t0, 1
.L00445000:
/* 00445000 92290001 */  lbu   $t1, 1($s1)
.L00445004:
/* 00445004 920D0001 */  lbu   $t5, 1($s0)
/* 00445008 152D00AB */  bne   $t1, $t5, .L004452B8
/* 0044500C 00000000 */   nop
/* 00445010 8E0A0014 */  lw    $t2, 0x14($s0)
/* 00445014 164A00A8 */  bne   $s2, $t2, .L004452B8
/* 00445018 00000000 */   nop
/* 0044501C 8E2B002C */  lw    $t3, 0x2c($s1)
/* 00445020 8E0C001C */  lw    $t4, 0x1c($s0)
/* 00445024 156C00A4 */  bne   $t3, $t4, .L004452B8
/* 00445028 00000000 */   nop
/* 0044502C 962E003C */  lhu   $t6, 0x3c($s1)
/* 00445030 960F0024 */  lhu   $t7, 0x24($s0)
/* 00445034 15CF00A0 */  bne   $t6, $t7, .L004452B8
/* 00445038 00000000 */   nop
/* 0044503C 1000009E */  b     .L004452B8
/* 00445040 24080001 */   li    $t0, 1
.L00445044:
/* 00445044 8E040014 */  lw    $a0, 0x14($s0)
/* 00445048 16440004 */  bne   $s2, $a0, .L0044505C
/* 0044504C 00000000 */   nop
/* 00445050 8E180018 */  lw    $t8, 0x18($s0)
/* 00445054 52780007 */  beql  $s3, $t8, .L00445074
/* 00445058 8E29002C */   lw    $t1, 0x2c($s1)
.L0044505C:
/* 0044505C 16640096 */  bne   $s3, $a0, .L004452B8
/* 00445060 00000000 */   nop
/* 00445064 8E190018 */  lw    $t9, 0x18($s0)
/* 00445068 16590093 */  bne   $s2, $t9, .L004452B8
/* 0044506C 00000000 */   nop
/* 00445070 8E29002C */  lw    $t1, 0x2c($s1)
.L00445074:
/* 00445074 8E0D001C */  lw    $t5, 0x1c($s0)
/* 00445078 152D008F */  bne   $t1, $t5, .L004452B8
/* 0044507C 00000000 */   nop
/* 00445080 1000008D */  b     .L004452B8
/* 00445084 24080001 */   li    $t0, 1
.L00445088:
/* 00445088 8E0A0014 */  lw    $t2, 0x14($s0)
/* 0044508C 164A008A */  bne   $s2, $t2, .L004452B8
/* 00445090 00000000 */   nop
/* 00445094 8E0B0018 */  lw    $t3, 0x18($s0)
/* 00445098 166B0087 */  bne   $s3, $t3, .L004452B8
/* 0044509C 00000000 */   nop
/* 004450A0 8E2C002C */  lw    $t4, 0x2c($s1)
/* 004450A4 8E0E001C */  lw    $t6, 0x1c($s0)
/* 004450A8 158E0083 */  bne   $t4, $t6, .L004452B8
/* 004450AC 00000000 */   nop
/* 004450B0 10000081 */  b     .L004452B8
/* 004450B4 24080001 */   li    $t0, 1
.L004450B8:
/* 004450B8 2C610063 */  sltiu $at, $v1, 0x63
/* 004450BC 14200026 */  bnez  $at, .L00445158
/* 004450C0 2C61007E */   sltiu $at, $v1, 0x7e
/* 004450C4 14200015 */  bnez  $at, .L0044511C
/* 004450C8 2478FF92 */   addiu $t8, $v1, -0x6e
/* 004450CC 2C610094 */  sltiu $at, $v1, 0x94
/* 004450D0 14200006 */  bnez  $at, .L004450EC
/* 004450D4 246FFF7A */   addiu $t7, $v1, -0x86
/* 004450D8 2401009A */  li    $at, 154
/* 004450DC 5061FFC9 */  beql  $v1, $at, .L00445004
/* 004450E0 92290001 */   lbu   $t1, 1($s1)
/* 004450E4 1000004B */  b     .L00445214
/* 004450E8 00000000 */   nop
.L004450EC:
/* 004450EC 2C61008E */  sltiu $at, $v1, 0x8e
/* 004450F0 10200062 */  beqz  $at, .L0044527C
/* 004450F4 2DE10008 */   sltiu $at, $t7, 8
/* 004450F8 10200046 */  beqz  $at, .L00445214
/* 004450FC 00000000 */   nop
/* 00445100 8F818044 */  lw    $at, %got(jtbl_1000C8E0)($gp)
/* 00445104 000F7880 */  sll   $t7, $t7, 2
/* 00445108 002F0821 */  addu  $at, $at, $t7
/* 0044510C 8C2FC8E0 */  lw    $t7, %lo(jtbl_1000C8E0)($at)
/* 00445110 01FC7821 */  addu  $t7, $t7, $gp
/* 00445114 01E00008 */  jr    $t7
/* 00445118 00000000 */   nop
.L0044511C:
/* 0044511C 24010069 */  li    $at, 105
/* 00445120 5061FF3B */  beql  $v1, $at, .L00444E10
/* 00445124 92380001 */   lbu   $t8, 1($s1)
/* 00445128 2C610078 */  sltiu $at, $v1, 0x78
/* 0044512C 1020004E */  beqz  $at, .L00445268
/* 00445130 2F01000A */   sltiu $at, $t8, 0xa
/* 00445134 10200037 */  beqz  $at, .L00445214
/* 00445138 00000000 */   nop
/* 0044513C 8F818044 */  lw    $at, %got(jtbl_1000C8B8)($gp)
/* 00445140 0018C080 */  sll   $t8, $t8, 2
/* 00445144 00380821 */  addu  $at, $at, $t8
/* 00445148 8C38C8B8 */  lw    $t8, %lo(jtbl_1000C8B8)($at)
/* 0044514C 031CC021 */  addu  $t8, $t8, $gp
/* 00445150 03000008 */  jr    $t8
/* 00445154 00000000 */   nop
.L00445158:
/* 00445158 2C610024 */  sltiu $at, $v1, 0x24
/* 0044515C 14200011 */  bnez  $at, .L004451A4
/* 00445160 2C61003D */   sltiu $at, $v1, 0x3d
/* 00445164 14200036 */  bnez  $at, .L00445240
/* 00445168 246AFFD8 */   addiu $t2, $v1, -0x28
/* 0044516C 24010041 */  li    $at, 65
/* 00445170 5061FF53 */  beql  $v1, $at, .L00444EC0
/* 00445174 922E0001 */   lbu   $t6, 1($s1)
/* 00445178 2479FFB3 */  addiu $t9, $v1, -0x4d
/* 0044517C 2F210016 */  sltiu $at, $t9, 0x16
/* 00445180 10200024 */  beqz  $at, .L00445214
/* 00445184 00000000 */   nop
/* 00445188 8F818044 */  lw    $at, %got(jtbl_1000C860)($gp)
/* 0044518C 0019C880 */  sll   $t9, $t9, 2
/* 00445190 00390821 */  addu  $at, $at, $t9
/* 00445194 8C39C860 */  lw    $t9, %lo(jtbl_1000C860)($at)
/* 00445198 033CC821 */  addu  $t9, $t9, $gp
/* 0044519C 03200008 */  jr    $t9
/* 004451A0 00000000 */   nop
.L004451A4:
/* 004451A4 2C61000F */  sltiu $at, $v1, 0xf
/* 004451A8 1420000D */  bnez  $at, .L004451E0
/* 004451AC 2469FFE8 */   addiu $t1, $v1, -0x18
/* 004451B0 2C61001E */  sltiu $at, $v1, 0x1e
/* 004451B4 10200014 */  beqz  $at, .L00445208
/* 004451B8 2D210006 */   sltiu $at, $t1, 6
/* 004451BC 10200015 */  beqz  $at, .L00445214
/* 004451C0 00000000 */   nop
/* 004451C4 8F818044 */  lw    $at, %got(jtbl_1000C7F4)($gp)
/* 004451C8 00094880 */  sll   $t1, $t1, 2
/* 004451CC 00290821 */  addu  $at, $at, $t1
/* 004451D0 8C29C7F4 */  lw    $t1, %lo(jtbl_1000C7F4)($at)
/* 004451D4 013C4821 */  addu  $t1, $t1, $gp
/* 004451D8 01200008 */  jr    $t1
/* 004451DC 00000000 */   nop
.L004451E0:
/* 004451E0 2C61000F */  sltiu $at, $v1, 0xf
/* 004451E4 1020000B */  beqz  $at, .L00445214
/* 004451E8 00000000 */   nop
/* 004451EC 8F818044 */  lw    $at, %got(jtbl_1000C7B8)($gp)
/* 004451F0 00036880 */  sll   $t5, $v1, 2
/* 004451F4 002D0821 */  addu  $at, $at, $t5
/* 004451F8 8C2DC7B8 */  lw    $t5, %lo(jtbl_1000C7B8)($at)
/* 004451FC 01BC6821 */  addu  $t5, $t5, $gp
/* 00445200 01A00008 */  jr    $t5
/* 00445204 00000000 */   nop
.L00445208:
/* 00445208 24010023 */  li    $at, 35
/* 0044520C 5061FEEF */  beql  $v1, $at, .L00444DCC
/* 00445210 922B0001 */   lbu   $t3, 1($s1)
.L00445214:
/* 00445214 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00445218 8F868044 */  lw    $a2, %got(RO_1000C7AB)($gp)
/* 0044521C 24040001 */  li    $a0, 1
/* 00445220 240500B1 */  li    $a1, 177
/* 00445224 2407000A */  li    $a3, 10
/* 00445228 A3A80037 */  sb    $t0, 0x37($sp)
/* 0044522C 0320F809 */  jalr  $t9
/* 00445230 24C6C7AB */   addiu $a2, %lo(RO_1000C7AB) # addiu $a2, $a2, -0x3855
/* 00445234 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00445238 1000001F */  b     .L004452B8
/* 0044523C 93A80037 */   lbu   $t0, 0x37($sp)
.L00445240:
/* 00445240 2D410015 */  sltiu $at, $t2, 0x15
/* 00445244 1020FFF3 */  beqz  $at, .L00445214
/* 00445248 00000000 */   nop
/* 0044524C 8F818044 */  lw    $at, %got(jtbl_1000C80C)($gp)
/* 00445250 000A5080 */  sll   $t2, $t2, 2
/* 00445254 002A0821 */  addu  $at, $at, $t2
/* 00445258 8C2AC80C */  lw    $t2, %lo(jtbl_1000C80C)($at)
/* 0044525C 015C5021 */  addu  $t2, $t2, $gp
/* 00445260 01400008 */  jr    $t2
/* 00445264 00000000 */   nop
.L00445268:
/* 00445268 2401007D */  li    $at, 125
/* 0044526C 5061FEE8 */  beql  $v1, $at, .L00444E10
/* 00445270 92380001 */   lbu   $t8, 1($s1)
/* 00445274 1000FFE7 */  b     .L00445214
/* 00445278 00000000 */   nop
.L0044527C:
/* 0044527C 24010093 */  li    $at, 147
/* 00445280 5061FF60 */  beql  $v1, $at, .L00445004
/* 00445284 92290001 */   lbu   $t1, 1($s1)
/* 00445288 1000FFE2 */  b     .L00445214
/* 0044528C 00000000 */   nop
.L00445290:
/* 00445290 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00445294 8F868044 */  lw    $a2, %got(RO_1000C7A1)($gp)
/* 00445298 24040001 */  li    $a0, 1
/* 0044529C 2405007B */  li    $a1, 123
/* 004452A0 2407000A */  li    $a3, 10
/* 004452A4 A3A80037 */  sb    $t0, 0x37($sp)
/* 004452A8 0320F809 */  jalr  $t9
/* 004452AC 24C6C7A1 */   addiu $a2, %lo(RO_1000C7A1) # addiu $a2, $a2, -0x385f
/* 004452B0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004452B4 93A80037 */  lbu   $t0, 0x37($sp)
.L004452B8:
/* 004452B8 15000002 */  bnez  $t0, .L004452C4
/* 004452BC 00000000 */   nop
/* 004452C0 8E10000C */  lw    $s0, 0xc($s0)
.L004452C4:
/* 004452C4 15000003 */  bnez  $t0, .L004452D4
/* 004452C8 00000000 */   nop
/* 004452CC 5600FE03 */  bnezl $s0, .L00444ADC
/* 004452D0 92230000 */   lbu   $v1, ($s1)
.L004452D4:
/* 004452D4 150001EA */  bnez  $t0, .L00445A80
/* 004452D8 92230000 */   lbu   $v1, ($s1)
/* 004452DC 8F998348 */  lw    $t9, %call16(appendichain)($gp)
/* 004452E0 38650004 */  xori  $a1, $v1, 4
/* 004452E4 0005282B */  sltu  $a1, $zero, $a1
/* 004452E8 0320F809 */  jalr  $t9
/* 004452EC 97A40042 */   lhu   $a0, 0x42($sp)
/* 004452F0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004452F4 14400006 */  bnez  $v0, .L00445310
/* 004452F8 00408025 */   move  $s0, $v0
/* 004452FC 8F818B20 */  lw     $at, %got(outofmem)($gp)
/* 00445300 240B0001 */  li    $t3, 1
/* 00445304 8FA2003C */  lw    $v0, 0x3c($sp)
/* 00445308 100001F1 */  b     .L00445AD0
/* 0044530C A02B0000 */   sb    $t3, ($at)
.L00445310:
/* 00445310 922C0000 */  lbu   $t4, ($s1)
/* 00445314 24040001 */  li    $a0, 1
/* 00445318 24050100 */  li    $a1, 256
/* 0044531C A04C0000 */  sb    $t4, ($v0)
/* 00445320 922E0001 */  lbu   $t6, 1($s1)
/* 00445324 A04E0001 */  sb    $t6, 1($v0)
/* 00445328 92230000 */  lbu   $v1, ($s1)
/* 0044532C 246FFFFF */  addiu $t7, $v1, -1
/* 00445330 2DE10008 */  sltiu $at, $t7, 8
/* 00445334 10200106 */  beqz  $at, .L00445750
/* 00445338 00000000 */   nop
/* 0044533C 8F818044 */  lw    $at, %got(jtbl_1000CA84)($gp)
/* 00445340 000F7880 */  sll   $t7, $t7, 2
/* 00445344 002F0821 */  addu  $at, $at, $t7
/* 00445348 8C2FCA84 */  lw    $t7, %lo(jtbl_1000CA84)($at)
/* 0044534C 01FC7821 */  addu  $t7, $t7, $gp
/* 00445350 01E00008 */  jr    $t7
/* 00445354 00000000 */   nop
.L00445358:
/* 00445358 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0044535C 8F928908 */  lw     $s2, %got(err)($gp)
/* 00445360 8F858044 */  lw    $a1, %got(RO_1000C784)($gp)
/* 00445364 2406001D */  li    $a2, 29
/* 00445368 2407001D */  li    $a3, 29
/* 0044536C 8E440000 */  lw    $a0, ($s2)
/* 00445370 0320F809 */  jalr  $t9
/* 00445374 24A5C784 */   addiu $a1, %lo(RO_1000C784) # addiu $a1, $a1, -0x387c
/* 00445378 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0044537C 8E440000 */  lw    $a0, ($s2)
/* 00445380 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 00445384 0320F809 */  jalr  $t9
/* 00445388 00000000 */   nop
/* 0044538C 100000F6 */  b     .L00445768
/* 00445390 8FBC0028 */   lw    $gp, 0x28($sp)
.L00445394:
/* 00445394 8E390020 */  lw    $t9, 0x20($s1)
/* 00445398 AC590010 */  sw    $t9, 0x10($v0)
/* 0044539C 8E380024 */  lw    $t8, 0x24($s1)
/* 004453A0 AC580014 */  sw    $t8, 0x14($v0)
/* 004453A4 8E290028 */  lw    $t1, 0x28($s1)
/* 004453A8 100000EF */  b     .L00445768
/* 004453AC AC490018 */   sw    $t1, 0x18($v0)
.L004453B0:
/* 004453B0 962D0020 */  lhu   $t5, 0x20($s1)
/* 004453B4 A44D0010 */  sh    $t5, 0x10($v0)
/* 004453B8 8E2A0024 */  lw    $t2, 0x24($s1)
/* 004453BC 100000EA */  b     .L00445768
/* 004453C0 AC4A0014 */   sw    $t2, 0x14($v0)
.L004453C4:
/* 004453C4 8E2B0020 */  lw    $t3, 0x20($s1)
/* 004453C8 AC4B0010 */  sw    $t3, 0x10($v0)
/* 004453CC 8E2E002C */  lw    $t6, 0x2c($s1)
/* 004453D0 AC4E0018 */  sw    $t6, 0x18($v0)
/* 004453D4 8E2C0030 */  lw    $t4, 0x30($s1)
/* 004453D8 AC4C001C */  sw    $t4, 0x1c($v0)
/* 004453DC 8E2F0024 */  lw    $t7, 0x24($s1)
/* 004453E0 100000E1 */  b     .L00445768
/* 004453E4 AC4F0014 */   sw    $t7, 0x14($v0)
.L004453E8:
/* 004453E8 8E380020 */  lw    $t8, 0x20($s1)
/* 004453EC AC580010 */  sw    $t8, 0x10($v0)
/* 004453F0 8E29002C */  lw    $t1, 0x2c($s1)
/* 004453F4 AC490018 */  sw    $t1, 0x18($v0)
/* 004453F8 8E390030 */  lw    $t9, 0x30($s1)
/* 004453FC AC59001C */  sw    $t9, 0x1c($v0)
/* 00445400 8E2D0024 */  lw    $t5, 0x24($s1)
/* 00445404 AC4D0014 */  sw    $t5, 0x14($v0)
/* 00445408 8E2A0034 */  lw    $t2, 0x34($s1)
/* 0044540C 8D4B0014 */  lw    $t3, 0x14($t2)
/* 00445410 100000D5 */  b     .L00445768
/* 00445414 AC4B0020 */   sw    $t3, 0x20($v0)
.L00445418:
/* 00445418 8E2E0028 */  lw    $t6, 0x28($s1)
/* 0044541C AC4E0010 */  sw    $t6, 0x10($v0)
/* 00445420 8E2C002C */  lw    $t4, 0x2c($s1)
/* 00445424 AC4C0014 */  sw    $t4, 0x14($v0)
/* 00445428 922F0020 */  lbu   $t7, 0x20($s1)
/* 0044542C A04F0018 */  sb    $t7, 0x18($v0)
/* 00445430 92380022 */  lbu   $t8, 0x22($s1)
/* 00445434 A0580019 */  sb    $t8, 0x19($v0)
/* 00445438 92390021 */  lbu   $t9, 0x21($s1)
/* 0044543C AC510008 */  sw    $s1, 8($v0)
/* 00445440 100000C9 */  b     .L00445768
/* 00445444 A059001A */   sb    $t9, 0x1a($v0)
.L00445448:
/* 00445448 8E2D0028 */  lw    $t5, 0x28($s1)
/* 0044544C AC4D0010 */  sw    $t5, 0x10($v0)
/* 00445450 8E29002C */  lw    $t1, 0x2c($s1)
/* 00445454 AC490014 */  sw    $t1, 0x14($v0)
/* 00445458 922A0020 */  lbu   $t2, 0x20($s1)
/* 0044545C A04A0018 */  sb    $t2, 0x18($v0)
/* 00445460 922B0022 */  lbu   $t3, 0x22($s1)
/* 00445464 A04B0019 */  sb    $t3, 0x19($v0)
/* 00445468 922C0021 */  lbu   $t4, 0x21($s1)
/* 0044546C A04C001A */  sb    $t4, 0x1a($v0)
/* 00445470 8E2E0024 */  lw    $t6, 0x24($s1)
/* 00445474 8DCF0014 */  lw    $t7, 0x14($t6)
/* 00445478 AC510008 */  sw    $s1, 8($v0)
/* 0044547C 100000BA */  b     .L00445768
/* 00445480 AC4F001C */   sw    $t7, 0x1c($v0)
.L00445484:
/* 00445484 92380020 */  lbu   $t8, 0x20($s1)
/* 00445488 AC520014 */  sw    $s2, 0x14($v0)
/* 0044548C AC530018 */  sw    $s3, 0x18($v0)
/* 00445490 A0580010 */  sb    $t8, 0x10($v0)
/* 00445494 330900FF */  andi  $t1, $t8, 0xff
/* 00445498 92390023 */  lbu   $t9, 0x23($s1)
/* 0044549C 252DFFE0 */  addiu $t5, $t1, -0x20
/* 004454A0 2DAA0040 */  sltiu $t2, $t5, 0x40
/* 004454A4 11400009 */  beqz  $t2, .L004454CC
/* 004454A8 A0590012 */   sb    $t9, 0x12($v0)
/* 004454AC 8F8E8044 */  lw    $t6, %got(D_10010928)($gp)
/* 004454B0 000D5943 */  sra   $t3, $t5, 5
/* 004454B4 000B6080 */  sll   $t4, $t3, 2
/* 004454B8 25CE0928 */  addiu $t6, %lo(D_10010928) # addiu $t6, $t6, 0x928
/* 004454BC 01CC7821 */  addu  $t7, $t6, $t4
/* 004454C0 8DF80000 */  lw    $t8, ($t7)
/* 004454C4 01B8C804 */  sllv  $t9, $t8, $t5
/* 004454C8 2B2A0000 */  slti  $t2, $t9, 0
.L004454CC:
/* 004454CC 55400004 */  bnezl $t2, .L004454E0
/* 004454D0 AC400024 */   sw    $zero, 0x24($v0)
/* 004454D4 922B003E */  lbu   $t3, 0x3e($s1)
/* 004454D8 A04B0011 */  sb    $t3, 0x11($v0)
/* 004454DC AC400024 */  sw    $zero, 0x24($v0)
.L004454E0:
/* 004454E0 10000036 */  b     .L004455BC
/* 004454E4 92230020 */   lbu   $v1, 0x20($s1)
.L004454E8:
/* 004454E8 8E2E002C */  lw    $t6, 0x2c($s1)
/* 004454EC 1000009E */  b     .L00445768
/* 004454F0 AC4E001C */   sw    $t6, 0x1c($v0)
.L004454F4:
/* 004454F4 8E2C002C */  lw    $t4, 0x2c($s1)
/* 004454F8 AC4C001C */  sw    $t4, 0x1c($v0)
/* 004454FC 962F003C */  lhu   $t7, 0x3c($s1)
/* 00445500 10000099 */  b     .L00445768
/* 00445504 A44F0024 */   sh    $t7, 0x24($v0)
.L00445508:
/* 00445508 8E38002C */  lw    $t8, 0x2c($s1)
/* 0044550C 10000096 */  b     .L00445768
/* 00445510 AC58001C */   sw    $t8, 0x1c($v0)
.L00445514:
/* 00445514 8E2D002C */  lw    $t5, 0x2c($s1)
/* 00445518 10000093 */  b     .L00445768
/* 0044551C AC4D001C */   sw    $t5, 0x1c($v0)
.L00445520:
/* 00445520 92390038 */  lbu   $t9, 0x38($s1)
/* 00445524 10000090 */  b     .L00445768
/* 00445528 A0590024 */   sb    $t9, 0x24($v0)
.L0044552C:
/* 0044552C 8E29002C */  lw    $t1, 0x2c($s1)
/* 00445530 AC49001C */  sw    $t1, 0x1c($v0)
/* 00445534 962A003C */  lhu   $t2, 0x3c($s1)
/* 00445538 1000008B */  b     .L00445768
/* 0044553C A44A0024 */   sh    $t2, 0x24($v0)
.L00445540:
/* 00445540 8E2B002C */  lw    $t3, 0x2c($s1)
.L00445544:
/* 00445544 AC4B001C */  sw    $t3, 0x1c($v0)
/* 00445548 962E003C */  lhu   $t6, 0x3c($s1)
/* 0044554C A44E0024 */  sh    $t6, 0x24($v0)
/* 00445550 922C003F */  lbu   $t4, 0x3f($s1)
/* 00445554 A04C0013 */  sb    $t4, 0x13($v0)
/* 00445558 8E2F0038 */  lw    $t7, 0x38($s1)
/* 0044555C AC510008 */  sw    $s1, 8($v0)
/* 00445560 10000081 */  b     .L00445768
/* 00445564 A44F0026 */   sh    $t7, 0x26($v0)
.L00445568:
/* 00445568 8E38002C */  lw    $t8, 0x2c($s1)
/* 0044556C AC58001C */  sw    $t8, 0x1c($v0)
/* 00445570 962D003C */  lhu   $t5, 0x3c($s1)
/* 00445574 AC510008 */  sw    $s1, 8($v0)
/* 00445578 1000007B */  b     .L00445768
/* 0044557C A44D0024 */   sh    $t5, 0x24($v0)
.L00445580:
/* 00445580 8E39002C */  lw    $t9, 0x2c($s1)
/* 00445584 AC59001C */  sw    $t9, 0x1c($v0)
/* 00445588 9629003C */  lhu   $t1, 0x3c($s1)
/* 0044558C AC510008 */  sw    $s1, 8($v0)
/* 00445590 10000075 */  b     .L00445768
/* 00445594 A4490024 */   sh    $t1, 0x24($v0)
.L00445598:
/* 00445598 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0044559C 8F868044 */  lw    $a2, %got(RO_1000C77A)($gp)
/* 004455A0 24040001 */  li    $a0, 1
/* 004455A4 24050135 */  li    $a1, 309
/* 004455A8 2407000A */  li    $a3, 10
/* 004455AC 0320F809 */  jalr  $t9
/* 004455B0 24C6C77A */   addiu $a2, %lo(RO_1000C77A) # addiu $a2, $a2, -0x3886
/* 004455B4 1000006C */  b     .L00445768
/* 004455B8 8FBC0028 */   lw    $gp, 0x28($sp)
.L004455BC:
/* 004455BC 2C61006A */  sltiu $at, $v1, 0x6a
/* 004455C0 1420001A */  bnez  $at, .L0044562C
/* 004455C4 2C61008E */   sltiu $at, $v1, 0x8e
/* 004455C8 14200009 */  bnez  $at, .L004455F0
/* 004455CC 2478FF92 */   addiu $t8, $v1, -0x6e
/* 004455D0 24010093 */  li    $at, 147
/* 004455D4 5061FFDB */  beql  $v1, $at, .L00445544
/* 004455D8 8E2B002C */   lw    $t3, 0x2c($s1)
/* 004455DC 2401009A */  li    $at, 154
/* 004455E0 5061FFD8 */  beql  $v1, $at, .L00445544
/* 004455E4 8E2B002C */   lw    $t3, 0x2c($s1)
/* 004455E8 1000FFEB */  b     .L00445598
/* 004455EC 00000000 */   nop
.L004455F0:
/* 004455F0 2C610078 */  sltiu $at, $v1, 0x78
/* 004455F4 1420004C */  bnez  $at, .L00445728
/* 004455F8 246AFF7A */   addiu $t2, $v1, -0x86
/* 004455FC 2401007D */  li    $at, 125
/* 00445600 10610059 */  beq   $v1, $at, .L00445768
/* 00445604 2D410008 */   sltiu $at, $t2, 8
/* 00445608 1020FFE3 */  beqz  $at, .L00445598
/* 0044560C 00000000 */   nop
/* 00445610 8F818044 */  lw    $at, %got(jtbl_1000CA64)($gp)
/* 00445614 000A5080 */  sll   $t2, $t2, 2
/* 00445618 002A0821 */  addu  $at, $at, $t2
/* 0044561C 8C2ACA64 */  lw    $t2, %lo(jtbl_1000CA64)($at)
/* 00445620 015C5021 */  addu  $t2, $t2, $gp
/* 00445624 01400008 */  jr    $t2
/* 00445628 00000000 */   nop
.L0044562C:
/* 0044562C 2C610024 */  sltiu $at, $v1, 0x24
/* 00445630 14200010 */  bnez  $at, .L00445674
/* 00445634 2C610044 */   sltiu $at, $v1, 0x44
/* 00445638 1420002C */  bnez  $at, .L004456EC
/* 0044563C 246FFFD8 */   addiu $t7, $v1, -0x28
/* 00445640 2C610063 */  sltiu $at, $v1, 0x63
/* 00445644 10200033 */  beqz  $at, .L00445714
/* 00445648 246BFFB3 */   addiu $t3, $v1, -0x4d
/* 0044564C 2D610016 */  sltiu $at, $t3, 0x16
/* 00445650 1020FFD1 */  beqz  $at, .L00445598
/* 00445654 00000000 */   nop
/* 00445658 8F818044 */  lw    $at, %got(jtbl_1000C9E4)($gp)
/* 0044565C 000B5880 */  sll   $t3, $t3, 2
/* 00445660 002B0821 */  addu  $at, $at, $t3
/* 00445664 8C2BC9E4 */  lw    $t3, %lo(jtbl_1000C9E4)($at)
/* 00445668 017C5821 */  addu  $t3, $t3, $gp
/* 0044566C 01600008 */  jr    $t3
/* 00445670 00000000 */   nop
.L00445674:
/* 00445674 2C61000F */  sltiu $at, $v1, 0xf
/* 00445678 1420000D */  bnez  $at, .L004456B0
/* 0044567C 246EFFE8 */   addiu $t6, $v1, -0x18
/* 00445680 2C61001E */  sltiu $at, $v1, 0x1e
/* 00445684 10200014 */  beqz  $at, .L004456D8
/* 00445688 2DC10006 */   sltiu $at, $t6, 6
/* 0044568C 1020FFC2 */  beqz  $at, .L00445598
/* 00445690 00000000 */   nop
/* 00445694 8F818044 */  lw    $at, %got(jtbl_1000C95C)($gp)
/* 00445698 000E7080 */  sll   $t6, $t6, 2
/* 0044569C 002E0821 */  addu  $at, $at, $t6
/* 004456A0 8C2EC95C */  lw    $t6, %lo(jtbl_1000C95C)($at)
/* 004456A4 01DC7021 */  addu  $t6, $t6, $gp
/* 004456A8 01C00008 */  jr    $t6
/* 004456AC 00000000 */   nop
.L004456B0:
/* 004456B0 2C61000F */  sltiu $at, $v1, 0xf
/* 004456B4 1020FFB8 */  beqz  $at, .L00445598
/* 004456B8 00000000 */   nop
/* 004456BC 8F818044 */  lw    $at, %got(jtbl_1000C920)($gp)
/* 004456C0 00036080 */  sll   $t4, $v1, 2
/* 004456C4 002C0821 */  addu  $at, $at, $t4
/* 004456C8 8C2CC920 */  lw    $t4, %lo(jtbl_1000C920)($at)
/* 004456CC 019C6021 */  addu  $t4, $t4, $gp
/* 004456D0 01800008 */  jr    $t4
/* 004456D4 00000000 */   nop
.L004456D8:
/* 004456D8 24010023 */  li    $at, 35
/* 004456DC 50610023 */  beql  $v1, $at, .L0044576C
/* 004456E0 92230000 */   lbu   $v1, ($s1)
/* 004456E4 1000FFAC */  b     .L00445598
/* 004456E8 00000000 */   nop
.L004456EC:
/* 004456EC 2DE1001C */  sltiu $at, $t7, 0x1c
/* 004456F0 1020FFA9 */  beqz  $at, .L00445598
/* 004456F4 00000000 */   nop
/* 004456F8 8F818044 */  lw    $at, %got(jtbl_1000C974)($gp)
/* 004456FC 000F7880 */  sll   $t7, $t7, 2
/* 00445700 002F0821 */  addu  $at, $at, $t7
/* 00445704 8C2FC974 */  lw    $t7, %lo(jtbl_1000C974)($at)
/* 00445708 01FC7821 */  addu  $t7, $t7, $gp
/* 0044570C 01E00008 */  jr    $t7
/* 00445710 00000000 */   nop
.L00445714:
/* 00445714 24010069 */  li    $at, 105
/* 00445718 50610014 */  beql  $v1, $at, .L0044576C
/* 0044571C 92230000 */   lbu   $v1, ($s1)
/* 00445720 1000FF9D */  b     .L00445598
/* 00445724 00000000 */   nop
.L00445728:
/* 00445728 2F01000A */  sltiu $at, $t8, 0xa
/* 0044572C 1020FF9A */  beqz  $at, .L00445598
/* 00445730 00000000 */   nop
/* 00445734 8F818044 */  lw    $at, %got(jtbl_1000CA3C)($gp)
/* 00445738 0018C080 */  sll   $t8, $t8, 2
/* 0044573C 00380821 */  addu  $at, $at, $t8
/* 00445740 8C38CA3C */  lw    $t8, %lo(jtbl_1000CA3C)($at)
/* 00445744 031CC021 */  addu  $t8, $t8, $gp
/* 00445748 03000008 */  jr    $t8
/* 0044574C 00000000 */   nop
.L00445750:
/* 00445750 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00445754 8F868044 */  lw    $a2, %got(RO_1000C770)($gp)
/* 00445758 2407000A */  li    $a3, 10
/* 0044575C 0320F809 */  jalr  $t9
/* 00445760 24C6C770 */   addiu $a2, %lo(RO_1000C770) # addiu $a2, $a2, -0x3890
/* 00445764 8FBC0028 */  lw    $gp, 0x28($sp)
.L00445768:
/* 00445768 92230000 */  lbu   $v1, ($s1)
.L0044576C:
/* 0044576C 3C016000 */  lui   $at, 0x6000
/* 00445770 340BFFFF */  li    $t3, 65535
/* 00445774 2C6D0020 */  sltiu $t5, $v1, 0x20
/* 00445778 000DC823 */  negu  $t9, $t5
/* 0044577C 03214824 */  and   $t1, $t9, $at
/* 00445780 00695004 */  sllv  $t2, $t1, $v1
/* 00445784 05410003 */  bgez  $t2, .L00445794
/* 00445788 2C6E0020 */   sltiu $t6, $v1, 0x20
/* 0044578C 100000CE */  b     .L00445AC8
/* 00445790 A60B0002 */   sh    $t3, 2($s0)
.L00445794:
/* 00445794 000E6023 */  negu  $t4, $t6
/* 00445798 3C011E00 */  lui   $at, 0x1e00
/* 0044579C 01817824 */  and   $t7, $t4, $at
/* 004457A0 006FC004 */  sllv  $t8, $t7, $v1
/* 004457A4 070300C9 */  bgezl $t8, .L00445ACC
/* 004457A8 AE300014 */   sw    $s0, 0x14($s1)
/* 004457AC 8F998664 */  lw    $t9, %call16(newbit)($gp)
/* 004457B0 02002025 */  move  $a0, $s0
/* 004457B4 00002825 */  move  $a1, $zero
/* 004457B8 0320F809 */  jalr  $t9
/* 004457BC 00000000 */   nop
/* 004457C0 A6020002 */  sh    $v0, 2($s0)
/* 004457C4 92230000 */  lbu   $v1, ($s1)
/* 004457C8 3C011200 */  lui   $at, 0x1200
/* 004457CC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004457D0 2C6D0020 */  sltiu $t5, $v1, 0x20
/* 004457D4 000DC823 */  negu  $t9, $t5
/* 004457D8 03214824 */  and   $t1, $t9, $at
/* 004457DC 00695004 */  sllv  $t2, $t1, $v1
/* 004457E0 05410025 */  bgez  $t2, .L00445878
/* 004457E4 24010004 */   li    $at, 4
/* 004457E8 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004457EC 8F848CD4 */  lw     $a0, %got(varbits)($gp)
/* 004457F0 3045FFFF */  andi  $a1, $v0, 0xffff
/* 004457F4 0320F809 */  jalr  $t9
/* 004457F8 00000000 */   nop
/* 004457FC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00445800 02002025 */  move  $a0, $s0
/* 00445804 00002825 */  move  $a1, $zero
/* 00445808 8F998664 */  lw    $t9, %call16(newbit)($gp)
/* 0044580C 0320F809 */  jalr  $t9
/* 00445810 00000000 */   nop
/* 00445814 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00445818 A6020024 */  sh    $v0, 0x24($s0)
/* 0044581C 3045FFFF */  andi  $a1, $v0, 0xffff
/* 00445820 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00445824 8F848CE0 */  lw     $a0, %got(asgnbits)($gp)
/* 00445828 0320F809 */  jalr  $t9
/* 0044582C 00000000 */   nop
/* 00445830 922B0000 */  lbu   $t3, ($s1)
/* 00445834 24010006 */  li    $at, 6
/* 00445838 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0044583C 556100A3 */  bnel  $t3, $at, .L00445ACC
/* 00445840 AE300014 */   sw    $s0, 0x14($s1)
/* 00445844 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00445848 8F848CE4 */  lw     $a0, %got(slvarbits)($gp)
/* 0044584C 96050002 */  lhu   $a1, 2($s0)
/* 00445850 0320F809 */  jalr  $t9
/* 00445854 00000000 */   nop
/* 00445858 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0044585C 96050024 */  lhu   $a1, 0x24($s0)
/* 00445860 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00445864 8F848CE8 */  lw     $a0, %got(slasgnbits)($gp)
/* 00445868 0320F809 */  jalr  $t9
/* 0044586C 00000000 */   nop
/* 00445870 10000095 */  b     .L00445AC8
/* 00445874 8FBC0028 */   lw    $gp, 0x28($sp)
.L00445878:
/* 00445878 54610094 */  bnel  $v1, $at, .L00445ACC
/* 0044587C AE300014 */   sw    $s0, 0x14($s1)
/* 00445880 92220020 */  lbu   $v0, 0x20($s1)
/* 00445884 2401005B */  li    $at, 91
/* 00445888 14410032 */  bne   $v0, $at, .L00445954
/* 0044588C 2C4B0080 */   sltiu $t3, $v0, 0x80
/* 00445890 922E0001 */  lbu   $t6, 1($s1)
/* 00445894 3C01000C */  lui   $at, 0xc
/* 00445898 2DCC0020 */  sltiu $t4, $t6, 0x20
/* 0044589C 000C7823 */  negu  $t7, $t4
/* 004458A0 01E1C024 */  and   $t8, $t7, $at
/* 004458A4 01D86804 */  sllv  $t5, $t8, $t6
/* 004458A8 05A0002A */  bltz  $t5, .L00445954
/* 004458AC 00000000 */   nop
/* 004458B0 8E040014 */  lw    $a0, 0x14($s0)
/* 004458B4 24030002 */  li    $v1, 2
/* 004458B8 3C013200 */  lui   $at, 0x3200
/* 004458BC 90820000 */  lbu   $v0, ($a0)
/* 004458C0 14620004 */  bne   $v1, $v0, .L004458D4
/* 004458C4 2C4A0020 */   sltiu $t2, $v0, 0x20
/* 004458C8 8E190018 */  lw    $t9, 0x18($s0)
/* 004458CC 93290000 */  lbu   $t1, ($t9)
/* 004458D0 1069007D */  beq   $v1, $t1, .L00445AC8
.L004458D4:
/* 004458D4 000A5823 */   negu  $t3, $t2
/* 004458D8 01616024 */  and   $t4, $t3, $at
/* 004458DC 004C7804 */  sllv  $t7, $t4, $v0
/* 004458E0 05E0000A */  bltz  $t7, .L0044590C
/* 004458E4 00000000 */   nop
/* 004458E8 8E180018 */  lw    $t8, 0x18($s0)
/* 004458EC 3C013200 */  lui   $at, 0x3200
/* 004458F0 930E0000 */  lbu   $t6, ($t8)
/* 004458F4 2DCD0020 */  sltiu $t5, $t6, 0x20
/* 004458F8 000DC823 */  negu  $t9, $t5
/* 004458FC 03214824 */  and   $t1, $t9, $at
/* 00445900 01C95004 */  sllv  $t2, $t1, $t6
/* 00445904 05430071 */  bgezl $t2, .L00445ACC
/* 00445908 AE300014 */   sw    $s0, 0x14($s1)
.L0044590C:
/* 0044590C 8F9986C8 */  lw    $t9, %call16(in_indmults)($gp)
/* 00445910 0320F809 */  jalr  $t9
/* 00445914 00000000 */   nop
/* 00445918 1040006B */  beqz  $v0, .L00445AC8
/* 0044591C 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00445920 8F9986C8 */  lw    $t9, %call16(in_indmults)($gp)
/* 00445924 8E040018 */  lw    $a0, 0x18($s0)
/* 00445928 0320F809 */  jalr  $t9
/* 0044592C 00000000 */   nop
/* 00445930 10400065 */  beqz  $v0, .L00445AC8
/* 00445934 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00445938 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0044593C 8F848CF8 */  lw     $a0, %got(indmults)($gp)
/* 00445940 96050002 */  lhu   $a1, 2($s0)
/* 00445944 0320F809 */  jalr  $t9
/* 00445948 00000000 */   nop
/* 0044594C 1000005E */  b     .L00445AC8
/* 00445950 8FBC0028 */   lw    $gp, 0x28($sp)
.L00445954:
/* 00445954 11600009 */  beqz  $t3, .L0044597C
/* 00445958 00000000 */   nop
/* 0044595C 8F988044 */  lw    $t8, %got(D_10010918)($gp)
/* 00445960 00026143 */  sra   $t4, $v0, 5
/* 00445964 000C7880 */  sll   $t7, $t4, 2
/* 00445968 27180918 */  addiu $t8, %lo(D_10010918) # addiu $t8, $t8, 0x918
/* 0044596C 030F6821 */  addu  $t5, $t8, $t7
/* 00445970 8DB90000 */  lw    $t9, ($t5)
/* 00445974 00594804 */  sllv  $t1, $t9, $v0
/* 00445978 292B0000 */  slti  $t3, $t1, 0
.L0044597C:
/* 0044597C 5160001D */  beql  $t3, $zero, .L004459F4
/* 00445980 24010036 */   li    $at, 54
/* 00445984 922A0001 */  lbu   $t2, 1($s1)
/* 00445988 3C01000C */  lui   $at, 0xc
/* 0044598C 2D4C0020 */  sltiu $t4, $t2, 0x20
/* 00445990 000CC023 */  negu  $t8, $t4
/* 00445994 03017824 */  and   $t7, $t8, $at
/* 00445998 014F6804 */  sllv  $t5, $t7, $t2
/* 0044599C 05A20015 */  bltzl $t5, .L004459F4
/* 004459A0 24010036 */   li    $at, 54
/* 004459A4 8F9986C8 */  lw    $t9, %call16(in_indmults)($gp)
/* 004459A8 8E040014 */  lw    $a0, 0x14($s0)
/* 004459AC 0320F809 */  jalr  $t9
/* 004459B0 00000000 */   nop
/* 004459B4 10400044 */  beqz  $v0, .L00445AC8
/* 004459B8 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004459BC 8F9986C8 */  lw    $t9, %call16(in_indmults)($gp)
/* 004459C0 8E040018 */  lw    $a0, 0x18($s0)
/* 004459C4 0320F809 */  jalr  $t9
/* 004459C8 00000000 */   nop
/* 004459CC 1040003E */  beqz  $v0, .L00445AC8
/* 004459D0 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004459D4 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004459D8 8F848CF8 */  lw     $a0, %got(indmults)($gp)
/* 004459DC 96050002 */  lhu   $a1, 2($s0)
/* 004459E0 0320F809 */  jalr  $t9
/* 004459E4 00000000 */   nop
/* 004459E8 10000037 */  b     .L00445AC8
/* 004459EC 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004459F0 24010036 */  li    $at, 54
.L004459F4:
/* 004459F4 1441000E */  bne   $v0, $at, .L00445A30
/* 004459F8 2459FFE0 */   addiu $t9, $v0, -0x20
/* 004459FC 8F9986C8 */  lw    $t9, %call16(in_indmults)($gp)
/* 00445A00 8E040014 */  lw    $a0, 0x14($s0)
/* 00445A04 0320F809 */  jalr  $t9
/* 00445A08 00000000 */   nop
/* 00445A0C 1040002E */  beqz  $v0, .L00445AC8
/* 00445A10 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00445A14 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00445A18 8F848CF8 */  lw     $a0, %got(indmults)($gp)
/* 00445A1C 96050002 */  lhu   $a1, 2($s0)
/* 00445A20 0320F809 */  jalr  $t9
/* 00445A24 00000000 */   nop
/* 00445A28 10000027 */  b     .L00445AC8
/* 00445A2C 8FBC0028 */   lw    $gp, 0x28($sp)
.L00445A30:
/* 00445A30 2F290040 */  sltiu $t1, $t9, 0x40
/* 00445A34 11200009 */  beqz  $t1, .L00445A5C
/* 00445A38 00000000 */   nop
/* 00445A3C 8F8C8044 */  lw    $t4, %got(D_10010910)($gp)
/* 00445A40 00197143 */  sra   $t6, $t9, 5
/* 00445A44 000E5880 */  sll   $t3, $t6, 2
/* 00445A48 258C0910 */  addiu $t4, %lo(D_10010910) # addiu $t4, $t4, 0x910
/* 00445A4C 018BC021 */  addu  $t8, $t4, $t3
/* 00445A50 8F0F0000 */  lw    $t7, ($t8)
/* 00445A54 032F5004 */  sllv  $t2, $t7, $t9
/* 00445A58 29490000 */  slti  $t1, $t2, 0
.L00445A5C:
/* 00445A5C 5120001B */  beql  $t1, $zero, .L00445ACC
/* 00445A60 AE300014 */   sw    $s0, 0x14($s1)
/* 00445A64 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00445A68 8F848CFC */  lw     $a0, %got(boolexp)($gp)
/* 00445A6C 96050002 */  lhu   $a1, 2($s0)
/* 00445A70 0320F809 */  jalr  $t9
/* 00445A74 00000000 */   nop
/* 00445A78 10000013 */  b     .L00445AC8
/* 00445A7C 8FBC0028 */   lw    $gp, 0x28($sp)
.L00445A80:
/* 00445A80 24010001 */  li    $at, 1
/* 00445A84 54610011 */  bnel  $v1, $at, .L00445ACC
/* 00445A88 AE300014 */   sw    $s0, 0x14($s1)
/* 00445A8C 8E030018 */  lw    $v1, 0x18($s0)
/* 00445A90 8E22002C */  lw    $v0, 0x2c($s1)
/* 00445A94 8E2E0024 */  lw    $t6, 0x24($s1)
/* 00445A98 8E0C0014 */  lw    $t4, 0x14($s0)
/* 00445A9C 004E2021 */  addu  $a0, $v0, $t6
/* 00445AA0 006C5821 */  addu  $t3, $v1, $t4
/* 00445AA4 0164082A */  slt   $at, $t3, $a0
/* 00445AA8 10200003 */  beqz  $at, .L00445AB8
/* 00445AAC 0083C023 */   subu  $t8, $a0, $v1
/* 00445AB0 AE180014 */  sw    $t8, 0x14($s0)
/* 00445AB4 8E22002C */  lw    $v0, 0x2c($s1)
.L00445AB8:
/* 00445AB8 0043082A */  slt   $at, $v0, $v1
/* 00445ABC 50200003 */  beql  $at, $zero, .L00445ACC
/* 00445AC0 AE300014 */   sw    $s0, 0x14($s1)
/* 00445AC4 AE020018 */  sw    $v0, 0x18($s0)
.L00445AC8:
/* 00445AC8 AE300014 */  sw    $s0, 0x14($s1)
.L00445ACC:
/* 00445ACC 02001025 */  move  $v0, $s0
.L00445AD0:
/* 00445AD0 8FBF002C */  lw    $ra, 0x2c($sp)
/* 00445AD4 8FB00018 */  lw    $s0, 0x18($sp)
/* 00445AD8 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00445ADC 8FB20020 */  lw    $s2, 0x20($sp)
/* 00445AE0 8FB30024 */  lw    $s3, 0x24($sp)
/* 00445AE4 03E00008 */  jr    $ra
/* 00445AE8 27BD0040 */   addiu $sp, $sp, 0x40
    .type isearchloop, @function
    .size isearchloop, .-isearchloop
    .end isearchloop

glabel trep_image
    .ent trep_image
    # 0041550C func_0041550C
    # 00445E44 exprimage
    # 0046BD90 change_to_var_eq
/* 00445AEC 3C1C0FBD */  .cpload $t9
/* 00445AF0 279C47A4 */
/* 00445AF4 0399E021 */
/* 00445AF8 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 00445AFC AFA50044 */  sw    $a1, 0x44($sp)
/* 00445B00 93AE0047 */  lbu   $t6, 0x47($sp)
/* 00445B04 AFB00014 */  sw    $s0, 0x14($sp)
/* 00445B08 00808025 */  move  $s0, $a0
/* 00445B0C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00445B10 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00445B14 AFA60048 */  sw    $a2, 0x48($sp)
/* 00445B18 11C00003 */  beqz  $t6, .L00445B28
/* 00445B1C AFA7004C */   sw    $a3, 0x4c($sp)
/* 00445B20 10000002 */  b     .L00445B2C
/* 00445B24 8C870024 */   lw    $a3, 0x24($a0)
.L00445B28:
/* 00445B28 8E070028 */  lw    $a3, 0x28($s0)
.L00445B2C:
/* 00445B2C 90EF0000 */  lbu   $t7, ($a3)
/* 00445B30 3C011200 */  lui   $at, 0x1200
/* 00445B34 2DF80020 */  sltiu $t8, $t7, 0x20
/* 00445B38 0018C823 */  negu  $t9, $t8
/* 00445B3C 03215024 */  and   $t2, $t9, $at
/* 00445B40 01EA5804 */  sllv  $t3, $t2, $t7
/* 00445B44 05610016 */  bgez  $t3, .L00445BA0
/* 00445B48 00000000 */   nop
/* 00445B4C 8CE20030 */  lw    $v0, 0x30($a3)
/* 00445B50 10400013 */  beqz  $v0, .L00445BA0
/* 00445B54 00000000 */   nop
/* 00445B58 8F8389CC */  lw     $v1, %got(nocopy)($gp)
/* 00445B5C 8C630000 */  lw    $v1, ($v1)
/* 00445B60 1062000F */  beq   $v1, $v0, .L00445BA0
/* 00445B64 00000000 */   nop
/* 00445B68 904C0000 */  lbu   $t4, ($v0)
.L00445B6C:
/* 00445B6C 3C011200 */  lui   $at, 0x1200
/* 00445B70 00403825 */  move  $a3, $v0
/* 00445B74 2D8D0020 */  sltiu $t5, $t4, 0x20
/* 00445B78 000D7023 */  negu  $t6, $t5
/* 00445B7C 01C1C024 */  and   $t8, $t6, $at
/* 00445B80 0198C804 */  sllv  $t9, $t8, $t4
/* 00445B84 07210006 */  bgez  $t9, .L00445BA0
/* 00445B88 00000000 */   nop
/* 00445B8C 8C420030 */  lw    $v0, 0x30($v0)
/* 00445B90 10400003 */  beqz  $v0, .L00445BA0
/* 00445B94 00000000 */   nop
/* 00445B98 5462FFF4 */  bnel  $v1, $v0, .L00445B6C
/* 00445B9C 904C0000 */   lbu   $t4, ($v0)
.L00445BA0:
/* 00445BA0 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00445BA4 24040030 */  li    $a0, 48
/* 00445BA8 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00445BAC 0320F809 */  jalr  $t9
/* 00445BB0 AFA7002C */   sw    $a3, 0x2c($sp)
/* 00445BB4 8FA7002C */  lw    $a3, 0x2c($sp)
/* 00445BB8 3C016400 */  lui   $at, 0x6400
/* 00445BBC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00445BC0 90E30000 */  lbu   $v1, ($a3)
/* 00445BC4 AFA20030 */  sw    $v0, 0x30($sp)
/* 00445BC8 2C6A0020 */  sltiu $t2, $v1, 0x20
/* 00445BCC 000A7823 */  negu  $t7, $t2
/* 00445BD0 01E15824 */  and   $t3, $t7, $at
/* 00445BD4 006B6804 */  sllv  $t5, $t3, $v1
/* 00445BD8 05A10003 */  bgez  $t5, .L00445BE8
/* 00445BDC 24010003 */   li    $at, 3
/* 00445BE0 1000008B */  b     .L00445E10
/* 00445BE4 AC400000 */   sw    $zero, ($v0)
.L00445BE8:
/* 00445BE8 10610007 */  beq   $v1, $at, .L00445C08
/* 00445BEC 2404000A */   li    $a0, 10
/* 00445BF0 94EE0006 */  lhu   $t6, 6($a3)
/* 00445BF4 24010001 */  li    $at, 1
/* 00445BF8 51C10004 */  beql  $t6, $at, .L00445C0C
/* 00445BFC 8E180010 */   lw    $t8, 0x10($s0)
/* 00445C00 10000083 */  b     .L00445E10
/* 00445C04 AC400000 */   sw    $zero, ($v0)
.L00445C08:
/* 00445C08 8E180010 */  lw    $t8, 0x10($s0)
.L00445C0C:
/* 00445C0C 8F998344 */  lw    $t9, %call16(opvalihash)($gp)
/* 00445C10 8CE50014 */  lw    $a1, 0x14($a3)
/* 00445C14 97060008 */  lhu   $a2, 8($t8)
/* 00445C18 0320F809 */  jalr  $t9
/* 00445C1C AFA7002C */   sw    $a3, 0x2c($sp)
/* 00445C20 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00445C24 304CFFFF */  andi  $t4, $v0, 0xffff
/* 00445C28 000CC880 */  sll   $t9, $t4, 2
/* 00445C2C 8F8A8DF0 */  lw     $t2, %got(itable)($gp)
/* 00445C30 A7A2003C */  sh    $v0, 0x3c($sp)
/* 00445C34 8FA7002C */  lw    $a3, 0x2c($sp)
/* 00445C38 032A7821 */  addu  $t7, $t9, $t2
/* 00445C3C 8DE30000 */  lw    $v1, ($t7)
/* 00445C40 00002025 */  move  $a0, $zero
/* 00445C44 2408000A */  li    $t0, 10
/* 00445C48 10600017 */  beqz  $v1, .L00445CA8
/* 00445C4C 24060004 */   li    $a2, 4
/* 00445C50 906B0000 */  lbu   $t3, ($v1)
.L00445C54:
/* 00445C54 54CB0010 */  bnel  $a2, $t3, .L00445C98
/* 00445C58 8C63000C */   lw    $v1, 0xc($v1)
/* 00445C5C 906D0010 */  lbu   $t5, 0x10($v1)
/* 00445C60 550D000D */  bnel  $t0, $t5, .L00445C98
/* 00445C64 8C63000C */   lw    $v1, 0xc($v1)
/* 00445C68 8CEE0014 */  lw    $t6, 0x14($a3)
/* 00445C6C 8C780014 */  lw    $t8, 0x14($v1)
/* 00445C70 55D80009 */  bnel  $t6, $t8, .L00445C98
/* 00445C74 8C63000C */   lw    $v1, 0xc($v1)
/* 00445C78 8E0C0010 */  lw    $t4, 0x10($s0)
/* 00445C7C 8C6A001C */  lw    $t2, 0x1c($v1)
/* 00445C80 95990008 */  lhu   $t9, 8($t4)
/* 00445C84 572A0004 */  bnel  $t9, $t2, .L00445C98
/* 00445C88 8C63000C */   lw    $v1, 0xc($v1)
/* 00445C8C 10000002 */  b     .L00445C98
/* 00445C90 24040001 */   li    $a0, 1
/* 00445C94 8C63000C */  lw    $v1, 0xc($v1)
.L00445C98:
/* 00445C98 14800003 */  bnez  $a0, .L00445CA8
/* 00445C9C 00000000 */   nop
/* 00445CA0 5460FFEC */  bnezl $v1, .L00445C54
/* 00445CA4 906B0000 */   lbu   $t3, ($v1)
.L00445CA8:
/* 00445CA8 10800005 */  beqz  $a0, .L00445CC0
/* 00445CAC 93AF0053 */   lbu   $t7, 0x53($sp)
/* 00445CB0 15E0002A */  bnez  $t7, .L00445D5C
/* 00445CB4 8FAB0030 */   lw    $t3, 0x30($sp)
/* 00445CB8 10000055 */  b     .L00445E10
/* 00445CBC AD600000 */   sw    $zero, ($t3)
.L00445CC0:
/* 00445CC0 8F998348 */  lw    $t9, %call16(appendichain)($gp)
/* 00445CC4 97A4003C */  lhu   $a0, 0x3c($sp)
/* 00445CC8 00002825 */  move  $a1, $zero
/* 00445CCC 0320F809 */  jalr  $t9
/* 00445CD0 AFA7002C */   sw    $a3, 0x2c($sp)
/* 00445CD4 8FA7002C */  lw    $a3, 0x2c($sp)
/* 00445CD8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00445CDC 24060004 */  li    $a2, 4
/* 00445CE0 A0460000 */  sb    $a2, ($v0)
/* 00445CE4 90ED0001 */  lbu   $t5, 1($a3)
/* 00445CE8 2408000A */  li    $t0, 10
/* 00445CEC 00402025 */  move  $a0, $v0
/* 00445CF0 A04D0001 */  sb    $t5, 1($v0)
/* 00445CF4 920E0023 */  lbu   $t6, 0x23($s0)
/* 00445CF8 A0480010 */  sb    $t0, 0x10($v0)
/* 00445CFC 00002825 */  move  $a1, $zero
/* 00445D00 A04E0012 */  sb    $t6, 0x12($v0)
/* 00445D04 8CF80014 */  lw    $t8, 0x14($a3)
/* 00445D08 AC400018 */  sw    $zero, 0x18($v0)
/* 00445D0C AC580014 */  sw    $t8, 0x14($v0)
/* 00445D10 8E0C0010 */  lw    $t4, 0x10($s0)
/* 00445D14 95990008 */  lhu   $t9, 8($t4)
/* 00445D18 AC400008 */  sw    $zero, 8($v0)
/* 00445D1C AC59001C */  sw    $t9, 0x1c($v0)
/* 00445D20 8F998664 */  lw    $t9, %call16(newbit)($gp)
/* 00445D24 AFA20024 */  sw    $v0, 0x24($sp)
/* 00445D28 AFA20038 */  sw    $v0, 0x38($sp)
/* 00445D2C 0320F809 */  jalr  $t9
/* 00445D30 00000000 */   nop
/* 00445D34 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00445D38 8FA90024 */  lw    $t1, 0x24($sp)
/* 00445D3C 3045FFFF */  andi  $a1, $v0, 0xffff
/* 00445D40 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00445D44 8F848D04 */  lw     $a0, %got(trepexp)($gp)
/* 00445D48 A5220002 */  sh    $v0, 2($t1)
/* 00445D4C 0320F809 */  jalr  $t9
/* 00445D50 00000000 */   nop
/* 00445D54 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00445D58 8FA30038 */  lw    $v1, 0x38($sp)
.L00445D5C:
/* 00445D5C 93A2004B */  lbu   $v0, 0x4b($sp)
/* 00445D60 8FAA0030 */  lw    $t2, 0x30($sp)
/* 00445D64 10400002 */  beqz  $v0, .L00445D70
/* 00445D68 AD430000 */   sw    $v1, ($t2)
/* 00445D6C 93A2004F */  lbu   $v0, 0x4f($sp)
.L00445D70:
/* 00445D70 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00445D74 8E040010 */  lw    $a0, 0x10($s0)
/* 00445D78 94650002 */  lhu   $a1, 2($v1)
/* 00445D7C AFA20028 */  sw    $v0, 0x28($sp)
/* 00445D80 AFA30038 */  sw    $v1, 0x38($sp)
/* 00445D84 0320F809 */  jalr  $t9
/* 00445D88 2484012C */   addiu $a0, $a0, 0x12c
/* 00445D8C 93AF004B */  lbu   $t7, 0x4b($sp)
/* 00445D90 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00445D94 8FA30038 */  lw    $v1, 0x38($sp)
/* 00445D98 51E0000A */  beql  $t7, $zero, .L00445DC4
/* 00445D9C 93AB004F */   lbu   $t3, 0x4f($sp)
/* 00445DA0 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00445DA4 8E040010 */  lw    $a0, 0x10($s0)
/* 00445DA8 94650002 */  lhu   $a1, 2($v1)
/* 00445DAC AFA30038 */  sw    $v1, 0x38($sp)
/* 00445DB0 0320F809 */  jalr  $t9
/* 00445DB4 24840104 */   addiu $a0, $a0, 0x104
/* 00445DB8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00445DBC 8FA30038 */  lw    $v1, 0x38($sp)
/* 00445DC0 93AB004F */  lbu   $t3, 0x4f($sp)
.L00445DC4:
/* 00445DC4 5160000A */  beql  $t3, $zero, .L00445DF0
/* 00445DC8 93AD002B */   lbu   $t5, 0x2b($sp)
/* 00445DCC 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00445DD0 8E040010 */  lw    $a0, 0x10($s0)
/* 00445DD4 94650002 */  lhu   $a1, 2($v1)
/* 00445DD8 AFA30038 */  sw    $v1, 0x38($sp)
/* 00445DDC 0320F809 */  jalr  $t9
/* 00445DE0 24840114 */   addiu $a0, $a0, 0x114
/* 00445DE4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00445DE8 8FA30038 */  lw    $v1, 0x38($sp)
/* 00445DEC 93AD002B */  lbu   $t5, 0x2b($sp)
.L00445DF0:
/* 00445DF0 55A00008 */  bnezl $t5, .L00445E14
/* 00445DF4 93AE0047 */   lbu   $t6, 0x47($sp)
/* 00445DF8 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00445DFC 8E040010 */  lw    $a0, 0x10($s0)
/* 00445E00 94650002 */  lhu   $a1, 2($v1)
/* 00445E04 0320F809 */  jalr  $t9
/* 00445E08 2484010C */   addiu $a0, $a0, 0x10c
/* 00445E0C 8FBC0018 */  lw    $gp, 0x18($sp)
.L00445E10:
/* 00445E10 93AE0047 */  lbu   $t6, 0x47($sp)
.L00445E14:
/* 00445E14 8FB80030 */  lw    $t8, 0x30($sp)
/* 00445E18 8FAC0030 */  lw    $t4, 0x30($sp)
/* 00445E1C 51C00004 */  beql  $t6, $zero, .L00445E30
/* 00445E20 AE0C003C */   sw    $t4, 0x3c($s0)
/* 00445E24 10000002 */  b     .L00445E30
/* 00445E28 AE180038 */   sw    $t8, 0x38($s0)
/* 00445E2C AE0C003C */  sw    $t4, 0x3c($s0)
.L00445E30:
/* 00445E30 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00445E34 8FB00014 */  lw    $s0, 0x14($sp)
/* 00445E38 27BD0040 */  addiu $sp, $sp, 0x40
/* 00445E3C 03E00008 */  jr    $ra
/* 00445E40 00000000 */   nop
    .type trep_image, @function
    .size trep_image, .-trep_image
    .end trep_image

glabel exprimage
    .ent exprimage
    # 00445E44 exprimage
    # 004471AC codeimage
/* 00445E44 3C1C0FBD */  .cpload $t9
/* 00445E48 279C444C */
/* 00445E4C 0399E021 */
/* 00445E50 27BDFF70 */  addiu $sp, $sp, -0x90
/* 00445E54 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00445E58 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00445E5C AFB0001C */  sw    $s0, 0x1c($sp)
/* 00445E60 AFA50094 */  sw    $a1, 0x94($sp)
/* 00445E64 AFA60098 */  sw    $a2, 0x98($sp)
/* 00445E68 8C830014 */  lw    $v1, 0x14($a0)
/* 00445E6C 00808025 */  move  $s0, $a0
/* 00445E70 5060002C */  beql  $v1, $zero, .L00445F24
/* 00445E74 92020000 */   lbu   $v0, ($s0)
/* 00445E78 92020000 */  lbu   $v0, ($s0)
/* 00445E7C 3C016000 */  lui   $at, 0x6000
/* 00445E80 00602025 */  move  $a0, $v1
/* 00445E84 2C4E0020 */  sltiu $t6, $v0, 0x20
/* 00445E88 000E7823 */  negu  $t7, $t6
/* 00445E8C 01E1C024 */  and   $t8, $t7, $at
/* 00445E90 0058C804 */  sllv  $t9, $t8, $v0
/* 00445E94 07210006 */  bgez  $t9, .L00445EB0
/* 00445E98 24010005 */   li    $at, 5
/* 00445E9C 24030001 */  li    $v1, 1
/* 00445EA0 A0A30000 */  sb    $v1, ($a1)
/* 00445EA4 8FAB0098 */  lw    $t3, 0x98($sp)
/* 00445EA8 100003D5 */  b     .L00446E00
/* 00445EAC A1630000 */   sb    $v1, ($t3)
.L00445EB0:
/* 00445EB0 14410007 */  bne   $v0, $at, .L00445ED0
/* 00445EB4 2C4E0020 */   sltiu $t6, $v0, 0x20
/* 00445EB8 8FAC0094 */  lw    $t4, 0x94($sp)
/* 00445EBC 24030001 */  li    $v1, 1
/* 00445EC0 A1830000 */  sb    $v1, ($t4)
/* 00445EC4 8FAD0098 */  lw    $t5, 0x98($sp)
/* 00445EC8 100003CD */  b     .L00446E00
/* 00445ECC A1A30000 */   sb    $v1, ($t5)
.L00445ED0:
/* 00445ED0 000E7823 */  negu  $t7, $t6
/* 00445ED4 3C011200 */  lui   $at, 0x1200
/* 00445ED8 01E1C024 */  and   $t8, $t7, $at
/* 00445EDC 0058C804 */  sllv  $t9, $t8, $v0
/* 00445EE0 07210009 */  bgez  $t9, .L00445F08
/* 00445EE4 8FB80094 */   lw    $t8, 0x94($sp)
/* 00445EE8 920A0003 */  lbu   $t2, 3($s0)
/* 00445EEC 8FAB0094 */  lw    $t3, 0x94($sp)
/* 00445EF0 A16A0000 */  sb    $t2, ($t3)
/* 00445EF4 920C0002 */  lbu   $t4, 2($s0)
/* 00445EF8 8FAE0098 */  lw    $t6, 0x98($sp)
/* 00445EFC 2D8D0001 */  sltiu $t5, $t4, 1
/* 00445F00 100003BF */  b     .L00446E00
/* 00445F04 A1CD0000 */   sb    $t5, ($t6)
.L00445F08:
/* 00445F08 920F0021 */  lbu   $t7, 0x21($s0)
/* 00445F0C A30F0000 */  sb    $t7, ($t8)
/* 00445F10 8FAA0098 */  lw    $t2, 0x98($sp)
/* 00445F14 92190022 */  lbu   $t9, 0x22($s0)
/* 00445F18 100003B9 */  b     .L00446E00
/* 00445F1C A1590000 */   sb    $t9, ($t2)
/* 00445F20 92020000 */  lbu   $v0, ($s0)
.L00445F24:
/* 00445F24 24040001 */  li    $a0, 1
/* 00445F28 24050248 */  li    $a1, 584
/* 00445F2C 244BFFFF */  addiu $t3, $v0, -1
/* 00445F30 2D610008 */  sltiu $at, $t3, 8
/* 00445F34 102003AB */  beqz  $at, .L00446DE4
/* 00445F38 00000000 */   nop
/* 00445F3C 8F818044 */  lw    $at, %got(jtbl_1000CABC)($gp)
/* 00445F40 000B5880 */  sll   $t3, $t3, 2
/* 00445F44 002B0821 */  addu  $at, $at, $t3
/* 00445F48 8C2BCABC */  lw    $t3, %lo(jtbl_1000CABC)($at)
/* 00445F4C 017C5821 */  addu  $t3, $t3, $gp
/* 00445F50 01600008 */  jr    $t3
/* 00445F54 00000000 */   nop
.L00445F58:
/* 00445F58 92020001 */  lbu   $v0, 1($s0)
/* 00445F5C 3C01BAA0 */  lui   $at, 0xbaa0
/* 00445F60 2C4C0020 */  sltiu $t4, $v0, 0x20
/* 00445F64 000C6823 */  negu  $t5, $t4
/* 00445F68 01A17024 */  and   $t6, $t5, $at
/* 00445F6C 004E7804 */  sllv  $t7, $t6, $v0
/* 00445F70 05E10008 */  bgez  $t7, .L00445F94
/* 00445F74 2C580020 */   sltiu $t8, $v0, 0x20
/* 00445F78 8F998330 */  lw    $t9, %call16(isconstihash)($gp)
/* 00445F7C 8E040020 */  lw    $a0, 0x20($s0)
/* 00445F80 0320F809 */  jalr  $t9
/* 00445F84 00000000 */   nop
/* 00445F88 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00445F8C 10000016 */  b     .L00445FE8
/* 00445F90 3044FFFF */   andi  $a0, $v0, 0xffff
.L00445F94:
/* 00445F94 0018C823 */  negu  $t9, $t8
/* 00445F98 3C010500 */  lui   $at, 0x500
/* 00445F9C 03215024 */  and   $t2, $t9, $at
/* 00445FA0 004A5804 */  sllv  $t3, $t2, $v0
/* 00445FA4 05610008 */  bgez  $t3, .L00445FC8
/* 00445FA8 00000000 */   nop
/* 00445FAC 8F998330 */  lw    $t9, %call16(isconstihash)($gp)
/* 00445FB0 8E040024 */  lw    $a0, 0x24($s0)
/* 00445FB4 0320F809 */  jalr  $t9
/* 00445FB8 00000000 */   nop
/* 00445FBC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00445FC0 10000009 */  b     .L00445FE8
/* 00445FC4 3044FFFF */   andi  $a0, $v0, 0xffff
.L00445FC8:
/* 00445FC8 8F998334 */  lw    $t9, %call16(realihash)($gp)
/* 00445FCC 8E040020 */  lw    $a0, 0x20($s0)
/* 00445FD0 8E050024 */  lw    $a1, 0x24($s0)
/* 00445FD4 AFA40000 */  sw    $a0, ($sp)
/* 00445FD8 0320F809 */  jalr  $t9
/* 00445FDC AFA50004 */   sw    $a1, 4($sp)
/* 00445FE0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00445FE4 3044FFFF */  andi  $a0, $v0, 0xffff
.L00445FE8:
/* 00445FE8 8F99834C */  lw    $t9, %call16(isearchloop)($gp)
/* 00445FEC 02002825 */  move  $a1, $s0
/* 00445FF0 00003025 */  move  $a2, $zero
/* 00445FF4 0320F809 */  jalr  $t9
/* 00445FF8 00003825 */   move  $a3, $zero
/* 00445FFC 8FAE0094 */  lw    $t6, 0x94($sp)
/* 00446000 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00446004 24030001 */  li    $v1, 1
/* 00446008 AFA20084 */  sw    $v0, 0x84($sp)
/* 0044600C A1C30000 */  sb    $v1, ($t6)
/* 00446010 8FAF0098 */  lw    $t7, 0x98($sp)
/* 00446014 10000379 */  b     .L00446DFC
/* 00446018 A1E30000 */   sb    $v1, ($t7)
.L0044601C:
/* 0044601C 8F998330 */  lw    $t9, %call16(isconstihash)($gp)
/* 00446020 96040020 */  lhu   $a0, 0x20($s0)
/* 00446024 0320F809 */  jalr  $t9
/* 00446028 00000000 */   nop
/* 0044602C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00446030 3044FFFF */  andi  $a0, $v0, 0xffff
/* 00446034 02002825 */  move  $a1, $s0
/* 00446038 8F99834C */  lw    $t9, %call16(isearchloop)($gp)
/* 0044603C 00003025 */  move  $a2, $zero
/* 00446040 00003825 */  move  $a3, $zero
/* 00446044 0320F809 */  jalr  $t9
/* 00446048 00000000 */   nop
/* 0044604C 8FB80094 */  lw    $t8, 0x94($sp)
/* 00446050 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00446054 24030001 */  li    $v1, 1
/* 00446058 AFA20084 */  sw    $v0, 0x84($sp)
/* 0044605C A3030000 */  sb    $v1, ($t8)
/* 00446060 8FB90098 */  lw    $t9, 0x98($sp)
/* 00446064 10000365 */  b     .L00446DFC
/* 00446068 A3230000 */   sb    $v1, ($t9)
.L0044606C:
/* 0044606C 8E04002C */  lw    $a0, 0x2c($s0)
/* 00446070 8F99833C */  lw    $t9, %call16(isldaihash)($gp)
/* 00446074 8E060020 */  lw    $a2, 0x20($s0)
/* 00446078 AFA40000 */  sw    $a0, ($sp)
/* 0044607C 8E050030 */  lw    $a1, 0x30($s0)
/* 00446080 0320F809 */  jalr  $t9
/* 00446084 AFA50004 */   sw    $a1, 4($sp)
/* 00446088 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0044608C 3044FFFF */  andi  $a0, $v0, 0xffff
/* 00446090 02002825 */  move  $a1, $s0
/* 00446094 8F99834C */  lw    $t9, %call16(isearchloop)($gp)
/* 00446098 00003025 */  move  $a2, $zero
/* 0044609C 00003825 */  move  $a3, $zero
/* 004460A0 0320F809 */  jalr  $t9
/* 004460A4 00000000 */   nop
/* 004460A8 8FAC0094 */  lw    $t4, 0x94($sp)
/* 004460AC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004460B0 24030001 */  li    $v1, 1
/* 004460B4 AFA20084 */  sw    $v0, 0x84($sp)
/* 004460B8 A1830000 */  sb    $v1, ($t4)
/* 004460BC 8FAD0098 */  lw    $t5, 0x98($sp)
/* 004460C0 1000034E */  b     .L00446DFC
/* 004460C4 A1A30000 */   sb    $v1, ($t5)
.L004460C8:
/* 004460C8 8F998354 */  lw    $t9, %call16(exprimage)($gp)
/* 004460CC 8E040034 */  lw    $a0, 0x34($s0)
/* 004460D0 8FA50094 */  lw    $a1, 0x94($sp)
/* 004460D4 0320F809 */  jalr  $t9
/* 004460D8 8FA60098 */   lw    $a2, 0x98($sp)
/* 004460DC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004460E0 8E04002C */  lw    $a0, 0x2c($s0)
/* 004460E4 8E050030 */  lw    $a1, 0x30($s0)
/* 004460E8 8F998338 */  lw    $t9, %call16(isvarihash)($gp)
/* 004460EC AFA40000 */  sw    $a0, ($sp)
/* 004460F0 AFA50004 */  sw    $a1, 4($sp)
/* 004460F4 0320F809 */  jalr  $t9
/* 004460F8 00000000 */   nop
/* 004460FC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00446100 3044FFFF */  andi  $a0, $v0, 0xffff
/* 00446104 02002825 */  move  $a1, $s0
/* 00446108 8F99834C */  lw    $t9, %call16(isearchloop)($gp)
/* 0044610C 00003025 */  move  $a2, $zero
/* 00446110 00003825 */  move  $a3, $zero
/* 00446114 0320F809 */  jalr  $t9
/* 00446118 00000000 */   nop
/* 0044611C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00446120 00403025 */  move  $a2, $v0
/* 00446124 8F988B20 */  lw     $t8, %got(outofmem)($gp)
/* 00446128 93180000 */  lbu   $t8, ($t8)
/* 0044612C 53000004 */  beql  $t8, $zero, .L00446140
/* 00446130 8E020034 */   lw    $v0, 0x34($s0)
/* 00446134 10000333 */  b     .L00446E04
/* 00446138 8FA2008C */   lw    $v0, 0x8c($sp)
/* 0044613C 8E020034 */  lw    $v0, 0x34($s0)
.L00446140:
/* 00446140 24010006 */  li    $at, 6
/* 00446144 8FAA0094 */  lw    $t2, 0x94($sp)
/* 00446148 90590000 */  lbu   $t9, ($v0)
/* 0044614C 8FAD0094 */  lw    $t5, 0x94($sp)
/* 00446150 13210005 */  beq   $t9, $at, .L00446168
/* 00446154 24030001 */   li    $v1, 1
/* 00446158 A1430000 */  sb    $v1, ($t2)
/* 0044615C 8FAB0098 */  lw    $t3, 0x98($sp)
/* 00446160 10000007 */  b     .L00446180
/* 00446164 A1630000 */   sb    $v1, ($t3)
.L00446168:
/* 00446168 904C0003 */  lbu   $t4, 3($v0)
/* 0044616C A1AC0000 */  sb    $t4, ($t5)
/* 00446170 904E0002 */  lbu   $t6, 2($v0)
/* 00446174 8FB80098 */  lw    $t8, 0x98($sp)
/* 00446178 2DCF0001 */  sltiu $t7, $t6, 1
/* 0044617C A30F0000 */  sb    $t7, ($t8)
.L00446180:
/* 00446180 8FB90094 */  lw    $t9, 0x94($sp)
/* 00446184 8FAA0098 */  lw    $t2, 0x98($sp)
/* 00446188 93230000 */  lbu   $v1, ($t9)
/* 0044618C 10600002 */  beqz  $v1, .L00446198
/* 00446190 00000000 */   nop
/* 00446194 91430000 */  lbu   $v1, ($t2)
.L00446198:
/* 00446198 8F8489B4 */  lw     $a0, %got(curgraphnode)($gp)
/* 0044619C 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004461A0 94C50002 */  lhu   $a1, 2($a2)
/* 004461A4 8C840000 */  lw    $a0, ($a0)
/* 004461A8 AFA3004C */  sw    $v1, 0x4c($sp)
/* 004461AC AFA60084 */  sw    $a2, 0x84($sp)
/* 004461B0 0320F809 */  jalr  $t9
/* 004461B4 2484012C */   addiu $a0, $a0, 0x12c
/* 004461B8 8FAB0094 */  lw    $t3, 0x94($sp)
/* 004461BC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004461C0 8FA3004C */  lw    $v1, 0x4c($sp)
/* 004461C4 916C0000 */  lbu   $t4, ($t3)
/* 004461C8 8FAD0084 */  lw    $t5, 0x84($sp)
/* 004461CC 5180000B */  beql  $t4, $zero, .L004461FC
/* 004461D0 8FAE0098 */   lw    $t6, 0x98($sp)
/* 004461D4 8F8489B4 */  lw     $a0, %got(curgraphnode)($gp)
/* 004461D8 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004461DC 95A50002 */  lhu   $a1, 2($t5)
/* 004461E0 8C840000 */  lw    $a0, ($a0)
/* 004461E4 AFA3004C */  sw    $v1, 0x4c($sp)
/* 004461E8 0320F809 */  jalr  $t9
/* 004461EC 24840104 */   addiu $a0, $a0, 0x104
/* 004461F0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004461F4 8FA3004C */  lw    $v1, 0x4c($sp)
/* 004461F8 8FAE0098 */  lw    $t6, 0x98($sp)
.L004461FC:
/* 004461FC 8FB80084 */  lw    $t8, 0x84($sp)
/* 00446200 91CF0000 */  lbu   $t7, ($t6)
/* 00446204 51E0000B */  beql  $t7, $zero, .L00446234
/* 00446208 307900FF */   andi  $t9, $v1, 0xff
/* 0044620C 8F8489B4 */  lw     $a0, %got(curgraphnode)($gp)
/* 00446210 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00446214 97050002 */  lhu   $a1, 2($t8)
/* 00446218 8C840000 */  lw    $a0, ($a0)
/* 0044621C AFA3004C */  sw    $v1, 0x4c($sp)
/* 00446220 0320F809 */  jalr  $t9
/* 00446224 24840114 */   addiu $a0, $a0, 0x114
/* 00446228 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0044622C 8FA3004C */  lw    $v1, 0x4c($sp)
/* 00446230 307900FF */  andi  $t9, $v1, 0xff
.L00446234:
/* 00446234 172002F1 */  bnez  $t9, .L00446DFC
/* 00446238 8FAA0084 */   lw    $t2, 0x84($sp)
/* 0044623C 8F8489B4 */  lw     $a0, %got(curgraphnode)($gp)
/* 00446240 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00446244 95450002 */  lhu   $a1, 2($t2)
/* 00446248 8C840000 */  lw    $a0, ($a0)
/* 0044624C 0320F809 */  jalr  $t9
/* 00446250 2484010C */   addiu $a0, $a0, 0x10c
/* 00446254 100002E9 */  b     .L00446DFC
/* 00446258 8FBC0020 */   lw    $gp, 0x20($sp)
.L0044625C:
/* 0044625C 8E040028 */  lw    $a0, 0x28($s0)
/* 00446260 8F998338 */  lw    $t9, %call16(isvarihash)($gp)
/* 00446264 AFA40000 */  sw    $a0, ($sp)
/* 00446268 8E05002C */  lw    $a1, 0x2c($s0)
/* 0044626C 0320F809 */  jalr  $t9
/* 00446270 AFA50004 */   sw    $a1, 4($sp)
/* 00446274 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00446278 3044FFFF */  andi  $a0, $v0, 0xffff
/* 0044627C 02002825 */  move  $a1, $s0
/* 00446280 8F99834C */  lw    $t9, %call16(isearchloop)($gp)
/* 00446284 00003025 */  move  $a2, $zero
/* 00446288 00003825 */  move  $a3, $zero
/* 0044628C 0320F809 */  jalr  $t9
/* 00446290 00000000 */   nop
/* 00446294 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00446298 AFA20084 */  sw    $v0, 0x84($sp)
/* 0044629C 8F8D8B20 */  lw     $t5, %got(outofmem)($gp)
/* 004462A0 91AD0000 */  lbu   $t5, ($t5)
/* 004462A4 51A00004 */  beql  $t5, $zero, .L004462B8
/* 004462A8 920E002E */   lbu   $t6, 0x2e($s0)
/* 004462AC 100002D5 */  b     .L00446E04
/* 004462B0 8FA2008C */   lw    $v0, 0x8c($sp)
/* 004462B4 920E002E */  lbu   $t6, 0x2e($s0)
.L004462B8:
/* 004462B8 24010003 */  li    $at, 3
/* 004462BC 31CF0007 */  andi  $t7, $t6, 7
/* 004462C0 15E10093 */  bne   $t7, $at, .L00446510
/* 004462C4 00000000 */   nop
/* 004462C8 8E020028 */  lw    $v0, 0x28($s0)
/* 004462CC 2401001D */  li    $at, 29
/* 004462D0 1041008F */  beq   $v0, $at, .L00446510
/* 004462D4 2458FFE0 */   addiu $t8, $v0, -0x20
/* 004462D8 24010002 */  li    $at, 2
/* 004462DC 1041000A */  beq   $v0, $at, .L00446308
/* 004462E0 2F010003 */   sltiu $at, $t8, 3
/* 004462E4 1020000E */  beqz  $at, .L00446320
/* 004462E8 00000000 */   nop
/* 004462EC 8F818044 */  lw    $at, %got(jtbl_1000CAB0)($gp)
/* 004462F0 0018C080 */  sll   $t8, $t8, 2
/* 004462F4 00380821 */  addu  $at, $at, $t8
/* 004462F8 8C38CAB0 */  lw    $t8, %lo(jtbl_1000CAB0)($at)
/* 004462FC 031CC021 */  addu  $t8, $t8, $gp
/* 00446300 03000008 */  jr    $t8
/* 00446304 00000000 */   nop
.L00446308:
/* 00446308 1000000B */  b     .L00446338
/* 0044630C 24020001 */   li    $v0, 1
.L00446310:
/* 00446310 10000009 */  b     .L00446338
/* 00446314 24020002 */   li    $v0, 2
.L00446318:
/* 00446318 10000007 */  b     .L00446338
/* 0044631C 24020003 */   li    $v0, 3
.L00446320:
/* 00446320 8F99861C */  lw    $t9, %call16(dbgerror)($gp)
/* 00446324 24040202 */  li    $a0, 514
/* 00446328 0320F809 */  jalr  $t9
/* 0044632C 00000000 */   nop
/* 00446330 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00446334 93A20058 */  lbu   $v0, 0x58($sp)
.L00446338:
/* 00446338 8FB90084 */  lw    $t9, 0x84($sp)
/* 0044633C 8F8C8D74 */  lw     $t4, %got(r2bitpos)($gp)
/* 00446340 8F8E89B4 */  lw     $t6, %got(curgraphnode)($gp)
/* 00446344 972A0002 */  lhu   $t2, 2($t9)
/* 00446348 8F988D90 */  lw     $t8, %got(setofr2bbs)($gp)
/* 0044634C 00025880 */  sll   $t3, $v0, 2
/* 00446350 258CFFFC */  addiu $t4, $t4, -4
/* 00446354 016C6821 */  addu  $t5, $t3, $t4
/* 00446358 ADAA0000 */  sw    $t2, ($t5)
/* 0044635C 8DCE0000 */  lw    $t6, ($t6)
/* 00446360 000278C0 */  sll   $t7, $v0, 3
/* 00446364 2718FFF8 */  addiu $t8, $t8, -8
/* 00446368 01F84021 */  addu  $t0, $t7, $t8
/* 0044636C 8D050000 */  lw    $a1, ($t0)
/* 00446370 95C30008 */  lhu   $v1, 8($t6)
/* 00446374 0005C9C0 */  sll   $t9, $a1, 7
/* 00446378 0079082A */  slt   $at, $v1, $t9
/* 0044637C 1420003F */  bnez  $at, .L0044647C
/* 00446380 00602025 */   move  $a0, $v1
/* 00446384 8F8689B8 */  lw     $a2, %got(curstaticno)($gp)
/* 00446388 8F9986E8 */  lw    $t9, %call16(alloc_realloc)($gp)
/* 0044638C 8D040004 */  lw    $a0, 4($t0)
/* 00446390 8CC60000 */  lw    $a2, ($a2)
/* 00446394 8F878954 */  lw     $a3, %got(perm_heap)($gp)
/* 00446398 AFA8002C */  sw    $t0, 0x2c($sp)
/* 0044639C 000631C2 */  srl   $a2, $a2, 7
/* 004463A0 24C60001 */  addiu $a2, $a2, 1
/* 004463A4 0320F809 */  jalr  $t9
/* 004463A8 AFA6006C */   sw    $a2, 0x6c($sp)
/* 004463AC 8FA8002C */  lw    $t0, 0x2c($sp)
/* 004463B0 8FA9006C */  lw    $t1, 0x6c($sp)
/* 004463B4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004463B8 8D060000 */  lw    $a2, ($t0)
/* 004463BC 2524FFFF */  addiu $a0, $t1, -1
/* 004463C0 24850001 */  addiu $a1, $a0, 1
/* 004463C4 0086082A */  slt   $at, $a0, $a2
/* 004463C8 14200027 */  bnez  $at, .L00446468
/* 004463CC AD020004 */   sw    $v0, 4($t0)
/* 004463D0 00A63823 */  subu  $a3, $a1, $a2
/* 004463D4 30E70003 */  andi  $a3, $a3, 3
/* 004463D8 10E0000D */  beqz  $a3, .L00446410
/* 004463DC 00C01825 */   move  $v1, $a2
/* 004463E0 00066100 */  sll   $t4, $a2, 4
/* 004463E4 004C1021 */  addu  $v0, $v0, $t4
/* 004463E8 00E62021 */  addu  $a0, $a3, $a2
.L004463EC:
/* 004463EC 24630001 */  addiu $v1, $v1, 1
/* 004463F0 AC400000 */  sw    $zero, ($v0)
/* 004463F4 AC400004 */  sw    $zero, 4($v0)
/* 004463F8 AC400008 */  sw    $zero, 8($v0)
/* 004463FC AC40000C */  sw    $zero, 0xc($v0)
/* 00446400 1483FFFA */  bne   $a0, $v1, .L004463EC
/* 00446404 24420010 */   addiu $v0, $v0, 0x10
/* 00446408 10650017 */  beq   $v1, $a1, .L00446468
/* 0044640C 00000000 */   nop
.L00446410:
/* 00446410 8D0A0004 */  lw    $t2, 4($t0)
/* 00446414 00036900 */  sll   $t5, $v1, 4
/* 00446418 014D1021 */  addu  $v0, $t2, $t5
.L0044641C:
/* 0044641C 24630004 */  addiu $v1, $v1, 4
/* 00446420 AC400000 */  sw    $zero, ($v0)
/* 00446424 AC400004 */  sw    $zero, 4($v0)
/* 00446428 AC400008 */  sw    $zero, 8($v0)
/* 0044642C AC40000C */  sw    $zero, 0xc($v0)
/* 00446430 AC400010 */  sw    $zero, 0x10($v0)
/* 00446434 AC400014 */  sw    $zero, 0x14($v0)
/* 00446438 AC400018 */  sw    $zero, 0x18($v0)
/* 0044643C AC40001C */  sw    $zero, 0x1c($v0)
/* 00446440 AC400020 */  sw    $zero, 0x20($v0)
/* 00446444 AC400024 */  sw    $zero, 0x24($v0)
/* 00446448 AC400028 */  sw    $zero, 0x28($v0)
/* 0044644C AC40002C */  sw    $zero, 0x2c($v0)
/* 00446450 AC400030 */  sw    $zero, 0x30($v0)
/* 00446454 AC400034 */  sw    $zero, 0x34($v0)
/* 00446458 AC400038 */  sw    $zero, 0x38($v0)
/* 0044645C AC40003C */  sw    $zero, 0x3c($v0)
/* 00446460 1465FFEE */  bne   $v1, $a1, .L0044641C
/* 00446464 24420040 */   addiu $v0, $v0, 0x40
.L00446468:
/* 00446468 8F8E89B4 */  lw     $t6, %got(curgraphnode)($gp)
/* 0044646C AD090000 */  sw    $t1, ($t0)
/* 00446470 8DCE0000 */  lw    $t6, ($t6)
/* 00446474 95C30008 */  lhu   $v1, 8($t6)
/* 00446478 00602025 */  move  $a0, $v1
.L0044647C:
/* 0044647C 308F007F */  andi  $t7, $a0, 0x7f
/* 00446480 2DF80020 */  sltiu $t8, $t7, 0x20
/* 00446484 01E0C827 */  not   $t9, $t7
/* 00446488 25ECFFE0 */  addiu $t4, $t7, -0x20
/* 0044648C 2D8A0020 */  sltiu $t2, $t4, 0x20
/* 00446490 03385804 */  sllv  $t3, $t8, $t9
/* 00446494 25EEFFC0 */  addiu $t6, $t7, -0x40
/* 00446498 2DD80020 */  sltiu $t8, $t6, 0x20
/* 0044649C 032A6804 */  sllv  $t5, $t2, $t9
/* 004464A0 03386004 */  sllv  $t4, $t8, $t9
/* 004464A4 8D180004 */  lw    $t8, 4($t0)
/* 004464A8 AFAD0060 */  sw    $t5, 0x60($sp)
/* 004464AC 25EAFFA0 */  addiu $t2, $t7, -0x60
/* 004464B0 2D4D0020 */  sltiu $t5, $t2, 0x20
/* 004464B4 000311C2 */  srl   $v0, $v1, 7
/* 004464B8 032D7004 */  sllv  $t6, $t5, $t9
/* 004464BC AFAC0064 */  sw    $t4, 0x64($sp)
/* 004464C0 00021100 */  sll   $v0, $v0, 4
/* 004464C4 AFAE0068 */  sw    $t6, 0x68($sp)
/* 004464C8 AFAB005C */  sw    $t3, 0x5c($sp)
/* 004464CC 03026021 */  addu  $t4, $t8, $v0
/* 004464D0 8D8F0000 */  lw    $t7, ($t4)
/* 004464D4 0302C821 */  addu  $t9, $t8, $v0
/* 004464D8 01EB5025 */  or    $t2, $t7, $t3
/* 004464DC AF2A0000 */  sw    $t2, ($t9)
/* 004464E0 8FB80060 */  lw    $t8, 0x60($sp)
/* 004464E4 8D8E0004 */  lw    $t6, 4($t4)
/* 004464E8 01D87825 */  or    $t7, $t6, $t8
/* 004464EC AF2F0004 */  sw    $t7, 4($t9)
/* 004464F0 8FAD0064 */  lw    $t5, 0x64($sp)
/* 004464F4 8D8B0008 */  lw    $t3, 8($t4)
/* 004464F8 016D5025 */  or    $t2, $t3, $t5
/* 004464FC AF2A0008 */  sw    $t2, 8($t9)
/* 00446500 8FB80068 */  lw    $t8, 0x68($sp)
/* 00446504 8D8E000C */  lw    $t6, 0xc($t4)
/* 00446508 01D87825 */  or    $t7, $t6, $t8
/* 0044650C AF2F000C */  sw    $t7, 0xc($t9)
.L00446510:
/* 00446510 8F8489B4 */  lw     $a0, %got(curgraphnode)($gp)
/* 00446514 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00446518 8FAB0084 */  lw    $t3, 0x84($sp)
/* 0044651C 8C840000 */  lw    $a0, ($a0)
/* 00446520 95650002 */  lhu   $a1, 2($t3)
/* 00446524 0320F809 */  jalr  $t9
/* 00446528 2484012C */   addiu $a0, $a0, 0x12c
/* 0044652C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00446530 8FAD0084 */  lw    $t5, 0x84($sp)
/* 00446534 8F8489B4 */  lw     $a0, %got(curgraphnode)($gp)
/* 00446538 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0044653C 95A50024 */  lhu   $a1, 0x24($t5)
/* 00446540 8C840000 */  lw    $a0, ($a0)
/* 00446544 0320F809 */  jalr  $t9
/* 00446548 2484012C */   addiu $a0, $a0, 0x12c
/* 0044654C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00446550 8FAA0084 */  lw    $t2, 0x84($sp)
/* 00446554 8F8489B4 */  lw     $a0, %got(curgraphnode)($gp)
/* 00446558 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0044655C 95450024 */  lhu   $a1, 0x24($t2)
/* 00446560 8C840000 */  lw    $a0, ($a0)
/* 00446564 0320F809 */  jalr  $t9
/* 00446568 2484010C */   addiu $a0, $a0, 0x10c
/* 0044656C 920C0021 */  lbu   $t4, 0x21($s0)
/* 00446570 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00446574 8FAE0094 */  lw    $t6, 0x94($sp)
/* 00446578 11800012 */  beqz  $t4, .L004465C4
/* 0044657C 8FAD0094 */   lw    $t5, 0x94($sp)
/* 00446580 A1C00000 */  sb    $zero, ($t6)
/* 00446584 8FB80098 */  lw    $t8, 0x98($sp)
/* 00446588 8F848D1C */  lw     $a0, %got(vareqv)($gp)
/* 0044658C A3000000 */  sb    $zero, ($t8)
/* 00446590 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00446594 8FAF0084 */  lw    $t7, 0x84($sp)
/* 00446598 0320F809 */  jalr  $t9
/* 0044659C 95E50002 */   lhu   $a1, 2($t7)
/* 004465A0 8FB90084 */  lw    $t9, 0x84($sp)
/* 004465A4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004465A8 97250024 */  lhu   $a1, 0x24($t9)
/* 004465AC 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004465B0 8F848D20 */  lw     $a0, %got(asgneqv)($gp)
/* 004465B4 0320F809 */  jalr  $t9
/* 004465B8 00000000 */   nop
/* 004465BC 10000007 */  b     .L004465DC
/* 004465C0 8FBC0020 */   lw    $gp, 0x20($sp)
.L004465C4:
/* 004465C4 920B0003 */  lbu   $t3, 3($s0)
/* 004465C8 A1AB0000 */  sb    $t3, ($t5)
/* 004465CC 920A0002 */  lbu   $t2, 2($s0)
/* 004465D0 8FAE0098 */  lw    $t6, 0x98($sp)
/* 004465D4 2D4C0001 */  sltiu $t4, $t2, 1
/* 004465D8 A1CC0000 */  sb    $t4, ($t6)
.L004465DC:
/* 004465DC 8FB80094 */  lw    $t8, 0x94($sp)
/* 004465E0 8FAF0098 */  lw    $t7, 0x98($sp)
/* 004465E4 93020000 */  lbu   $v0, ($t8)
/* 004465E8 10400002 */  beqz  $v0, .L004465F4
/* 004465EC 00401825 */   move  $v1, $v0
/* 004465F0 91E30000 */  lbu   $v1, ($t7)
.L004465F4:
/* 004465F4 5040000C */  beql  $v0, $zero, .L00446628
/* 004465F8 8FAB0098 */   lw    $t3, 0x98($sp)
/* 004465FC 8FB90084 */  lw    $t9, 0x84($sp)
/* 00446600 8F8489B4 */  lw     $a0, %got(curgraphnode)($gp)
/* 00446604 97250002 */  lhu   $a1, 2($t9)
/* 00446608 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0044660C 8C840000 */  lw    $a0, ($a0)
/* 00446610 AFA3004C */  sw    $v1, 0x4c($sp)
/* 00446614 0320F809 */  jalr  $t9
/* 00446618 24840104 */   addiu $a0, $a0, 0x104
/* 0044661C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00446620 8FA3004C */  lw    $v1, 0x4c($sp)
/* 00446624 8FAB0098 */  lw    $t3, 0x98($sp)
.L00446628:
/* 00446628 8FAA0084 */  lw    $t2, 0x84($sp)
/* 0044662C 916D0000 */  lbu   $t5, ($t3)
/* 00446630 51A0000B */  beql  $t5, $zero, .L00446660
/* 00446634 306C00FF */   andi  $t4, $v1, 0xff
/* 00446638 8F8489B4 */  lw     $a0, %got(curgraphnode)($gp)
/* 0044663C 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00446640 95450002 */  lhu   $a1, 2($t2)
/* 00446644 8C840000 */  lw    $a0, ($a0)
/* 00446648 AFA3004C */  sw    $v1, 0x4c($sp)
/* 0044664C 0320F809 */  jalr  $t9
/* 00446650 24840114 */   addiu $a0, $a0, 0x114
/* 00446654 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00446658 8FA3004C */  lw    $v1, 0x4c($sp)
/* 0044665C 306C00FF */  andi  $t4, $v1, 0xff
.L00446660:
/* 00446660 158001E6 */  bnez  $t4, .L00446DFC
/* 00446664 8FAE0084 */   lw    $t6, 0x84($sp)
/* 00446668 8F8489B4 */  lw     $a0, %got(curgraphnode)($gp)
/* 0044666C 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00446670 95C50002 */  lhu   $a1, 2($t6)
/* 00446674 8C840000 */  lw    $a0, ($a0)
/* 00446678 0320F809 */  jalr  $t9
/* 0044667C 2484010C */   addiu $a0, $a0, 0x10c
/* 00446680 100001DE */  b     .L00446DFC
/* 00446684 8FBC0020 */   lw    $gp, 0x20($sp)
.L00446688:
/* 00446688 8F998354 */  lw    $t9, %call16(exprimage)($gp)
/* 0044668C 8E040024 */  lw    $a0, 0x24($s0)
/* 00446690 8FA50094 */  lw    $a1, 0x94($sp)
/* 00446694 0320F809 */  jalr  $t9
/* 00446698 8FA60098 */   lw    $a2, 0x98($sp)
/* 0044669C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004466A0 8F988B20 */  lw     $t8, %got(outofmem)($gp)
/* 004466A4 93180000 */  lbu   $t8, ($t8)
/* 004466A8 53000004 */  beql  $t8, $zero, .L004466BC
/* 004466AC 8E040028 */   lw    $a0, 0x28($s0)
/* 004466B0 100001D4 */  b     .L00446E04
/* 004466B4 8FA2008C */   lw    $v0, 0x8c($sp)
/* 004466B8 8E040028 */  lw    $a0, 0x28($s0)
.L004466BC:
/* 004466BC 8F998338 */  lw    $t9, %call16(isvarihash)($gp)
/* 004466C0 AFA40000 */  sw    $a0, ($sp)
/* 004466C4 8E05002C */  lw    $a1, 0x2c($s0)
/* 004466C8 0320F809 */  jalr  $t9
/* 004466CC AFA50004 */   sw    $a1, 4($sp)
/* 004466D0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004466D4 3044FFFF */  andi  $a0, $v0, 0xffff
/* 004466D8 02002825 */  move  $a1, $s0
/* 004466DC 8F99834C */  lw    $t9, %call16(isearchloop)($gp)
/* 004466E0 00003025 */  move  $a2, $zero
/* 004466E4 00003825 */  move  $a3, $zero
/* 004466E8 0320F809 */  jalr  $t9
/* 004466EC 00000000 */   nop
/* 004466F0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004466F4 00401825 */  move  $v1, $v0
/* 004466F8 8F8B8B20 */  lw     $t3, %got(outofmem)($gp)
/* 004466FC 916B0000 */  lbu   $t3, ($t3)
/* 00446700 11600003 */  beqz  $t3, .L00446710
/* 00446704 00000000 */   nop
/* 00446708 100001BE */  b     .L00446E04
/* 0044670C 8FA2008C */   lw    $v0, 0x8c($sp)
.L00446710:
/* 00446710 8F8489B4 */  lw     $a0, %got(curgraphnode)($gp)
/* 00446714 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00446718 94650002 */  lhu   $a1, 2($v1)
/* 0044671C 8C840000 */  lw    $a0, ($a0)
/* 00446720 AFA30084 */  sw    $v1, 0x84($sp)
/* 00446724 0320F809 */  jalr  $t9
/* 00446728 2484012C */   addiu $a0, $a0, 0x12c
/* 0044672C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00446730 8FAD0084 */  lw    $t5, 0x84($sp)
/* 00446734 8F8489B4 */  lw     $a0, %got(curgraphnode)($gp)
/* 00446738 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0044673C 95A50024 */  lhu   $a1, 0x24($t5)
/* 00446740 8C840000 */  lw    $a0, ($a0)
/* 00446744 0320F809 */  jalr  $t9
/* 00446748 2484012C */   addiu $a0, $a0, 0x12c
/* 0044674C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00446750 8FAA0084 */  lw    $t2, 0x84($sp)
/* 00446754 8F8489B4 */  lw     $a0, %got(curgraphnode)($gp)
/* 00446758 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0044675C 95450024 */  lhu   $a1, 0x24($t2)
/* 00446760 8C840000 */  lw    $a0, ($a0)
/* 00446764 0320F809 */  jalr  $t9
/* 00446768 2484010C */   addiu $a0, $a0, 0x10c
/* 0044676C 920C0021 */  lbu   $t4, 0x21($s0)
/* 00446770 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00446774 8FAE0094 */  lw    $t6, 0x94($sp)
/* 00446778 11800012 */  beqz  $t4, .L004467C4
/* 0044677C 8FAD0094 */   lw    $t5, 0x94($sp)
/* 00446780 A1C00000 */  sb    $zero, ($t6)
/* 00446784 8FB80098 */  lw    $t8, 0x98($sp)
/* 00446788 8F848D1C */  lw     $a0, %got(vareqv)($gp)
/* 0044678C A3000000 */  sb    $zero, ($t8)
/* 00446790 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00446794 8FAF0084 */  lw    $t7, 0x84($sp)
/* 00446798 0320F809 */  jalr  $t9
/* 0044679C 95E50002 */   lhu   $a1, 2($t7)
/* 004467A0 8FB90084 */  lw    $t9, 0x84($sp)
/* 004467A4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004467A8 97250024 */  lhu   $a1, 0x24($t9)
/* 004467AC 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004467B0 8F848D20 */  lw     $a0, %got(asgneqv)($gp)
/* 004467B4 0320F809 */  jalr  $t9
/* 004467B8 00000000 */   nop
/* 004467BC 10000007 */  b     .L004467DC
/* 004467C0 8FBC0020 */   lw    $gp, 0x20($sp)
.L004467C4:
/* 004467C4 920B0003 */  lbu   $t3, 3($s0)
/* 004467C8 A1AB0000 */  sb    $t3, ($t5)
/* 004467CC 920A0002 */  lbu   $t2, 2($s0)
/* 004467D0 8FAE0098 */  lw    $t6, 0x98($sp)
/* 004467D4 2D4C0001 */  sltiu $t4, $t2, 1
/* 004467D8 A1CC0000 */  sb    $t4, ($t6)
.L004467DC:
/* 004467DC 8FB80094 */  lw    $t8, 0x94($sp)
/* 004467E0 8FAF0098 */  lw    $t7, 0x98($sp)
/* 004467E4 93020000 */  lbu   $v0, ($t8)
/* 004467E8 10400002 */  beqz  $v0, .L004467F4
/* 004467EC 00401825 */   move  $v1, $v0
/* 004467F0 91E30000 */  lbu   $v1, ($t7)
.L004467F4:
/* 004467F4 5040000C */  beql  $v0, $zero, .L00446828
/* 004467F8 8FAB0098 */   lw    $t3, 0x98($sp)
/* 004467FC 8FB90084 */  lw    $t9, 0x84($sp)
/* 00446800 8F8489B4 */  lw     $a0, %got(curgraphnode)($gp)
/* 00446804 97250002 */  lhu   $a1, 2($t9)
/* 00446808 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0044680C 8C840000 */  lw    $a0, ($a0)
/* 00446810 AFA3004C */  sw    $v1, 0x4c($sp)
/* 00446814 0320F809 */  jalr  $t9
/* 00446818 24840104 */   addiu $a0, $a0, 0x104
/* 0044681C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00446820 8FA3004C */  lw    $v1, 0x4c($sp)
/* 00446824 8FAB0098 */  lw    $t3, 0x98($sp)
.L00446828:
/* 00446828 8FAA0084 */  lw    $t2, 0x84($sp)
/* 0044682C 916D0000 */  lbu   $t5, ($t3)
/* 00446830 51A0000B */  beql  $t5, $zero, .L00446860
/* 00446834 306C00FF */   andi  $t4, $v1, 0xff
/* 00446838 8F8489B4 */  lw     $a0, %got(curgraphnode)($gp)
/* 0044683C 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00446840 95450002 */  lhu   $a1, 2($t2)
/* 00446844 8C840000 */  lw    $a0, ($a0)
/* 00446848 AFA3004C */  sw    $v1, 0x4c($sp)
/* 0044684C 0320F809 */  jalr  $t9
/* 00446850 24840114 */   addiu $a0, $a0, 0x114
/* 00446854 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00446858 8FA3004C */  lw    $v1, 0x4c($sp)
/* 0044685C 306C00FF */  andi  $t4, $v1, 0xff
.L00446860:
/* 00446860 15800166 */  bnez  $t4, .L00446DFC
/* 00446864 8FAE0084 */   lw    $t6, 0x84($sp)
/* 00446868 8F8489B4 */  lw     $a0, %got(curgraphnode)($gp)
/* 0044686C 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00446870 95C50002 */  lhu   $a1, 2($t6)
/* 00446874 8C840000 */  lw    $a0, ($a0)
/* 00446878 0320F809 */  jalr  $t9
/* 0044687C 2484010C */   addiu $a0, $a0, 0x10c
/* 00446880 1000015E */  b     .L00446DFC
/* 00446884 8FBC0020 */   lw    $gp, 0x20($sp)
.L00446888:
/* 00446888 8F998354 */  lw    $t9, %call16(exprimage)($gp)
/* 0044688C 8E040024 */  lw    $a0, 0x24($s0)
/* 00446890 27A50083 */  addiu $a1, $sp, 0x83
/* 00446894 0320F809 */  jalr  $t9
/* 00446898 27A60082 */   addiu $a2, $sp, 0x82
/* 0044689C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004468A0 AFA20078 */  sw    $v0, 0x78($sp)
/* 004468A4 8F988B20 */  lw     $t8, %got(outofmem)($gp)
/* 004468A8 93180000 */  lbu   $t8, ($t8)
/* 004468AC 53000004 */  beql  $t8, $zero, .L004468C0
/* 004468B0 904F0000 */   lbu   $t7, ($v0)
/* 004468B4 10000153 */  b     .L00446E04
/* 004468B8 8FA2008C */   lw    $v0, 0x8c($sp)
/* 004468BC 904F0000 */  lbu   $t7, ($v0)
.L004468C0:
/* 004468C0 24010004 */  li    $at, 4
/* 004468C4 55E10017 */  bnel  $t7, $at, .L00446924
/* 004468C8 92040020 */   lbu   $a0, 0x20($s0)
/* 004468CC 90590010 */  lbu   $t9, 0x10($v0)
/* 004468D0 272BFFE0 */  addiu $t3, $t9, -0x20
/* 004468D4 2D6D0040 */  sltiu $t5, $t3, 0x40
/* 004468D8 11A00009 */  beqz  $t5, .L00446900
/* 004468DC 00000000 */   nop
/* 004468E0 8F8E8044 */  lw    $t6, %got(D_1001096C)($gp)
/* 004468E4 000B5143 */  sra   $t2, $t3, 5
/* 004468E8 000A6080 */  sll   $t4, $t2, 2
/* 004468EC 25CE096C */  addiu $t6, %lo(D_1001096C) # addiu $t6, $t6, 0x96c
/* 004468F0 01CCC021 */  addu  $t8, $t6, $t4
/* 004468F4 8F0F0000 */  lw    $t7, ($t8)
/* 004468F8 016FC804 */  sllv  $t9, $t7, $t3
/* 004468FC 2B2D0000 */  slti  $t5, $t9, 0
.L00446900:
/* 00446900 51A00008 */  beql  $t5, $zero, .L00446924
/* 00446904 92040020 */   lbu   $a0, 0x20($s0)
/* 00446908 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 0044690C 8FAE0078 */  lw    $t6, 0x78($sp)
/* 00446910 8F848CFC */  lw     $a0, %got(boolexp)($gp)
/* 00446914 0320F809 */  jalr  $t9
/* 00446918 95C50002 */   lhu   $a1, 2($t6)
/* 0044691C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00446920 92040020 */  lbu   $a0, 0x20($s0)
.L00446924:
/* 00446924 8F988DBC */  lw     $t8, %got(optab)($gp)
/* 00446928 00046080 */  sll   $t4, $a0, 2
/* 0044692C 01846023 */  subu  $t4, $t4, $a0
/* 00446930 01987821 */  addu  $t7, $t4, $t8
/* 00446934 91EB0002 */  lbu   $t3, 2($t7)
/* 00446938 51600057 */  beql  $t3, $zero, .L00446A98
/* 0044693C 24010036 */   li    $at, 54
/* 00446940 8F998354 */  lw    $t9, %call16(exprimage)($gp)
/* 00446944 8E040028 */  lw    $a0, 0x28($s0)
/* 00446948 27A50081 */  addiu $a1, $sp, 0x81
/* 0044694C 0320F809 */  jalr  $t9
/* 00446950 27A60080 */   addiu $a2, $sp, 0x80
/* 00446954 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00446958 AFA20074 */  sw    $v0, 0x74($sp)
/* 0044695C 8F998B20 */  lw     $t9, %got(outofmem)($gp)
/* 00446960 93390000 */  lbu   $t9, ($t9)
/* 00446964 53200004 */  beql  $t9, $zero, .L00446978
/* 00446968 904A0000 */   lbu   $t2, ($v0)
/* 0044696C 10000125 */  b     .L00446E04
/* 00446970 8FA2008C */   lw    $v0, 0x8c($sp)
/* 00446974 904A0000 */  lbu   $t2, ($v0)
.L00446978:
/* 00446978 24010004 */  li    $at, 4
/* 0044697C 15410016 */  bne   $t2, $at, .L004469D8
/* 00446980 00000000 */   nop
/* 00446984 904D0010 */  lbu   $t5, 0x10($v0)
/* 00446988 25AEFFE0 */  addiu $t6, $t5, -0x20
/* 0044698C 2DCC0040 */  sltiu $t4, $t6, 0x40
/* 00446990 11800009 */  beqz  $t4, .L004469B8
/* 00446994 00000000 */   nop
/* 00446998 8F8B8044 */  lw    $t3, %got(D_1001096C)($gp)
/* 0044699C 000EC143 */  sra   $t8, $t6, 5
/* 004469A0 00187880 */  sll   $t7, $t8, 2
/* 004469A4 256B096C */  addiu $t3, %lo(D_1001096C) # addiu $t3, $t3, 0x96c
/* 004469A8 016FC821 */  addu  $t9, $t3, $t7
/* 004469AC 8F2A0000 */  lw    $t2, ($t9)
/* 004469B0 01CA6804 */  sllv  $t5, $t2, $t6
/* 004469B4 29AC0000 */  slti  $t4, $t5, 0
.L004469B8:
/* 004469B8 11800007 */  beqz  $t4, .L004469D8
/* 004469BC 00000000 */   nop
/* 004469C0 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 004469C4 8FAB0074 */  lw    $t3, 0x74($sp)
/* 004469C8 8F848CFC */  lw     $a0, %got(boolexp)($gp)
/* 004469CC 0320F809 */  jalr  $t9
/* 004469D0 95650002 */   lhu   $a1, 2($t3)
/* 004469D4 8FBC0020 */  lw    $gp, 0x20($sp)
.L004469D8:
/* 004469D8 8F998340 */  lw    $t9, %call16(isopihash)($gp)
/* 004469DC 92040020 */  lbu   $a0, 0x20($s0)
/* 004469E0 8FA50078 */  lw    $a1, 0x78($sp)
/* 004469E4 0320F809 */  jalr  $t9
/* 004469E8 8FA60074 */   lw    $a2, 0x74($sp)
/* 004469EC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004469F0 3044FFFF */  andi  $a0, $v0, 0xffff
/* 004469F4 02002825 */  move  $a1, $s0
/* 004469F8 8F99834C */  lw    $t9, %call16(isearchloop)($gp)
/* 004469FC 8FA60078 */  lw    $a2, 0x78($sp)
/* 00446A00 8FA70074 */  lw    $a3, 0x74($sp)
/* 00446A04 0320F809 */  jalr  $t9
/* 00446A08 00000000 */   nop
/* 00446A0C 93A30083 */  lbu   $v1, 0x83($sp)
/* 00446A10 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00446A14 AFA20084 */  sw    $v0, 0x84($sp)
/* 00446A18 10600002 */  beqz  $v1, .L00446A24
/* 00446A1C 8FA60094 */   lw    $a2, 0x94($sp)
/* 00446A20 93A30081 */  lbu   $v1, 0x81($sp)
.L00446A24:
/* 00446A24 A0C30000 */  sb    $v1, ($a2)
/* 00446A28 93B90082 */  lbu   $t9, 0x82($sp)
/* 00446A2C 8FA70098 */  lw    $a3, 0x98($sp)
/* 00446A30 13200002 */  beqz  $t9, .L00446A3C
/* 00446A34 03201825 */   move  $v1, $t9
/* 00446A38 93A30080 */  lbu   $v1, 0x80($sp)
.L00446A3C:
/* 00446A3C 920A0020 */  lbu   $t2, 0x20($s0)
/* 00446A40 3C010003 */  lui   $at, 3
/* 00446A44 34218C80 */  ori   $at, $at, 0x8c80
/* 00446A48 254EFFE0 */  addiu $t6, $t2, -0x20
/* 00446A4C 2DCD0020 */  sltiu $t5, $t6, 0x20
/* 00446A50 000DC023 */  negu  $t8, $t5
/* 00446A54 03016024 */  and   $t4, $t8, $at
/* 00446A58 01CC5804 */  sllv  $t3, $t4, $t6
/* 00446A5C 0561007B */  bgez  $t3, .L00446C4C
/* 00446A60 A0E30000 */   sb    $v1, ($a3)
/* 00446A64 90C30000 */  lbu   $v1, ($a2)
/* 00446A68 50600003 */  beql  $v1, $zero, .L00446A78
/* 00446A6C A0C30000 */   sb    $v1, ($a2)
/* 00446A70 92030003 */  lbu   $v1, 3($s0)
/* 00446A74 A0C30000 */  sb    $v1, ($a2)
.L00446A78:
/* 00446A78 90E30000 */  lbu   $v1, ($a3)
/* 00446A7C 10600003 */  beqz  $v1, .L00446A8C
/* 00446A80 00000000 */   nop
/* 00446A84 92030002 */  lbu   $v1, 2($s0)
/* 00446A88 2C630001 */  sltiu $v1, $v1, 1
.L00446A8C:
/* 00446A8C 1000006F */  b     .L00446C4C
/* 00446A90 A0E30000 */   sb    $v1, ($a3)
/* 00446A94 24010036 */  li    $at, 54
.L00446A98:
/* 00446A98 5481000C */  bnel  $a0, $at, .L00446ACC
/* 00446A9C 2499FFE0 */   addiu $t9, $a0, -0x20
/* 00446AA0 8E0F0038 */  lw    $t7, 0x38($s0)
/* 00446AA4 55E00009 */  bnezl $t7, .L00446ACC
/* 00446AA8 2499FFE0 */   addiu $t9, $a0, -0x20
/* 00446AAC 8F998428 */  lw    $t9, %call16(assign_mtag)($gp)
/* 00446AB0 8E040034 */  lw    $a0, 0x34($s0)
/* 00446AB4 0320F809 */  jalr  $t9
/* 00446AB8 00000000 */   nop
/* 00446ABC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00446AC0 AE020038 */  sw    $v0, 0x38($s0)
/* 00446AC4 92040020 */  lbu   $a0, 0x20($s0)
/* 00446AC8 2499FFE0 */  addiu $t9, $a0, -0x20
.L00446ACC:
/* 00446ACC 2F2A0080 */  sltiu $t2, $t9, 0x80
/* 00446AD0 11400009 */  beqz  $t2, .L00446AF8
/* 00446AD4 00000000 */   nop
/* 00446AD8 8F8C8044 */  lw    $t4, %got(D_1001095C)($gp)
/* 00446ADC 00196943 */  sra   $t5, $t9, 5
/* 00446AE0 000DC080 */  sll   $t8, $t5, 2
/* 00446AE4 258C095C */  addiu $t4, %lo(D_1001095C) # addiu $t4, $t4, 0x95c
/* 00446AE8 01987021 */  addu  $t6, $t4, $t8
/* 00446AEC 8DCB0000 */  lw    $t3, ($t6)
/* 00446AF0 032B7804 */  sllv  $t7, $t3, $t9
/* 00446AF4 29EA0000 */  slti  $t2, $t7, 0
.L00446AF8:
/* 00446AF8 5140000A */  beql  $t2, $zero, .L00446B24
/* 00446AFC 2C8C00A0 */   sltiu $t4, $a0, 0xa0
/* 00446B00 8F998344 */  lw    $t9, %call16(opvalihash)($gp)
/* 00446B04 8FA50078 */  lw    $a1, 0x78($sp)
/* 00446B08 00003025 */  move  $a2, $zero
/* 00446B0C 0320F809 */  jalr  $t9
/* 00446B10 00000000 */   nop
/* 00446B14 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00446B18 1000001D */  b     .L00446B90
/* 00446B1C 3044FFFF */   andi  $a0, $v0, 0xffff
/* 00446B20 2C8C00A0 */  sltiu $t4, $a0, 0xa0
.L00446B24:
/* 00446B24 11800009 */  beqz  $t4, .L00446B4C
/* 00446B28 00000000 */   nop
/* 00446B2C 8F8B8044 */  lw    $t3, %got(D_10010948)($gp)
/* 00446B30 0004C143 */  sra   $t8, $a0, 5
/* 00446B34 00187080 */  sll   $t6, $t8, 2
/* 00446B38 256B0948 */  addiu $t3, %lo(D_10010948) # addiu $t3, $t3, 0x948
/* 00446B3C 016EC821 */  addu  $t9, $t3, $t6
/* 00446B40 8F2F0000 */  lw    $t7, ($t9)
/* 00446B44 008F6804 */  sllv  $t5, $t7, $a0
/* 00446B48 29AC0000 */  slti  $t4, $t5, 0
.L00446B4C:
/* 00446B4C 11800009 */  beqz  $t4, .L00446B74
/* 00446B50 00000000 */   nop
/* 00446B54 8F998344 */  lw    $t9, %call16(opvalihash)($gp)
/* 00446B58 8FA50078 */  lw    $a1, 0x78($sp)
/* 00446B5C 8E06002C */  lw    $a2, 0x2c($s0)
/* 00446B60 0320F809 */  jalr  $t9
/* 00446B64 00000000 */   nop
/* 00446B68 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00446B6C 10000008 */  b     .L00446B90
/* 00446B70 3044FFFF */   andi  $a0, $v0, 0xffff
.L00446B74:
/* 00446B74 8F998340 */  lw    $t9, %call16(isopihash)($gp)
/* 00446B78 8FA50078 */  lw    $a1, 0x78($sp)
/* 00446B7C 00003025 */  move  $a2, $zero
/* 00446B80 0320F809 */  jalr  $t9
/* 00446B84 00000000 */   nop
/* 00446B88 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00446B8C 3044FFFF */  andi  $a0, $v0, 0xffff
.L00446B90:
/* 00446B90 8F99834C */  lw    $t9, %call16(isearchloop)($gp)
/* 00446B94 02002825 */  move  $a1, $s0
/* 00446B98 8FA60078 */  lw    $a2, 0x78($sp)
/* 00446B9C 0320F809 */  jalr  $t9
/* 00446BA0 00003825 */   move  $a3, $zero
/* 00446BA4 92180020 */  lbu   $t8, 0x20($s0)
/* 00446BA8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00446BAC AFA20084 */  sw    $v0, 0x84($sp)
/* 00446BB0 270BFFE0 */  addiu $t3, $t8, -0x20
/* 00446BB4 2D6E0080 */  sltiu $t6, $t3, 0x80
/* 00446BB8 11C0000A */  beqz  $t6, .L00446BE4
/* 00446BBC 00000000 */   nop
/* 00446BC0 8F8D8044 */  lw    $t5, %got(D_10010938)($gp)
/* 00446BC4 000BC943 */  sra   $t9, $t3, 5
/* 00446BC8 00197880 */  sll   $t7, $t9, 2
/* 00446BCC 25AD0938 */  addiu $t5, %lo(D_10010938) # addiu $t5, $t5, 0x938
/* 00446BD0 01AF5021 */  addu  $t2, $t5, $t7
/* 00446BD4 8D4C0000 */  lw    $t4, ($t2)
/* 00446BD8 016CC004 */  sllv  $t8, $t4, $t3
/* 00446BDC 2B190000 */  slti  $t9, $t8, 0
/* 00446BE0 03207025 */  move  $t6, $t9
.L00446BE4:
/* 00446BE4 51C00012 */  beql  $t6, $zero, .L00446C30
/* 00446BE8 93AB0083 */   lbu   $t3, 0x83($sp)
/* 00446BEC 93A30083 */  lbu   $v1, 0x83($sp)
/* 00446BF0 8FAF0094 */  lw    $t7, 0x94($sp)
/* 00446BF4 50600003 */  beql  $v1, $zero, .L00446C04
/* 00446BF8 A1E30000 */   sb    $v1, ($t7)
/* 00446BFC 92030003 */  lbu   $v1, 3($s0)
/* 00446C00 A1E30000 */  sb    $v1, ($t7)
.L00446C04:
/* 00446C04 93A30082 */  lbu   $v1, 0x82($sp)
/* 00446C08 8FAC0098 */  lw    $t4, 0x98($sp)
/* 00446C0C 50600004 */  beql  $v1, $zero, .L00446C20
/* 00446C10 A1830000 */   sb    $v1, ($t4)
/* 00446C14 92030002 */  lbu   $v1, 2($s0)
/* 00446C18 2C630001 */  sltiu $v1, $v1, 1
/* 00446C1C A1830000 */  sb    $v1, ($t4)
.L00446C20:
/* 00446C20 8FA60094 */  lw    $a2, 0x94($sp)
/* 00446C24 10000009 */  b     .L00446C4C
/* 00446C28 8FA70098 */   lw    $a3, 0x98($sp)
/* 00446C2C 93AB0083 */  lbu   $t3, 0x83($sp)
.L00446C30:
/* 00446C30 8FB80094 */  lw    $t8, 0x94($sp)
/* 00446C34 A30B0000 */  sb    $t3, ($t8)
/* 00446C38 8FAE0098 */  lw    $t6, 0x98($sp)
/* 00446C3C 93B90082 */  lbu   $t9, 0x82($sp)
/* 00446C40 A1D90000 */  sb    $t9, ($t6)
/* 00446C44 8FA60094 */  lw    $a2, 0x94($sp)
/* 00446C48 8FA70098 */  lw    $a3, 0x98($sp)
.L00446C4C:
/* 00446C4C 8F8D8B20 */  lw     $t5, %got(outofmem)($gp)
/* 00446C50 91AD0000 */  lbu   $t5, ($t5)
/* 00446C54 51A00004 */  beql  $t5, $zero, .L00446C68
/* 00446C58 920F0023 */   lbu   $t7, 0x23($s0)
/* 00446C5C 10000069 */  b     .L00446E04
/* 00446C60 8FA2008C */   lw    $v0, 0x8c($sp)
/* 00446C64 920F0023 */  lbu   $t7, 0x23($s0)
.L00446C68:
/* 00446C68 2401000E */  li    $at, 14
/* 00446C6C 55E10004 */  bnel  $t7, $at, .L00446C80
/* 00446C70 90C20000 */   lbu   $v0, ($a2)
/* 00446C74 A0C00000 */  sb    $zero, ($a2)
/* 00446C78 A0E00000 */  sb    $zero, ($a3)
/* 00446C7C 90C20000 */  lbu   $v0, ($a2)
.L00446C80:
/* 00446C80 10400002 */  beqz  $v0, .L00446C8C
/* 00446C84 00401825 */   move  $v1, $v0
/* 00446C88 90E30000 */  lbu   $v1, ($a3)
.L00446C8C:
/* 00446C8C 90EA0000 */  lbu   $t2, ($a3)
/* 00446C90 8F8489B4 */  lw     $a0, %got(curgraphnode)($gp)
/* 00446C94 8FAC0084 */  lw    $t4, 0x84($sp)
/* 00446C98 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00446C9C A2020021 */  sb    $v0, 0x21($s0)
/* 00446CA0 A20A0022 */  sb    $t2, 0x22($s0)
/* 00446CA4 8C840000 */  lw    $a0, ($a0)
/* 00446CA8 95850002 */  lhu   $a1, 2($t4)
/* 00446CAC AFA3004C */  sw    $v1, 0x4c($sp)
/* 00446CB0 0320F809 */  jalr  $t9
/* 00446CB4 2484012C */   addiu $a0, $a0, 0x12c
/* 00446CB8 8FAB0094 */  lw    $t3, 0x94($sp)
/* 00446CBC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00446CC0 8FA3004C */  lw    $v1, 0x4c($sp)
/* 00446CC4 91780000 */  lbu   $t8, ($t3)
/* 00446CC8 8FB90084 */  lw    $t9, 0x84($sp)
/* 00446CCC 5300000B */  beql  $t8, $zero, .L00446CFC
/* 00446CD0 8FAE0098 */   lw    $t6, 0x98($sp)
/* 00446CD4 8F8489B4 */  lw     $a0, %got(curgraphnode)($gp)
/* 00446CD8 97250002 */  lhu   $a1, 2($t9)
/* 00446CDC 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00446CE0 8C840000 */  lw    $a0, ($a0)
/* 00446CE4 AFA3004C */  sw    $v1, 0x4c($sp)
/* 00446CE8 0320F809 */  jalr  $t9
/* 00446CEC 24840104 */   addiu $a0, $a0, 0x104
/* 00446CF0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00446CF4 8FA3004C */  lw    $v1, 0x4c($sp)
/* 00446CF8 8FAE0098 */  lw    $t6, 0x98($sp)
.L00446CFC:
/* 00446CFC 8FAF0084 */  lw    $t7, 0x84($sp)
/* 00446D00 91CD0000 */  lbu   $t5, ($t6)
/* 00446D04 51A0000B */  beql  $t5, $zero, .L00446D34
/* 00446D08 306A00FF */   andi  $t2, $v1, 0xff
/* 00446D0C 8F8489B4 */  lw     $a0, %got(curgraphnode)($gp)
/* 00446D10 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00446D14 95E50002 */  lhu   $a1, 2($t7)
/* 00446D18 8C840000 */  lw    $a0, ($a0)
/* 00446D1C AFA3004C */  sw    $v1, 0x4c($sp)
/* 00446D20 0320F809 */  jalr  $t9
/* 00446D24 24840114 */   addiu $a0, $a0, 0x114
/* 00446D28 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00446D2C 8FA3004C */  lw    $v1, 0x4c($sp)
/* 00446D30 306A00FF */  andi  $t2, $v1, 0xff
.L00446D34:
/* 00446D34 15400008 */  bnez  $t2, .L00446D58
/* 00446D38 8FAC0084 */   lw    $t4, 0x84($sp)
/* 00446D3C 8F8489B4 */  lw     $a0, %got(curgraphnode)($gp)
/* 00446D40 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00446D44 95850002 */  lhu   $a1, 2($t4)
/* 00446D48 8C840000 */  lw    $a0, ($a0)
/* 00446D4C 0320F809 */  jalr  $t9
/* 00446D50 2484010C */   addiu $a0, $a0, 0x10c
/* 00446D54 8FBC0020 */  lw    $gp, 0x20($sp)
.L00446D58:
/* 00446D58 920B0020 */  lbu   $t3, 0x20($s0)
/* 00446D5C 2578FFE0 */  addiu $t8, $t3, -0x20
/* 00446D60 2F190040 */  sltiu $t9, $t8, 0x40
/* 00446D64 13200009 */  beqz  $t9, .L00446D8C
/* 00446D68 00000000 */   nop
/* 00446D6C 8F8F8044 */  lw    $t7, %got(D_10010930)($gp)
/* 00446D70 00187143 */  sra   $t6, $t8, 5
/* 00446D74 000E6880 */  sll   $t5, $t6, 2
/* 00446D78 25EF0930 */  addiu $t7, %lo(D_10010930) # addiu $t7, $t7, 0x930
/* 00446D7C 01ED5021 */  addu  $t2, $t7, $t5
/* 00446D80 8D4C0000 */  lw    $t4, ($t2)
/* 00446D84 030C5804 */  sllv  $t3, $t4, $t8
/* 00446D88 29790000 */  slti  $t9, $t3, 0
.L00446D8C:
/* 00446D8C 5320001C */  beql  $t9, $zero, .L00446E00
/* 00446D90 8FA40084 */   lw    $a0, 0x84($sp)
/* 00446D94 8E0F0038 */  lw    $t7, 0x38($s0)
/* 00446D98 02002025 */  move  $a0, $s0
/* 00446D9C 24050001 */  li    $a1, 1
/* 00446DA0 55E00017 */  bnezl $t7, .L00446E00
/* 00446DA4 8FA40084 */   lw    $a0, 0x84($sp)
/* 00446DA8 8F998350 */  lw    $t9, %call16(trep_image)($gp)
/* 00446DAC 93A60083 */  lbu   $a2, 0x83($sp)
/* 00446DB0 93A70082 */  lbu   $a3, 0x82($sp)
/* 00446DB4 0320F809 */  jalr  $t9
/* 00446DB8 AFA00010 */   sw    $zero, 0x10($sp)
/* 00446DBC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00446DC0 02002025 */  move  $a0, $s0
/* 00446DC4 00002825 */  move  $a1, $zero
/* 00446DC8 8F998350 */  lw    $t9, %call16(trep_image)($gp)
/* 00446DCC 93A60081 */  lbu   $a2, 0x81($sp)
/* 00446DD0 93A70080 */  lbu   $a3, 0x80($sp)
/* 00446DD4 0320F809 */  jalr  $t9
/* 00446DD8 AFA00010 */   sw    $zero, 0x10($sp)
/* 00446DDC 10000007 */  b     .L00446DFC
/* 00446DE0 8FBC0020 */   lw    $gp, 0x20($sp)
.L00446DE4:
/* 00446DE4 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00446DE8 8F868044 */  lw    $a2, %got(RO_1000CAA4)($gp)
/* 00446DEC 2407000A */  li    $a3, 10
/* 00446DF0 0320F809 */  jalr  $t9
/* 00446DF4 24C6CAA4 */   addiu $a2, %lo(RO_1000CAA4) # addiu $a2, $a2, -0x355c
/* 00446DF8 8FBC0020 */  lw    $gp, 0x20($sp)
.L00446DFC:
/* 00446DFC 8FA40084 */  lw    $a0, 0x84($sp)
.L00446E00:
/* 00446E00 00801025 */  move  $v0, $a0
.L00446E04:
/* 00446E04 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00446E08 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00446E0C 27BD0090 */  addiu $sp, $sp, 0x90
/* 00446E10 03E00008 */  jr    $ra
/* 00446E14 00000000 */   nop
    .type exprimage, @function
    .size exprimage, .-exprimage
    .end exprimage

glabel searchstore
    .ent searchstore
    # 004175BC copypropagate
    # 004471AC codeimage
/* 00446E18 3C1C0FBD */  .cpload $t9
/* 00446E1C 279C3478 */
/* 00446E20 0399E021 */
/* 00446E24 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 00446E28 AFA40038 */  sw    $a0, 0x38($sp)
/* 00446E2C 97AE003A */  lhu   $t6, 0x3a($sp)
/* 00446E30 8F988DF0 */  lw     $t8, %got(itable)($gp)
/* 00446E34 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00446E38 000E7880 */  sll   $t7, $t6, 2
/* 00446E3C AFBC0020 */  sw    $gp, 0x20($sp)
/* 00446E40 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00446E44 AFB00018 */  sw    $s0, 0x18($sp)
/* 00446E48 AFA5003C */  sw    $a1, 0x3c($sp)
/* 00446E4C AFA60040 */  sw    $a2, 0x40($sp)
/* 00446E50 01F8C821 */  addu  $t9, $t7, $t8
/* 00446E54 8F300000 */  lw    $s0, ($t9)
/* 00446E58 00E08825 */  move  $s1, $a3
/* 00446E5C 00004025 */  move  $t0, $zero
/* 00446E60 12000076 */  beqz  $s0, .L0044703C
/* 00446E64 8FA90048 */   lw    $t1, 0x48($sp)
/* 00446E68 920A0000 */  lbu   $t2, ($s0)
.L00446E6C:
/* 00446E6C 24010004 */  li    $at, 4
/* 00446E70 93AB003F */  lbu   $t3, 0x3f($sp)
/* 00446E74 1541006A */  bne   $t2, $at, .L00447020
/* 00446E78 00000000 */   nop
/* 00446E7C 92030010 */  lbu   $v1, 0x10($s0)
/* 00446E80 8FAC0040 */  lw    $t4, 0x40($sp)
/* 00446E84 15630066 */  bne   $t3, $v1, .L00447020
/* 00446E88 00000000 */   nop
/* 00446E8C 8E0D0014 */  lw    $t5, 0x14($s0)
/* 00446E90 158D0063 */  bne   $t4, $t5, .L00447020
/* 00446E94 00000000 */   nop
/* 00446E98 10000027 */  b     .L00446F38
/* 00446E9C 306200FF */   andi  $v0, $v1, 0xff
.L00446EA0:
/* 00446EA0 8E0E0018 */  lw    $t6, 0x18($s0)
.L00446EA4:
/* 00446EA4 022E4026 */  xor   $t0, $s1, $t6
/* 00446EA8 2D080001 */  sltiu $t0, $t0, 1
/* 00446EAC 1000005C */  b     .L00447020
/* 00446EB0 310800FF */   andi  $t0, $t0, 0xff
.L00446EB4:
/* 00446EB4 8E0F0018 */  lw    $t7, 0x18($s0)
.L00446EB8:
/* 00446EB8 022F1026 */  xor   $v0, $s1, $t7
/* 00446EBC 2C420001 */  sltiu $v0, $v0, 1
/* 00446EC0 1040000A */  beqz  $v0, .L00446EEC
/* 00446EC4 00000000 */   nop
/* 00446EC8 8E180024 */  lw    $t8, 0x24($s0)
/* 00446ECC 01381026 */  xor   $v0, $t1, $t8
/* 00446ED0 2C420001 */  sltiu $v0, $v0, 1
/* 00446ED4 10400005 */  beqz  $v0, .L00446EEC
/* 00446ED8 00000000 */   nop
/* 00446EDC 8FB9004C */  lw    $t9, 0x4c($sp)
/* 00446EE0 8E0A001C */  lw    $t2, 0x1c($s0)
/* 00446EE4 032A1026 */  xor   $v0, $t9, $t2
/* 00446EE8 2C420001 */  sltiu $v0, $v0, 1
.L00446EEC:
/* 00446EEC 1000004C */  b     .L00447020
/* 00446EF0 304800FF */   andi  $t0, $v0, 0xff
/* 00446EF4 8E0B0018 */  lw    $t3, 0x18($s0)
.L00446EF8:
/* 00446EF8 022B4026 */  xor   $t0, $s1, $t3
/* 00446EFC 2D080001 */  sltiu $t0, $t0, 1
/* 00446F00 10000047 */  b     .L00447020
/* 00446F04 310800FF */   andi  $t0, $t0, 0xff
/* 00446F08 8E0C0018 */  lw    $t4, 0x18($s0)
.L00446F0C:
/* 00446F0C 022C1026 */  xor   $v0, $s1, $t4
/* 00446F10 2C420001 */  sltiu $v0, $v0, 1
/* 00446F14 10400004 */  beqz  $v0, .L00446F28
/* 00446F18 00000000 */   nop
/* 00446F1C 8E0D001C */  lw    $t5, 0x1c($s0)
/* 00446F20 012D1026 */  xor   $v0, $t1, $t5
/* 00446F24 2C420001 */  sltiu $v0, $v0, 1
.L00446F28:
/* 00446F28 1000003D */  b     .L00447020
/* 00446F2C 304800FF */   andi  $t0, $v0, 0xff
.L00446F30:
/* 00446F30 1000003B */  b     .L00447020
/* 00446F34 24080001 */   li    $t0, 1
.L00446F38:
/* 00446F38 2C41007C */  sltiu $at, $v0, 0x7c
/* 00446F3C 14200018 */  bnez  $at, .L00446FA0
/* 00446F40 2C410095 */   sltiu $at, $v0, 0x95
/* 00446F44 14200005 */  bnez  $at, .L00446F5C
/* 00446F48 2401009B */   li    $at, 155
/* 00446F4C 5041FFDA */  beql  $v0, $at, .L00446EB8
/* 00446F50 8E0F0018 */   lw    $t7, 0x18($s0)
/* 00446F54 10000006 */  b     .L00446F70
/* 00446F58 00000000 */   nop
.L00446F5C:
/* 00446F5C 2C410086 */  sltiu $at, $v0, 0x86
/* 00446F60 1020002A */  beqz  $at, .L0044700C
/* 00446F64 2C410080 */   sltiu $at, $v0, 0x80
/* 00446F68 5020FFE8 */  beql  $at, $zero, .L00446F0C
/* 00446F6C 8E0C0018 */   lw    $t4, 0x18($s0)
.L00446F70:
/* 00446F70 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00446F74 8F868044 */  lw    $a2, %got(RO_1000CADC)($gp)
/* 00446F78 24040001 */  li    $a0, 1
/* 00446F7C 2405033B */  li    $a1, 827
/* 00446F80 2407000A */  li    $a3, 10
/* 00446F84 A3A8002F */  sb    $t0, 0x2f($sp)
/* 00446F88 0320F809 */  jalr  $t9
/* 00446F8C 24C6CADC */   addiu $a2, %lo(RO_1000CADC) # addiu $a2, $a2, -0x3524
/* 00446F90 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00446F94 93A8002F */  lbu   $t0, 0x2f($sp)
/* 00446F98 10000021 */  b     .L00447020
/* 00446F9C 8FA90048 */   lw    $t1, 0x48($sp)
.L00446FA0:
/* 00446FA0 2C410041 */  sltiu $at, $v0, 0x41
/* 00446FA4 14200007 */  bnez  $at, .L00446FC4
/* 00446FA8 2C41005A */   sltiu $at, $v0, 0x5a
/* 00446FAC 10200012 */  beqz  $at, .L00446FF8
/* 00446FB0 2C410058 */   sltiu $at, $v0, 0x58
/* 00446FB4 5020FFD0 */  beql  $at, $zero, .L00446EF8
/* 00446FB8 8E0B0018 */   lw    $t3, 0x18($s0)
/* 00446FBC 1000FFEC */  b     .L00446F70
/* 00446FC0 00000000 */   nop
.L00446FC4:
/* 00446FC4 2401000F */  li    $at, 15
/* 00446FC8 1041FFD9 */  beq   $v0, $at, .L00446F30
/* 00446FCC 244EFFC2 */   addiu $t6, $v0, -0x3e
/* 00446FD0 2DC10003 */  sltiu $at, $t6, 3
/* 00446FD4 1020FFE6 */  beqz  $at, .L00446F70
/* 00446FD8 00000000 */   nop
/* 00446FDC 8F818044 */  lw    $at, %got(jtbl_1000CAE8)($gp)
/* 00446FE0 000E7080 */  sll   $t6, $t6, 2
/* 00446FE4 002E0821 */  addu  $at, $at, $t6
/* 00446FE8 8C2ECAE8 */  lw    $t6, %lo(jtbl_1000CAE8)($at)
/* 00446FEC 01DC7021 */  addu  $t6, $t6, $gp
/* 00446FF0 01C00008 */  jr    $t6
/* 00446FF4 00000000 */   nop
.L00446FF8:
/* 00446FF8 2401007B */  li    $at, 123
/* 00446FFC 5041FFA9 */  beql  $v0, $at, .L00446EA4
/* 00447000 8E0E0018 */   lw    $t6, 0x18($s0)
/* 00447004 1000FFDA */  b     .L00446F70
/* 00447008 00000000 */   nop
.L0044700C:
/* 0044700C 24010094 */  li    $at, 148
/* 00447010 5041FFA9 */  beql  $v0, $at, .L00446EB8
/* 00447014 8E0F0018 */   lw    $t7, 0x18($s0)
/* 00447018 1000FFD5 */  b     .L00446F70
/* 0044701C 00000000 */   nop
.L00447020:
/* 00447020 15000002 */  bnez  $t0, .L0044702C
/* 00447024 00000000 */   nop
/* 00447028 8E10000C */  lw    $s0, 0xc($s0)
.L0044702C:
/* 0044702C 15000003 */  bnez  $t0, .L0044703C
/* 00447030 00000000 */   nop
/* 00447034 5600FF8D */  bnezl $s0, .L00446E6C
/* 00447038 920A0000 */   lbu   $t2, ($s0)
.L0044703C:
/* 0044703C 55000056 */  bnezl $t0, .L00447198
/* 00447040 02001025 */   move  $v0, $s0
/* 00447044 8F998348 */  lw    $t9, %call16(appendichain)($gp)
/* 00447048 97A4003A */  lhu   $a0, 0x3a($sp)
/* 0044704C 00002825 */  move  $a1, $zero
/* 00447050 0320F809 */  jalr  $t9
/* 00447054 00000000 */   nop
/* 00447058 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0044705C 14400006 */  bnez  $v0, .L00447078
/* 00447060 00408025 */   move  $s0, $v0
/* 00447064 8F818B20 */  lw     $at, %got(outofmem)($gp)
/* 00447068 240F0001 */  li    $t7, 1
/* 0044706C 8FA20034 */  lw    $v0, 0x34($sp)
/* 00447070 10000049 */  b     .L00447198
/* 00447074 A02F0000 */   sb    $t7, ($at)
.L00447078:
/* 00447078 93B9003F */  lbu   $t9, 0x3f($sp)
/* 0044707C 8FAA0040 */  lw    $t2, 0x40($sp)
/* 00447080 24180004 */  li    $t8, 4
/* 00447084 A2190010 */  sb    $t9, 0x10($s0)
/* 00447088 8F998664 */  lw    $t9, %call16(newbit)($gp)
/* 0044708C A2180000 */  sb    $t8, ($s0)
/* 00447090 AE110018 */  sw    $s1, 0x18($s0)
/* 00447094 02002025 */  move  $a0, $s0
/* 00447098 00002825 */  move  $a1, $zero
/* 0044709C 0320F809 */  jalr  $t9
/* 004470A0 AE0A0014 */   sw    $t2, 0x14($s0)
/* 004470A4 920B0010 */  lbu   $t3, 0x10($s0)
/* 004470A8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004470AC A6020002 */  sh    $v0, 2($s0)
/* 004470B0 2D6C00A0 */  sltiu $t4, $t3, 0xa0
/* 004470B4 11800009 */  beqz  $t4, .L004470DC
/* 004470B8 00000000 */   nop
/* 004470BC 8F8F8044 */  lw    $t7, %got(D_10010974)($gp)
/* 004470C0 000B6943 */  sra   $t5, $t3, 5
/* 004470C4 000D7080 */  sll   $t6, $t5, 2
/* 004470C8 25EF0974 */  addiu $t7, %lo(D_10010974) # addiu $t7, $t7, 0x974
/* 004470CC 01EEC021 */  addu  $t8, $t7, $t6
/* 004470D0 8F190000 */  lw    $t9, ($t8)
/* 004470D4 01795004 */  sllv  $t2, $t9, $t3
/* 004470D8 294C0000 */  slti  $t4, $t2, 0
.L004470DC:
/* 004470DC 11800027 */  beqz  $t4, .L0044717C
/* 004470E0 00000000 */   nop
/* 004470E4 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004470E8 8F848CF0 */  lw     $a0, %got(trapop)($gp)
/* 004470EC 96050002 */  lhu   $a1, 2($s0)
/* 004470F0 0320F809 */  jalr  $t9
/* 004470F4 00000000 */   nop
/* 004470F8 92030010 */  lbu   $v1, 0x10($s0)
/* 004470FC 2401000F */  li    $at, 15
/* 00447100 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00447104 10610023 */  beq   $v1, $at, .L00447194
/* 00447108 8FA90048 */   lw    $t1, 0x48($sp)
/* 0044710C 246FFF80 */  addiu $t7, $v1, -0x80
/* 00447110 2DEE0020 */  sltiu $t6, $t7, 0x20
/* 00447114 000EC023 */  negu  $t8, $t6
/* 00447118 3C017800 */  lui   $at, 0x7800
/* 0044711C 0301C824 */  and   $t9, $t8, $at
/* 00447120 01F95804 */  sllv  $t3, $t9, $t7
/* 00447124 0561001B */  bgez  $t3, .L00447194
/* 00447128 AE09001C */   sw    $t1, 0x1c($s0)
/* 0044712C 8E020018 */  lw    $v0, 0x18($s0)
/* 00447130 24010002 */  li    $at, 2
/* 00447134 904A0000 */  lbu   $t2, ($v0)
/* 00447138 55410017 */  bnel  $t2, $at, .L00447198
/* 0044713C 02001025 */   move  $v0, $s0
/* 00447140 904D0001 */  lbu   $t5, 1($v0)
/* 00447144 3C018F80 */  lui   $at, 0x8f80
/* 00447148 2DAC0020 */  sltiu $t4, $t5, 0x20
/* 0044714C 000C7023 */  negu  $t6, $t4
/* 00447150 01C1C024 */  and   $t8, $t6, $at
/* 00447154 01B8C804 */  sllv  $t9, $t8, $t5
/* 00447158 0723000F */  bgezl $t9, .L00447198
/* 0044715C 02001025 */   move  $v0, $s0
/* 00447160 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00447164 8F848CF4 */  lw     $a0, %got(trapconstop)($gp)
/* 00447168 96050002 */  lhu   $a1, 2($s0)
/* 0044716C 0320F809 */  jalr  $t9
/* 00447170 00000000 */   nop
/* 00447174 10000007 */  b     .L00447194
/* 00447178 8FBC0020 */   lw    $gp, 0x20($sp)
.L0044717C:
/* 0044717C 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00447180 8F848CEC */  lw     $a0, %got(storeop)($gp)
/* 00447184 96050002 */  lhu   $a1, 2($s0)
/* 00447188 0320F809 */  jalr  $t9
/* 0044718C 00000000 */   nop
/* 00447190 8FBC0020 */  lw    $gp, 0x20($sp)
.L00447194:
/* 00447194 02001025 */  move  $v0, $s0
.L00447198:
/* 00447198 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0044719C 8FB00018 */  lw    $s0, 0x18($sp)
/* 004471A0 8FB1001C */  lw    $s1, 0x1c($sp)
/* 004471A4 03E00008 */  jr    $ra
/* 004471A8 27BD0038 */   addiu $sp, $sp, 0x38
    .type searchstore, @function
    .size searchstore, .-searchstore
    .end searchstore
)"");
/* 
00456310 func_00456310
0046FCD4 link_jump_in_loop
00470048 pre_loopblock
00470248 post_loopblock
004713E8 loopunroll
004761D0 tail_recursion
*/
void codeimage(void) {
    bool sp57; // expr 1
    bool sp56; // expr 1
    bool sp55; // expr 2
    bool sp54; // expr 2
    unsigned short opihash;
    struct IChain *ichain; // s3, antlocs
    struct IChain *store_ichain; // s1, avlocs
    struct Statement *stat_tail;
    struct Statement *stat;

    init_node_vectors(curgraphnode);
    stat = curgraphnode->stat_head;

    do {
        if (stat->opc == Uisst || stat->opc == Ustr) {
            if (stat->opc == Uisst) {
                exprimage(stat->u.store.expr, &sp57, &sp56);
                if (outofmem) return;
            }

            ichain = isearchloop(isvarihash(stat->expr->data.isvar_issvar.var_data), stat->expr, 0, 0);
            if (outofmem) return;

            if (stat->unk3 == false) {
                setbit(&curgraphnode->bvs.stage1.u.precm.expoccur, ichain->unk2);
                setbit(&curgraphnode->bvs.stage1.u.precm.expoccur, ichain->s.bit);
                setbit(&curgraphnode->bvs.stage1.alters, ichain->unk2);
                if (stat->expr->unk6) {
                    setbit(&curgraphnode->bvs.stage1.alters, ichain->s.bit);
                    if (stat->expr->unk2 == false) {
                        setbit(&curgraphnode->bvs.stage1.avlocs, ichain->unk2);
                    }
                }

                if (ichain->unk1A) {
                    setbit(&vareqv, ichain->unk2);
                    setbit(&asgneqv, ichain->s.bit);
                }

                if (stat->u.store.unk1C) {
                    setbit(&curgraphnode->bvs.stage1.antlocs, ichain->s.bit);
                }

                if (stat->u.store.unk1C == false || stat->u.store.unk1D == false) {
                    setbit(&curgraphnode->bvs.stage1.alters, ichain->s.bit);
                }
                else
                {
                    stat_tail = curgraphnode->stat_tail;
                    if (stat_tail->opc == Ucia) {
                        if (lang == LANG_ADA) {
                            setbit(&curgraphnode->bvs.stage1.alters, ichain->s.bit);
                        } else if (((stat_tail->u.cia.flags & 1) && cskilled(curlevel, indirprocs, stat)) ||
                                listpskilled(stat_tail->u.cia.parameters, stat, stat->expr->data.isvar_issvar.unk22)) {
                            setbit(&curgraphnode->bvs.stage1.alters, ichain->s.bit);
                        }

                    } else if (stat_tail->opc == Ucup || stat_tail->opc == Uicuf) {
                        if (cskilled(stat_tail->u.call.level, stat_tail->u.call.proc, stat) ||
                                listpskilled(stat_tail->u.call.parameters, stat, stat->expr->data.isvar_issvar.unk22)) {
                            setbit(&curgraphnode->bvs.stage1.alters, ichain->s.bit);
                        }
                    }
                }

                store_ichain = exprimage(stat->expr->data.isvar_issvar.unk34, &sp55, &sp54);
                if (outofmem) return;
                if (store_ichain == NULL) {
                    dbgerror(0x1AC);
                }
                if (store_ichain->unk0 == 4) {
                    // store_chain->opc in [Uequ, ...]
                    // Bool expressions
                    switch (store_ichain->opc) {
                        case Uequ:
                        case Ugeq:
                        case Ugrt:
                        case Uinn:
                        case Uleq:
                        case Ules:
                        case Uneq:
                            resetbit(&boolexp, store_ichain->unk2);
                            break;

                        default:
                            break;
                    }
                }

                store_ichain = searchstore(isopihash(stat->opc, ichain, store_ichain), stat->opc, ichain, store_ichain, 0, 0);
                if (outofmem) return;

                setbit(&curgraphnode->bvs.stage1.u.precm.expoccur, store_ichain->unk2);
                store_ichain->stat = stat;
                store_ichain->dtype = ichain->dtype;
                stat->u.store.ichain = store_ichain;
                if (stat->u.store.unk1C && stat->u.store.unk1E && sp55) {
                    setbit(&curgraphnode->bvs.stage1.antlocs, store_ichain->unk2);
                }
                if (stat->u.store.unk1E == false || stat->u.store.unk1F == false ||
                        stat->u.store.unk1C == false || stat->u.store.unk1D == false ||
                        sp55 == false || sp54 == false) {
                    setbit(&curgraphnode->bvs.stage1.alters, store_ichain->unk2);
                }
                if (stat->u.store.unk1F && sp54) {
                    setbit(&curgraphnode->bvs.stage1.u.precm.pavlocs, store_ichain->unk2);
                }
                if (stat->u.store.unk1E == false || stat->u.store.unk1F == false ||
                        sp55 == false || sp54 == false) {
                    setbit(&curgraphnode->bvs.stage1.absalters, store_ichain->unk2);
                }
            } else {
                setbit(&curgraphnode->bvs.stage1.alters, ichain->unk2);
                if (stat->expr->unk6) {
                    setbit(&curgraphnode->bvs.stage1.alters, ichain->s.bit);
                    if (stat->expr->unk2 == false) {
                        setbit(&curgraphnode->bvs.stage1.avlocs, ichain->unk2);
                    }
                }

                setbit(&curgraphnode->bvs.stage1.antlocs, ichain->s.bit);
                if (stat->u.store.unk1D == false) {
                    setbit(&curgraphnode->bvs.stage1.alters, ichain->s.bit);
                } else {
                    stat_tail = curgraphnode->stat_tail;
                    if (stat_tail->opc == Ucia) {
                        setbit(&curgraphnode->bvs.stage1.alters, ichain->s.bit);
                    }
                    else if (stat_tail->opc == Ucup || stat_tail->opc == Uicuf) {
                        if (cskilled(stat_tail->u.call.level, stat_tail->u.call.proc, stat) ||
                                listpskilled(curgraphnode->stat_tail->u.call.parameters, stat, stat->expr->data.isvar_issvar.unk22)) {
                            setbit(&curgraphnode->bvs.stage1.alters, ichain->s.bit);
                        }
                    }
                }
                stat->u.store.ichain = NULL;
            }
        } else {
            // stat->opc not in [Uaent, ...]
            switch (stat->opc) {
                case Uaent:
                case Ubgnb:
                case Ucia:
                case Uclab:
                case Uclbd:
                case Uctrl:
                case Ucubd:
                case Ucup:
                case Udef:
                case Uendb:
                case Uicuf:
                case Ulab:
                case Ulbdy:
                case Ulbgn:
                case Ulend:
                case Uloc:
                case Ultrm:
                case Umst:
                case Unop:
                case Uret:
                case Ustep:
                case Uujp:
                case Urcuf:
                    continue;

                default:
                    ichain = exprimage(stat->expr, &sp57, &sp56);
                    if (outofmem) return;
                    break;
            }

            // stat->opc in [Uchkt, ...]
            switch (stat->opc) {
                default:
                    continue;

                case Uchkt:
                case Uistr:
                case Uistv:
                case  Umov:
                case Umovv:
                case Utpeq:
                case Utpge:
                case Utpgt:
                case Utple:
                case Utplt:
                case Utpne:
                case Uirst:
                case Uirsv:
                    break;
            }

            store_ichain = NULL;
            if (stat->opc != Uchkt) {
                store_ichain = exprimage(stat->u.store.expr, &sp55, &sp54);
            }
            if (outofmem) return;

            // stat->opc in [Uistr, ...]
            switch (stat->opc) {
                default:
                    break;

                case Uistr:
                case Uistv:
                case Utpeq:
                case Utpge:
                case Utpgt:
                case Utple:
                case Utplt:
                case Utpne:
                case Uirst:
                case Uirsv:
                    if (store_ichain->unk0 == 4) {
                        switch (store_ichain->opc) {
                            default:
                                break;

                            case Uequ:
                            case Ugeq:
                            case Ugrt:
                            case Uinn:
                            case Uleq:
                            case Ules:
                            case Uneq:
                                resetbit(&boolexp, store_ichain->unk2);
                                break;
                        }
                    }
            }

            // stat->opc in [Uchkt, ...]
            // Trapped bool expressions
            switch (stat->opc) {
                case Uchkt:
                case Utpeq:
                case Utpge:
                case Utpgt:
                case Utple:
                case Utplt:
                case Utpne:
                    if (ichain->unk0 == 4) {
                        switch (ichain->opc) {
                            default:
                                break;

                            case Uequ:
                            case Ugeq:
                            case Ugrt:
                            case Uinn:
                            case Uleq:
                            case Ules:
                            case Uneq:
                                resetbit(&boolexp, ichain->unk2);
                                break;
                        }
                    }
                    break;

                default:
                    break;
            }

            if ((stat->opc == Utpge || stat->opc == Utpgt || stat->opc == Utple || stat->opc == Utplt) &&
                    (store_ichain->unk0 == 2)) {
                opihash = isopihash(stat->opc, ichain, 0);
            } else {
                opihash = isopihash(stat->opc, ichain, store_ichain);

            }
            switch (stat->opc) {
                case Uistr:
                case Uistv:
                case Uirst:
                case Uirsv:
                    store_ichain = searchstore(opihash, stat->opc, ichain, store_ichain, stat->u.store.u.istr.s.word, stat->u.store.size);
                    break;

                default:
                    switch (stat->opc) {
                        case Uchkt:
                        case Utpeq:
                        case Utpge:
                        case Utpgt:
                        case Utple:
                        case Utplt:
                        case Utpne:
                            store_ichain = searchstore(opihash, stat->opc, ichain, store_ichain, stat->u.trap.num, 0);
                            break;

                        default:
                            store_ichain = searchstore(opihash, stat->opc, ichain, store_ichain, 0, 0);
                            break;
                    } break;
            }
            if (outofmem) return;

            setbit(&curgraphnode->bvs.stage1.u.precm.expoccur, store_ichain->unk2);
            store_ichain->stat = stat;
            stat->u.store.ichain = store_ichain;

            if (stat->opc == Uistr ||
                    stat->opc == Uistv ||
                    stat->opc == Umov  ||
                    stat->opc == Umovv ||
                    stat->opc == Uirst ||
                    stat->opc == Uirsv) {
                store_ichain->size = stat->u.store.size;

                if (stat->opc == Uistr ||
                        stat->opc == Uistv ||
                        stat->opc == Uirst ||
                        stat->opc == Uirsv) {
                    store_ichain->s = stat->u.store.u.istr.s;
                    store_ichain->dtype = stat->u.store.u.istr.dtype;
                    store_ichain->unk13 = stat->u.store.u.istr.unk2D;
                }


                if (stat->opc == Umov || stat->opc == Umovv) {
                    store_ichain->s.bit = stat->u.store.u.mov.unk32 + (stat->u.store.u.mov.unk33 << 8);
                }

                if (stat->u.store.unk1C && stat->u.store.unk1E && sp57 && sp55) {
                    setbit(&curgraphnode->bvs.stage1.antlocs, store_ichain->unk2);
                }

                if (stat->u.store.unk1C == false || stat->u.store.unk1D == false ||
                        stat->u.store.unk1E == false || stat->u.store.unk1F == false ||
                        sp57 == false || sp56 == false || sp55 == false || sp54 == false) {
                    setbit(&curgraphnode->bvs.stage1.alters, store_ichain->unk2);
                }
                if (stat->u.store.unk1F && sp56 && sp54) {
                    setbit(&curgraphnode->bvs.stage1.u.precm.pavlocs, store_ichain->unk2);
                }
                if (stat->u.store.unk1E == false || stat->u.store.unk1F == false ||
                        sp57 == false || sp56 == false || sp55 == false || sp54 == false) {
                    setbit(&curgraphnode->bvs.stage1.absalters, store_ichain->unk2);
                }
            } else {
                // traps
                if (stat->opc == Uchkt) {
                    sp55 = true;
                    sp54 = true;
                } else {
                    store_ichain->dtype = stat->u.trap.dtype;
                }
                if (sp57 && sp55) {
                    setbit(&curgraphnode->bvs.stage1.antlocs, store_ichain->unk2);
                }
                if (sp56 && sp54) {
                    setbit(&curgraphnode->bvs.stage1.avlocs, store_ichain->unk2);
                }
                if (sp57 == false || sp56 == false || sp55 == false || sp54 == false) {
                    setbit(&curgraphnode->bvs.stage1.alters, store_ichain->unk2);
                }
            }

            if (stat->opc == Uistr && stat->u.store.u.istr.offset == 0) {
                stat->u.store.u.istr.offset = assign_mtag(stat->u.store.baseaddr);
            }
        }
    } while ((stat = stat->next) != NULL);
}
