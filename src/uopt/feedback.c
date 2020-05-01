#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <errno.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "libxmalloc/xmalloc.h"

__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000A0DC:
    # 0040BCA0 path_blockno
    .asciz "name/length inconsistency in feedback file.\n"

RO_1000A10C:
    # 0040BCA0 path_blockno
    .asciz "symbol table anomaly isym (%d) not referred to by external\n"

.data
# 1000FD30
glabel sym_file_updated
    # 0040C0C0 local_in_reg
    # 00439B60 write_updated_st
    .byte 0x00
    .type sym_file_updated, @object
    .size sym_file_updated, .-sym_file_updated # 1


.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
)"");

/*
0040B930 read_feedback_file
0042EB10 incorp_feedback
*/
unsigned char *feedback; // TODO: pointer to a feedback struct

/*
0040B930 read_feedback_file
0042EB10 incorp_feedback
*/
unsigned char *feedback_end; // TODO: pointer to a feedback struct

extern char **__Argv;

/*
0040B930 read_feedback_file
*/
static void func_0040B7D0(const char *format, ...) {
    va_list arglist;

    if (errno < sys_nerr) {
        fprintf(stderr, "%s: %s, ", __Argv[0], sys_errlist[errno]);
    } else {
        fprintf(stderr, "%s: error %d (error code unknown), ", __Argv[0], errno);
    }
    va_start(arglist, format);
#ifdef __sgi
    _doprnt(format, arglist, stderr);
#else
    vfprintf(stderr, format, arglist);
#endif
    va_end(arglist);
    putc('\n', stderr);
    exit(1);
}

/*
00434720 processargs
*/
void read_feedback_file(const char *path) {
    int fd;
    struct stat statbuf;
    unsigned char *filebuf;

    fd = open(path, O_RDONLY);
    if (fd < 0) {
        func_0040B7D0("opening feedback input %s.", path);
    }
    if (fstat(fd, &statbuf) < 0) {
        func_0040B7D0("getting status on %s.", path);
    }
    filebuf = xmalloc(statbuf.st_size);
    if (filebuf == NULL) {
        fprintf(stderr, "%s: unable to allocate %d byte feedback buffer.\n", __Argv[0], (int)statbuf.st_size);
        exit(1);
    }
    if (read(fd, filebuf, statbuf.st_size) < 0) {
        func_0040B7D0("reading feedback file %s.", path);
    }
    close(fd);
    if (0x64656566 != *(int *)filebuf) {
        fprintf(stderr, "%s: feedback file stamp = %x, not %x.\n", __Argv[0], *(int *)filebuf, 0x64656566);
        exit(1);
    }
    feedback = filebuf;
    feedback_end = filebuf + statbuf.st_size;
}

__asm__(R""(
.set noreorder

    .type func_0040BAE0, @function
func_0040BAE0:
    # 0040BAE0 func_0040BAE0
    # 0040BCA0 path_blockno
/* 0040BAE0 3C1C0FC1 */  .cpload $t9
/* 0040BAE4 279CE7B0 */  
/* 0040BAE8 0399E021 */  
/* 0040BAEC 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 0040BAF0 8F9987C0 */  lw    $t9, %call16(st_psym_ifd_isym)($gp)
/* 0040BAF4 AFB00018 */  sw    $s0, 0x18($sp)
/* 0040BAF8 00A08025 */  move  $s0, $a1
/* 0040BAFC AFBF003C */  sw    $ra, 0x3c($sp)
/* 0040BB00 AFB30024 */  sw    $s3, 0x24($sp)
/* 0040BB04 AFB20020 */  sw    $s2, 0x20($sp)
/* 0040BB08 00809025 */  move  $s2, $a0
/* 0040BB0C 00C09825 */  move  $s3, $a2
/* 0040BB10 AFBC0038 */  sw    $gp, 0x38($sp)
/* 0040BB14 AFB70034 */  sw    $s7, 0x34($sp)
/* 0040BB18 AFB60030 */  sw    $s6, 0x30($sp)
/* 0040BB1C AFB5002C */  sw    $s5, 0x2c($sp)
/* 0040BB20 AFB40028 */  sw    $s4, 0x28($sp)
/* 0040BB24 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0040BB28 0320F809 */  jalr  $t9
/* 0040BB2C 26100001 */   addiu $s0, $s0, 1
/* 0040BB30 8C4E0008 */  lw    $t6, 8($v0)
/* 0040BB34 3C16000F */  lui   $s6, 0xf
/* 0040BB38 36D6FFFF */  ori   $s6, $s6, 0xffff
/* 0040BB3C 01D67824 */  and   $t7, $t6, $s6
/* 0040BB40 8FBC0038 */  lw    $gp, 0x38($sp)
/* 0040BB44 16CF0003 */  bne   $s6, $t7, .L0040BB54
/* 0040BB48 00408825 */   move  $s1, $v0
/* 0040BB4C 10000049 */  b     .L0040BC74
/* 0040BB50 2402FFFF */   li    $v0, -1
.L0040BB54:
/* 0040BB54 8F9987A8 */  lw    $t9, %call16(st_paux_ifd_iaux)($gp)
/* 0040BB58 8E250008 */  lw    $a1, 8($s1)
/* 0040BB5C 3C01000F */  lui   $at, 0xf
/* 0040BB60 3421FFFF */  ori   $at, $at, 0xffff
/* 0040BB64 02402025 */  move  $a0, $s2
/* 0040BB68 0320F809 */  jalr  $t9
/* 0040BB6C 00A12824 */   and   $a1, $a1, $at
/* 0040BB70 8C430000 */  lw    $v1, ($v0)
/* 0040BB74 2417FFFF */  li    $s7, -1
/* 0040BB78 8FBC0038 */  lw    $gp, 0x38($sp)
/* 0040BB7C 16E30003 */  bne   $s7, $v1, .L0040BB8C
/* 0040BB80 0060A825 */   move  $s5, $v1
/* 0040BB84 1000003B */  b     .L0040BC74
/* 0040BB88 2402FFFF */   li    $v0, -1
.L0040BB8C:
/* 0040BB8C 2414000E */  li    $s4, 14
.L0040BB90:
/* 0040BB90 8F9987C0 */  lw    $t9, %call16(st_psym_ifd_isym)($gp)
/* 0040BB94 02402025 */  move  $a0, $s2
/* 0040BB98 02002825 */  move  $a1, $s0
/* 0040BB9C 0320F809 */  jalr  $t9
/* 0040BBA0 00000000 */   nop   
/* 0040BBA4 8C430008 */  lw    $v1, 8($v0)
/* 0040BBA8 8FBC0038 */  lw    $gp, 0x38($sp)
/* 0040BBAC 00408825 */  move  $s1, $v0
/* 0040BBB0 0003C682 */  srl   $t8, $v1, 0x1a
/* 0040BBB4 1698002A */  bne   $s4, $t8, .L0040BC60
/* 0040BBB8 3C01000F */   lui   $at, 0xf
/* 0040BBBC 3421FFFF */  ori   $at, $at, 0xffff
/* 0040BBC0 0061C824 */  and   $t9, $v1, $at
/* 0040BBC4 52D90027 */  beql  $s6, $t9, .L0040BC64
/* 0040BBC8 26100001 */   addiu $s0, $s0, 1
/* 0040BBCC 8F9987C8 */  lw    $t9, %call16(st_str_ifd_iss)($gp)
/* 0040BBD0 02402025 */  move  $a0, $s2
/* 0040BBD4 8C450000 */  lw    $a1, ($v0)
/* 0040BBD8 0320F809 */  jalr  $t9
/* 0040BBDC 00000000 */   nop   
/* 0040BBE0 8FBC0038 */  lw    $gp, 0x38($sp)
/* 0040BBE4 8E640000 */  lw    $a0, ($s3)
/* 0040BBE8 00402825 */  move  $a1, $v0
/* 0040BBEC 8F99809C */  lw    $t9, %call16(strcmp)($gp)
/* 0040BBF0 0320F809 */  jalr  $t9
/* 0040BBF4 00000000 */   nop   
/* 0040BBF8 14400019 */  bnez  $v0, .L0040BC60
/* 0040BBFC 8FBC0038 */   lw    $gp, 0x38($sp)
/* 0040BC00 8E680004 */  lw    $t0, 4($s3)
/* 0040BC04 15000003 */  bnez  $t0, .L0040BC14
/* 0040BC08 00000000 */   nop   
/* 0040BC0C 10000019 */  b     .L0040BC74
/* 0040BC10 02001025 */   move  $v0, $s0
.L0040BC14:
/* 0040BC14 8F998018 */  lw    $t9, %got(func_0040BAE0)($gp)
/* 0040BC18 02402025 */  move  $a0, $s2
/* 0040BC1C 02002825 */  move  $a1, $s0
/* 0040BC20 2739BAE0 */  addiu $t9, %lo(func_0040BAE0) # addiu $t9, $t9, -0x4520
/* 0040BC24 0320F809 */  jalr  $t9
/* 0040BC28 26660004 */   addiu $a2, $s3, 4
/* 0040BC2C 10570003 */  beq   $v0, $s7, .L0040BC3C
/* 0040BC30 8FBC0038 */   lw    $gp, 0x38($sp)
/* 0040BC34 10000010 */  b     .L0040BC78
/* 0040BC38 8FBF003C */   lw    $ra, 0x3c($sp)
.L0040BC3C:
/* 0040BC3C 8F9987A8 */  lw    $t9, %call16(st_paux_ifd_iaux)($gp)
/* 0040BC40 8E250008 */  lw    $a1, 8($s1)
/* 0040BC44 3C01000F */  lui   $at, 0xf
/* 0040BC48 3421FFFF */  ori   $at, $at, 0xffff
/* 0040BC4C 02402025 */  move  $a0, $s2
/* 0040BC50 0320F809 */  jalr  $t9
/* 0040BC54 00A12824 */   and   $a1, $a1, $at
/* 0040BC58 8FBC0038 */  lw    $gp, 0x38($sp)
/* 0040BC5C 8C500000 */  lw    $s0, ($v0)
.L0040BC60:
/* 0040BC60 26100001 */  addiu $s0, $s0, 1
.L0040BC64:
/* 0040BC64 0215082A */  slt   $at, $s0, $s5
/* 0040BC68 1420FFC9 */  bnez  $at, .L0040BB90
/* 0040BC6C 00000000 */   nop   
/* 0040BC70 2402FFFF */  li    $v0, -1
.L0040BC74:
/* 0040BC74 8FBF003C */  lw    $ra, 0x3c($sp)
.L0040BC78:
/* 0040BC78 8FB00018 */  lw    $s0, 0x18($sp)
/* 0040BC7C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0040BC80 8FB20020 */  lw    $s2, 0x20($sp)
/* 0040BC84 8FB30024 */  lw    $s3, 0x24($sp)
/* 0040BC88 8FB40028 */  lw    $s4, 0x28($sp)
/* 0040BC8C 8FB5002C */  lw    $s5, 0x2c($sp)
/* 0040BC90 8FB60030 */  lw    $s6, 0x30($sp)
/* 0040BC94 8FB70034 */  lw    $s7, 0x34($sp)
/* 0040BC98 03E00008 */  jr    $ra
/* 0040BC9C 27BD0040 */   addiu $sp, $sp, 0x40

glabel path_blockno
    .ent path_blockno
    # 0042EB10 incorp_feedback
/* 0040BCA0 3C1C0FC1 */  .cpload $t9
/* 0040BCA4 279CE5F0 */  
/* 0040BCA8 0399E021 */  
/* 0040BCAC 27BDFEF8 */  addiu $sp, $sp, -0x108
/* 0040BCB0 AFBF003C */  sw    $ra, 0x3c($sp)
/* 0040BCB4 AFBE0038 */  sw    $fp, 0x38($sp)
/* 0040BCB8 AFBC0034 */  sw    $gp, 0x34($sp)
/* 0040BCBC AFB70030 */  sw    $s7, 0x30($sp)
/* 0040BCC0 AFB6002C */  sw    $s6, 0x2c($sp)
/* 0040BCC4 AFB50028 */  sw    $s5, 0x28($sp)
/* 0040BCC8 AFB40024 */  sw    $s4, 0x24($sp)
/* 0040BCCC AFB30020 */  sw    $s3, 0x20($sp)
/* 0040BCD0 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0040BCD4 AFB10018 */  sw    $s1, 0x18($sp)
/* 0040BCD8 AFB00014 */  sw    $s0, 0x14($sp)
/* 0040BCDC AFA40068 */  sw    $a0, 0x68($sp)
/* 0040BCE0 90830000 */  lbu   $v1, ($a0)
/* 0040BCE4 00803025 */  move  $a2, $a0
/* 0040BCE8 00A03825 */  move  $a3, $a1
/* 0040BCEC 10600005 */  beqz  $v1, .L0040BD04
/* 0040BCF0 24820001 */   addiu $v0, $a0, 1
/* 0040BCF4 90430000 */  lbu   $v1, ($v0)
.L0040BCF8:
/* 0040BCF8 24420001 */  addiu $v0, $v0, 1
/* 0040BCFC 5460FFFE */  bnezl $v1, .L0040BCF8
/* 0040BD00 90430000 */   lbu   $v1, ($v0)
.L0040BD04:
/* 0040BD04 AFA2006C */  sw    $v0, 0x6c($sp)
/* 0040BD08 90430000 */  lbu   $v1, ($v0)
/* 0040BD0C 27BE0070 */  addiu $fp, $sp, 0x70
/* 0040BD10 03C08025 */  move  $s0, $fp
/* 0040BD14 1060000D */  beqz  $v1, .L0040BD4C
/* 0040BD18 24420001 */   addiu $v0, $v0, 1
/* 0040BD1C 27A50068 */  addiu $a1, $sp, 0x68
/* 0040BD20 2404002E */  li    $a0, 46
.L0040BD24:
/* 0040BD24 14640005 */  bne   $v1, $a0, .L0040BD3C
/* 0040BD28 24AE007C */   addiu $t6, $a1, 0x7c
/* 0040BD2C 120E0003 */  beq   $s0, $t6, .L0040BD3C
/* 0040BD30 A040FFFF */   sb    $zero, -1($v0)
/* 0040BD34 AE020000 */  sw    $v0, ($s0)
/* 0040BD38 26100004 */  addiu $s0, $s0, 4
.L0040BD3C:
/* 0040BD3C 90430000 */  lbu   $v1, ($v0)
/* 0040BD40 24420001 */  addiu $v0, $v0, 1
/* 0040BD44 1460FFF7 */  bnez  $v1, .L0040BD24
/* 0040BD48 00000000 */   nop   
.L0040BD4C:
/* 0040BD4C 00C77821 */  addu  $t7, $a2, $a3
/* 0040BD50 25F80001 */  addiu $t8, $t7, 1
/* 0040BD54 5058000E */  beql  $v0, $t8, .L0040BD90
/* 0040BD58 AE000000 */   sw    $zero, ($s0)
/* 0040BD5C 8F99807C */  lw    $t9, %call16(fprintf)($gp)
)"");
#ifdef __sgi
__asm__(R""(
/* 0040BD60 8F848054 */  lw     $a0, %got(__iob)($gp)
)"");
#else
__asm__(R""(
                         lw     $a0, %got(stderr)($gp)
)"");
#endif
__asm__(R""(
/* 0040BD64 8F858044 */  lw    $a1, %got(RO_1000A0DC)($gp)
)"");
#ifdef __sgi
__asm__(R""(
/* 0040BD68 24840020 */  addiu $a0, $a0, 0x20
)"");
#else
__asm__(R""(
                         lw    $a0, ($a0)
)"");
#endif
__asm__(R""(
/* 0040BD6C 0320F809 */  jalr  $t9
/* 0040BD70 24A5A0DC */   addiu $a1, %lo(RO_1000A0DC) # addiu $a1, $a1, -0x5f24
/* 0040BD74 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0040BD78 24040001 */  li    $a0, 1
/* 0040BD7C 8F9988A8 */  lw    $t9, %call16(exit)($gp)
/* 0040BD80 0320F809 */  jalr  $t9
/* 0040BD84 00000000 */   nop   
/* 0040BD88 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0040BD8C AE000000 */  sw    $zero, ($s0)
.L0040BD90:
/* 0040BD90 8F998790 */  lw    $t9, %call16(st_ifdmax)($gp)
/* 0040BD94 0320F809 */  jalr  $t9
/* 0040BD98 00000000 */   nop   
/* 0040BD9C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0040BDA0 AFA20100 */  sw    $v0, 0x100($sp)
/* 0040BDA4 2417FFFF */  li    $s7, -1
/* 0040BDA8 1840005B */  blez  $v0, .L0040BF18
/* 0040BDAC 00009825 */   move  $s3, $zero
/* 0040BDB0 3C15000F */  lui   $s5, 0xf
/* 0040BDB4 36B5FFFF */  ori   $s5, $s5, 0xffff
/* 0040BDB8 2416FFFF */  li    $s6, -1
/* 0040BDBC 24140034 */  li    $s4, 52
.L0040BDC0:
/* 0040BDC0 8F9987BC */  lw    $t9, %call16(st_pcfd_ifd)($gp)
/* 0040BDC4 02602025 */  move  $a0, $s3
/* 0040BDC8 0320F809 */  jalr  $t9
/* 0040BDCC 00000000 */   nop   
/* 0040BDD0 8C590000 */  lw    $t9, ($v0)
/* 0040BDD4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0040BDD8 00409025 */  move  $s2, $v0
/* 0040BDDC 8F250004 */  lw    $a1, 4($t9)
/* 0040BDE0 8F9987C8 */  lw    $t9, %call16(st_str_ifd_iss)($gp)
/* 0040BDE4 02602025 */  move  $a0, $s3
/* 0040BDE8 0320F809 */  jalr  $t9
/* 0040BDEC 00000000 */   nop   
/* 0040BDF0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0040BDF4 8FA40068 */  lw    $a0, 0x68($sp)
/* 0040BDF8 00402825 */  move  $a1, $v0
/* 0040BDFC 8F99809C */  lw    $t9, %call16(strcmp)($gp)
/* 0040BE00 0320F809 */  jalr  $t9
/* 0040BE04 00000000 */   nop   
/* 0040BE08 1440003E */  bnez  $v0, .L0040BF04
/* 0040BE0C 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0040BE10 8E480000 */  lw    $t0, ($s2)
/* 0040BE14 8E500034 */  lw    $s0, 0x34($s2)
/* 0040BE18 9509002A */  lhu   $t1, 0x2a($t0)
/* 0040BE1C 01340019 */  multu $t1, $s4
/* 0040BE20 00005012 */  mflo  $t2
/* 0040BE24 020A5821 */  addu  $t3, $s0, $t2
/* 0040BE28 020B082B */  sltu  $at, $s0, $t3
/* 0040BE2C 10200033 */  beqz  $at, .L0040BEFC
/* 0040BE30 00000000 */   nop   
.L0040BE34:
/* 0040BE34 8F9987C0 */  lw    $t9, %call16(st_psym_ifd_isym)($gp)
/* 0040BE38 02602025 */  move  $a0, $s3
/* 0040BE3C 8E050004 */  lw    $a1, 4($s0)
/* 0040BE40 0320F809 */  jalr  $t9
/* 0040BE44 00000000 */   nop   
/* 0040BE48 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0040BE4C 00408825 */  move  $s1, $v0
/* 0040BE50 02602025 */  move  $a0, $s3
/* 0040BE54 8F9987C8 */  lw    $t9, %call16(st_str_ifd_iss)($gp)
/* 0040BE58 8C450000 */  lw    $a1, ($v0)
/* 0040BE5C 0320F809 */  jalr  $t9
/* 0040BE60 00000000 */   nop   
/* 0040BE64 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0040BE68 8FA4006C */  lw    $a0, 0x6c($sp)
/* 0040BE6C 00402825 */  move  $a1, $v0
/* 0040BE70 8F99809C */  lw    $t9, %call16(strcmp)($gp)
/* 0040BE74 0320F809 */  jalr  $t9
/* 0040BE78 00000000 */   nop   
/* 0040BE7C 14400015 */  bnez  $v0, .L0040BED4
/* 0040BE80 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0040BE84 8FAC0070 */  lw    $t4, 0x70($sp)
/* 0040BE88 55800004 */  bnezl $t4, .L0040BE9C
/* 0040BE8C 8E2D0008 */   lw    $t5, 8($s1)
/* 0040BE90 1000001A */  b     .L0040BEFC
/* 0040BE94 8E170004 */   lw    $s7, 4($s0)
/* 0040BE98 8E2D0008 */  lw    $t5, 8($s1)
.L0040BE9C:
/* 0040BE9C 3C01000F */  lui   $at, 0xf
/* 0040BEA0 3421FFFF */  ori   $at, $at, 0xffff
/* 0040BEA4 01A17024 */  and   $t6, $t5, $at
/* 0040BEA8 12AE0014 */  beq   $s5, $t6, .L0040BEFC
/* 0040BEAC 00000000 */   nop   
/* 0040BEB0 8F998018 */  lw    $t9, %got(func_0040BAE0)($gp)
/* 0040BEB4 02602025 */  move  $a0, $s3
/* 0040BEB8 8E050004 */  lw    $a1, 4($s0)
/* 0040BEBC 2739BAE0 */  addiu $t9, %lo(func_0040BAE0) # addiu $t9, $t9, -0x4520
/* 0040BEC0 0320F809 */  jalr  $t9
/* 0040BEC4 03C03025 */   move  $a2, $fp
/* 0040BEC8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0040BECC 1456000B */  bne   $v0, $s6, .L0040BEFC
/* 0040BED0 0040B825 */   move  $s7, $v0
.L0040BED4:
/* 0040BED4 8E580000 */  lw    $t8, ($s2)
/* 0040BED8 8E4F0034 */  lw    $t7, 0x34($s2)
/* 0040BEDC 26100034 */  addiu $s0, $s0, 0x34
/* 0040BEE0 9719002A */  lhu   $t9, 0x2a($t8)
/* 0040BEE4 03340019 */  multu $t9, $s4
/* 0040BEE8 00004012 */  mflo  $t0
/* 0040BEEC 01E84821 */  addu  $t1, $t7, $t0
/* 0040BEF0 0209082B */  sltu  $at, $s0, $t1
/* 0040BEF4 1420FFCF */  bnez  $at, .L0040BE34
/* 0040BEF8 00000000 */   nop   
.L0040BEFC:
/* 0040BEFC 56F60007 */  bnel  $s7, $s6, .L0040BF1C
/* 0040BF00 2416FFFF */   li    $s6, -1
.L0040BF04:
/* 0040BF04 8FAA0100 */  lw    $t2, 0x100($sp)
/* 0040BF08 26730001 */  addiu $s3, $s3, 1
/* 0040BF0C 026A082A */  slt   $at, $s3, $t2
/* 0040BF10 1420FFAB */  bnez  $at, .L0040BDC0
/* 0040BF14 00000000 */   nop   
.L0040BF18:
/* 0040BF18 2416FFFF */  li    $s6, -1
.L0040BF1C:
/* 0040BF1C 16F60003 */  bne   $s7, $s6, .L0040BF2C
/* 0040BF20 00000000 */   nop   
/* 0040BF24 1000005A */  b     .L0040C090
/* 0040BF28 2402FFFF */   li    $v0, -1
.L0040BF2C:
/* 0040BF2C 8F9987C0 */  lw    $t9, %call16(st_psym_ifd_isym)($gp)
/* 0040BF30 02602025 */  move  $a0, $s3
/* 0040BF34 02E02825 */  move  $a1, $s7
/* 0040BF38 0320F809 */  jalr  $t9
/* 0040BF3C 00000000 */   nop   
/* 0040BF40 8C4B0008 */  lw    $t3, 8($v0)
/* 0040BF44 24150006 */  li    $s5, 6
/* 0040BF48 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0040BF4C 000B6682 */  srl   $t4, $t3, 0x1a
/* 0040BF50 16AC0030 */  bne   $s5, $t4, .L0040C014
/* 0040BF54 00000000 */   nop   
/* 0040BF58 8F998784 */  lw    $t9, %call16(st_iextmax)($gp)
/* 0040BF5C 0320F809 */  jalr  $t9
/* 0040BF60 00000000 */   nop   
/* 0040BF64 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0040BF68 0040A025 */  move  $s4, $v0
/* 0040BF6C 1840001B */  blez  $v0, .L0040BFDC
/* 0040BF70 00008025 */   move  $s0, $zero
/* 0040BF74 24120001 */  li    $s2, 1
/* 0040BF78 2411000E */  li    $s1, 14
.L0040BF7C:
/* 0040BF7C 8F9987E4 */  lw    $t9, %call16(st_pext_iext)($gp)
/* 0040BF80 02002025 */  move  $a0, $s0
/* 0040BF84 0320F809 */  jalr  $t9
/* 0040BF88 00000000 */   nop   
/* 0040BF8C 8C44000C */  lw    $a0, 0xc($v0)
/* 0040BF90 3C01000F */  lui   $at, 0xf
/* 0040BF94 3421FFFF */  ori   $at, $at, 0xffff
/* 0040BF98 00816824 */  and   $t5, $a0, $at
/* 0040BF9C 16ED000B */  bne   $s7, $t5, .L0040BFCC
/* 0040BFA0 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0040BFA4 944E0002 */  lhu   $t6, 2($v0)
/* 0040BFA8 00041E82 */  srl   $v1, $a0, 0x1a
/* 0040BFAC 566E0008 */  bnel  $s3, $t6, .L0040BFD0
/* 0040BFB0 26100001 */   addiu $s0, $s0, 1
/* 0040BFB4 12A30002 */  beq   $s5, $v1, .L0040BFC0
/* 0040BFB8 0004C180 */   sll   $t8, $a0, 6
/* 0040BFBC 16230003 */  bne   $s1, $v1, .L0040BFCC
.L0040BFC0:
/* 0040BFC0 0018CEC2 */   srl   $t9, $t8, 0x1b
/* 0040BFC4 12590005 */  beq   $s2, $t9, .L0040BFDC
/* 0040BFC8 00000000 */   nop   
.L0040BFCC:
/* 0040BFCC 26100001 */  addiu $s0, $s0, 1
.L0040BFD0:
/* 0040BFD0 0214082A */  slt   $at, $s0, $s4
/* 0040BFD4 1420FFE9 */  bnez  $at, .L0040BF7C
/* 0040BFD8 00000000 */   nop   
.L0040BFDC:
/* 0040BFDC 1614000B */  bne   $s0, $s4, .L0040C00C
/* 0040BFE0 3C137FFF */   lui   $s3, 0x7fff
/* 0040BFE4 8F99807C */  lw    $t9, %call16(fprintf)($gp)
)"");
#ifdef __sgi
__asm__(R""(
/* 0040BFE8 8F848054 */  lw     $a0, %got(__iob)($gp)
)"");
#else
__asm__(R""(
                         lw    $a0, %got(stderr)($gp)
)"");
#endif
__asm__(R""(
/* 0040BFEC 8F858044 */  lw    $a1, %got(RO_1000A10C)($gp)
/* 0040BFF0 02E03025 */  move  $a2, $s7
)"");
#ifdef __sgi
__asm__(R""(
/* 0040BFF4 24840020 */  addiu $a0, $a0, 0x20
)"");
#else
__asm__(R""(
                         lw    $a0, ($a0)
)"");
#endif
__asm__(R""(
/* 0040BFF8 0320F809 */  jalr  $t9
/* 0040BFFC 24A5A10C */   addiu $a1, %lo(RO_1000A10C) # addiu $a1, $a1, -0x5ef4
/* 0040C000 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0040C004 10000022 */  b     .L0040C090
/* 0040C008 2402FFFF */   li    $v0, -1
.L0040C00C:
/* 0040C00C 0200B825 */  move  $s7, $s0
/* 0040C010 3673FFFF */  ori   $s3, $s3, 0xffff
.L0040C014:
/* 0040C014 8F998770 */  lw    $t9, %call16(st_currentpchdr)($gp)
/* 0040C018 24100001 */  li    $s0, 1
/* 0040C01C 0320F809 */  jalr  $t9
/* 0040C020 00000000 */   nop   
/* 0040C024 8C4F003C */  lw    $t7, 0x3c($v0)
/* 0040C028 24010001 */  li    $at, 1
/* 0040C02C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0040C030 51E10017 */  beql  $t7, $at, .L0040C090
/* 0040C034 2402FFFF */   li    $v0, -1
.L0040C038:
/* 0040C038 8F9987EC */  lw    $t9, %call16(st_pdn_idn)($gp)
/* 0040C03C 02002025 */  move  $a0, $s0
/* 0040C040 0320F809 */  jalr  $t9
/* 0040C044 00000000 */   nop   
/* 0040C048 8C480000 */  lw    $t0, ($v0)
/* 0040C04C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0040C050 16680006 */  bne   $s3, $t0, .L0040C06C
/* 0040C054 00000000 */   nop   
/* 0040C058 8C490004 */  lw    $t1, 4($v0)
/* 0040C05C 16E90003 */  bne   $s7, $t1, .L0040C06C
/* 0040C060 00000000 */   nop   
/* 0040C064 1000000A */  b     .L0040C090
/* 0040C068 02001025 */   move  $v0, $s0
.L0040C06C:
/* 0040C06C 8F998770 */  lw    $t9, %call16(st_currentpchdr)($gp)
/* 0040C070 26100001 */  addiu $s0, $s0, 1
/* 0040C074 0320F809 */  jalr  $t9
/* 0040C078 00000000 */   nop   
/* 0040C07C 8C4A003C */  lw    $t2, 0x3c($v0)
/* 0040C080 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0040C084 160AFFEC */  bne   $s0, $t2, .L0040C038
/* 0040C088 00000000 */   nop   
/* 0040C08C 2402FFFF */  li    $v0, -1
.L0040C090:
/* 0040C090 8FBF003C */  lw    $ra, 0x3c($sp)
/* 0040C094 8FB00014 */  lw    $s0, 0x14($sp)
/* 0040C098 8FB10018 */  lw    $s1, 0x18($sp)
/* 0040C09C 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0040C0A0 8FB30020 */  lw    $s3, 0x20($sp)
/* 0040C0A4 8FB40024 */  lw    $s4, 0x24($sp)
/* 0040C0A8 8FB50028 */  lw    $s5, 0x28($sp)
/* 0040C0AC 8FB6002C */  lw    $s6, 0x2c($sp)
/* 0040C0B0 8FB70030 */  lw    $s7, 0x30($sp)
/* 0040C0B4 8FBE0038 */  lw    $fp, 0x38($sp)
/* 0040C0B8 03E00008 */  jr    $ra
/* 0040C0BC 27BD0108 */   addiu $sp, $sp, 0x108
    .type path_blockno, @function
    .size path_blockno, .-path_blockno
    .end path_blockno

glabel local_in_reg
    .ent local_in_reg
    # 00469280 globalcolor
/* 0040C0C0 3C1C0FC1 */  .cpload $t9
/* 0040C0C4 279CE1D0 */  
/* 0040C0C8 0399E021 */  
/* 0040C0CC 8F9987F8 */  lw    $t9, %call16(st_psym_idn_offset)($gp)
/* 0040C0D0 8F8188DC */  lw     $at, %got(sym_file_updated)($gp)
/* 0040C0D4 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0040C0D8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0040C0DC 240E0001 */  li    $t6, 1
/* 0040C0E0 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0040C0E4 AFA60028 */  sw    $a2, 0x28($sp)
/* 0040C0E8 0320F809 */  jalr  $t9
/* 0040C0EC A02E0000 */   sb    $t6, ($at)
/* 0040C0F0 10400012 */  beqz  $v0, .L0040C13C
/* 0040C0F4 8FBC0018 */   lw    $gp, 0x18($sp)
/* 0040C0F8 8C4F0008 */  lw    $t7, 8($v0)
/* 0040C0FC 24010010 */  li    $at, 16
/* 0040C100 000FC180 */  sll   $t8, $t7, 6
/* 0040C104 0018CEC2 */  srl   $t9, $t8, 0x1b
/* 0040C108 57210007 */  bnel  $t9, $at, .L0040C128
/* 0040C10C 944B0008 */   lhu   $t3, 8($v0)
/* 0040C110 94480008 */  lhu   $t0, 8($v0)
/* 0040C114 3109FC1F */  andi  $t1, $t0, 0xfc1f
/* 0040C118 352A0260 */  ori   $t2, $t1, 0x260
/* 0040C11C 10000005 */  b     .L0040C134
/* 0040C120 A44A0008 */   sh    $t2, 8($v0)
/* 0040C124 944B0008 */  lhu   $t3, 8($v0)
.L0040C128:
/* 0040C128 316CFC1F */  andi  $t4, $t3, 0xfc1f
/* 0040C12C 358D0080 */  ori   $t5, $t4, 0x80
/* 0040C130 A44D0008 */  sh    $t5, 8($v0)
.L0040C134:
/* 0040C134 8FAE0028 */  lw    $t6, 0x28($sp)
/* 0040C138 AC4E0004 */  sw    $t6, 4($v0)
.L0040C13C:
/* 0040C13C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0040C140 27BD0020 */  addiu $sp, $sp, 0x20
/* 0040C144 03E00008 */  jr    $ra
/* 0040C148 00000000 */   nop   
    .type local_in_reg, @function
    .size local_in_reg, .-local_in_reg
    .end local_in_reg
)"");
