#include <stdlib.h>
#include <string.h>
#include "libp/libp.h"
#include "libu/libu.h"
#include "uoptdata.h"
#include "uoptions.h"
#include "uoptdbg.h"
#include "uoptkill.h"
#include "uoptreg1.h"
#include "uoptutil.h"
#include "feedback.h"
__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000AF00:
    # 004205F8 genrlodrstr
    .ascii "uoptemit.p"

RO_1000AF0A:
    # 004205F8 genrlodrstr
    .asciz "Warning: kind dumped ignored."

    .balign 4
jtbl_1000AF28:
    # 004205F8 genrlodrstr
    .gpword .L00420900
    .gpword .L004208D8
    .gpword .L004208EC
    .gpword .L0042089C

RO_1000AF5C:
    # 004230F0 func_004230F0
    .ascii "uoptemit.p"

RO_1000AF66:
    # 004230F0 func_004230F0
    .ascii "uoptemit.p"

RO_1000AF70:
    # 004230F0 func_004230F0
    .ascii "uoptemit.p"

RO_1000AF7A:
    # 004230F0 func_004230F0
    .ascii "uoptemit.p"

    .balign 4
jtbl_1000AF84:
    # 004230F0 func_004230F0
    .gpword .L004233C0
    .gpword .L004233C8
    .gpword .L004233C0
    .gpword .L004233C0
    .gpword .L004233C0

    .balign 4
jtbl_1000AF98:
    # 004230F0 func_004230F0
    .gpword .L0042365C
    .gpword .L00423638
    .gpword .L00423640
    .gpword .L00423638
    .gpword .L00423638
    .gpword .L00423638

    .balign 4
jtbl_1000AFB0:
    # 004230F0 func_004230F0
    .gpword .L004238F4
    .gpword .L004238D0
    .gpword .L004238D8
    .gpword .L004238D0
    .gpword .L004238D0
    .gpword .L004238D0

    .balign 4
jtbl_1000AFC8:
    # 004230F0 func_004230F0
    .gpword .L00423160
    .gpword .L00423218
    .gpword .L00423304
    .gpword .L004238A4
    .gpword .L0042360C
    .gpword .L00423304
    .gpword .L00424FC8
    .gpword .L004232E4

RO_1000AFE8:
    # 00424FFC func_00424FFC
    .ascii "uoptemit.p"

RO_1000AFF2:
    # 00424FFC func_00424FFC
    .ascii "uoptemit.p"

RO_1000AFFC:
    # 00424FFC func_00424FFC
    .ascii "uoptemit.p"

RO_1000B006:
    # 00424FFC func_00424FFC
    .ascii "uoptemit.p"

    .balign 4
jtbl_1000B010:
    # 00424FFC func_00424FFC
    .gpword .L004250E8
    .gpword .L004250C4
    .gpword .L004250CC
    .gpword .L004250C4
    .gpword .L004250C4
    .gpword .L004250C4

    .balign 4
jtbl_1000B028:
    # 00424FFC func_00424FFC
    .gpword .L0042520C
    .gpword .L004251E8
    .gpword .L004251F0
    .gpword .L004251E8
    .gpword .L004251E8
    .gpword .L004251E8

    .balign 4
jtbl_1000B040:
    # 00424FFC func_00424FFC
    .gpword .L00425314
    .gpword .L0042531C
    .gpword .L00425314
    .gpword .L00425314
    .gpword .L00425314

    .balign 4
jtbl_1000B054:
    # 00424FFC func_00424FFC
    .gpword .L00425580
    .gpword .L00425580
    .gpword .L00425068
    .gpword .L004252E4
    .gpword .L004251BC
    .gpword .L00425068
    .gpword .L00425560
    .gpword .L00425580

RO_1000B074:
    # 00425618 func_00425618
    .ascii "uoptemit.p"

RO_1000B07E:
    # 00425618 func_00425618
    .ascii "uoptemit.p"

RO_1000B088:
    # 00425618 func_00425618
    .ascii "uoptemit.p"

RO_1000B092:
    # 00425618 func_00425618
    .ascii "uoptemit.p"

RO_1000B09C:
    # 00425618 func_00425618
    .asciz "uoptemit.p"

    .balign 4
jtbl_1000B0A8:
    # 00425618 func_00425618
    .gpword .L00425B38
    .gpword .L00425F34
    .gpword .L00425F34
    .gpword .L00425CC0

    .balign 4
jtbl_1000B0B8:
    # 00425618 func_00425618
    .gpword .L00425FE0
    .gpword .L00425D4C

    .balign 4
jtbl_1000B0C0:
    # 00425618 func_00425618
    .gpword .L00425FE0
    .gpword .L00425FE0
    .gpword .L00425CE8

    .balign 4
jtbl_1000B0CC:
    # 00425618 func_00425618
    .gpword .L00425FE0
    .gpword .L00425FE0
    .gpword .L00425D5C
    .gpword .L00425F34
    .gpword .L00425F34
    .gpword .L00425F34
    .gpword .L00425D10
    .gpword .L00425F34
    .gpword .L00425FE0
    .gpword .L00425F34
    .gpword .L00425DB8

    .balign 4
jtbl_1000B0F8:
    # 00425618 func_00425618
    .gpword .L00425D6C
    .gpword .L00425D6C
    .gpword .L00425D8C

    .balign 4
jtbl_1000B104:
    # 00425618 func_00425618
    .gpword .L00426034
    .gpword .L00426590
    .gpword .L00426590
    .gpword .L004261E0

    .balign 4
jtbl_1000B114:
    # 00425618 func_00425618
    .gpword .L00426578
    .gpword .L00426074

    .balign 4
jtbl_1000B11C:
    # 00425618 func_00425618
    .gpword .L00426318
    .gpword .L00426380

    .balign 4
jtbl_1000B124:
    # 00425618 func_00425618
    .gpword .L00426578
    .gpword .L00426578
    .gpword .L004261F4

    .balign 4
jtbl_1000B130:
    # 00425618 func_00425618
    .gpword .L004263E8
    .gpword .L00426450

    .balign 4
jtbl_1000B138:
    # 00425618 func_00425618
    .gpword .L00426518
    .gpword .L004264B8
    .gpword .L004260F8
    .gpword .L00426590
    .gpword .L00426590
    .gpword .L00426590
    .gpword .L00426058
    .gpword .L00426590
    .gpword .L00426578
    .gpword .L00426590
    .gpword .L004262E4

    .balign 4
jtbl_1000B164:
    # 00425618 func_00425618
    .gpword .L0042621C
    .gpword .L00426230
    .gpword .L00426270

    .balign 4
jtbl_1000B170:
    # 00425618 func_00425618
    .gpword .L00426578
    .gpword .L00426590
    .gpword .L00426590
    .gpword .L00426208

    .balign 4
jtbl_1000B180:
    # 00425618 func_00425618
    .gpword .L00426A40
    .gpword .L00426A40
    .gpword .L004268D0

    .balign 4
jtbl_1000B18C:
    # 00425618 func_00425618
    .gpword .L004268B8
    .gpword .L00426938
    .gpword .L00426938
    .gpword .L00426A40
    .gpword .L00426A40

    .balign 4
jtbl_1000B1A0:
    # 00425618 func_00425618
    .gpword .L00426B60
    .gpword .L00426BA4

    .balign 4
jtbl_1000B1A8:
    # 00425618 func_00425618
    .gpword .L00426C34
    .gpword .L00426BE8
    .gpword .L00426B44

    .balign 4
jtbl_1000B1B4:
    # 00425618 func_00425618
    .gpword .L00426AFC
    .gpword .L00426C44
    .gpword .L00426C44
    .gpword .L00426B38
    .gpword .L00426ACC

    .balign 4
jtbl_1000B1C8:
    # 00425618 func_00425618
    .gpword .L0042566C
    .gpword .L0042566C
    .gpword .L0042572C
    .gpword .L00425A3C
    .gpword .L00426DB4
    .gpword .L00426DB4
    .gpword .L00426DB4
    .gpword .L0042566C

RO_1000B1E8:
    # 00426DE8 func_00426DE8
    .asciz "uoptemit.p"

    .balign 4
jtbl_1000B1F4:
    # 00426DE8 func_00426DE8
    .gpword .L00426E78
    .gpword .L00426EB0
    .gpword .L00426F34
    .gpword .L00426F4C

RO_1000B204:
    # 00426FA4 func_00426FA4
    .asciz "uoptemit.p"

    .balign 4
jtbl_1000B210:
    # 00426FA4 func_00426FA4
    .gpword .L00427008
    .gpword .L004270BC
    .gpword .L00427198
    .gpword .L00427650
    .gpword .L00427218
    .gpword .L0042743C
    .gpword .L00428DA4
    .gpword .L00427178

RO_1000B230:
    # 0042BF08 reemit
    .ascii " "

RO_1000B231:
    # 0042BF08 reemit
    .ascii ": double float parameter passed for integer;"

RO_1000B25D:
    # 0042BF08 reemit
    .ascii " line "

RO_1000B263:
    # 0042BF08 reemit
    .ascii "uopt: Warning: "

RO_1000B272:
    # 0042BF08 reemit
    .asciz " "

    .balign 4
jtbl_1000B274:
    # 0042BF08 reemit
    .gpword .L0042E104
    .gpword .Lreemit_error
    .gpword .L0042D878
    .gpword .Lreemit_error
    .gpword .Lreemit_error
    .gpword .L0042DA2C

    .balign 4
jtbl_1000B28C:
    # 0042BF08 reemit
    .gpword .L0042DAEC
    .gpword .L0042DEC0
    .gpword .L0042D8D8
    .gpword .L0042E358
    .gpword .Lreemit_error
    .gpword .Lreemit_error
    .gpword .L0042E3A0
    .gpword .L0042E358
    .gpword .L0042DD50
    .gpword .Lreemit_error
    .gpword .Lreemit_error
    .gpword .Lreemit_error
    .gpword .L0042D9B8

    .balign 4
jtbl_1000B2C0:
    # 0042BF08 reemit
    .gpword .L0042C8F4
    .gpword .L0042C328
    .gpword .L0042C328
    .gpword .Lreemit_error
    .gpword .L0042D4A4
    .gpword .Lreemit_error
    .gpword .L0042E318
    .gpword .L0042E2F4

    .balign 4
jtbl_1000B2E0:
    # 0042BF08 reemit
    .gpword .L0042DAA0
    .gpword .Lreemit_error
    .gpword .Lreemit_error
    .gpword .L0042E33C
    .gpword .Lreemit_error
    .gpword .Lreemit_error
    .gpword .Lreemit_error
    .gpword .L0042C5E8
    .gpword .L0042C5E8
    .gpword .Lreemit_error
    .gpword .Lreemit_error
    .gpword .L0042D1A4
    .gpword .Lreemit_error
    .gpword .Lreemit_error
    .gpword .Lreemit_error
    .gpword .L0042E584
    .gpword .Lreemit_error
    .gpword .Lreemit_error
    .gpword .Lreemit_error
    .gpword .L0042CB00
    .gpword .Lreemit_error
    .gpword .L0042D0E0
    .gpword .L0042DB84
    .gpword .Lreemit_error
    .gpword .Lreemit_error
    .gpword .L0042DA58

    .balign 4
jtbl_1000B348:
    # 0042BF08 reemit
    .gpword .L0042E358
    .gpword .Lreemit_error
    .gpword .L0042C8F4
    .gpword .L0042C894
    .gpword .Lreemit_error
    .gpword .Lreemit_error
    .gpword .L0042D1D4
    .gpword .L0042C768
    .gpword .L0042C768
    .gpword .L0042C768
    .gpword .L0042C768
    .gpword .L0042C768
    .gpword .L0042C768
    .gpword .Lreemit_error
    .gpword .Lreemit_error
    .gpword .L0042D47C
    .gpword .Lreemit_error
    .gpword .Lreemit_error
    .gpword .Lreemit_error
    .gpword .L0042D4FC
    .gpword .Lreemit_error
    .gpword .L0042D090

    .balign 4
jtbl_1000B3A0:
    # 0042BF08 reemit
    .gpword .L0042C1BC
    .gpword .Lreemit_error
    .gpword .Lreemit_error
    .gpword .L0042DD50
    .gpword .Lreemit_error
    .gpword .Lreemit_error
    .gpword .Lreemit_error
    .gpword .L0042C1BC

.data
# 10010480
glabel use_ix
    # 004230F0 func_004230F0
    # 0042BF08 reemit
    .byte 0x00
    .type use_ix, @object
    .size use_ix, .-use_ix # 1
    .space 3

D_100104B8:
    # 004230F0 func_004230F0
    .byte 0x20,0x10,0x00,0x80,0x00,0x07,0x9e,0xa0,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x10,0x20

D_100104CC:
    # 004230F0 func_004230F0
    .byte 0xc0,0x00,0x00,0xe4,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x12,0x00,0x40,0x02,0x04

D_100104DC:
    # 004230F0 func_004230F0
    .byte 0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x04,0x00,0x00,0x20,0x00,0x00,0x20,0x00,0x00

D_100104F0:
    # 004230F0 func_004230F0
    .byte 0x00,0x0c,0x00,0x60,0x00,0x00,0x01,0x00,0x40,0x00,0x00,0x00

D_100104FC:
    # 004230F0 func_004230F0
    .byte 0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x00

D_10010510:
    # 004230F0 func_004230F0
    .byte 0x00,0x00,0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x20

D_10010520:
    # 004230F0 func_004230F0
    .byte 0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x10,0x00,0x40,0x00,0x00

D_10010530:
    # 004230F0 func_004230F0
    .byte 0x40,0x00,0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x04

D_10010540:
    # 004230F0 func_004230F0
    .byte 0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00

D_10010554:
    # 004230F0 func_004230F0
    .byte 0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x01

D_1001055C:
    # 004230F0 func_004230F0
    .byte 0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04

D_1001056C:
    # 004230F0 func_004230F0
    .byte 0x00,0x03,0x8c,0xa0,0x40,0x00,0x00,0x00

D_10010574:
    # 004230F0 func_004230F0
    .byte 0x10,0xc0,0x00,0x00,0x00,0x06,0x00,0x01

D_1001057C:
    # 00424FFC func_00424FFC
    .byte 0x00,0x00,0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x20

D_1001058C:
    # 00424FFC func_00424FFC
    .byte 0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04

D_1001059C:
    # 00424FFC func_00424FFC
    .byte 0x10,0xc0,0x00,0x00,0x00,0x06,0x00,0x01

D_100105A4:
    # 00426FA4 func_00426FA4
    .byte 0x20,0x10,0x00,0x80,0x00,0x03,0x9e,0xa0,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x10,0x20

D_100105B8:
    # 00426FA4 func_00426FA4
    .byte 0xc0,0x00,0x00,0xe4,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x12,0x00,0x40,0x02,0x04

D_100105C8:
    # 00426FA4 func_00426FA4
    .byte 0x10,0xc0,0x00,0x00,0x00,0x06,0x00,0x01

D_100105D0:
    # 00426FA4 func_00426FA4
    .byte 0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x04,0x00,0x00,0x20,0x00,0x00,0x20,0x00,0x00

D_100105E4:
    # 00426FA4 func_00426FA4
    .byte 0x00,0x0c,0x00,0x60,0x00,0x00,0x01,0x00,0x40,0x00,0x00,0x00

D_100105F0:
    # 00426FA4 func_00426FA4
    .byte 0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x00

D_10010604:
    # 00426FA4 func_00426FA4
    .byte 0x00,0x00,0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x20

D_10010614:
    # 00426FA4 func_00426FA4
    .byte 0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04

D_10010624:
    # 00426FA4 func_00426FA4
    .byte 0x00,0x03,0x8c,0xa0,0x40,0x00,0x00,0x00

D_1001062C:
    # 00426FA4 func_00426FA4
    .byte 0x00,0x00,0x00,0x01,0x80,0x00,0x00,0x00

D_10010634:
    # 00426FA4 func_00426FA4
    .byte 0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10

D_10010640:
    # 00428DD8 func_00428DD8
    .byte 0x00,0x00,0x00,0x20,0x00,0x00,0x01,0x00

D_10010648:
    # 00428DD8 func_00428DD8
    .byte 0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04

D_10010658:
    # 00428DD8 func_00428DD8
    .byte 0x00,0x00,0x00,0x20,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x02

D_10010664:
    # 0042933C func_0042933C
    .byte 0x00,0x00,0x00,0x20,0x00,0x00,0x01,0x00

D_1001066C:
    # 0042933C func_0042933C
    .byte 0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04

D_1001067C:
    # 0042933C func_0042933C
    .byte 0x00,0x00,0x00,0x20,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x02

D_10010688:
    # 0042BF08 reemit
    .byte 0x00,0x20,0x00,0x00,0x00,0x80,0x00,0x00



.bss
    .balign 4
# 1001C5F8
glabel has_ix
    # 004230F0 func_004230F0
    # 0042B890 func_0042B890
    # 0042BF08 reemit
    .space 4
    .size has_ix, 4
    .type has_ix, @object

    .balign 4
# 1001C5FC
glabel loopno
    # 004230F0 func_004230F0
    # 0042B890 func_0042B890
    # 0042BF08 reemit
    .space 4
    .size loopno, 4
    .type loopno, @object

    .balign 16
# 1001C890
glabel gpunaltab
    # 0041F6F0 base_in_reg
    # 00422AF0 func_00422AF0
    # 0042BF08 reemit
    .space 24
    .size gpunaltab, 24
    .type gpunaltab, @object

    .balign 16
# 1001C8A8
glabel spunaltab
    # 0041F6F0 base_in_reg
    # 00422AF0 func_00422AF0
    # 0042BF08 reemit
    .space 24
    .size spunaltab, 24
    .type spunaltab, @object

    .balign 16
# 1001C960
glabel eereg_saved_locs
    # 0042A1C8 func_0042A1C8
    # 0042A4CC func_0042A4CC
    # 0042A7D0 func_0042A7D0
    # 0042BF08 reemit
    .space 88
    .size eereg_saved_locs, 88
    .type eereg_saved_locs, @object

    .balign 16
# 1001C9B8
glabel baseregexpr
    # 0041F6F0 base_in_reg
    # 00422AF0 func_00422AF0
    # 0042BF08 reemit
    .space 92
    .size baseregexpr, 92
    .type baseregexpr, @object

    .balign 16
# 1001CA18
glabel baseregbase
    # 0041F6F0 base_in_reg
    .space 92
    .size baseregbase, 92
    .type baseregbase, @object

    .balign 16
# 1001CFD8
glabel unaltab
    # 0041F6F0 base_in_reg
    # 00422AF0 func_00422AF0
    # 0042BF08 reemit
    .space 440
    .size unaltab, 532
    .type unaltab, @object

# 23 + 110 space?

.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
)"");

extern bool use_ix;
extern bool has_ix;
extern int loopno;

extern unsigned char gpunaltab[23];
extern unsigned char spunaltab[23];

extern int eereg_saved_locs[22];

extern struct IChain *baseregexpr[23];

// what is this
extern struct Unal {
    unsigned char data[23];
} unaltab[23];

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel igen3
    .ent igen3
    # 00422D04 func_00422D04
    # 004230F0 func_004230F0
    # 00426FA4 func_00426FA4
    # 0042BF08 reemit
/* 0041EC10 3C1C0FC0 */  .cpload $t9
/* 0041EC14 279CB680 */  
/* 0041EC18 0399E021 */  
/* 0041EC1C 90A30016 */  lbu   $v1, 0x16($a1)
/* 0041EC20 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041EC24 24070003 */  li    $a3, 3
/* 0041EC28 30630007 */  andi  $v1, $v1, 7
/* 0041EC2C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041EC30 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041EC34 AFA40020 */  sw    $a0, 0x20($sp)
/* 0041EC38 14E30015 */  bne   $a3, $v1, .L0041EC90
/* 0041EC3C AFA60028 */   sw    $a2, 0x28($sp)
/* 0041EC40 8CAE0010 */  lw    $t6, 0x10($a1)
/* 0041EC44 2401001D */  li    $at, 29
/* 0041EC48 15C10011 */  bne   $t6, $at, .L0041EC90
/* 0041EC4C 00000000 */   nop   
/* 0041EC50 8CAF0014 */  lw    $t7, 0x14($a1)
/* 0041EC54 000FC2C2 */  srl   $t8, $t7, 0xb
/* 0041EC58 17000005 */  bnez  $t8, .L0041EC70
/* 0041EC5C 00000000 */   nop   
/* 0041EC60 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 0041EC64 2419004B */  li    $t9, 75
/* 0041EC68 10000004 */  b     .L0041EC7C
/* 0041EC6C A0990000 */   sb    $t9, ($a0)
.L0041EC70:
/* 0041EC70 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 0041EC74 24080048 */  li    $t0, 72
/* 0041EC78 A0880000 */  sb    $t0, ($a0)
.L0041EC7C:
/* 0041EC7C 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0041EC80 0320F809 */  jalr  $t9
/* 0041EC84 00000000 */   nop   
/* 0041EC88 10000065 */  b     .L0041EE20
/* 0041EC8C 8FBC0018 */   lw    $gp, 0x18($sp)
.L0041EC90:
/* 0041EC90 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 0041EC94 90A60001 */  lbu   $a2, 1($a1)
/* 0041EC98 2409008B */  li    $t1, 139
/* 0041EC9C 90820001 */  lbu   $v0, 1($a0)
/* 0041ECA0 A0890000 */  sb    $t1, ($a0)
/* 0041ECA4 A4800002 */  sh    $zero, 2($a0)
/* 0041ECA8 000256C0 */  sll   $t2, $v0, 0x1b
/* 0041ECAC 000A5EC2 */  srl   $t3, $t2, 0x1b
/* 0041ECB0 00CB6026 */  xor   $t4, $a2, $t3
/* 0041ECB4 318D001F */  andi  $t5, $t4, 0x1f
/* 0041ECB8 01A27026 */  xor   $t6, $t5, $v0
/* 0041ECBC 01C01025 */  move  $v0, $t6
/* 0041ECC0 00027E00 */  sll   $t7, $v0, 0x18
/* 0041ECC4 000FC742 */  srl   $t8, $t7, 0x1d
/* 0041ECC8 8CAB0014 */  lw    $t3, 0x14($a1)
/* 0041ECCC 0078C826 */  xor   $t9, $v1, $t8
/* 0041ECD0 90AF0019 */  lbu   $t7, 0x19($a1)
/* 0041ECD4 00194740 */  sll   $t0, $t9, 0x1d
/* 0041ECD8 A08E0001 */  sb    $t6, 1($a0)
/* 0041ECDC 8CAD0010 */  lw    $t5, 0x10($a1)
/* 0041ECE0 90AE0018 */  lbu   $t6, 0x18($a1)
/* 0041ECE4 00084E02 */  srl   $t1, $t0, 0x18
/* 0041ECE8 01225026 */  xor   $t2, $t1, $v0
/* 0041ECEC 000B62C2 */  srl   $t4, $t3, 0xb
/* 0041ECF0 A08A0001 */  sb    $t2, 1($a0)
/* 0041ECF4 AC8C0004 */  sw    $t4, 4($a0)
/* 0041ECF8 AC8D000C */  sw    $t5, 0xc($a0)
/* 0041ECFC 11E00016 */  beqz  $t7, .L0041ED58
/* 0041ED00 AC8E0008 */   sw    $t6, 8($a0)
/* 0041ED04 10E30014 */  beq   $a3, $v1, .L0041ED58
/* 0041ED08 2401000E */   li    $at, 14
/* 0041ED0C 10C10012 */  beq   $a2, $at, .L0041ED58
/* 0041ED10 00000000 */   nop   
/* 0041ED14 8F988AC4 */  lw     $t8, %got(dogenvreg)($gp)
/* 0041ED18 93180000 */  lbu   $t8, ($t8)
/* 0041ED1C 5300000E */  beql  $t8, $zero, .L0041ED58
/* 0041ED20 A0A00019 */   sb    $zero, 0x19($a1)
/* 0041ED24 8F998980 */  lw     $t9, %got(curblk)($gp)
/* 0041ED28 8F390000 */  lw    $t9, ($t9)
/* 0041ED2C 572C000A */  bnel  $t9, $t4, .L0041ED58
/* 0041ED30 A0A00019 */   sb    $zero, 0x19($a1)
/* 0041ED34 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0041ED38 AFA50024 */  sw    $a1, 0x24($sp)
/* 0041ED3C 0320F809 */  jalr  $t9
/* 0041ED40 00000000 */   nop   
/* 0041ED44 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041ED48 8FA50024 */  lw    $a1, 0x24($sp)
/* 0041ED4C 24070003 */  li    $a3, 3
/* 0041ED50 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 0041ED54 A0A00019 */  sb    $zero, 0x19($a1)
.L0041ED58:
/* 0041ED58 8F898A5C */  lw     $t1, %got(lang)($gp)
/* 0041ED5C 93AA002B */  lbu   $t2, 0x2b($sp)
/* 0041ED60 91290000 */  lbu   $t1, ($t1)
/* 0041ED64 50E90007 */  beql  $a3, $t1, .L0041ED84
/* 0041ED68 93AD0023 */   lbu   $t5, 0x23($sp)
/* 0041ED6C 51400005 */  beql  $t2, $zero, .L0041ED84
/* 0041ED70 93AD0023 */   lbu   $t5, 0x23($sp)
/* 0041ED74 948B0002 */  lhu   $t3, 2($a0)
/* 0041ED78 356C0001 */  ori   $t4, $t3, 1
/* 0041ED7C A48C0002 */  sh    $t4, 2($a0)
/* 0041ED80 93AD0023 */  lbu   $t5, 0x23($sp)
.L0041ED84:
/* 0041ED84 A08D0000 */  sb    $t5, ($a0)
/* 0041ED88 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0041ED8C 0320F809 */  jalr  $t9
/* 0041ED90 00000000 */   nop   
/* 0041ED94 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041ED98 24010001 */  li    $at, 1
/* 0041ED9C 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 0041EDA0 908E0001 */  lbu   $t6, 1($a0)
/* 0041EDA4 000E7E00 */  sll   $t7, $t6, 0x18
/* 0041EDA8 000FC742 */  srl   $t8, $t7, 0x1d
/* 0041EDAC 5701001D */  bnel  $t8, $at, .L0041EE24
/* 0041EDB0 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0041EDB4 8F998980 */  lw     $t9, %got(curblk)($gp)
/* 0041EDB8 8C880004 */  lw    $t0, 4($a0)
/* 0041EDBC 8F390000 */  lw    $t9, ($t9)
/* 0041EDC0 57280018 */  bnel  $t9, $t0, .L0041EE24
/* 0041EDC4 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0041EDC8 8F898B48 */  lw     $t1, %got(stack_reversed)($gp)
/* 0041EDCC 91290000 */  lbu   $t1, ($t1)
/* 0041EDD0 1520000B */  bnez  $t1, .L0041EE00
/* 0041EDD4 00000000 */   nop   
/* 0041EDD8 8F8289FC */  lw     $v0, %got(highestmdef)($gp)
/* 0041EDDC 8C8A000C */  lw    $t2, 0xc($a0)
/* 0041EDE0 8C4C0000 */  lw    $t4, ($v0)
/* 0041EDE4 000A5823 */  negu  $t3, $t2
/* 0041EDE8 018B082A */  slt   $at, $t4, $t3
/* 0041EDEC 10200002 */  beqz  $at, .L0041EDF8
/* 0041EDF0 00000000 */   nop   
/* 0041EDF4 01606025 */  move  $t4, $t3
.L0041EDF8:
/* 0041EDF8 10000009 */  b     .L0041EE20
/* 0041EDFC AC4C0000 */   sw    $t4, ($v0)
.L0041EE00:
/* 0041EE00 8F8289FC */  lw     $v0, %got(highestmdef)($gp)
/* 0041EE04 8C8D000C */  lw    $t5, 0xc($a0)
/* 0041EE08 8C4E0000 */  lw    $t6, ($v0)
/* 0041EE0C 01CD082A */  slt   $at, $t6, $t5
/* 0041EE10 50200003 */  beql  $at, $zero, .L0041EE20
/* 0041EE14 AC4E0000 */   sw    $t6, ($v0)
/* 0041EE18 01A07025 */  move  $t6, $t5
/* 0041EE1C AC4E0000 */  sw    $t6, ($v0)
.L0041EE20:
/* 0041EE20 8FBF001C */  lw    $ra, 0x1c($sp)
.L0041EE24:
/* 0041EE24 27BD0020 */  addiu $sp, $sp, 0x20
/* 0041EE28 03E00008 */  jr    $ra
/* 0041EE2C 00000000 */   nop   
    .type igen3, @function
    .size igen3, .-igen3
    .end igen3

glabel outparlod
    .ent outparlod
    # 0042269C gen_outparcode
/* 0041EE30 3C1C0FC0 */  .cpload $t9
/* 0041EE34 279CB460 */  
/* 0041EE38 0399E021 */  
/* 0041EE3C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041EE40 AFA40020 */  sw    $a0, 0x20($sp)
/* 0041EE44 00803025 */  move  $a2, $a0
/* 0041EE48 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 0041EE4C 90AE0001 */  lbu   $t6, 1($a1)
/* 0041EE50 90AB002E */  lbu   $t3, 0x2e($a1)
/* 0041EE54 90820001 */  lbu   $v0, 1($a0)
/* 0041EE58 8CAA0028 */  lw    $t2, 0x28($a1)
/* 0041EE5C A0860000 */  sb    $a2, ($a0)
/* 0041EE60 00027EC0 */  sll   $t7, $v0, 0x1b
/* 0041EE64 000FC6C2 */  srl   $t8, $t7, 0x1b
/* 0041EE68 01D8C826 */  xor   $t9, $t6, $t8
/* 0041EE6C 3328001F */  andi  $t0, $t9, 0x1f
/* 0041EE70 01024826 */  xor   $t1, $t0, $v0
/* 0041EE74 01201025 */  move  $v0, $t1
/* 0041EE78 00026600 */  sll   $t4, $v0, 0x18
/* 0041EE7C 000C6F42 */  srl   $t5, $t4, 0x1d
/* 0041EE80 8CA8002C */  lw    $t0, 0x2c($a1)
/* 0041EE84 016D7826 */  xor   $t7, $t3, $t5
/* 0041EE88 90AC0020 */  lbu   $t4, 0x20($a1)
/* 0041EE8C 000F7740 */  sll   $t6, $t7, 0x1d
/* 0041EE90 000EC602 */  srl   $t8, $t6, 0x18
/* 0041EE94 A0890001 */  sb    $t1, 1($a0)
/* 0041EE98 0302C826 */  xor   $t9, $t8, $v0
/* 0041EE9C 00084AC2 */  srl   $t1, $t0, 0xb
/* 0041EEA0 A0990001 */  sb    $t9, 1($a0)
/* 0041EEA4 AC890004 */  sw    $t1, 4($a0)
/* 0041EEA8 A4800002 */  sh    $zero, 2($a0)
/* 0041EEAC AC8A000C */  sw    $t2, 0xc($a0)
/* 0041EEB0 AC8C0008 */  sw    $t4, 8($a0)
/* 0041EEB4 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0041EEB8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041EEBC AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041EEC0 0320F809 */  jalr  $t9
/* 0041EEC4 00000000 */   nop   
/* 0041EEC8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041EECC 24010001 */  li    $at, 1
/* 0041EED0 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 0041EED4 908B0001 */  lbu   $t3, 1($a0)
/* 0041EED8 000B6E00 */  sll   $t5, $t3, 0x18
/* 0041EEDC 000D7F42 */  srl   $t7, $t5, 0x1d
/* 0041EEE0 55E1001D */  bnel  $t7, $at, .L0041EF58
/* 0041EEE4 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0041EEE8 8F8E8980 */  lw     $t6, %got(curblk)($gp)
/* 0041EEEC 8C980004 */  lw    $t8, 4($a0)
/* 0041EEF0 8DCE0000 */  lw    $t6, ($t6)
/* 0041EEF4 55D80018 */  bnel  $t6, $t8, .L0041EF58
/* 0041EEF8 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0041EEFC 8F998B48 */  lw     $t9, %got(stack_reversed)($gp)
/* 0041EF00 93390000 */  lbu   $t9, ($t9)
/* 0041EF04 1720000B */  bnez  $t9, .L0041EF34
/* 0041EF08 00000000 */   nop   
/* 0041EF0C 8F8289FC */  lw     $v0, %got(highestmdef)($gp)
/* 0041EF10 8C88000C */  lw    $t0, 0xc($a0)
/* 0041EF14 8C4A0000 */  lw    $t2, ($v0)
/* 0041EF18 00084823 */  negu  $t1, $t0
/* 0041EF1C 0149082A */  slt   $at, $t2, $t1
/* 0041EF20 10200002 */  beqz  $at, .L0041EF2C
/* 0041EF24 00000000 */   nop   
/* 0041EF28 01205025 */  move  $t2, $t1
.L0041EF2C:
/* 0041EF2C 10000009 */  b     .L0041EF54
/* 0041EF30 AC4A0000 */   sw    $t2, ($v0)
.L0041EF34:
/* 0041EF34 8F8289FC */  lw     $v0, %got(highestmdef)($gp)
/* 0041EF38 8C8C000C */  lw    $t4, 0xc($a0)
/* 0041EF3C 8C4B0000 */  lw    $t3, ($v0)
/* 0041EF40 016C082A */  slt   $at, $t3, $t4
/* 0041EF44 50200003 */  beql  $at, $zero, .L0041EF54
/* 0041EF48 AC4B0000 */   sw    $t3, ($v0)
/* 0041EF4C 01805825 */  move  $t3, $t4
/* 0041EF50 AC4B0000 */  sw    $t3, ($v0)
.L0041EF54:
/* 0041EF54 8FBF001C */  lw    $ra, 0x1c($sp)
.L0041EF58:
/* 0041EF58 27BD0020 */  addiu $sp, $sp, 0x20
/* 0041EF5C 03E00008 */  jr    $ra
/* 0041EF60 00000000 */   nop   
    .type outparlod, @function
    .size outparlod, .-outparlod
    .end outparlod

glabel gen_cvtl
    .ent gen_cvtl
    # 0041F048 genrop
/* 0041EF64 3C1C0FC0 */  .cpload $t9
/* 0041EF68 279CB32C */  
/* 0041EF6C 0399E021 */  
/* 0041EF70 00803025 */  move  $a2, $a0
/* 0041EF74 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 0041EF78 240E0019 */  li    $t6, 25
/* 0041EF7C 000650C0 */  sll   $t2, $a2, 3
/* 0041EF80 90820001 */  lbu   $v0, 1($a0)
/* 0041EF84 A08E0000 */  sb    $t6, ($a0)
/* 0041EF88 A4800002 */  sh    $zero, 2($a0)
/* 0041EF8C 00027EC0 */  sll   $t7, $v0, 0x1b
/* 0041EF90 000FC6C2 */  srl   $t8, $t7, 0x1b
/* 0041EF94 00B8C826 */  xor   $t9, $a1, $t8
/* 0041EF98 3328001F */  andi  $t0, $t9, 0x1f
/* 0041EF9C 01024826 */  xor   $t1, $t0, $v0
/* 0041EFA0 A0890001 */  sb    $t1, 1($a0)
/* 0041EFA4 AC8A0004 */  sw    $t2, 4($a0)
/* 0041EFA8 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0041EFAC 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041EFB0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041EFB4 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041EFB8 0320F809 */  jalr  $t9
/* 0041EFBC AFA50024 */   sw    $a1, 0x24($sp)
/* 0041EFC0 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041EFC4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041EFC8 27BD0020 */  addiu $sp, $sp, 0x20
/* 0041EFCC 03E00008 */  jr    $ra
/* 0041EFD0 00000000 */   nop   
    .type gen_cvtl, @function
    .size gen_cvtl, .-gen_cvtl
    .end gen_cvtl

glabel gen_cvt
    .ent gen_cvt
    # 004230F0 func_004230F0
/* 0041EFD4 3C1C0FC0 */  .cpload $t9
/* 0041EFD8 279CB2BC */  
/* 0041EFDC 0399E021 */  
/* 0041EFE0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041EFE4 AFA40020 */  sw    $a0, 0x20($sp)
/* 0041EFE8 00803025 */  move  $a2, $a0
/* 0041EFEC 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 0041EFF0 240E0018 */  li    $t6, 24
/* 0041EFF4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041EFF8 90820001 */  lbu   $v0, 1($a0)
/* 0041EFFC A08E0000 */  sb    $t6, ($a0)
/* 0041F000 A0850008 */  sb    $a1, 8($a0)
/* 0041F004 00027EC0 */  sll   $t7, $v0, 0x1b
/* 0041F008 000FC6C2 */  srl   $t8, $t7, 0x1b
/* 0041F00C 00D8C826 */  xor   $t9, $a2, $t8
/* 0041F010 3328001F */  andi  $t0, $t9, 0x1f
/* 0041F014 01024826 */  xor   $t1, $t0, $v0
/* 0041F018 A0890001 */  sb    $t1, 1($a0)
/* 0041F01C A4800002 */  sh    $zero, 2($a0)
/* 0041F020 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0041F024 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041F028 AFA50024 */  sw    $a1, 0x24($sp)
/* 0041F02C 0320F809 */  jalr  $t9
/* 0041F030 00000000 */   nop   
/* 0041F034 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041F038 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041F03C 27BD0020 */  addiu $sp, $sp, 0x20
/* 0041F040 03E00008 */  jr    $ra
/* 0041F044 00000000 */   nop   
    .type gen_cvt, @function
    .size gen_cvt, .-gen_cvt
    .end gen_cvt

glabel genrop
    .ent genrop
    # 0041FA68 varlodstr
    # 0042020C gen_static_link
    # 00420A3C prolog
    # 00421C00 epilog
    # 0042269C gen_outparcode
    # 00422D04 func_00422D04
    # 004230F0 func_004230F0
    # 00426FA4 func_00426FA4
    # 0042AADC func_0042AADC
    # 0042B2C0 func_0042B2C0
    # 0042B890 func_0042B890
    # 0042BB4C func_0042BB4C
    # 0042BF08 reemit
/* 0041F048 3C1C0FC0 */  .cpload $t9
/* 0041F04C 279CB248 */  
/* 0041F050 0399E021 */  
/* 0041F054 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041F058 AFA40020 */  sw    $a0, 0x20($sp)
/* 0041F05C 93AE0023 */  lbu   $t6, 0x23($sp)
/* 0041F060 2401007B */  li    $at, 123
/* 0041F064 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041F068 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041F06C AFA50024 */  sw    $a1, 0x24($sp)
/* 0041F070 AFA60028 */  sw    $a2, 0x28($sp)
/* 0041F074 15C1000F */  bne   $t6, $at, .L0041F0B4
/* 0041F078 AFA7002C */   sw    $a3, 0x2c($sp)
/* 0041F07C 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 0041F080 93A4002B */  lbu   $a0, 0x2b($sp)
/* 0041F084 0320F809 */  jalr  $t9
/* 0041F088 00000000 */   nop   
/* 0041F08C 8FA4002C */  lw    $a0, 0x2c($sp)
/* 0041F090 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041F094 0082082A */  slt   $at, $a0, $v0
/* 0041F098 10200006 */  beqz  $at, .L0041F0B4
/* 0041F09C 00000000 */   nop   
/* 0041F0A0 8F99826C */  lw    $t9, %call16(gen_cvtl)($gp)
/* 0041F0A4 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041F0A8 0320F809 */  jalr  $t9
/* 0041F0AC 00000000 */   nop   
/* 0041F0B0 8FBC0018 */  lw    $gp, 0x18($sp)
.L0041F0B4:
/* 0041F0B4 8F858DA4 */  lw     $a1, %got(u)($gp)
/* 0041F0B8 93B8002B */  lbu   $t8, 0x2b($sp)
/* 0041F0BC 93AF0023 */  lbu   $t7, 0x23($sp)
/* 0041F0C0 90A20001 */  lbu   $v0, 1($a1)
/* 0041F0C4 ACA00004 */  sw    $zero, 4($a1)
/* 0041F0C8 A0AF0000 */  sb    $t7, ($a1)
/* 0041F0CC 0002CEC0 */  sll   $t9, $v0, 0x1b
/* 0041F0D0 001946C2 */  srl   $t0, $t9, 0x1b
/* 0041F0D4 03084826 */  xor   $t1, $t8, $t0
/* 0041F0D8 312A001F */  andi  $t2, $t1, 0x1f
/* 0041F0DC 01426026 */  xor   $t4, $t2, $v0
/* 0041F0E0 318DFF1F */  andi  $t5, $t4, 0xff1f
/* 0041F0E4 35AE0060 */  ori   $t6, $t5, 0x60
/* 0041F0E8 A0AC0001 */  sb    $t4, 1($a1)
/* 0041F0EC A0AE0001 */  sb    $t6, 1($a1)
/* 0041F0F0 8F998708 */  lw    $t9, %call16(coloroffset)($gp)
/* 0041F0F4 8FA40024 */  lw    $a0, 0x24($sp)
/* 0041F0F8 0320F809 */  jalr  $t9
/* 0041F0FC 00000000 */   nop   
/* 0041F100 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041F104 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 0041F108 AC82000C */  sw    $v0, 0xc($a0)
/* 0041F10C 8FAF002C */  lw    $t7, 0x2c($sp)
/* 0041F110 A4800002 */  sh    $zero, 2($a0)
/* 0041F114 AC8F0008 */  sw    $t7, 8($a0)
/* 0041F118 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0041F11C 0320F809 */  jalr  $t9
/* 0041F120 00000000 */   nop   
/* 0041F124 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041F128 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041F12C 27BD0020 */  addiu $sp, $sp, 0x20
/* 0041F130 03E00008 */  jr    $ra
/* 0041F134 00000000 */   nop   
    .type genrop, @function
    .size genrop, .-genrop
    .end genrop

glabel inreg
    .ent inreg
    # 0041FA68 varlodstr
    # 0042269C gen_outparcode
    # 00422D04 func_00422D04
    # 004230F0 func_004230F0
    # 00426FA4 func_00426FA4
    # 0042AADC func_0042AADC
    # 0042B2C0 func_0042B2C0
    # 0042B890 func_0042B890
    # 0042BB4C func_0042BB4C
    # 0042BF08 reemit
/* 0041F138 3C1C0FC0 */  .cpload $t9
/* 0041F13C 279CB158 */  
/* 0041F140 0399E021 */  
/* 0041F144 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041F148 8F9986BC */  lw    $t9, %call16(regclassof)($gp)
/* 0041F14C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041F150 AFA40028 */  sw    $a0, 0x28($sp)
/* 0041F154 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041F158 AFA70034 */  sw    $a3, 0x34($sp)
/* 0041F15C AFA40028 */  sw    $a0, 0x28($sp)
/* 0041F160 A3A00026 */  sb    $zero, 0x26($sp)
/* 0041F164 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041F168 0320F809 */  jalr  $t9
/* 0041F16C AFA60030 */   sw    $a2, 0x30($sp)
/* 0041F170 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041F174 00024080 */  sll   $t0, $v0, 2
/* 0041F178 8FA60030 */  lw    $a2, 0x30($sp)
/* 0041F17C 8F8E8D34 */  lw     $t6, %got(firsterreg)($gp)
/* 0041F180 8F998B0C */  lw     $t9, %got(allcallersave)($gp)
/* 0041F184 93A30026 */  lbu   $v1, 0x26($sp)
/* 0041F188 25CEFFFC */  addiu $t6, $t6, -4
/* 0041F18C 010E7821 */  addu  $t7, $t0, $t6
/* 0041F190 8DF80000 */  lw    $t8, ($t7)
/* 0041F194 8FA5002C */  lw    $a1, 0x2c($sp)
/* 0041F198 8FA70028 */  lw    $a3, 0x28($sp)
/* 0041F19C ACD80000 */  sw    $t8, ($a2)
/* 0041F1A0 93390000 */  lbu   $t9, ($t9)
/* 0041F1A4 13200006 */  beqz  $t9, .L0041F1C0
/* 0041F1A8 00000000 */   nop   
/* 0041F1AC 8F898D40 */  lw     $t1, %got(lasteereg)($gp)
/* 0041F1B0 2529FFFC */  addiu $t1, $t1, -4
/* 0041F1B4 01095021 */  addu  $t2, $t0, $t1
/* 0041F1B8 10000005 */  b     .L0041F1D0
/* 0041F1BC 8D440000 */   lw    $a0, ($t2)
.L0041F1C0:
/* 0041F1C0 8F8B8D54 */  lw     $t3, %got(highesteereg)($gp)
/* 0041F1C4 256BFFFC */  addiu $t3, $t3, -4
/* 0041F1C8 010B6021 */  addu  $t4, $t0, $t3
/* 0041F1CC 8D840000 */  lw    $a0, ($t4)
.L0041F1D0:
/* 0041F1D0 8CC20000 */  lw    $v0, ($a2)
/* 0041F1D4 0082082A */  slt   $at, $a0, $v0
/* 0041F1D8 1420000F */  bnez  $at, .L0041F218
/* 0041F1DC 00026880 */   sll   $t5, $v0, 2
.L0041F1E0:
/* 0041F1E0 00AD7021 */  addu  $t6, $a1, $t5
/* 0041F1E4 8DCF0040 */  lw    $t7, 0x40($t6)
/* 0041F1E8 24580001 */  addiu $t8, $v0, 1
/* 0041F1EC 54EF0004 */  bnel  $a3, $t7, .L0041F200
/* 0041F1F0 ACD80000 */   sw    $t8, ($a2)
/* 0041F1F4 10000002 */  b     .L0041F200
/* 0041F1F8 24030001 */   li    $v1, 1
/* 0041F1FC ACD80000 */  sw    $t8, ($a2)
.L0041F200:
/* 0041F200 54600006 */  bnezl $v1, .L0041F21C
/* 0041F204 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0041F208 8CC20000 */  lw    $v0, ($a2)
/* 0041F20C 0082082A */  slt   $at, $a0, $v0
/* 0041F210 5020FFF3 */  beql  $at, $zero, .L0041F1E0
/* 0041F214 00026880 */   sll   $t5, $v0, 2
.L0041F218:
/* 0041F218 8FBF001C */  lw    $ra, 0x1c($sp)
.L0041F21C:
/* 0041F21C 27BD0028 */  addiu $sp, $sp, 0x28
/* 0041F220 00601025 */  move  $v0, $v1
/* 0041F224 03E00008 */  jr    $ra
/* 0041F228 00000000 */   nop   
    .type inreg, @function
    .size inreg, .-inreg
    .end inreg

glabel base_noalias
    .ent base_noalias
    # 0041F6F0 base_in_reg
/* 0041F22C 3C1C0FC0 */  .cpload $t9
/* 0041F230 279CB064 */  
/* 0041F234 0399E021 */  
/* 0041F238 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041F23C AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041F240 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041F244 AFA40028 */  sw    $a0, 0x28($sp)
/* 0041F248 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041F24C 90820000 */  lbu   $v0, ($a0)
/* 0041F250 3C014400 */  lui   $at, 0x4400
/* 0041F254 00807025 */  move  $t6, $a0
/* 0041F258 2C4F0020 */  sltiu $t7, $v0, 0x20
/* 0041F25C 000FC023 */  negu  $t8, $t7
/* 0041F260 0301C824 */  and   $t9, $t8, $at
/* 0041F264 00595004 */  sllv  $t2, $t9, $v0
/* 0041F268 05410037 */  bgez  $t2, .L0041F348
/* 0041F26C 00000000 */   nop   
/* 0041F270 90A40000 */  lbu   $a0, ($a1)
/* 0041F274 3C014400 */  lui   $at, 0x4400
/* 0041F278 2C8C0020 */  sltiu $t4, $a0, 0x20
/* 0041F27C 000C6823 */  negu  $t5, $t4
/* 0041F280 01A17824 */  and   $t7, $t5, $at
/* 0041F284 008FC004 */  sllv  $t8, $t7, $a0
/* 0041F288 07010014 */  bgez  $t8, .L0041F2DC
/* 0041F28C 00000000 */   nop   
/* 0041F290 8DC4002C */  lw    $a0, 0x2c($t6)
/* 0041F294 AFA40000 */  sw    $a0, ($sp)
/* 0041F298 8DD90030 */  lw    $t9, 0x30($t6)
/* 0041F29C AFB90004 */  sw    $t9, 4($sp)
/* 0041F2A0 8CA6002C */  lw    $a2, 0x2c($a1)
/* 0041F2A4 AFA60008 */  sw    $a2, 8($sp)
/* 0041F2A8 8CA70030 */  lw    $a3, 0x30($a1)
/* 0041F2AC AFA7000C */  sw    $a3, 0xc($sp)
/* 0041F2B0 8DCF0024 */  lw    $t7, 0x24($t6)
/* 0041F2B4 AFAF0010 */  sw    $t7, 0x10($sp)
/* 0041F2B8 8CB80024 */  lw    $t8, 0x24($a1)
/* 0041F2BC 03202825 */  move  $a1, $t9
/* 0041F2C0 8F998380 */  lw    $t9, %call16(overlapping)($gp)
/* 0041F2C4 AFB80014 */  sw    $t8, 0x14($sp)
/* 0041F2C8 0320F809 */  jalr  $t9
/* 0041F2CC 00000000 */   nop   
/* 0041F2D0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041F2D4 10000091 */  b     .L0041F51C
/* 0041F2D8 304400FF */   andi  $a0, $v0, 0xff
.L0041F2DC:
/* 0041F2DC 8F998A5C */  lw     $t9, %got(lang)($gp)
/* 0041F2E0 24010002 */  li    $at, 2
/* 0041F2E4 2C8A0020 */  sltiu $t2, $a0, 0x20
/* 0041F2E8 93390000 */  lbu   $t9, ($t9)
/* 0041F2EC 000A6023 */  negu  $t4, $t2
/* 0041F2F0 13210005 */  beq   $t9, $at, .L0041F308
/* 0041F2F4 3C011B00 */   lui   $at, 0x1b00
/* 0041F2F8 01816824 */  and   $t5, $t4, $at
/* 0041F2FC 008D7004 */  sllv  $t6, $t5, $a0
/* 0041F300 05C10008 */  bgez  $t6, .L0041F324
/* 0041F304 00000000 */   nop   
.L0041F308:
/* 0041F308 8F998388 */  lw    $t9, %call16(pointtoheap)($gp)
/* 0041F30C 8FA4002C */  lw    $a0, 0x2c($sp)
/* 0041F310 0320F809 */  jalr  $t9
/* 0041F314 00000000 */   nop   
/* 0041F318 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041F31C 10400003 */  beqz  $v0, .L0041F32C
/* 0041F320 8FA90028 */   lw    $t1, 0x28($sp)
.L0041F324:
/* 0041F324 1000007D */  b     .L0041F51C
/* 0041F328 00002025 */   move  $a0, $zero
.L0041F32C:
/* 0041F32C 8F998384 */  lw    $t9, %call16(aliaswithptr)($gp)
/* 0041F330 2524002C */  addiu $a0, $t1, 0x2c
/* 0041F334 0320F809 */  jalr  $t9
/* 0041F338 00000000 */   nop   
/* 0041F33C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041F340 10000076 */  b     .L0041F51C
/* 0041F344 304400FF */   andi  $a0, $v0, 0xff
.L0041F348:
/* 0041F348 8F8F8A5C */  lw     $t7, %got(lang)($gp)
/* 0041F34C 24010002 */  li    $at, 2
/* 0041F350 2C4B0020 */  sltiu $t3, $v0, 0x20
/* 0041F354 91EF0000 */  lbu   $t7, ($t7)
/* 0041F358 000BC023 */  negu  $t8, $t3
/* 0041F35C 11E10007 */  beq   $t7, $at, .L0041F37C
/* 0041F360 3C011B00 */   lui   $at, 0x1b00
/* 0041F364 0301C824 */  and   $t9, $t8, $at
/* 0041F368 00595004 */  sllv  $t2, $t9, $v0
/* 0041F36C 05400003 */  bltz  $t2, .L0041F37C
/* 0041F370 00000000 */   nop   
/* 0041F374 10000069 */  b     .L0041F51C
/* 0041F378 00002025 */   move  $a0, $zero
.L0041F37C:
/* 0041F37C 8F998388 */  lw    $t9, %call16(pointtoheap)($gp)
/* 0041F380 8FA40028 */  lw    $a0, 0x28($sp)
/* 0041F384 0320F809 */  jalr  $t9
/* 0041F388 00000000 */   nop   
/* 0041F38C 8FAC002C */  lw    $t4, 0x2c($sp)
/* 0041F390 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041F394 8FA90028 */  lw    $t1, 0x28($sp)
/* 0041F398 10400008 */  beqz  $v0, .L0041F3BC
/* 0041F39C 01804025 */   move  $t0, $t4
/* 0041F3A0 8F998388 */  lw    $t9, %call16(pointtoheap)($gp)
/* 0041F3A4 01802025 */  move  $a0, $t4
/* 0041F3A8 0320F809 */  jalr  $t9
/* 0041F3AC 00000000 */   nop   
/* 0041F3B0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041F3B4 10000059 */  b     .L0041F51C
/* 0041F3B8 304400FF */   andi  $a0, $v0, 0xff
.L0041F3BC:
/* 0041F3BC 91040000 */  lbu   $a0, ($t0)
/* 0041F3C0 3C014400 */  lui   $at, 0x4400
/* 0041F3C4 2C8D0020 */  sltiu $t5, $a0, 0x20
/* 0041F3C8 000D7023 */  negu  $t6, $t5
/* 0041F3CC 01C17824 */  and   $t7, $t6, $at
/* 0041F3D0 008F5804 */  sllv  $t3, $t7, $a0
/* 0041F3D4 05610008 */  bgez  $t3, .L0041F3F8
/* 0041F3D8 00000000 */   nop   
/* 0041F3DC 8F998384 */  lw    $t9, %call16(aliaswithptr)($gp)
/* 0041F3E0 2504002C */  addiu $a0, $t0, 0x2c
/* 0041F3E4 0320F809 */  jalr  $t9
/* 0041F3E8 00000000 */   nop   
/* 0041F3EC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041F3F0 1000004A */  b     .L0041F51C
/* 0041F3F4 304400FF */   andi  $a0, $v0, 0xff
.L0041F3F8:
/* 0041F3F8 8F828A5C */  lw     $v0, %got(lang)($gp)
/* 0041F3FC 24010002 */  li    $at, 2
/* 0041F400 2C980020 */  sltiu $t8, $a0, 0x20
/* 0041F404 90420000 */  lbu   $v0, ($v0)
/* 0041F408 10410009 */  beq   $v0, $at, .L0041F430
/* 0041F40C 38430001 */   xori  $v1, $v0, 1
/* 0041F410 0018C823 */  negu  $t9, $t8
/* 0041F414 3C011B00 */  lui   $at, 0x1b00
/* 0041F418 03215024 */  and   $t2, $t9, $at
/* 0041F41C 008A6004 */  sllv  $t4, $t2, $a0
/* 0041F420 05820004 */  bltzl $t4, .L0041F434
/* 0041F424 2C630001 */   sltiu $v1, $v1, 1
/* 0041F428 1000003C */  b     .L0041F51C
/* 0041F42C 00002025 */   move  $a0, $zero
.L0041F430:
/* 0041F430 2C630001 */  sltiu $v1, $v1, 1
.L0041F434:
/* 0041F434 2C630001 */  sltiu $v1, $v1, 1
/* 0041F438 10600008 */  beqz  $v1, .L0041F45C
/* 0041F43C 00000000 */   nop   
/* 0041F440 2C430001 */  sltiu $v1, $v0, 1
/* 0041F444 2C630001 */  sltiu $v1, $v1, 1
/* 0041F448 54600034 */  bnezl $v1, .L0041F51C
/* 0041F44C 306400FF */   andi  $a0, $v1, 0xff
/* 0041F450 8F838AE4 */  lw     $v1, %got(nopalias)($gp)
/* 0041F454 90630000 */  lbu   $v1, ($v1)
/* 0041F458 2C630001 */  sltiu $v1, $v1, 1
.L0041F45C:
/* 0041F45C 5460002F */  bnezl $v1, .L0041F51C
/* 0041F460 306400FF */   andi  $a0, $v1, 0xff
/* 0041F464 8F838AE0 */  lw     $v1, %got(nof77alias)($gp)
/* 0041F468 90630000 */  lbu   $v1, ($v1)
/* 0041F46C 2C630001 */  sltiu $v1, $v1, 1
/* 0041F470 5460002A */  bnezl $v1, .L0041F51C
/* 0041F474 306400FF */   andi  $a0, $v1, 0xff
/* 0041F478 8F838B44 */  lw     $v1, %got(use_c_semantics)($gp)
/* 0041F47C 90630000 */  lbu   $v1, ($v1)
/* 0041F480 54600026 */  bnezl $v1, .L0041F51C
/* 0041F484 306400FF */   andi  $a0, $v1, 0xff
/* 0041F488 91220000 */  lbu   $v0, ($t1)
/* 0041F48C 24050007 */  li    $a1, 7
/* 0041F490 00A21826 */  xor   $v1, $a1, $v0
/* 0041F494 2C630001 */  sltiu $v1, $v1, 1
/* 0041F498 54600020 */  bnezl $v1, .L0041F51C
/* 0041F49C 306400FF */   andi  $a0, $v1, 0xff
/* 0041F4A0 00A41826 */  xor   $v1, $a1, $a0
/* 0041F4A4 2C630001 */  sltiu $v1, $v1, 1
/* 0041F4A8 1460001B */  bnez  $v1, .L0041F518
/* 0041F4AC 2C4D0020 */   sltiu $t5, $v0, 0x20
/* 0041F4B0 000D7023 */  negu  $t6, $t5
/* 0041F4B4 3C011200 */  lui   $at, 0x1200
/* 0041F4B8 01C17824 */  and   $t7, $t6, $at
/* 0041F4BC 004F1804 */  sllv  $v1, $t7, $v0
/* 0041F4C0 28630000 */  slti  $v1, $v1, 0
/* 0041F4C4 10600014 */  beqz  $v1, .L0041F518
/* 0041F4C8 2C8B0020 */   sltiu $t3, $a0, 0x20
/* 0041F4CC 000BC023 */  negu  $t8, $t3
/* 0041F4D0 3C011200 */  lui   $at, 0x1200
/* 0041F4D4 0301C824 */  and   $t9, $t8, $at
/* 0041F4D8 00991804 */  sllv  $v1, $t9, $a0
/* 0041F4DC 28630000 */  slti  $v1, $v1, 0
/* 0041F4E0 5060000E */  beql  $v1, $zero, .L0041F51C
/* 0041F4E4 306400FF */   andi  $a0, $v1, 0xff
/* 0041F4E8 8D240028 */  lw    $a0, 0x28($t1)
/* 0041F4EC 8D25002C */  lw    $a1, 0x2c($t1)
/* 0041F4F0 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 0041F4F4 AFA40000 */  sw    $a0, ($sp)
/* 0041F4F8 AFA50004 */  sw    $a1, 4($sp)
/* 0041F4FC 8D060028 */  lw    $a2, 0x28($t0)
/* 0041F500 AFA60008 */  sw    $a2, 8($sp)
/* 0041F504 8D07002C */  lw    $a3, 0x2c($t0)
/* 0041F508 0320F809 */  jalr  $t9
/* 0041F50C AFA7000C */   sw    $a3, 0xc($sp)
/* 0041F510 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041F514 00401825 */  move  $v1, $v0
.L0041F518:
/* 0041F518 306400FF */  andi  $a0, $v1, 0xff
.L0041F51C:
/* 0041F51C 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0041F520 27BD0028 */  addiu $sp, $sp, 0x28
/* 0041F524 2C820001 */  sltiu $v0, $a0, 1
/* 0041F528 03E00008 */  jr    $ra
/* 0041F52C 00000000 */   nop   
    .type base_noalias, @function
    .size base_noalias, .-base_noalias
    .end base_noalias

glabel base_gp_noalias
    .ent base_gp_noalias
    # 0041F6F0 base_in_reg
/* 0041F530 3C1C0FC0 */  .cpload $t9
/* 0041F534 279CAD60 */  
/* 0041F538 0399E021 */  
/* 0041F53C 90820000 */  lbu   $v0, ($a0)
/* 0041F540 3C014400 */  lui   $at, 0x4400
/* 0041F544 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041F548 2C4E0020 */  sltiu $t6, $v0, 0x20
/* 0041F54C 000E7823 */  negu  $t7, $t6
/* 0041F550 01E1C024 */  and   $t8, $t7, $at
/* 0041F554 0058C804 */  sllv  $t9, $t8, $v0
/* 0041F558 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041F55C 07210007 */  bgez  $t9, .L0041F57C
/* 0041F560 AFBC0018 */   sw    $gp, 0x18($sp)
/* 0041F564 90830032 */  lbu   $v1, 0x32($a0)
/* 0041F568 30630007 */  andi  $v1, $v1, 7
/* 0041F56C 38630004 */  xori  $v1, $v1, 4
/* 0041F570 2C630001 */  sltiu $v1, $v1, 1
/* 0041F574 10000016 */  b     .L0041F5D0
/* 0041F578 306300FF */   andi  $v1, $v1, 0xff
.L0041F57C:
/* 0041F57C 8F888A5C */  lw     $t0, %got(lang)($gp)
/* 0041F580 24010002 */  li    $at, 2
/* 0041F584 2C490020 */  sltiu $t1, $v0, 0x20
/* 0041F588 91080000 */  lbu   $t0, ($t0)
/* 0041F58C 00095023 */  negu  $t2, $t1
/* 0041F590 11010007 */  beq   $t0, $at, .L0041F5B0
/* 0041F594 3C011B00 */   lui   $at, 0x1b00
/* 0041F598 01415824 */  and   $t3, $t2, $at
/* 0041F59C 004B6004 */  sllv  $t4, $t3, $v0
/* 0041F5A0 05800003 */  bltz  $t4, .L0041F5B0
/* 0041F5A4 00000000 */   nop   
/* 0041F5A8 10000009 */  b     .L0041F5D0
/* 0041F5AC 00001825 */   move  $v1, $zero
.L0041F5B0:
/* 0041F5B0 8F998388 */  lw    $t9, %call16(pointtoheap)($gp)
/* 0041F5B4 0320F809 */  jalr  $t9
/* 0041F5B8 00000000 */   nop   
/* 0041F5BC 10400003 */  beqz  $v0, .L0041F5CC
/* 0041F5C0 8FBC0018 */   lw    $gp, 0x18($sp)
/* 0041F5C4 10000002 */  b     .L0041F5D0
/* 0041F5C8 00001825 */   move  $v1, $zero
.L0041F5CC:
/* 0041F5CC 24030001 */  li    $v1, 1
.L0041F5D0:
/* 0041F5D0 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041F5D4 27BD0020 */  addiu $sp, $sp, 0x20
/* 0041F5D8 2C620001 */  sltiu $v0, $v1, 1
/* 0041F5DC 03E00008 */  jr    $ra
/* 0041F5E0 00000000 */   nop   
    .type base_gp_noalias, @function
    .size base_gp_noalias, .-base_gp_noalias
    .end base_gp_noalias

glabel base_sp_noalias
    .ent base_sp_noalias
    # 0041F6F0 base_in_reg
/* 0041F5E4 3C1C0FC0 */  .cpload $t9
/* 0041F5E8 279CACAC */  
/* 0041F5EC 0399E021 */  
/* 0041F5F0 90820000 */  lbu   $v0, ($a0)
/* 0041F5F4 3C014400 */  lui   $at, 0x4400
/* 0041F5F8 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041F5FC 2C4E0020 */  sltiu $t6, $v0, 0x20
/* 0041F600 000E7823 */  negu  $t7, $t6
/* 0041F604 01E1C024 */  and   $t8, $t7, $at
/* 0041F608 0058C804 */  sllv  $t9, $t8, $v0
/* 0041F60C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041F610 07210007 */  bgez  $t9, .L0041F630
/* 0041F614 AFBC0018 */   sw    $gp, 0x18($sp)
/* 0041F618 90830032 */  lbu   $v1, 0x32($a0)
/* 0041F61C 30630007 */  andi  $v1, $v1, 7
/* 0041F620 38630004 */  xori  $v1, $v1, 4
/* 0041F624 0003182B */  sltu  $v1, $zero, $v1
/* 0041F628 1000002C */  b     .L0041F6DC
/* 0041F62C 306300FF */   andi  $v1, $v1, 0xff
.L0041F630:
/* 0041F630 8F888A5C */  lw     $t0, %got(lang)($gp)
/* 0041F634 24010002 */  li    $at, 2
/* 0041F638 2C490020 */  sltiu $t1, $v0, 0x20
/* 0041F63C 91080000 */  lbu   $t0, ($t0)
/* 0041F640 00095023 */  negu  $t2, $t1
/* 0041F644 11010007 */  beq   $t0, $at, .L0041F664
/* 0041F648 3C011B00 */   lui   $at, 0x1b00
/* 0041F64C 01415824 */  and   $t3, $t2, $at
/* 0041F650 004B6004 */  sllv  $t4, $t3, $v0
/* 0041F654 05800003 */  bltz  $t4, .L0041F664
/* 0041F658 00000000 */   nop   
/* 0041F65C 1000001F */  b     .L0041F6DC
/* 0041F660 00001825 */   move  $v1, $zero
.L0041F664:
/* 0041F664 8F998388 */  lw    $t9, %call16(pointtoheap)($gp)
/* 0041F668 0320F809 */  jalr  $t9
/* 0041F66C 00000000 */   nop   
/* 0041F670 10400003 */  beqz  $v0, .L0041F680
/* 0041F674 8FBC0018 */   lw    $gp, 0x18($sp)
/* 0041F678 10000018 */  b     .L0041F6DC
/* 0041F67C 00001825 */   move  $v1, $zero
.L0041F680:
/* 0041F680 8F828A5C */  lw     $v0, %got(lang)($gp)
/* 0041F684 24010001 */  li    $at, 1
/* 0041F688 90420000 */  lbu   $v0, ($v0)
/* 0041F68C 14410005 */  bne   $v0, $at, .L0041F6A4
/* 0041F690 00000000 */   nop   
/* 0041F694 8F8D8B44 */  lw     $t5, %got(use_c_semantics)($gp)
/* 0041F698 91AD0000 */  lbu   $t5, ($t5)
/* 0041F69C 11A0000D */  beqz  $t5, .L0041F6D4
/* 0041F6A0 00000000 */   nop   
.L0041F6A4:
/* 0041F6A4 14400009 */  bnez  $v0, .L0041F6CC
/* 0041F6A8 24010005 */   li    $at, 5
/* 0041F6AC 8F8E8AE4 */  lw     $t6, %got(nopalias)($gp)
/* 0041F6B0 91CE0000 */  lbu   $t6, ($t6)
/* 0041F6B4 11C00005 */  beqz  $t6, .L0041F6CC
/* 0041F6B8 00000000 */   nop   
/* 0041F6BC 8F8F8B44 */  lw     $t7, %got(use_c_semantics)($gp)
/* 0041F6C0 91EF0000 */  lbu   $t7, ($t7)
/* 0041F6C4 11E00003 */  beqz  $t7, .L0041F6D4
/* 0041F6C8 00000000 */   nop   
.L0041F6CC:
/* 0041F6CC 14410003 */  bne   $v0, $at, .L0041F6DC
/* 0041F6D0 24030001 */   li    $v1, 1
.L0041F6D4:
/* 0041F6D4 10000001 */  b     .L0041F6DC
/* 0041F6D8 00001825 */   move  $v1, $zero
.L0041F6DC:
/* 0041F6DC 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041F6E0 27BD0020 */  addiu $sp, $sp, 0x20
/* 0041F6E4 2C620001 */  sltiu $v0, $v1, 1
/* 0041F6E8 03E00008 */  jr    $ra
/* 0041F6EC 00000000 */   nop   
    .type base_sp_noalias, @function
    .size base_sp_noalias, .-base_sp_noalias
    .end base_sp_noalias

glabel base_in_reg
    .ent base_in_reg
    # 0041FA68 varlodstr
    # 004230F0 func_004230F0
    # 00426FA4 func_00426FA4
/* 0041F6F0 3C1C0FC0 */  .cpload $t9
/* 0041F6F4 279CABA0 */  
/* 0041F6F8 0399E021 */  
/* 0041F6FC 27BDFFB0 */  addiu $sp, $sp, -0x50
/* 0041F700 8F8E8DB0 */  lw     $t6, %got(baseregexpr)($gp)
/* 0041F704 00043880 */  sll   $a3, $a0, 2
/* 0041F708 AFB6002C */  sw    $s6, 0x2c($sp)
/* 0041F70C 25CEFFFC */  addiu $t6, $t6, -4
/* 0041F710 00EE4021 */  addu  $t0, $a3, $t6
/* 0041F714 8D020000 */  lw    $v0, ($t0)
/* 0041F718 0080B025 */  move  $s6, $a0
/* 0041F71C AFBF003C */  sw    $ra, 0x3c($sp)
/* 0041F720 AFBE0038 */  sw    $fp, 0x38($sp)
/* 0041F724 AFBC0034 */  sw    $gp, 0x34($sp)
/* 0041F728 AFB70030 */  sw    $s7, 0x30($sp)
/* 0041F72C AFB50028 */  sw    $s5, 0x28($sp)
/* 0041F730 AFB40024 */  sw    $s4, 0x24($sp)
/* 0041F734 AFB30020 */  sw    $s3, 0x20($sp)
/* 0041F738 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0041F73C AFB10018 */  sw    $s1, 0x18($sp)
/* 0041F740 10400009 */  beqz  $v0, .L0041F768
/* 0041F744 AFB00014 */   sw    $s0, 0x14($sp)
/* 0041F748 90CF0000 */  lbu   $t7, ($a2)
/* 0041F74C 3C014400 */  lui   $at, 0x4400
/* 0041F750 2DF80020 */  sltiu $t8, $t7, 0x20
/* 0041F754 0018C823 */  negu  $t9, $t8
/* 0041F758 03214824 */  and   $t1, $t9, $at
/* 0041F75C 01E95004 */  sllv  $t2, $t1, $t7
/* 0041F760 054300B6 */  bgezl $t2, .L0041FA3C
/* 0041F764 8FBF003C */   lw    $ra, 0x3c($sp)
.L0041F768:
/* 0041F768 1040001B */  beqz  $v0, .L0041F7D8
/* 0041F76C 00000000 */   nop   
/* 0041F770 8F8B8DB4 */  lw     $t3, %got(baseregbase)($gp)
/* 0041F774 8CC2002C */  lw    $v0, 0x2c($a2)
/* 0041F778 8CD80024 */  lw    $t8, 0x24($a2)
/* 0041F77C 256BFFFC */  addiu $t3, $t3, -4
/* 0041F780 00EB6021 */  addu  $t4, $a3, $t3
/* 0041F784 8D830000 */  lw    $v1, ($t4)
/* 0041F788 0058C821 */  addu  $t9, $v0, $t8
/* 0041F78C 8C64002C */  lw    $a0, 0x2c($v1)
/* 0041F790 8C6D0024 */  lw    $t5, 0x24($v1)
/* 0041F794 008D7021 */  addu  $t6, $a0, $t5
/* 0041F798 032E082A */  slt   $at, $t9, $t6
/* 0041F79C 50200003 */  beql  $at, $zero, .L0041F7AC
/* 0041F7A0 0044082A */   slt   $at, $v0, $a0
/* 0041F7A4 01C0C825 */  move  $t9, $t6
/* 0041F7A8 0044082A */  slt   $at, $v0, $a0
.L0041F7AC:
/* 0041F7AC 10200002 */  beqz  $at, .L0041F7B8
/* 0041F7B0 00804825 */   move  $t1, $a0
/* 0041F7B4 00404825 */  move  $t1, $v0
.L0041F7B8:
/* 0041F7B8 03297823 */  subu  $t7, $t9, $t1
/* 0041F7BC ACCF0024 */  sw    $t7, 0x24($a2)
/* 0041F7C0 8C6A002C */  lw    $t2, 0x2c($v1)
/* 0041F7C4 004A082A */  slt   $at, $v0, $t2
/* 0041F7C8 50200003 */  beql  $at, $zero, .L0041F7D8
/* 0041F7CC ACCA002C */   sw    $t2, 0x2c($a2)
/* 0041F7D0 00405025 */  move  $t2, $v0
/* 0041F7D4 ACCA002C */  sw    $t2, 0x2c($a2)
.L0041F7D8:
/* 0041F7D8 8F8B8DB4 */  lw     $t3, %got(baseregbase)($gp)
/* 0041F7DC 8F938DA4 */  lw     $s3, %got(u)($gp)
/* 0041F7E0 AD050000 */  sw    $a1, ($t0)
/* 0041F7E4 256BFFFC */  addiu $t3, $t3, -4
/* 0041F7E8 00EB6021 */  addu  $t4, $a3, $t3
/* 0041F7EC AD860000 */  sw    $a2, ($t4)
/* 0041F7F0 92780001 */  lbu   $t8, 1($s3)
/* 0041F7F4 240D0089 */  li    $t5, 137
/* 0041F7F8 A26D0000 */  sb    $t5, ($s3)
/* 0041F7FC 330EFFE0 */  andi  $t6, $t8, 0xffe0
/* 0041F800 35D90001 */  ori   $t9, $t6, 1
/* 0041F804 A2790001 */  sb    $t9, 1($s3)
/* 0041F808 8F998708 */  lw    $t9, %call16(coloroffset)($gp)
/* 0041F80C AFA60058 */  sw    $a2, 0x58($sp)
/* 0041F810 02C02025 */  move  $a0, $s6
/* 0041F814 0320F809 */  jalr  $t9
/* 0041F818 00000000 */   nop   
/* 0041F81C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0041F820 24090018 */  li    $t1, 24
/* 0041F824 A6620002 */  sh    $v0, 2($s3)
/* 0041F828 AFA90044 */  sw    $t1, 0x44($sp)
/* 0041F82C 24100001 */  li    $s0, 1
/* 0041F830 24140004 */  li    $s4, 4
/* 0041F834 241E0002 */  li    $fp, 2
/* 0041F838 24170001 */  li    $s7, 1
/* 0041F83C 8F958DB0 */  lw     $s5, %got(baseregexpr)($gp)
.L0041F840:
/* 0041F840 8EAF0000 */  lw    $t7, ($s5)
/* 0041F844 51E0004C */  beql  $t7, $zero, .L0041F978
/* 0041F848 8FAB0044 */   lw    $t3, 0x44($sp)
/* 0041F84C 12D00049 */  beq   $s6, $s0, .L0041F974
/* 0041F850 00165080 */   sll   $t2, $s6, 2
/* 0041F854 8F8C8DC4 */  lw     $t4, %got(unaltab)($gp)
/* 0041F858 01565023 */  subu  $t2, $t2, $s6
/* 0041F85C 000A50C0 */  sll   $t2, $t2, 3
/* 0041F860 01565023 */  subu  $t2, $t2, $s6
/* 0041F864 01505821 */  addu  $t3, $t2, $s0
/* 0041F868 258CFFE9 */  addiu $t4, $t4, -0x17
/* 0041F86C 016C8821 */  addu  $s1, $t3, $t4
/* 0041F870 922DFFFF */  lbu   $t5, -1($s1)
/* 0041F874 52ED0040 */  beql  $s7, $t5, .L0041F978
/* 0041F878 8FAB0044 */   lw    $t3, 0x44($sp)
/* 0041F87C 8F988DB4 */  lw     $t8, %got(baseregbase)($gp)
/* 0041F880 8F99827C */  lw    $t9, %call16(base_noalias)($gp)
/* 0041F884 8FA50058 */  lw    $a1, 0x58($sp)
/* 0041F888 2718FFFC */  addiu $t8, $t8, -4
/* 0041F88C 02987021 */  addu  $t6, $s4, $t8
/* 0041F890 0320F809 */  jalr  $t9
/* 0041F894 8DC40000 */   lw    $a0, ($t6)
/* 0041F898 10400018 */  beqz  $v0, .L0041F8FC
/* 0041F89C 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0041F8A0 9239FFFF */  lbu   $t9, -1($s1)
/* 0041F8A4 00104880 */  sll   $t1, $s0, 2
/* 0041F8A8 01304823 */  subu  $t1, $t1, $s0
/* 0041F8AC 17200031 */  bnez  $t9, .L0041F974
/* 0041F8B0 02002025 */   move  $a0, $s0
/* 0041F8B4 8F8A8DC4 */  lw     $t2, %got(unaltab)($gp)
/* 0041F8B8 8F998708 */  lw    $t9, %call16(coloroffset)($gp)
/* 0041F8BC 000948C0 */  sll   $t1, $t1, 3
/* 0041F8C0 01304823 */  subu  $t1, $t1, $s0
/* 0041F8C4 01367821 */  addu  $t7, $t1, $s6
/* 0041F8C8 254AFFE9 */  addiu $t2, $t2, -0x17
/* 0041F8CC 0320F809 */  jalr  $t9
/* 0041F8D0 01EA9021 */   addu  $s2, $t7, $t2
/* 0041F8D4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0041F8D8 AE620004 */  sw    $v0, 4($s3)
/* 0041F8DC 02602025 */  move  $a0, $s3
/* 0041F8E0 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0041F8E4 0320F809 */  jalr  $t9
/* 0041F8E8 00000000 */   nop   
/* 0041F8EC A23EFFFF */  sb    $fp, -1($s1)
/* 0041F8F0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0041F8F4 1000001F */  b     .L0041F974
/* 0041F8F8 A25EFFFF */   sb    $fp, -1($s2)
.L0041F8FC:
/* 0041F8FC 00105880 */  sll   $t3, $s0, 2
/* 0041F900 8F8D8DC4 */  lw     $t5, %got(unaltab)($gp)
/* 0041F904 01705823 */  subu  $t3, $t3, $s0
/* 0041F908 9238FFFF */  lbu   $t8, -1($s1)
/* 0041F90C 000B58C0 */  sll   $t3, $t3, 3
/* 0041F910 01705823 */  subu  $t3, $t3, $s0
/* 0041F914 01766021 */  addu  $t4, $t3, $s6
/* 0041F918 25ADFFE9 */  addiu $t5, $t5, -0x17
/* 0041F91C 17D80013 */  bne   $fp, $t8, .L0041F96C
/* 0041F920 018D9021 */   addu  $s2, $t4, $t5
/* 0041F924 8F998708 */  lw    $t9, %call16(coloroffset)($gp)
/* 0041F928 02002025 */  move  $a0, $s0
/* 0041F92C 0320F809 */  jalr  $t9
/* 0041F930 00000000 */   nop   
/* 0041F934 926E0001 */  lbu   $t6, 1($s3)
/* 0041F938 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0041F93C AE620004 */  sw    $v0, 4($s3)
/* 0041F940 31D9FFE0 */  andi  $t9, $t6, 0xffe0
/* 0041F944 A2790001 */  sb    $t9, 1($s3)
/* 0041F948 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0041F94C 02602025 */  move  $a0, $s3
/* 0041F950 0320F809 */  jalr  $t9
/* 0041F954 00000000 */   nop   
/* 0041F958 92690001 */  lbu   $t1, 1($s3)
/* 0041F95C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0041F960 312FFFE0 */  andi  $t7, $t1, 0xffe0
/* 0041F964 35EA0001 */  ori   $t2, $t7, 1
/* 0041F968 A26A0001 */  sb    $t2, 1($s3)
.L0041F96C:
/* 0041F96C A237FFFF */  sb    $s7, -1($s1)
/* 0041F970 A257FFFF */  sb    $s7, -1($s2)
.L0041F974:
/* 0041F974 8FAB0044 */  lw    $t3, 0x44($sp)
.L0041F978:
/* 0041F978 26100001 */  addiu $s0, $s0, 1
/* 0041F97C 26940004 */  addiu $s4, $s4, 4
/* 0041F980 160BFFAF */  bne   $s0, $t3, .L0041F840
/* 0041F984 26B50004 */   addiu $s5, $s5, 4
/* 0041F988 8F8C8D94 */  lw     $t4, %got(gpunaltab)($gp)
/* 0041F98C 258CFFFF */  addiu $t4, $t4, -1
/* 0041F990 02CC8021 */  addu  $s0, $s6, $t4
/* 0041F994 920D0000 */  lbu   $t5, ($s0)
/* 0041F998 15A00011 */  bnez  $t5, .L0041F9E0
/* 0041F99C 00000000 */   nop   
/* 0041F9A0 8F998280 */  lw    $t9, %call16(base_gp_noalias)($gp)
/* 0041F9A4 8FA40058 */  lw    $a0, 0x58($sp)
/* 0041F9A8 0320F809 */  jalr  $t9
/* 0041F9AC 00000000 */   nop   
/* 0041F9B0 1040000A */  beqz  $v0, .L0041F9DC
/* 0041F9B4 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0041F9B8 2418001C */  li    $t8, 28
/* 0041F9BC AE780004 */  sw    $t8, 4($s3)
/* 0041F9C0 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0041F9C4 02602025 */  move  $a0, $s3
/* 0041F9C8 0320F809 */  jalr  $t9
/* 0041F9CC 00000000 */   nop   
/* 0041F9D0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0041F9D4 10000002 */  b     .L0041F9E0
/* 0041F9D8 A21E0000 */   sb    $fp, ($s0)
.L0041F9DC:
/* 0041F9DC A2170000 */  sb    $s7, ($s0)
.L0041F9E0:
/* 0041F9E0 8F8E8D98 */  lw     $t6, %got(spunaltab)($gp)
/* 0041F9E4 25CEFFFF */  addiu $t6, $t6, -1
/* 0041F9E8 02CE8021 */  addu  $s0, $s6, $t6
/* 0041F9EC 92190000 */  lbu   $t9, ($s0)
/* 0041F9F0 57200012 */  bnezl $t9, .L0041FA3C
/* 0041F9F4 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0041F9F8 8F998284 */  lw    $t9, %call16(base_sp_noalias)($gp)
/* 0041F9FC 8FA40058 */  lw    $a0, 0x58($sp)
/* 0041FA00 0320F809 */  jalr  $t9
/* 0041FA04 00000000 */   nop   
/* 0041FA08 1040000A */  beqz  $v0, .L0041FA34
/* 0041FA0C 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0041FA10 2409001D */  li    $t1, 29
/* 0041FA14 AE690004 */  sw    $t1, 4($s3)
/* 0041FA18 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0041FA1C 02602025 */  move  $a0, $s3
/* 0041FA20 0320F809 */  jalr  $t9
/* 0041FA24 00000000 */   nop   
/* 0041FA28 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0041FA2C 10000002 */  b     .L0041FA38
/* 0041FA30 A21E0000 */   sb    $fp, ($s0)
.L0041FA34:
/* 0041FA34 A2170000 */  sb    $s7, ($s0)
.L0041FA38:
/* 0041FA38 8FBF003C */  lw    $ra, 0x3c($sp)
.L0041FA3C:
/* 0041FA3C 8FB00014 */  lw    $s0, 0x14($sp)
/* 0041FA40 8FB10018 */  lw    $s1, 0x18($sp)
/* 0041FA44 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0041FA48 8FB30020 */  lw    $s3, 0x20($sp)
/* 0041FA4C 8FB40024 */  lw    $s4, 0x24($sp)
/* 0041FA50 8FB50028 */  lw    $s5, 0x28($sp)
/* 0041FA54 8FB6002C */  lw    $s6, 0x2c($sp)
/* 0041FA58 8FB70030 */  lw    $s7, 0x30($sp)
/* 0041FA5C 8FBE0038 */  lw    $fp, 0x38($sp)
/* 0041FA60 03E00008 */  jr    $ra
/* 0041FA64 27BD0050 */   addiu $sp, $sp, 0x50
    .type base_in_reg, @function
    .size base_in_reg, .-base_in_reg
    .end base_in_reg

glabel varlodstr
    .ent varlodstr
    # 0042269C gen_outparcode
    # 004230F0 func_004230F0
    # 00426FA4 func_00426FA4
    # 0042BF08 reemit
/* 0041FA68 3C1C0FC0 */  .cpload $t9
/* 0041FA6C 279CA828 */  
/* 0041FA70 0399E021 */  
/* 0041FA74 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041FA78 AFA40028 */  sw    $a0, 0x28($sp)
/* 0041FA7C AFA70034 */  sw    $a3, 0x34($sp)
/* 0041FA80 93A7002B */  lbu   $a3, 0x2b($sp)
/* 0041FA84 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 0041FA88 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041FA8C 00A02025 */  move  $a0, $a1
/* 0041FA90 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041FA94 AFA60030 */  sw    $a2, 0x30($sp)
/* 0041FA98 00C02825 */  move  $a1, $a2
/* 0041FA9C 38E70052 */  xori  $a3, $a3, 0x52
/* 0041FAA0 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041FAA4 A3A00027 */  sb    $zero, 0x27($sp)
/* 0041FAA8 2CE70001 */  sltiu $a3, $a3, 1
/* 0041FAAC 0320F809 */  jalr  $t9
/* 0041FAB0 27A60020 */   addiu $a2, $sp, 0x20
/* 0041FAB4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041FAB8 10400012 */  beqz  $v0, .L0041FB04
/* 0041FABC 8FA60034 */   lw    $a2, 0x34($sp)
/* 0041FAC0 50C00008 */  beql  $a2, $zero, .L0041FAE4
/* 0041FAC4 8FAE002C */   lw    $t6, 0x2c($sp)
/* 0041FAC8 8F998288 */  lw    $t9, %call16(base_in_reg)($gp)
/* 0041FACC 8FA40020 */  lw    $a0, 0x20($sp)
/* 0041FAD0 8FA5002C */  lw    $a1, 0x2c($sp)
/* 0041FAD4 0320F809 */  jalr  $t9
/* 0041FAD8 00000000 */   nop   
/* 0041FADC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041FAE0 8FAE002C */  lw    $t6, 0x2c($sp)
.L0041FAE4:
/* 0041FAE4 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 0041FAE8 93A4002B */  lbu   $a0, 0x2b($sp)
/* 0041FAEC 8FA50020 */  lw    $a1, 0x20($sp)
/* 0041FAF0 91C60001 */  lbu   $a2, 1($t6)
/* 0041FAF4 0320F809 */  jalr  $t9
/* 0041FAF8 91C70018 */   lbu   $a3, 0x18($t6)
/* 0041FAFC 10000003 */  b     .L0041FB0C
/* 0041FB00 8FBC0018 */   lw    $gp, 0x18($sp)
.L0041FB04:
/* 0041FB04 240F0001 */  li    $t7, 1
/* 0041FB08 A3AF0027 */  sb    $t7, 0x27($sp)
.L0041FB0C:
/* 0041FB0C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041FB10 93A20027 */  lbu   $v0, 0x27($sp)
/* 0041FB14 27BD0028 */  addiu $sp, $sp, 0x28
/* 0041FB18 03E00008 */  jr    $ra
/* 0041FB1C 00000000 */   nop   
    .type varlodstr, @function
    .size varlodstr, .-varlodstr
    .end varlodstr

glabel spilltemplodstr
    .ent spilltemplodstr
    # 004230F0 func_004230F0
    # 00426FA4 func_00426FA4
    # 0042AADC func_0042AADC
    # 0042BF08 reemit
/* 0041FB20 3C1C0FC0 */  .cpload $t9
/* 0041FB24 279CA770 */  
/* 0041FB28 0399E021 */  
/* 0041FB2C 8F878DA4 */  lw     $a3, %got(u)($gp)
/* 0041FB30 8F8D8980 */  lw     $t5, %got(curblk)($gp)
/* 0041FB34 240E008B */  li    $t6, 139
/* 0041FB38 90E20001 */  lbu   $v0, 1($a3)
/* 0041FB3C A0EE0000 */  sb    $t6, ($a3)
/* 0041FB40 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041FB44 00027EC0 */  sll   $t7, $v0, 0x1b
/* 0041FB48 000FC6C2 */  srl   $t8, $t7, 0x1b
/* 0041FB4C 00B8C826 */  xor   $t9, $a1, $t8
/* 0041FB50 3328001F */  andi  $t0, $t9, 0x1f
/* 0041FB54 01025026 */  xor   $t2, $t0, $v0
/* 0041FB58 314BFF1F */  andi  $t3, $t2, 0xff1f
/* 0041FB5C 356C0020 */  ori   $t4, $t3, 0x20
/* 0041FB60 A0EA0001 */  sb    $t2, 1($a3)
/* 0041FB64 A0EC0001 */  sb    $t4, 1($a3)
/* 0041FB68 8CCE0004 */  lw    $t6, 4($a2)
/* 0041FB6C 8DAD0000 */  lw    $t5, ($t5)
/* 0041FB70 2401000E */  li    $at, 14
/* 0041FB74 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041FB78 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041FB7C AFA40020 */  sw    $a0, 0x20($sp)
/* 0041FB80 AFA50024 */  sw    $a1, 0x24($sp)
/* 0041FB84 A4E00002 */  sh    $zero, 2($a3)
/* 0041FB88 ACEE000C */  sw    $t6, 0xc($a3)
/* 0041FB8C 10A10017 */  beq   $a1, $at, .L0041FBEC
/* 0041FB90 ACED0004 */   sw    $t5, 4($a3)
/* 0041FB94 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 0041FB98 00A02025 */  move  $a0, $a1
/* 0041FB9C AFA60028 */  sw    $a2, 0x28($sp)
/* 0041FBA0 0320F809 */  jalr  $t9
/* 0041FBA4 00000000 */   nop   
/* 0041FBA8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041FBAC 8FA60028 */  lw    $a2, 0x28($sp)
/* 0041FBB0 8F878DA4 */  lw     $a3, %got(u)($gp)
/* 0041FBB4 8F8F8AC4 */  lw     $t7, %got(dogenvreg)($gp)
/* 0041FBB8 ACE20008 */  sw    $v0, 8($a3)
/* 0041FBBC 91EF0000 */  lbu   $t7, ($t7)
/* 0041FBC0 51E0000D */  beql  $t7, $zero, .L0041FBF8
/* 0041FBC4 93B90023 */   lbu   $t9, 0x23($sp)
/* 0041FBC8 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0041FBCC 00E02025 */  move  $a0, $a3
/* 0041FBD0 AFA60028 */  sw    $a2, 0x28($sp)
/* 0041FBD4 0320F809 */  jalr  $t9
/* 0041FBD8 00000000 */   nop   
/* 0041FBDC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041FBE0 8FA60028 */  lw    $a2, 0x28($sp)
/* 0041FBE4 10000003 */  b     .L0041FBF4
/* 0041FBE8 8F878DA4 */   lw     $a3, %got(u)($gp)
.L0041FBEC:
/* 0041FBEC 8CD80008 */  lw    $t8, 8($a2)
/* 0041FBF0 ACF80008 */  sw    $t8, 8($a3)
.L0041FBF4:
/* 0041FBF4 93B90023 */  lbu   $t9, 0x23($sp)
.L0041FBF8:
/* 0041FBF8 00E02025 */  move  $a0, $a3
/* 0041FBFC AFA60028 */  sw    $a2, 0x28($sp)
/* 0041FC00 A0F90000 */  sb    $t9, ($a3)
/* 0041FC04 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0041FC08 0320F809 */  jalr  $t9
/* 0041FC0C 00000000 */   nop   
/* 0041FC10 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041FC14 8FA60028 */  lw    $a2, 0x28($sp)
/* 0041FC18 8F888B48 */  lw     $t0, %got(stack_reversed)($gp)
/* 0041FC1C 91080000 */  lbu   $t0, ($t0)
/* 0041FC20 1500000B */  bnez  $t0, .L0041FC50
/* 0041FC24 00000000 */   nop   
/* 0041FC28 8F8289FC */  lw     $v0, %got(highestmdef)($gp)
/* 0041FC2C 8CC90004 */  lw    $t1, 4($a2)
/* 0041FC30 8C4B0000 */  lw    $t3, ($v0)
/* 0041FC34 00095023 */  negu  $t2, $t1
/* 0041FC38 016A082A */  slt   $at, $t3, $t2
/* 0041FC3C 10200002 */  beqz  $at, .L0041FC48
/* 0041FC40 00000000 */   nop   
/* 0041FC44 01405825 */  move  $t3, $t2
.L0041FC48:
/* 0041FC48 10000009 */  b     .L0041FC70
/* 0041FC4C AC4B0000 */   sw    $t3, ($v0)
.L0041FC50:
/* 0041FC50 8F8289FC */  lw     $v0, %got(highestmdef)($gp)
/* 0041FC54 8CCC0004 */  lw    $t4, 4($a2)
/* 0041FC58 8C4D0000 */  lw    $t5, ($v0)
/* 0041FC5C 01AC082A */  slt   $at, $t5, $t4
/* 0041FC60 50200003 */  beql  $at, $zero, .L0041FC70
/* 0041FC64 AC4D0000 */   sw    $t5, ($v0)
/* 0041FC68 01806825 */  move  $t5, $t4
/* 0041FC6C AC4D0000 */  sw    $t5, ($v0)
.L0041FC70:
/* 0041FC70 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041FC74 27BD0020 */  addiu $sp, $sp, 0x20
/* 0041FC78 03E00008 */  jr    $ra
/* 0041FC7C 00000000 */   nop   
    .type spilltemplodstr, @function
    .size spilltemplodstr, .-spilltemplodstr
    .end spilltemplodstr

glabel genloadaddr
    .ent genloadaddr
    # 00422D04 func_00422D04
    # 004230F0 func_004230F0
    # 00426DE8 func_00426DE8
    # 00426FA4 func_00426FA4
/* 0041FC80 3C1C0FC0 */  .cpload $t9
/* 0041FC84 279CA610 */  
/* 0041FC88 0399E021 */  
/* 0041FC8C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041FC90 AFA40020 */  sw    $a0, 0x20($sp)
/* 0041FC94 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 0041FC98 AFA50024 */  sw    $a1, 0x24($sp)
/* 0041FC9C 93AE0023 */  lbu   $t6, 0x23($sp)
/* 0041FCA0 90820001 */  lbu   $v0, 1($a0)
/* 0041FCA4 93AF0027 */  lbu   $t7, 0x27($sp)
/* 0041FCA8 A08E0000 */  sb    $t6, ($a0)
/* 0041FCAC 0002C600 */  sll   $t8, $v0, 0x18
/* 0041FCB0 0018CF42 */  srl   $t9, $t8, 0x1d
/* 0041FCB4 01F94026 */  xor   $t0, $t7, $t9
/* 0041FCB8 8FAD0030 */  lw    $t5, 0x30($sp)
/* 0041FCBC 8FAE0034 */  lw    $t6, 0x34($sp)
/* 0041FCC0 00084F40 */  sll   $t1, $t0, 0x1d
/* 0041FCC4 00095602 */  srl   $t2, $t1, 0x18
/* 0041FCC8 01425826 */  xor   $t3, $t2, $v0
/* 0041FCCC A08B0001 */  sb    $t3, 1($a0)
/* 0041FCD0 AC860004 */  sw    $a2, 4($a0)
/* 0041FCD4 AC87000C */  sw    $a3, 0xc($a0)
/* 0041FCD8 AC8D0010 */  sw    $t5, 0x10($a0)
/* 0041FCDC AC8E0008 */  sw    $t6, 8($a0)
/* 0041FCE0 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0041FCE4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041FCE8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041FCEC 0320F809 */  jalr  $t9
/* 0041FCF0 AFA60028 */   sw    $a2, 0x28($sp)
/* 0041FCF4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041FCF8 8FB80028 */  lw    $t8, 0x28($sp)
/* 0041FCFC 8F8F8980 */  lw     $t7, %got(curblk)($gp)
/* 0041FD00 8DEF0000 */  lw    $t7, ($t7)
/* 0041FD04 570F000A */  bnel  $t8, $t7, .L0041FD30
/* 0041FD08 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0041FD0C 93B90027 */  lbu   $t9, 0x27($sp)
/* 0041FD10 24010001 */  li    $at, 1
/* 0041FD14 57210006 */  bnel  $t9, $at, .L0041FD30
/* 0041FD18 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0041FD1C 8F888970 */  lw     $t0, %got(tempdisp)($gp)
/* 0041FD20 8F8189FC */  lw     $at, %got(highestmdef)($gp)
/* 0041FD24 8D080000 */  lw    $t0, ($t0)
/* 0041FD28 AC280000 */  sw    $t0, ($at)
/* 0041FD2C 8FBF001C */  lw    $ra, 0x1c($sp)
.L0041FD30:
/* 0041FD30 27BD0020 */  addiu $sp, $sp, 0x20
/* 0041FD34 03E00008 */  jr    $ra
/* 0041FD38 00000000 */   nop   
    .type genloadaddr, @function
    .size genloadaddr, .-genloadaddr
    .end genloadaddr
)"");

/*
004205F8 genrlodrstr
00422D04 func_00422D04
004230F0 func_004230F0
00426DE8 func_00426DE8
00426FA4 func_00426FA4
0042B2C0 func_0042B2C0
*/
void genloadnum(Datatype dtype, int arg1, union Constant constval, int size, bool emit) {
    struct RealstoreData *real;
    int i;

    switch (dtype) {
        case Adt:
        case Fdt:
        case Gdt:
        case Hdt:
        case Jdt:
        case Ldt:
        case Ndt:
            OPC = Uldc;
            DTYPE = dtype;
            LENGTH = size;
            CONSTVAL.swpart.Ival = constval.intval;
            break;

        case Idt:
        case Kdt:
            OPC = Uldc;
            DTYPE = dtype;
            LENGTH = size;
            CONSTVAL.dwval = constval.longval;
            break;

        case Qdt:
        case Rdt:
        case Sdt:
            OPC = Uldc;
            DTYPE = dtype;
            LENGTH = size;
            CONSTVAL.swpart.Ival = constval.real.len;

            real = realstore;
            for (i = 0; i < (constval.real.disp >> 8); i++) {
                real = real->next;
            }
            memcpy(ustrptr, &real->c[constval.real.disp & 0xff], constval.real.len);
            CONSTVAL.swpart.Chars = ustrptr;
            break;

        case Mdt:
            OPC = Ulca;
            DTYPE = Mdt;
            LENGTH = size;
            CONSTVAL.swpart.Ival = constval.string.len;

            if (constval.string.disp < strpdisplace) {
                reset(&strp, " ", 0, 0);
                strpdisplace = 0;
            }

            while (strpdisplace < constval.string.disp) {
                next_char(strp.c_file);
                strpdisplace++;
            }

            IONE = peek_char(strp.c_file) - '0';
            next_char(strp.c_file);
            strpdisplace += 1;
            for (i = 0; i < constval.string.len; i++) {
                if (eoln(strp.c_file)) {
                    readln(strp.c_file);
                    ustrptr[i] = '\n';
                } else {
                    ustrptr[i] = read_char(strp.c_file);
                }
            }
            strpdisplace += constval.string.len;
            CONSTVAL.swpart.Chars = ustrptr;
            break;

        case Cdt:
        case Pdt:
        default:
            dbgerror(0x18B0);
            break;
    }

    if (emit) {
        uwrite(&u);
    }
}

__asm__(R""(
.set noat
.set noreorder

glabel genloadrnum
    .ent genloadrnum
    # 004230F0 func_004230F0
    # 00426FA4 func_00426FA4
/* 0042018C 3C1C0FC0 */  .cpload $t9
/* 00420190 279CA104 */  
/* 00420194 0399E021 */  
/* 00420198 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0042019C AFB00014 */  sw    $s0, 0x14($sp)
/* 004201A0 8F908DA4 */  lw     $s0, %got(u)($gp)
/* 004201A4 240E0095 */  li    $t6, 149
/* 004201A8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 004201AC 92020001 */  lbu   $v0, 1($s0)
/* 004201B0 AFBC0018 */  sw    $gp, 0x18($sp)
/* 004201B4 AFA40020 */  sw    $a0, 0x20($sp)
/* 004201B8 00027EC0 */  sll   $t7, $v0, 0x1b
/* 004201BC 000FC6C2 */  srl   $t8, $t7, 0x1b
/* 004201C0 0098C826 */  xor   $t9, $a0, $t8
/* 004201C4 3328001F */  andi  $t0, $t9, 0x1f
/* 004201C8 01024826 */  xor   $t1, $t0, $v0
/* 004201CC AFA7002C */  sw    $a3, 0x2c($sp)
/* 004201D0 A20E0000 */  sb    $t6, ($s0)
/* 004201D4 A2090001 */  sb    $t1, 1($s0)
/* 004201D8 AE060008 */  sw    $a2, 8($s0)
/* 004201DC 10E00006 */  beqz  $a3, .L004201F8
/* 004201E0 AE050004 */   sw    $a1, 4($s0)
/* 004201E4 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 004201E8 02002025 */  move  $a0, $s0
/* 004201EC 0320F809 */  jalr  $t9
/* 004201F0 00000000 */   nop   
/* 004201F4 8FBC0018 */  lw    $gp, 0x18($sp)
.L004201F8:
/* 004201F8 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004201FC 8FB00014 */  lw    $s0, 0x14($sp)
/* 00420200 27BD0020 */  addiu $sp, $sp, 0x20
/* 00420204 03E00008 */  jr    $ra
/* 00420208 00000000 */   nop   
    .type genloadrnum, @function
    .size genloadrnum, .-genloadrnum
    .end genloadrnum

glabel gen_static_link
    .ent gen_static_link
    # 00420A3C prolog
    # 0042BF08 reemit
/* 0042020C 3C1C0FC0 */  .cpload $t9
/* 00420210 279CA084 */  
/* 00420214 0399E021 */  
/* 00420218 8F8A89AC */  lw     $t2, %got(graphhead)($gp)
/* 0042021C 27BDFFA0 */  addiu $sp, $sp, -0x60
/* 00420220 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00420224 8D4A0000 */  lw    $t2, ($t2)
/* 00420228 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0042022C AFB1001C */  sw    $s1, 0x1c($sp)
/* 00420230 8D430044 */  lw    $v1, 0x44($t2)
/* 00420234 AFB00018 */  sw    $s0, 0x18($sp)
/* 00420238 24050001 */  li    $a1, 1
/* 0042023C 50600017 */  beql  $v1, $zero, .L0042029C
/* 00420240 24060001 */   li    $a2, 1
/* 00420244 906E0000 */  lbu   $t6, ($v1)
/* 00420248 24080003 */  li    $t0, 3
/* 0042024C 550E0013 */  bnel  $t0, $t6, .L0042029C
/* 00420250 24060001 */   li    $a2, 1
/* 00420254 906F0016 */  lbu   $t7, 0x16($v1)
/* 00420258 24060001 */  li    $a2, 1
/* 0042025C 31F80007 */  andi  $t8, $t7, 7
/* 00420260 54D8000E */  bnel  $a2, $t8, .L0042029C
/* 00420264 24060001 */   li    $a2, 1
/* 00420268 8F898980 */  lw     $t1, %got(curblk)($gp)
/* 0042026C 8C6B0014 */  lw    $t3, 0x14($v1)
/* 00420270 8D390000 */  lw    $t9, ($t1)
/* 00420274 000B62C2 */  srl   $t4, $t3, 0xb
/* 00420278 572C0008 */  bnel  $t9, $t4, .L0042029C
/* 0042027C 24060001 */   li    $a2, 1
/* 00420280 8F9189C8 */  lw     $s1, %got(staticlinkloc)($gp)
/* 00420284 8C6E0010 */  lw    $t6, 0x10($v1)
/* 00420288 8E2D0000 */  lw    $t5, ($s1)
/* 0042028C 55AE0003 */  bnel  $t5, $t6, .L0042029C
/* 00420290 24060001 */   li    $a2, 1
/* 00420294 00002825 */  move  $a1, $zero
/* 00420298 24060001 */  li    $a2, 1
.L0042029C:
/* 0042029C 24080003 */  li    $t0, 3
/* 004202A0 8F898980 */  lw     $t1, %got(curblk)($gp)
/* 004202A4 14A6002D */  bne   $a1, $a2, .L0042035C
/* 004202A8 8F9189C8 */   lw     $s1, %got(staticlinkloc)($gp)
/* 004202AC 8F908D34 */  lw     $s0, %got(firsterreg)($gp)
/* 004202B0 8E100000 */  lw    $s0, ($s0)
/* 004202B4 14A60029 */  bne   $a1, $a2, .L0042035C
/* 004202B8 AFB00054 */   sw    $s0, 0x54($sp)
/* 004202BC 8F878D40 */  lw     $a3, %got(lasteereg)($gp)
/* 004202C0 00107880 */  sll   $t7, $s0, 2
/* 004202C4 014F2021 */  addu  $a0, $t2, $t7
/* 004202C8 8CE70000 */  lw    $a3, ($a3)
/* 004202CC AFB00054 */  sw    $s0, 0x54($sp)
/* 004202D0 00F0082A */  slt   $at, $a3, $s0
/* 004202D4 14200021 */  bnez  $at, .L0042035C
/* 004202D8 00000000 */   nop   
/* 004202DC 8C830040 */  lw    $v1, 0x40($a0)
.L004202E0:
/* 004202E0 50600017 */  beql  $v1, $zero, .L00420340
/* 004202E4 26100001 */   addiu $s0, $s0, 1
/* 004202E8 90780000 */  lbu   $t8, ($v1)
/* 004202EC 55180011 */  bnel  $t0, $t8, .L00420334
/* 004202F0 26100001 */   addiu $s0, $s0, 1
/* 004202F4 906B0016 */  lbu   $t3, 0x16($v1)
/* 004202F8 31790007 */  andi  $t9, $t3, 7
/* 004202FC 54D9000D */  bnel  $a2, $t9, .L00420334
/* 00420300 26100001 */   addiu $s0, $s0, 1
/* 00420304 8C6D0014 */  lw    $t5, 0x14($v1)
/* 00420308 8D2C0000 */  lw    $t4, ($t1)
/* 0042030C 000D72C2 */  srl   $t6, $t5, 0xb
/* 00420310 558E0008 */  bnel  $t4, $t6, .L00420334
/* 00420314 26100001 */   addiu $s0, $s0, 1
/* 00420318 8E2F0000 */  lw    $t7, ($s1)
/* 0042031C 8C780010 */  lw    $t8, 0x10($v1)
/* 00420320 55F80004 */  bnel  $t7, $t8, .L00420334
/* 00420324 26100001 */   addiu $s0, $s0, 1
/* 00420328 10000006 */  b     .L00420344
/* 0042032C 24050002 */   li    $a1, 2
/* 00420330 26100001 */  addiu $s0, $s0, 1
.L00420334:
/* 00420334 10000003 */  b     .L00420344
/* 00420338 24840004 */   addiu $a0, $a0, 4
/* 0042033C 26100001 */  addiu $s0, $s0, 1
.L00420340:
/* 00420340 24840004 */  addiu $a0, $a0, 4
.L00420344:
/* 00420344 14A60005 */  bne   $a1, $a2, .L0042035C
/* 00420348 AFB00054 */   sw    $s0, 0x54($sp)
/* 0042034C 00F0082A */  slt   $at, $a3, $s0
/* 00420350 5020FFE3 */  beql  $at, $zero, .L004202E0
/* 00420354 8C830040 */   lw    $v1, 0x40($a0)
/* 00420358 AFB00054 */  sw    $s0, 0x54($sp)
.L0042035C:
/* 0042035C 14A60090 */  bne   $a1, $a2, .L004205A0
/* 00420360 8FB00054 */   lw    $s0, 0x54($sp)
/* 00420364 93AB0052 */  lbu   $t3, 0x52($sp)
/* 00420368 8D2C0000 */  lw    $t4, ($t1)
/* 0042036C 3179FFF8 */  andi  $t9, $t3, 0xfff8
/* 00420370 372D0001 */  ori   $t5, $t9, 1
/* 00420374 A3AD0052 */  sb    $t5, 0x52($sp)
/* 00420378 8FAE0050 */  lw    $t6, 0x50($sp)
/* 0042037C 8E2D0000 */  lw    $t5, ($s1)
/* 00420380 000E7AC2 */  srl   $t7, $t6, 0xb
/* 00420384 018FC026 */  xor   $t8, $t4, $t7
/* 00420388 00185AC0 */  sll   $t3, $t8, 0xb
/* 0042038C 016EC826 */  xor   $t9, $t3, $t6
/* 00420390 AFB90050 */  sw    $t9, 0x50($sp)
/* 00420394 27AC004C */  addiu $t4, $sp, 0x4c
/* 00420398 AFAD004C */  sw    $t5, 0x4c($sp)
/* 0042039C 8D840000 */  lw    $a0, ($t4)
/* 004203A0 8F998338 */  lw    $t9, %call16(isvarihash)($gp)
/* 004203A4 AFA40000 */  sw    $a0, ($sp)
/* 004203A8 8D850004 */  lw    $a1, 4($t4)
/* 004203AC A3A0004B */  sb    $zero, 0x4b($sp)
/* 004203B0 0320F809 */  jalr  $t9
/* 004203B4 AFA50004 */   sw    $a1, 4($sp)
/* 004203B8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004203BC 00025880 */  sll   $t3, $v0, 2
/* 004203C0 93A3004B */  lbu   $v1, 0x4b($sp)
/* 004203C4 8F8E8DF0 */  lw     $t6, %got(itable)($gp)
/* 004203C8 24080003 */  li    $t0, 3
/* 004203CC 016EC821 */  addu  $t9, $t3, $t6
/* 004203D0 8F300000 */  lw    $s0, ($t9)
/* 004203D4 1200001B */  beqz  $s0, .L00420444
/* 004203D8 00000000 */   nop   
/* 004203DC 920D0000 */  lbu   $t5, ($s0)
.L004203E0:
/* 004203E0 550D0014 */  bnel  $t0, $t5, .L00420434
/* 004203E4 8E10000C */   lw    $s0, 0xc($s0)
/* 004203E8 8E040010 */  lw    $a0, 0x10($s0)
/* 004203EC 8E050014 */  lw    $a1, 0x14($s0)
/* 004203F0 27B8004C */  addiu $t8, $sp, 0x4c
/* 004203F4 AFA40000 */  sw    $a0, ($sp)
/* 004203F8 AFA50004 */  sw    $a1, 4($sp)
/* 004203FC 8F060000 */  lw    $a2, ($t8)
/* 00420400 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 00420404 AFA60008 */  sw    $a2, 8($sp)
/* 00420408 8F070004 */  lw    $a3, 4($t8)
/* 0042040C A3A3004B */  sb    $v1, 0x4b($sp)
/* 00420410 0320F809 */  jalr  $t9
/* 00420414 AFA7000C */   sw    $a3, 0xc($sp)
/* 00420418 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042041C 93A3004B */  lbu   $v1, 0x4b($sp)
/* 00420420 10400003 */  beqz  $v0, .L00420430
/* 00420424 24080003 */   li    $t0, 3
/* 00420428 10000002 */  b     .L00420434
/* 0042042C 24030001 */   li    $v1, 1
.L00420430:
/* 00420430 8E10000C */  lw    $s0, 0xc($s0)
.L00420434:
/* 00420434 14600003 */  bnez  $v1, .L00420444
/* 00420438 00000000 */   nop   
/* 0042043C 5600FFE8 */  bnezl $s0, .L004203E0
/* 00420440 920D0000 */   lbu   $t5, ($s0)
.L00420444:
/* 00420444 14600022 */  bnez  $v1, .L004204D0
/* 00420448 00000000 */   nop   
/* 0042044C 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00420450 24040040 */  li    $a0, 64
/* 00420454 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00420458 0320F809 */  jalr  $t9
/* 0042045C 00000000 */   nop   
/* 00420460 9059002E */  lbu   $t9, 0x2e($v0)
/* 00420464 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00420468 24080003 */  li    $t0, 3
/* 0042046C 332DFFF8 */  andi  $t5, $t9, 0xfff8
/* 00420470 8F8F8980 */  lw     $t7, %got(curblk)($gp)
/* 00420474 35AC0001 */  ori   $t4, $t5, 1
/* 00420478 A04C002E */  sb    $t4, 0x2e($v0)
/* 0042047C 8C43002C */  lw    $v1, 0x2c($v0)
/* 00420480 A0480000 */  sb    $t0, ($v0)
/* 00420484 8DEF0000 */  lw    $t7, ($t7)
/* 00420488 0003C2C2 */  srl   $t8, $v1, 0xb
/* 0042048C 8F8C897C */  lw     $t4, %got(curlevel)($gp)
/* 00420490 01F85826 */  xor   $t3, $t7, $t8
/* 00420494 000B72C0 */  sll   $t6, $t3, 0xb
/* 00420498 01C3C826 */  xor   $t9, $t6, $v1
/* 0042049C AC59002C */  sw    $t9, 0x2c($v0)
/* 004204A0 8E2D0000 */  lw    $t5, ($s1)
/* 004204A4 8F858B6C */  lw     $a1, %got(curproc)($gp)
/* 004204A8 00402025 */  move  $a0, $v0
/* 004204AC AC4D0028 */  sw    $t5, 0x28($v0)
/* 004204B0 8D8C0000 */  lw    $t4, ($t4)
/* 004204B4 A04C002F */  sb    $t4, 0x2f($v0)
/* 004204B8 8F998490 */  lw    $t9, %call16(furthervarintree)($gp)
/* 004204BC 8CA50000 */  lw    $a1, ($a1)
/* 004204C0 0320F809 */  jalr  $t9
/* 004204C4 00000000 */   nop   
/* 004204C8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004204CC 304300FF */  andi  $v1, $v0, 0xff
.L004204D0:
/* 004204D0 50600045 */  beql  $v1, $zero, .L004205E8
/* 004204D4 8FBF0024 */   lw    $ra, 0x24($sp)
/* 004204D8 8F908DA4 */  lw     $s0, %got(u)($gp)
/* 004204DC 8F8C8980 */  lw     $t4, %got(curblk)($gp)
/* 004204E0 240F0070 */  li    $t7, 112
/* 004204E4 92180001 */  lbu   $t8, 1($s0)
/* 004204E8 A20F0000 */  sb    $t7, ($s0)
/* 004204EC 8E2F0000 */  lw    $t7, ($s1)
/* 004204F0 330EFFE0 */  andi  $t6, $t8, 0xffe0
/* 004204F4 31D9FF1F */  andi  $t9, $t6, 0xff1f
/* 004204F8 372D0020 */  ori   $t5, $t9, 0x20
/* 004204FC A20E0001 */  sb    $t6, 1($s0)
/* 00420500 A20D0001 */  sb    $t5, 1($s0)
/* 00420504 8D8C0000 */  lw    $t4, ($t4)
/* 00420508 24180004 */  li    $t8, 4
/* 0042050C AE180008 */  sw    $t8, 8($s0)
/* 00420510 AE0F000C */  sw    $t7, 0xc($s0)
/* 00420514 AE0C0004 */  sw    $t4, 4($s0)
/* 00420518 8F998708 */  lw    $t9, %call16(coloroffset)($gp)
/* 0042051C 24040001 */  li    $a0, 1
/* 00420520 0320F809 */  jalr  $t9
/* 00420524 00000000 */   nop   
/* 00420528 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042052C A6020002 */  sh    $v0, 2($s0)
/* 00420530 02002025 */  move  $a0, $s0
/* 00420534 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00420538 0320F809 */  jalr  $t9
/* 0042053C 00000000 */   nop   
/* 00420540 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00420544 8F8B8B48 */  lw     $t3, %got(stack_reversed)($gp)
/* 00420548 916B0000 */  lbu   $t3, ($t3)
/* 0042054C 1560000B */  bnez  $t3, .L0042057C
/* 00420550 00000000 */   nop   
/* 00420554 8F8289FC */  lw     $v0, %got(highestmdef)($gp)
/* 00420558 8E2E0000 */  lw    $t6, ($s1)
/* 0042055C 8C4D0000 */  lw    $t5, ($v0)
/* 00420560 000EC823 */  negu  $t9, $t6
/* 00420564 01B9082A */  slt   $at, $t5, $t9
/* 00420568 10200002 */  beqz  $at, .L00420574
/* 0042056C 00000000 */   nop   
/* 00420570 03206825 */  move  $t5, $t9
.L00420574:
/* 00420574 1000001B */  b     .L004205E4
/* 00420578 AC4D0000 */   sw    $t5, ($v0)
.L0042057C:
/* 0042057C 8F8289FC */  lw     $v0, %got(highestmdef)($gp)
/* 00420580 8E2C0000 */  lw    $t4, ($s1)
/* 00420584 8C4F0000 */  lw    $t7, ($v0)
/* 00420588 01EC082A */  slt   $at, $t7, $t4
/* 0042058C 10200002 */  beqz  $at, .L00420598
/* 00420590 00000000 */   nop   
/* 00420594 01807825 */  move  $t7, $t4
.L00420598:
/* 00420598 10000012 */  b     .L004205E4
/* 0042059C AC4F0000 */   sw    $t7, ($v0)
.L004205A0:
/* 004205A0 24010002 */  li    $at, 2
/* 004205A4 14A1000F */  bne   $a1, $at, .L004205E4
/* 004205A8 24040052 */   li    $a0, 82
/* 004205AC 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 004205B0 24050001 */  li    $a1, 1
/* 004205B4 00003025 */  move  $a2, $zero
/* 004205B8 0320F809 */  jalr  $t9
/* 004205BC 24070004 */   li    $a3, 4
/* 004205C0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004205C4 2404007B */  li    $a0, 123
/* 004205C8 02002825 */  move  $a1, $s0
/* 004205CC 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 004205D0 00003025 */  move  $a2, $zero
/* 004205D4 24070004 */  li    $a3, 4
/* 004205D8 0320F809 */  jalr  $t9
/* 004205DC 00000000 */   nop   
/* 004205E0 8FBC0020 */  lw    $gp, 0x20($sp)
.L004205E4:
/* 004205E4 8FBF0024 */  lw    $ra, 0x24($sp)
.L004205E8:
/* 004205E8 8FB00018 */  lw    $s0, 0x18($sp)
/* 004205EC 8FB1001C */  lw    $s1, 0x1c($sp)
/* 004205F0 03E00008 */  jr    $ra
/* 004205F4 27BD0060 */   addiu $sp, $sp, 0x60
    .type gen_static_link, @function
    .size gen_static_link, .-gen_static_link
    .end gen_static_link

glabel genrlodrstr
    .ent genrlodrstr
    # 00420A3C prolog
    # 00421C00 epilog
    # 0042269C gen_outparcode
    # 00425594 func_00425594
    # 0042B09C func_0042B09C
    # 0042B144 func_0042B144
    # 0042B1A8 func_0042B1A8
/* 004205F8 3C1C0FC0 */  .cpload $t9
/* 004205FC 279C9C98 */  
/* 00420600 0399E021 */  
/* 00420604 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00420608 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0042060C AFBC0028 */  sw    $gp, 0x28($sp)
/* 00420610 AFB10024 */  sw    $s1, 0x24($sp)
/* 00420614 AFB00020 */  sw    $s0, 0x20($sp)
/* 00420618 AFA40030 */  sw    $a0, 0x30($sp)
/* 0042061C AFA50034 */  sw    $a1, 0x34($sp)
/* 00420620 90C30000 */  lbu   $v1, ($a2)
/* 00420624 24010002 */  li    $at, 2
/* 00420628 00C08025 */  move  $s0, $a2
/* 0042062C 54610018 */  bnel  $v1, $at, .L00420690
/* 00420630 24010001 */   li    $at, 1
/* 00420634 8CCF0010 */  lw    $t7, 0x10($a2)
/* 00420638 90C40001 */  lbu   $a0, 1($a2)
/* 0042063C 8F998298 */  lw    $t9, %call16(genloadnum)($gp)
/* 00420640 AFAF0008 */  sw    $t7, 8($sp)
/* 00420644 8CC70014 */  lw    $a3, 0x14($a2)
/* 00420648 AFA7000C */  sw    $a3, 0xc($sp)
/* 0042064C 8CD80018 */  lw    $t8, 0x18($a2)
/* 00420650 AFA00014 */  sw    $zero, 0x14($sp)
/* 00420654 01E03025 */  move  $a2, $t7
/* 00420658 0320F809 */  jalr  $t9
/* 0042065C AFB80010 */   sw    $t8, 0x10($sp)
/* 00420660 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00420664 2419006C */  li    $t9, 108
/* 00420668 8FA40034 */  lw    $a0, 0x34($sp)
/* 0042066C 8F918DA4 */  lw     $s1, %got(u)($gp)
/* 00420670 A2390000 */  sb    $t9, ($s1)
/* 00420674 8F998708 */  lw    $t9, %call16(coloroffset)($gp)
/* 00420678 0320F809 */  jalr  $t9
/* 0042067C 00000000 */   nop   
/* 00420680 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00420684 100000E3 */  b     .L00420A14
/* 00420688 AE220004 */   sw    $v0, 4($s1)
/* 0042068C 24010001 */  li    $at, 1
.L00420690:
/* 00420690 1461002A */  bne   $v1, $at, .L0042073C
/* 00420694 00000000 */   nop   
/* 00420698 8F918DA4 */  lw     $s1, %got(u)($gp)
/* 0042069C 920A001E */  lbu   $t2, 0x1e($s0)
/* 004206A0 8F818DA4 */  lw     $at, %got(u)($gp)
/* 004206A4 92220001 */  lbu   $v0, 1($s1)
/* 004206A8 2408006B */  li    $t0, 107
/* 004206AC A2280000 */  sb    $t0, ($s1)
/* 004206B0 00025E00 */  sll   $t3, $v0, 0x18
/* 004206B4 000B6742 */  srl   $t4, $t3, 0x1d
/* 004206B8 014C6826 */  xor   $t5, $t2, $t4
/* 004206BC 000D7740 */  sll   $t6, $t5, 0x1d
/* 004206C0 000E7E02 */  srl   $t7, $t6, 0x18
/* 004206C4 01E2C026 */  xor   $t8, $t7, $v0
/* 004206C8 A0380001 */  sb    $t8, 1($at)
/* 004206CC 8E19001C */  lw    $t9, 0x1c($s0)
/* 004206D0 8F818DA4 */  lw     $at, %got(u)($gp)
/* 004206D4 8FA40034 */  lw    $a0, 0x34($sp)
/* 004206D8 001942C2 */  srl   $t0, $t9, 0xb
/* 004206DC AC280004 */  sw    $t0, 4($at)
/* 004206E0 8F998708 */  lw    $t9, %call16(coloroffset)($gp)
/* 004206E4 8E090010 */  lw    $t1, 0x10($s0)
/* 004206E8 8F818DA4 */  lw     $at, %got(u)($gp)
/* 004206EC 0320F809 */  jalr  $t9
/* 004206F0 AC29000C */   sw    $t1, 0xc($at)
/* 004206F4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004206F8 AE220008 */  sw    $v0, 8($s1)
/* 004206FC 8E2A0004 */  lw    $t2, 4($s1)
/* 00420700 8F8B8980 */  lw     $t3, %got(curblk)($gp)
/* 00420704 8D6B0000 */  lw    $t3, ($t3)
/* 00420708 156A00C2 */  bne   $t3, $t2, .L00420A14
/* 0042070C 00000000 */   nop   
/* 00420710 922C0001 */  lbu   $t4, 1($s1)
/* 00420714 24010001 */  li    $at, 1
/* 00420718 000C6E00 */  sll   $t5, $t4, 0x18
/* 0042071C 000D7742 */  srl   $t6, $t5, 0x1d
/* 00420720 15C100BC */  bne   $t6, $at, .L00420A14
/* 00420724 00000000 */   nop   
/* 00420728 8F8F8970 */  lw     $t7, %got(tempdisp)($gp)
/* 0042072C 8F8289FC */  lw     $v0, %got(highestmdef)($gp)
/* 00420730 8DEF0000 */  lw    $t7, ($t7)
/* 00420734 100000B7 */  b     .L00420A14
/* 00420738 AC4F0000 */   sw    $t7, ($v0)
.L0042073C:
/* 0042073C 8F918DA4 */  lw     $s1, %got(u)($gp)
/* 00420740 93B80033 */  lbu   $t8, 0x33($sp)
/* 00420744 24010003 */  li    $at, 3
/* 00420748 1461002C */  bne   $v1, $at, .L004207FC
/* 0042074C A2380000 */   sb    $t8, ($s1)
/* 00420750 92220001 */  lbu   $v0, 1($s1)
/* 00420754 92190001 */  lbu   $t9, 1($s0)
/* 00420758 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042075C 000246C0 */  sll   $t0, $v0, 0x1b
/* 00420760 00084EC2 */  srl   $t1, $t0, 0x1b
/* 00420764 03295826 */  xor   $t3, $t9, $t1
/* 00420768 316A001F */  andi  $t2, $t3, 0x1f
/* 0042076C 01426026 */  xor   $t4, $t2, $v0
/* 00420770 A02C0001 */  sb    $t4, 1($at)
/* 00420774 92220001 */  lbu   $v0, 1($s1)
/* 00420778 920E0016 */  lbu   $t6, 0x16($s0)
/* 0042077C 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00420780 00027E00 */  sll   $t7, $v0, 0x18
/* 00420784 000FC742 */  srl   $t8, $t7, 0x1d
/* 00420788 01D84026 */  xor   $t0, $t6, $t8
/* 0042078C 0008CF40 */  sll   $t9, $t0, 0x1d
/* 00420790 00194E02 */  srl   $t1, $t9, 0x18
/* 00420794 01225826 */  xor   $t3, $t1, $v0
/* 00420798 A02B0001 */  sb    $t3, 1($at)
/* 0042079C 8E0A0014 */  lw    $t2, 0x14($s0)
/* 004207A0 8F818DA4 */  lw     $at, %got(u)($gp)
/* 004207A4 93AE0033 */  lbu   $t6, 0x33($sp)
/* 004207A8 000A62C2 */  srl   $t4, $t2, 0xb
/* 004207AC AC2C0004 */  sw    $t4, 4($at)
/* 004207B0 8E0D0010 */  lw    $t5, 0x10($s0)
/* 004207B4 8F818DA4 */  lw     $at, %got(u)($gp)
/* 004207B8 AC2D000C */  sw    $t5, 0xc($at)
/* 004207BC 920F0018 */  lbu   $t7, 0x18($s0)
/* 004207C0 8F818DA4 */  lw     $at, %got(u)($gp)
/* 004207C4 AC2F0008 */  sw    $t7, 8($at)
/* 004207C8 2401006D */  li    $at, 109
/* 004207CC 15C10006 */  bne   $t6, $at, .L004207E8
/* 004207D0 00000000 */   nop   
/* 004207D4 8F828BC4 */  lw     $v0, %got(totvarrlods)($gp)
/* 004207D8 8C580000 */  lw    $t8, ($v0)
/* 004207DC 27080001 */  addiu $t0, $t8, 1
/* 004207E0 10000066 */  b     .L0042097C
/* 004207E4 AC480000 */   sw    $t0, ($v0)
.L004207E8:
/* 004207E8 8F828BC8 */  lw     $v0, %got(totvarrstrs)($gp)
/* 004207EC 8C590000 */  lw    $t9, ($v0)
/* 004207F0 27290001 */  addiu $t1, $t9, 1
/* 004207F4 10000061 */  b     .L0042097C
/* 004207F8 AC490000 */   sw    $t1, ($v0)
.L004207FC:
/* 004207FC 24010004 */  li    $at, 4
/* 00420800 5461000C */  bnel  $v1, $at, .L00420834
/* 00420804 92220001 */   lbu   $v0, 1($s1)
/* 00420808 92220001 */  lbu   $v0, 1($s1)
/* 0042080C 920B0012 */  lbu   $t3, 0x12($s0)
/* 00420810 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00420814 000256C0 */  sll   $t2, $v0, 0x1b
/* 00420818 000A66C2 */  srl   $t4, $t2, 0x1b
/* 0042081C 016C6826 */  xor   $t5, $t3, $t4
/* 00420820 31AF001F */  andi  $t7, $t5, 0x1f
/* 00420824 01E27026 */  xor   $t6, $t7, $v0
/* 00420828 1000000A */  b     .L00420854
/* 0042082C A02E0001 */   sb    $t6, 1($at)
/* 00420830 92220001 */  lbu   $v0, 1($s1)
.L00420834:
/* 00420834 92180001 */  lbu   $t8, 1($s0)
/* 00420838 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042083C 000246C0 */  sll   $t0, $v0, 0x1b
/* 00420840 0008CEC2 */  srl   $t9, $t0, 0x1b
/* 00420844 03194826 */  xor   $t1, $t8, $t9
/* 00420848 312A001F */  andi  $t2, $t1, 0x1f
/* 0042084C 01425826 */  xor   $t3, $t2, $v0
/* 00420850 A02B0001 */  sb    $t3, 1($at)
.L00420854:
/* 00420854 922C0001 */  lbu   $t4, 1($s1)
/* 00420858 8F8E8980 */  lw     $t6, %got(curblk)($gp)
/* 0042085C 306200FF */  andi  $v0, $v1, 0xff
/* 00420860 318DFF1F */  andi  $t5, $t4, 0xff1f
/* 00420864 35AF0020 */  ori   $t7, $t5, 0x20
/* 00420868 A22F0001 */  sb    $t7, 1($s1)
/* 0042086C 8DCE0000 */  lw    $t6, ($t6)
/* 00420870 2448FFFC */  addiu $t0, $v0, -4
/* 00420874 2D010004 */  sltiu $at, $t0, 4
/* 00420878 10200026 */  beqz  $at, .L00420914
/* 0042087C AE2E0004 */   sw    $t6, 4($s1)
/* 00420880 8F818044 */  lw    $at, %got(jtbl_1000AF28)($gp)
/* 00420884 00084080 */  sll   $t0, $t0, 2
/* 00420888 00280821 */  addu  $at, $at, $t0
/* 0042088C 8C28AF28 */  lw    $t0, %lo(jtbl_1000AF28)($at)
/* 00420890 011C4021 */  addu  $t0, $t0, $gp
/* 00420894 01000008 */  jr    $t0
/* 00420898 00000000 */   nop   
.L0042089C:
/* 0042089C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 004208A0 8F908908 */  lw     $s0, %got(err)($gp)
/* 004208A4 8F858044 */  lw    $a1, %got(RO_1000AF0A)($gp)
/* 004208A8 2406001D */  li    $a2, 29
/* 004208AC 2407001D */  li    $a3, 29
/* 004208B0 8E040000 */  lw    $a0, ($s0)
/* 004208B4 0320F809 */  jalr  $t9
/* 004208B8 24A5AF0A */   addiu $a1, %lo(RO_1000AF0A) # addiu $a1, $a1, -0x50f6
/* 004208BC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004208C0 8E040000 */  lw    $a0, ($s0)
/* 004208C4 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 004208C8 0320F809 */  jalr  $t9
/* 004208CC 00000000 */   nop   
/* 004208D0 10000018 */  b     .L00420934
/* 004208D4 8FBC0028 */   lw    $gp, 0x28($sp)
.L004208D8:
/* 004208D8 8E180024 */  lw    $t8, 0x24($s0)
/* 004208DC 8F818DA4 */  lw     $at, %got(u)($gp)
/* 004208E0 8F190004 */  lw    $t9, 4($t8)
/* 004208E4 10000013 */  b     .L00420934
/* 004208E8 AC39000C */   sw    $t9, 0xc($at)
.L004208EC:
/* 004208EC 8E090020 */  lw    $t1, 0x20($s0)
/* 004208F0 8F818DA4 */  lw     $at, %got(u)($gp)
/* 004208F4 8D2A0004 */  lw    $t2, 4($t1)
/* 004208F8 1000000E */  b     .L00420934
/* 004208FC AC2A000C */   sw    $t2, 0xc($at)
.L00420900:
/* 00420900 8E0B0020 */  lw    $t3, 0x20($s0)
/* 00420904 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00420908 8D6C0004 */  lw    $t4, 4($t3)
/* 0042090C 10000009 */  b     .L00420934
/* 00420910 AC2C000C */   sw    $t4, 0xc($at)
.L00420914:
/* 00420914 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00420918 8F868044 */  lw    $a2, %got(RO_1000AF00)($gp)
/* 0042091C 24040001 */  li    $a0, 1
/* 00420920 24050280 */  li    $a1, 640
/* 00420924 2407000A */  li    $a3, 10
/* 00420928 0320F809 */  jalr  $t9
/* 0042092C 24C6AF00 */   addiu $a2, %lo(RO_1000AF00) # addiu $a2, $a2, -0x5100
/* 00420930 8FBC0028 */  lw    $gp, 0x28($sp)
.L00420934:
/* 00420934 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 00420938 92240001 */  lbu   $a0, 1($s1)
/* 0042093C 0320F809 */  jalr  $t9
/* 00420940 3084001F */   andi  $a0, $a0, 0x1f
/* 00420944 93AD0033 */  lbu   $t5, 0x33($sp)
/* 00420948 2401006D */  li    $at, 109
/* 0042094C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00420950 15A10006 */  bne   $t5, $at, .L0042096C
/* 00420954 AE220008 */   sw    $v0, 8($s1)
/* 00420958 8F828BCC */  lw     $v0, %got(totexprlods)($gp)
/* 0042095C 8C4F0000 */  lw    $t7, ($v0)
/* 00420960 25EE0001 */  addiu $t6, $t7, 1
/* 00420964 10000005 */  b     .L0042097C
/* 00420968 AC4E0000 */   sw    $t6, ($v0)
.L0042096C:
/* 0042096C 8F828BD0 */  lw     $v0, %got(totexprstrs)($gp)
/* 00420970 8C480000 */  lw    $t0, ($v0)
/* 00420974 25180001 */  addiu $t8, $t0, 1
/* 00420978 AC580000 */  sw    $t8, ($v0)
.L0042097C:
/* 0042097C 8F998708 */  lw    $t9, %call16(coloroffset)($gp)
/* 00420980 8FA40034 */  lw    $a0, 0x34($sp)
/* 00420984 0320F809 */  jalr  $t9
/* 00420988 00000000 */   nop   
/* 0042098C 92390001 */  lbu   $t9, 1($s1)
/* 00420990 24010001 */  li    $at, 1
/* 00420994 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00420998 00194E00 */  sll   $t1, $t9, 0x18
/* 0042099C 00095742 */  srl   $t2, $t1, 0x1d
/* 004209A0 1541001C */  bne   $t2, $at, .L00420A14
/* 004209A4 A6220002 */   sh    $v0, 2($s1)
/* 004209A8 8F8B8980 */  lw     $t3, %got(curblk)($gp)
/* 004209AC 8E2C0004 */  lw    $t4, 4($s1)
/* 004209B0 8D6B0000 */  lw    $t3, ($t3)
/* 004209B4 156C0017 */  bne   $t3, $t4, .L00420A14
/* 004209B8 00000000 */   nop   
/* 004209BC 8F8D8B48 */  lw     $t5, %got(stack_reversed)($gp)
/* 004209C0 91AD0000 */  lbu   $t5, ($t5)
/* 004209C4 15A0000B */  bnez  $t5, .L004209F4
/* 004209C8 00000000 */   nop   
/* 004209CC 8F8289FC */  lw     $v0, %got(highestmdef)($gp)
/* 004209D0 8E2F000C */  lw    $t7, 0xc($s1)
/* 004209D4 8C480000 */  lw    $t0, ($v0)
/* 004209D8 000F7023 */  negu  $t6, $t7
/* 004209DC 010E082A */  slt   $at, $t0, $t6
/* 004209E0 10200002 */  beqz  $at, .L004209EC
/* 004209E4 00000000 */   nop   
/* 004209E8 01C04025 */  move  $t0, $t6
.L004209EC:
/* 004209EC 10000009 */  b     .L00420A14
/* 004209F0 AC480000 */   sw    $t0, ($v0)
.L004209F4:
/* 004209F4 8F8289FC */  lw     $v0, %got(highestmdef)($gp)
/* 004209F8 8E38000C */  lw    $t8, 0xc($s1)
/* 004209FC 8C590000 */  lw    $t9, ($v0)
/* 00420A00 0338082A */  slt   $at, $t9, $t8
/* 00420A04 50200003 */  beql  $at, $zero, .L00420A14
/* 00420A08 AC590000 */   sw    $t9, ($v0)
/* 00420A0C 0300C825 */  move  $t9, $t8
/* 00420A10 AC590000 */  sw    $t9, ($v0)
.L00420A14:
/* 00420A14 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00420A18 02202025 */  move  $a0, $s1
/* 00420A1C 0320F809 */  jalr  $t9
/* 00420A20 00000000 */   nop   
/* 00420A24 8FBF002C */  lw    $ra, 0x2c($sp)
/* 00420A28 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00420A2C 8FB00020 */  lw    $s0, 0x20($sp)
/* 00420A30 8FB10024 */  lw    $s1, 0x24($sp)
/* 00420A34 03E00008 */  jr    $ra
/* 00420A38 27BD0030 */   addiu $sp, $sp, 0x30
    .type genrlodrstr, @function
    .size genrlodrstr, .-genrlodrstr
    .end genrlodrstr

glabel prolog
    .ent prolog
    # 0042BF08 reemit
/* 00420A3C 3C1C0FC0 */  .cpload $t9
/* 00420A40 279C9854 */  
/* 00420A44 0399E021 */  
/* 00420A48 27BDFF68 */  addiu $sp, $sp, -0x98
/* 00420A4C AFB70030 */  sw    $s7, 0x30($sp)
/* 00420A50 8F978B0C */  lw     $s7, %got(allcallersave)($gp)
/* 00420A54 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00420A58 AFB10018 */  sw    $s1, 0x18($sp)
/* 00420A5C 92F80000 */  lbu   $t8, ($s7)
/* 00420A60 24110001 */  li    $s1, 1
/* 00420A64 240E0068 */  li    $t6, 104
/* 00420A68 240F0002 */  li    $t7, 2
/* 00420A6C AFBF003C */  sw    $ra, 0x3c($sp)
/* 00420A70 AFBE0038 */  sw    $fp, 0x38($sp)
/* 00420A74 AFBC0034 */  sw    $gp, 0x34($sp)
/* 00420A78 AFB6002C */  sw    $s6, 0x2c($sp)
/* 00420A7C AFB50028 */  sw    $s5, 0x28($sp)
/* 00420A80 AFB40024 */  sw    $s4, 0x24($sp)
/* 00420A84 AFB30020 */  sw    $s3, 0x20($sp)
/* 00420A88 AFB2001C */  sw    $s2, 0x1c($sp)
/* 00420A8C AFB00014 */  sw    $s0, 0x14($sp)
/* 00420A90 A08E0000 */  sb    $t6, ($a0)
/* 00420A94 A4800002 */  sh    $zero, 2($a0)
/* 00420A98 AC910004 */  sw    $s1, 4($a0)
/* 00420A9C 130000A1 */  beqz  $t8, .L00420D24
/* 00420AA0 AC8F000C */   sw    $t7, 0xc($a0)
/* 00420AA4 8F958D38 */  lw     $s5, %got(firsteereg)($gp)
/* 00420AA8 8F898D3C */  lw     $t1, %got(lasterreg)($gp)
/* 00420AAC 8EB90000 */  lw    $t9, ($s5)
/* 00420AB0 8D290000 */  lw    $t1, ($t1)
/* 00420AB4 2728FFFE */  addiu $t0, $t9, -2
/* 00420AB8 0109082A */  slt   $at, $t0, $t1
/* 00420ABC 50200003 */  beql  $at, $zero, .L00420ACC
/* 00420AC0 AC890008 */   sw    $t1, 8($a0)
/* 00420AC4 01004825 */  move  $t1, $t0
/* 00420AC8 AC890008 */  sw    $t1, 8($a0)
.L00420ACC:
/* 00420ACC 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00420AD0 0320F809 */  jalr  $t9
/* 00420AD4 00000000 */   nop   
/* 00420AD8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00420ADC 8F8A8B10 */  lw     $t2, %got(propagate_ee_saves)($gp)
/* 00420AE0 914A0000 */  lbu   $t2, ($t2)
/* 00420AE4 1140000E */  beqz  $t2, .L00420B20
/* 00420AE8 00000000 */   nop   
/* 00420AEC 8EB00000 */  lw    $s0, ($s5)
/* 00420AF0 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00420AF4 240C0016 */  li    $t4, 22
/* 00420AF8 260B0002 */  addiu $t3, $s0, 2
/* 00420AFC 01906823 */  subu  $t5, $t4, $s0
/* 00420B00 AC8B000C */  sw    $t3, 0xc($a0)
/* 00420B04 AC8D0008 */  sw    $t5, 8($a0)
/* 00420B08 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00420B0C 0320F809 */  jalr  $t9
/* 00420B10 00000000 */   nop   
/* 00420B14 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00420B18 1000002C */  b     .L00420BCC
/* 00420B1C 8EB00000 */   lw    $s0, ($s5)
.L00420B20:
/* 00420B20 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00420B24 AC310008 */  sw    $s1, 8($at)
/* 00420B28 8EB00000 */  lw    $s0, ($s5)
/* 00420B2C 2A010016 */  slti  $at, $s0, 0x16
/* 00420B30 10200026 */  beqz  $at, .L00420BCC
/* 00420B34 02002025 */   move  $a0, $s0
/* 00420B38 24100016 */  li    $s0, 22
/* 00420B3C AFA4006C */  sw    $a0, 0x6c($sp)
/* 00420B40 8F948B6C */  lw     $s4, %got(curproc)($gp)
/* 00420B44 8F938A1C */  lw     $s3, %got(ugen_saved_eeregs)($gp)
.L00420B48:
/* 00420B48 8FA2006C */  lw    $v0, 0x6c($sp)
/* 00420B4C 8E6E0000 */  lw    $t6, ($s3)
/* 00420B50 244FFFF3 */  addiu $t7, $v0, -0xd
/* 00420B54 2DF80020 */  sltiu $t8, $t7, 0x20
/* 00420B58 0018C823 */  negu  $t9, $t8
/* 00420B5C 01D94024 */  and   $t0, $t6, $t9
/* 00420B60 01E84804 */  sllv  $t1, $t0, $t7
/* 00420B64 0521000B */  bgez  $t1, .L00420B94
/* 00420B68 244E0002 */   addiu $t6, $v0, 2
/* 00420B6C 8E8A0000 */  lw    $t2, ($s4)
/* 00420B70 8D4B0024 */  lw    $t3, 0x24($t2)
/* 00420B74 01626021 */  addu  $t4, $t3, $v0
/* 00420B78 918DFFFF */  lbu   $t5, -1($t4)
/* 00420B7C 11A00005 */  beqz  $t5, .L00420B94
/* 00420B80 00000000 */   nop   
/* 00420B84 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00420B88 24180002 */  li    $t8, 2
/* 00420B8C 10000003 */  b     .L00420B9C
/* 00420B90 AC380004 */   sw    $t8, 4($at)
.L00420B94:
/* 00420B94 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00420B98 AC310004 */  sw    $s1, 4($at)
.L00420B9C:
/* 00420B9C 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00420BA0 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00420BA4 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00420BA8 AFA2006C */  sw    $v0, 0x6c($sp)
/* 00420BAC 0320F809 */  jalr  $t9
/* 00420BB0 AC2E000C */   sw    $t6, 0xc($at)
/* 00420BB4 8FB9006C */  lw    $t9, 0x6c($sp)
/* 00420BB8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00420BBC 27280001 */  addiu $t0, $t9, 1
/* 00420BC0 1510FFE1 */  bne   $t0, $s0, .L00420B48
/* 00420BC4 AFA8006C */   sw    $t0, 0x6c($sp)
/* 00420BC8 8EB00000 */  lw    $s0, ($s5)
.L00420BCC:
/* 00420BCC 8F968D40 */  lw     $s6, %got(lasteereg)($gp)
/* 00420BD0 8F938A1C */  lw     $s3, %got(ugen_saved_eeregs)($gp)
/* 00420BD4 8F948B6C */  lw     $s4, %got(curproc)($gp)
/* 00420BD8 8EC20000 */  lw    $v0, ($s6)
/* 00420BDC 0050082A */  slt   $at, $v0, $s0
/* 00420BE0 1420004E */  bnez  $at, .L00420D1C
/* 00420BE4 00000000 */   nop   
/* 00420BE8 8F928DA4 */  lw     $s2, %got(u)($gp)
/* 00420BEC 8F898B10 */  lw     $t1, %got(propagate_ee_saves)($gp)
/* 00420BF0 240F001E */  li    $t7, 30
/* 00420BF4 AE4F000C */  sw    $t7, 0xc($s2)
/* 00420BF8 AE510008 */  sw    $s1, 8($s2)
/* 00420BFC 91290000 */  lbu   $t1, ($t1)
/* 00420C00 51200022 */  beql  $t1, $zero, .L00420C8C
/* 00420C04 8E790000 */   lw    $t9, ($s3)
/* 00420C08 8F8A8AFC */  lw     $t2, %got(someusefp)($gp)
/* 00420C0C AE510004 */  sw    $s1, 4($s2)
/* 00420C10 914A0000 */  lbu   $t2, ($t2)
/* 00420C14 11400014 */  beqz  $t2, .L00420C68
/* 00420C18 00000000 */   nop   
/* 00420C1C 8F8B8D88 */  lw     $t3, %got(usedeeregs)($gp)
/* 00420C20 8D6B0000 */  lw    $t3, ($t3)
/* 00420C24 000B6580 */  sll   $t4, $t3, 0x16
/* 00420C28 0583002C */  bgezl $t4, .L00420CDC
/* 00420C2C 28410017 */   slti  $at, $v0, 0x17
/* 00420C30 8E6D0000 */  lw    $t5, ($s3)
/* 00420C34 240E0002 */  li    $t6, 2
/* 00420C38 000DC240 */  sll   $t8, $t5, 9
/* 00420C3C 07010002 */  bgez  $t8, .L00420C48
/* 00420C40 00000000 */   nop   
/* 00420C44 AE4E0004 */  sw    $t6, 4($s2)
.L00420C48:
/* 00420C48 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00420C4C 02402025 */  move  $a0, $s2
/* 00420C50 0320F809 */  jalr  $t9
/* 00420C54 00000000 */   nop   
/* 00420C58 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00420C5C 8EC20000 */  lw    $v0, ($s6)
/* 00420C60 1000001D */  b     .L00420CD8
/* 00420C64 8F928DA4 */   lw     $s2, %got(u)($gp)
.L00420C68:
/* 00420C68 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00420C6C 02402025 */  move  $a0, $s2
/* 00420C70 0320F809 */  jalr  $t9
/* 00420C74 00000000 */   nop   
/* 00420C78 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00420C7C 8EC20000 */  lw    $v0, ($s6)
/* 00420C80 10000015 */  b     .L00420CD8
/* 00420C84 8F928DA4 */   lw     $s2, %got(u)($gp)
/* 00420C88 8E790000 */  lw    $t9, ($s3)
.L00420C8C:
/* 00420C8C 00194240 */  sll   $t0, $t9, 9
/* 00420C90 0503000A */  bgezl $t0, .L00420CBC
/* 00420C94 AE510004 */   sw    $s1, 4($s2)
/* 00420C98 8E8F0000 */  lw    $t7, ($s4)
/* 00420C9C 240B0002 */  li    $t3, 2
/* 00420CA0 8DE90024 */  lw    $t1, 0x24($t7)
/* 00420CA4 912A0015 */  lbu   $t2, 0x15($t1)
/* 00420CA8 51400004 */  beql  $t2, $zero, .L00420CBC
/* 00420CAC AE510004 */   sw    $s1, 4($s2)
/* 00420CB0 10000002 */  b     .L00420CBC
/* 00420CB4 AE4B0004 */   sw    $t3, 4($s2)
/* 00420CB8 AE510004 */  sw    $s1, 4($s2)
.L00420CBC:
/* 00420CBC 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00420CC0 02402025 */  move  $a0, $s2
/* 00420CC4 0320F809 */  jalr  $t9
/* 00420CC8 00000000 */   nop   
/* 00420CCC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00420CD0 8EC20000 */  lw    $v0, ($s6)
/* 00420CD4 8F928DA4 */  lw     $s2, %got(u)($gp)
.L00420CD8:
/* 00420CD8 28410017 */  slti  $at, $v0, 0x17
.L00420CDC:
/* 00420CDC 1420000F */  bnez  $at, .L00420D1C
/* 00420CE0 00000000 */   nop   
/* 00420CE4 8F8C8D88 */  lw     $t4, %got(usedeeregs)($gp)
/* 00420CE8 2418001F */  li    $t8, 31
/* 00420CEC 240E0002 */  li    $t6, 2
/* 00420CF0 8D8C0000 */  lw    $t4, ($t4)
/* 00420CF4 000C6DC0 */  sll   $t5, $t4, 0x17
/* 00420CF8 05A10008 */  bgez  $t5, .L00420D1C
/* 00420CFC 00000000 */   nop   
/* 00420D00 AE58000C */  sw    $t8, 0xc($s2)
/* 00420D04 AE4E0004 */  sw    $t6, 4($s2)
/* 00420D08 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00420D0C 02402025 */  move  $a0, $s2
/* 00420D10 0320F809 */  jalr  $t9
/* 00420D14 00000000 */   nop   
/* 00420D18 8FBC0034 */  lw    $gp, 0x34($sp)
.L00420D1C:
/* 00420D1C 10000066 */  b     .L00420EB8
/* 00420D20 00000000 */   nop   
.L00420D24:
/* 00420D24 8F958D38 */  lw     $s5, %got(firsteereg)($gp)
/* 00420D28 8F8F8D50 */  lw     $t7, %got(highesterreg)($gp)
/* 00420D2C 8EB90000 */  lw    $t9, ($s5)
/* 00420D30 8DEF0000 */  lw    $t7, ($t7)
/* 00420D34 2728FFFE */  addiu $t0, $t9, -2
/* 00420D38 010F082A */  slt   $at, $t0, $t7
/* 00420D3C 50200003 */  beql  $at, $zero, .L00420D4C
/* 00420D40 AC8F0008 */   sw    $t7, 8($a0)
/* 00420D44 01007825 */  move  $t7, $t0
/* 00420D48 AC8F0008 */  sw    $t7, 8($a0)
.L00420D4C:
/* 00420D4C 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00420D50 0320F809 */  jalr  $t9
/* 00420D54 00000000 */   nop   
/* 00420D58 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00420D5C 8F828D54 */  lw     $v0, %got(highesteereg)($gp)
/* 00420D60 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00420D64 8C420000 */  lw    $v0, ($v0)
/* 00420D68 AC310008 */  sw    $s1, 8($at)
/* 00420D6C 8EA40000 */  lw    $a0, ($s5)
/* 00420D70 28410016 */  slti  $at, $v0, 0x16
/* 00420D74 14200002 */  bnez  $at, .L00420D80
/* 00420D78 00408025 */   move  $s0, $v0
/* 00420D7C 24100015 */  li    $s0, 21
.L00420D80:
/* 00420D80 0204082A */  slt   $at, $s0, $a0
/* 00420D84 14200021 */  bnez  $at, .L00420E0C
/* 00420D88 26100001 */   addiu $s0, $s0, 1
/* 00420D8C AFA4006C */  sw    $a0, 0x6c($sp)
/* 00420D90 8F938A1C */  lw     $s3, %got(ugen_saved_eeregs)($gp)
.L00420D94:
/* 00420D94 8FA2006C */  lw    $v0, 0x6c($sp)
/* 00420D98 8E690000 */  lw    $t1, ($s3)
/* 00420D9C 244AFFF3 */  addiu $t2, $v0, -0xd
/* 00420DA0 2D4B0020 */  sltiu $t3, $t2, 0x20
/* 00420DA4 000B6023 */  negu  $t4, $t3
/* 00420DA8 012C6824 */  and   $t5, $t1, $t4
/* 00420DAC 014DC004 */  sllv  $t8, $t5, $t2
/* 00420DB0 07010005 */  bgez  $t8, .L00420DC8
/* 00420DB4 00000000 */   nop   
/* 00420DB8 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00420DBC 240E0002 */  li    $t6, 2
/* 00420DC0 10000003 */  b     .L00420DD0
/* 00420DC4 AC2E0004 */   sw    $t6, 4($at)
.L00420DC8:
/* 00420DC8 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00420DCC AC310004 */  sw    $s1, 4($at)
.L00420DD0:
/* 00420DD0 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00420DD4 24590002 */  addiu $t9, $v0, 2
/* 00420DD8 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00420DDC AC39000C */  sw    $t9, 0xc($at)
/* 00420DE0 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00420DE4 AFA2006C */  sw    $v0, 0x6c($sp)
/* 00420DE8 0320F809 */  jalr  $t9
/* 00420DEC 00000000 */   nop   
/* 00420DF0 8FA8006C */  lw    $t0, 0x6c($sp)
/* 00420DF4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00420DF8 250F0001 */  addiu $t7, $t0, 1
/* 00420DFC 15F0FFE5 */  bne   $t7, $s0, .L00420D94
/* 00420E00 AFAF006C */   sw    $t7, 0x6c($sp)
/* 00420E04 8F828D54 */  lw     $v0, %got(highesteereg)($gp)
/* 00420E08 8C420000 */  lw    $v0, ($v0)
.L00420E0C:
/* 00420E0C 28410016 */  slti  $at, $v0, 0x16
/* 00420E10 14200014 */  bnez  $at, .L00420E64
/* 00420E14 8F938A1C */   lw     $s3, %got(ugen_saved_eeregs)($gp)
/* 00420E18 8E6B0000 */  lw    $t3, ($s3)
/* 00420E1C 240D001E */  li    $t5, 30
/* 00420E20 000B4A40 */  sll   $t1, $t3, 9
/* 00420E24 05210005 */  bgez  $t1, .L00420E3C
/* 00420E28 00000000 */   nop   
/* 00420E2C 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00420E30 240C0002 */  li    $t4, 2
/* 00420E34 10000003 */  b     .L00420E44
/* 00420E38 AC2C0004 */   sw    $t4, 4($at)
.L00420E3C:
/* 00420E3C 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00420E40 AC310004 */  sw    $s1, 4($at)
.L00420E44:
/* 00420E44 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00420E48 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00420E4C 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00420E50 0320F809 */  jalr  $t9
/* 00420E54 AC2D000C */   sw    $t5, 0xc($at)
/* 00420E58 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00420E5C 8F828D54 */  lw     $v0, %got(highesteereg)($gp)
/* 00420E60 8C420000 */  lw    $v0, ($v0)
.L00420E64:
/* 00420E64 28410017 */  slti  $at, $v0, 0x17
/* 00420E68 14200013 */  bnez  $at, .L00420EB8
/* 00420E6C 00000000 */   nop   
/* 00420E70 8E6A0000 */  lw    $t2, ($s3)
/* 00420E74 000AC280 */  sll   $t8, $t2, 0xa
/* 00420E78 07010005 */  bgez  $t8, .L00420E90
/* 00420E7C 00000000 */   nop   
/* 00420E80 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00420E84 240E0002 */  li    $t6, 2
/* 00420E88 10000003 */  b     .L00420E98
/* 00420E8C AC2E0004 */   sw    $t6, 4($at)
.L00420E90:
/* 00420E90 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00420E94 AC310004 */  sw    $s1, 4($at)
.L00420E98:
/* 00420E98 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00420E9C 2419001F */  li    $t9, 31
/* 00420EA0 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00420EA4 AC39000C */  sw    $t9, 0xc($at)
/* 00420EA8 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00420EAC 0320F809 */  jalr  $t9
/* 00420EB0 00000000 */   nop   
/* 00420EB4 8FBC0034 */  lw    $gp, 0x34($sp)
.L00420EB8:
/* 00420EB8 8F928DA4 */  lw     $s2, %got(u)($gp)
/* 00420EBC 92EF0000 */  lbu   $t7, ($s7)
/* 00420EC0 24110003 */  li    $s1, 3
/* 00420EC4 2408002C */  li    $t0, 44
/* 00420EC8 8F948B6C */  lw     $s4, %got(curproc)($gp)
/* 00420ECC 8F968D40 */  lw     $s6, %got(lasteereg)($gp)
/* 00420ED0 AE510004 */  sw    $s1, 4($s2)
/* 00420ED4 11E00054 */  beqz  $t7, .L00421028
/* 00420ED8 AE48000C */   sw    $t0, 0xc($s2)
/* 00420EDC 8F8B8D3C */  lw     $t3, %got(lasterreg)($gp)
/* 00420EE0 8F898D44 */  lw     $t1, %got(firstparmreg)($gp)
/* 00420EE4 02402025 */  move  $a0, $s2
/* 00420EE8 8D6B0004 */  lw    $t3, 4($t3)
/* 00420EEC 8D290004 */  lw    $t1, 4($t1)
/* 00420EF0 01696023 */  subu  $t4, $t3, $t1
/* 00420EF4 000C6840 */  sll   $t5, $t4, 1
/* 00420EF8 25AA0002 */  addiu $t2, $t5, 2
/* 00420EFC AE4A0008 */  sw    $t2, 8($s2)
/* 00420F00 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00420F04 0320F809 */  jalr  $t9
/* 00420F08 00000000 */   nop   
/* 00420F0C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00420F10 8F988B10 */  lw     $t8, %got(propagate_ee_saves)($gp)
/* 00420F14 93180000 */  lbu   $t8, ($t8)
/* 00420F18 13000013 */  beqz  $t8, .L00420F68
/* 00420F1C 00000000 */   nop   
/* 00420F20 8F8E8D44 */  lw     $t6, %got(firstparmreg)($gp)
/* 00420F24 8EA20004 */  lw    $v0, 4($s5)
/* 00420F28 8ECB0004 */  lw    $t3, 4($s6)
/* 00420F2C 8DCE0004 */  lw    $t6, 4($t6)
/* 00420F30 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00420F34 01624823 */  subu  $t1, $t3, $v0
/* 00420F38 004EC823 */  subu  $t9, $v0, $t6
/* 00420F3C 00194040 */  sll   $t0, $t9, 1
/* 00420F40 00096040 */  sll   $t4, $t1, 1
/* 00420F44 250F002C */  addiu $t7, $t0, 0x2c
/* 00420F48 258D0002 */  addiu $t5, $t4, 2
/* 00420F4C AC8F000C */  sw    $t7, 0xc($a0)
/* 00420F50 AC8D0008 */  sw    $t5, 8($a0)
/* 00420F54 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00420F58 0320F809 */  jalr  $t9
/* 00420F5C 00000000 */   nop   
/* 00420F60 1000002F */  b     .L00421020
/* 00420F64 8FBC0034 */   lw    $gp, 0x34($sp)
.L00420F68:
/* 00420F68 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00420F6C 240A0002 */  li    $t2, 2
/* 00420F70 AC2A0008 */  sw    $t2, 8($at)
/* 00420F74 8ED00004 */  lw    $s0, 4($s6)
/* 00420F78 8EA40004 */  lw    $a0, 4($s5)
/* 00420F7C 0204082A */  slt   $at, $s0, $a0
/* 00420F80 14200027 */  bnez  $at, .L00421020
/* 00420F84 26100001 */   addiu $s0, $s0, 1
/* 00420F88 AFA4006C */  sw    $a0, 0x6c($sp)
.L00420F8C:
/* 00420F8C 8FA2006C */  lw    $v0, 0x6c($sp)
/* 00420F90 8E780000 */  lw    $t8, ($s3)
/* 00420F94 244EFFF3 */  addiu $t6, $v0, -0xd
/* 00420F98 2DD90020 */  sltiu $t9, $t6, 0x20
/* 00420F9C 00194023 */  negu  $t0, $t9
/* 00420FA0 03087824 */  and   $t7, $t8, $t0
/* 00420FA4 01CF5804 */  sllv  $t3, $t7, $t6
/* 00420FA8 0561000B */  bgez  $t3, .L00420FD8
/* 00420FAC 00000000 */   nop   
/* 00420FB0 8E890000 */  lw    $t1, ($s4)
/* 00420FB4 8D2C0024 */  lw    $t4, 0x24($t1)
/* 00420FB8 01826821 */  addu  $t5, $t4, $v0
/* 00420FBC 91AAFFFF */  lbu   $t2, -1($t5)
/* 00420FC0 11400005 */  beqz  $t2, .L00420FD8
/* 00420FC4 00000000 */   nop   
/* 00420FC8 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00420FCC 24190004 */  li    $t9, 4
/* 00420FD0 10000003 */  b     .L00420FE0
/* 00420FD4 AC390004 */   sw    $t9, 4($at)
.L00420FD8:
/* 00420FD8 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00420FDC AC310004 */  sw    $s1, 4($at)
.L00420FE0:
/* 00420FE0 8F988D44 */  lw     $t8, %got(firstparmreg)($gp)
/* 00420FE4 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00420FE8 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00420FEC 8F180004 */  lw    $t8, 4($t8)
/* 00420FF0 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00420FF4 AFA2006C */  sw    $v0, 0x6c($sp)
/* 00420FF8 00584023 */  subu  $t0, $v0, $t8
/* 00420FFC 00087840 */  sll   $t7, $t0, 1
/* 00421000 25EE002C */  addiu $t6, $t7, 0x2c
/* 00421004 0320F809 */  jalr  $t9
/* 00421008 AC2E000C */   sw    $t6, 0xc($at)
/* 0042100C 8FAB006C */  lw    $t3, 0x6c($sp)
/* 00421010 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00421014 25690001 */  addiu $t1, $t3, 1
/* 00421018 1530FFDC */  bne   $t1, $s0, .L00420F8C
/* 0042101C AFA9006C */   sw    $t1, 0x6c($sp)
.L00421020:
/* 00421020 10000038 */  b     .L00421104
/* 00421024 92EE0000 */   lbu   $t6, ($s7)
.L00421028:
/* 00421028 8F838D50 */  lw     $v1, %got(highesterreg)($gp)
/* 0042102C 8F828D44 */  lw     $v0, %got(firstparmreg)($gp)
/* 00421030 8C630004 */  lw    $v1, 4($v1)
/* 00421034 8C420004 */  lw    $v0, 4($v0)
/* 00421038 0062082A */  slt   $at, $v1, $v0
/* 0042103C 1420000A */  bnez  $at, .L00421068
/* 00421040 00626023 */   subu  $t4, $v1, $v0
/* 00421044 000C6840 */  sll   $t5, $t4, 1
/* 00421048 25AA0002 */  addiu $t2, $t5, 2
/* 0042104C AE4A0008 */  sw    $t2, 8($s2)
/* 00421050 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00421054 02402025 */  move  $a0, $s2
/* 00421058 0320F809 */  jalr  $t9
/* 0042105C 00000000 */   nop   
/* 00421060 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00421064 8F928DA4 */  lw     $s2, %got(u)($gp)
.L00421068:
/* 00421068 8F908D54 */  lw     $s0, %got(highesteereg)($gp)
/* 0042106C 24190002 */  li    $t9, 2
/* 00421070 AE590008 */  sw    $t9, 8($s2)
/* 00421074 8EA40004 */  lw    $a0, 4($s5)
/* 00421078 8E100004 */  lw    $s0, 4($s0)
/* 0042107C 0204082A */  slt   $at, $s0, $a0
/* 00421080 1420001F */  bnez  $at, .L00421100
/* 00421084 26100001 */   addiu $s0, $s0, 1
/* 00421088 AFA4006C */  sw    $a0, 0x6c($sp)
.L0042108C:
/* 0042108C 8FA3006C */  lw    $v1, 0x6c($sp)
/* 00421090 8E780000 */  lw    $t8, ($s3)
/* 00421094 8F828D44 */  lw     $v0, %got(firstparmreg)($gp)
/* 00421098 2468FFF3 */  addiu $t0, $v1, -0xd
/* 0042109C 2D0F0020 */  sltiu $t7, $t0, 0x20
/* 004210A0 000F7023 */  negu  $t6, $t7
/* 004210A4 030E5824 */  and   $t3, $t8, $t6
/* 004210A8 010B4804 */  sllv  $t1, $t3, $t0
/* 004210AC 8F928DA4 */  lw     $s2, %got(u)($gp)
/* 004210B0 05210004 */  bgez  $t1, .L004210C4
/* 004210B4 8C420004 */   lw    $v0, 4($v0)
/* 004210B8 240C0004 */  li    $t4, 4
/* 004210BC 10000002 */  b     .L004210C8
/* 004210C0 AE4C0004 */   sw    $t4, 4($s2)
.L004210C4:
/* 004210C4 AE510004 */  sw    $s1, 4($s2)
.L004210C8:
/* 004210C8 00626823 */  subu  $t5, $v1, $v0
/* 004210CC 000D5040 */  sll   $t2, $t5, 1
/* 004210D0 2559002C */  addiu $t9, $t2, 0x2c
/* 004210D4 AE59000C */  sw    $t9, 0xc($s2)
/* 004210D8 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 004210DC 02402025 */  move  $a0, $s2
/* 004210E0 AFA3006C */  sw    $v1, 0x6c($sp)
/* 004210E4 0320F809 */  jalr  $t9
/* 004210E8 00000000 */   nop   
/* 004210EC 8FAF006C */  lw    $t7, 0x6c($sp)
/* 004210F0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004210F4 25F80001 */  addiu $t8, $t7, 1
/* 004210F8 1710FFE4 */  bne   $t8, $s0, .L0042108C
/* 004210FC AFB8006C */   sw    $t8, 0x6c($sp)
.L00421100:
/* 00421100 92EE0000 */  lbu   $t6, ($s7)
.L00421104:
/* 00421104 11C0009F */  beqz  $t6, .L00421384
/* 00421108 00000000 */   nop   
/* 0042110C 8F9E89AC */  lw     $fp, %got(graphhead)($gp)
/* 00421110 8E8B0000 */  lw    $t3, ($s4)
/* 00421114 24080001 */  li    $t0, 1
/* 00421118 8FC20000 */  lw    $v0, ($fp)
/* 0042111C 8D630024 */  lw    $v1, 0x24($t3)
/* 00421120 AFA8006C */  sw    $t0, 0x6c($sp)
/* 00421124 24140060 */  li    $s4, 96
/* 00421128 24100004 */  li    $s0, 4
/* 0042112C 24170024 */  li    $s7, 36
/* 00421130 8F938D80 */  lw     $s3, %got(seteeregs)($gp)
/* 00421134 24510004 */  addiu $s1, $v0, 4
.L00421138:
/* 00421138 8E260040 */  lw    $a2, 0x40($s1)
/* 0042113C 50C0008A */  beql  $a2, $zero, .L00421368
/* 00421140 8FAD006C */   lw    $t5, 0x6c($sp)
/* 00421144 90C90000 */  lbu   $t1, ($a2)
/* 00421148 24010003 */  li    $at, 3
/* 0042114C 55210086 */  bnel  $t1, $at, .L00421368
/* 00421150 8FAD006C */   lw    $t5, 0x6c($sp)
/* 00421154 90CC0016 */  lbu   $t4, 0x16($a2)
/* 00421158 24010002 */  li    $at, 2
/* 0042115C 318D0007 */  andi  $t5, $t4, 7
/* 00421160 55A10081 */  bnel  $t5, $at, .L00421368
/* 00421164 8FAD006C */   lw    $t5, 0x6c($sp)
/* 00421168 8F878980 */  lw     $a3, %got(curblk)($gp)
/* 0042116C 8CCA0014 */  lw    $t2, 0x14($a2)
/* 00421170 8CE70000 */  lw    $a3, ($a3)
/* 00421174 000ACAC2 */  srl   $t9, $t2, 0xb
/* 00421178 54F9007B */  bnel  $a3, $t9, .L00421368
/* 0042117C 8FAD006C */   lw    $t5, 0x6c($sp)
/* 00421180 8F8489F4 */  lw     $a0, %got(pdeftab)($gp)
/* 00421184 8CC50010 */  lw    $a1, 0x10($a2)
/* 00421188 8C840000 */  lw    $a0, ($a0)
/* 0042118C 04A10002 */  bgez  $a1, .L00421198
/* 00421190 00A00821 */   move  $at, $a1
/* 00421194 24A10003 */  addiu $at, $a1, 3
.L00421198:
/* 00421198 00012883 */  sra   $a1, $at, 2
/* 0042119C 00057900 */  sll   $t7, $a1, 4
/* 004211A0 008F1021 */  addu  $v0, $a0, $t7
/* 004211A4 90580000 */  lbu   $t8, ($v0)
/* 004211A8 5298006F */  beql  $s4, $t8, .L00421368
/* 004211AC 8FAD006C */   lw    $t5, 0x6c($sp)
/* 004211B0 904E0001 */  lbu   $t6, 1($v0)
/* 004211B4 24010009 */  li    $at, 9
/* 004211B8 51C1006B */  beql  $t6, $at, .L00421368
/* 004211BC 8FAD006C */   lw    $t5, 0x6c($sp)
/* 004211C0 8F8B8B10 */  lw     $t3, %got(propagate_ee_saves)($gp)
/* 004211C4 8FA8006C */  lw    $t0, 0x6c($sp)
/* 004211C8 0005B100 */  sll   $s6, $a1, 4
/* 004211CC 916B0000 */  lbu   $t3, ($t3)
/* 004211D0 0005C080 */  sll   $t8, $a1, 2
/* 004211D4 00961021 */  addu  $v0, $a0, $s6
/* 004211D8 15600013 */  bnez  $t3, .L00421228
/* 004211DC 2D090040 */   sltiu $t1, $t0, 0x40
/* 004211E0 11200006 */  beqz  $t1, .L004211FC
/* 004211E4 00086143 */   sra   $t4, $t0, 5
/* 004211E8 000C6880 */  sll   $t5, $t4, 2
/* 004211EC 026D5021 */  addu  $t2, $s3, $t5
/* 004211F0 8D590000 */  lw    $t9, ($t2)
/* 004211F4 01197804 */  sllv  $t7, $t9, $t0
/* 004211F8 29E90000 */  slti  $t1, $t7, 0
.L004211FC:
/* 004211FC 15200052 */  bnez  $t1, .L00421348
/* 00421200 8FAE006C */   lw    $t6, 0x6c($sp)
/* 00421204 2DCB0040 */  sltiu $t3, $t6, 0x40
/* 00421208 11600006 */  beqz  $t3, .L00421224
/* 0042120C 000E6143 */   sra   $t4, $t6, 5
/* 00421210 000C6880 */  sll   $t5, $t4, 2
/* 00421214 026D5021 */  addu  $t2, $s3, $t5
/* 00421218 8D590008 */  lw    $t9, 8($t2)
/* 0042121C 01D94004 */  sllv  $t0, $t9, $t6
/* 00421220 290B0000 */  slti  $t3, $t0, 0
.L00421224:
/* 00421224 15600048 */  bnez  $t3, .L00421348
.L00421228:
/* 00421228 00704821 */   addu  $t1, $v1, $s0
/* 0042122C AD380020 */  sw    $t8, 0x20($t1)
/* 00421230 904C0003 */  lbu   $t4, 3($v0)
/* 00421234 11800021 */  beqz  $t4, .L004212BC
/* 00421238 00000000 */   nop   
/* 0042123C 8F868DA4 */  lw     $a2, %got(u)($gp)
/* 00421240 904A0001 */  lbu   $t2, 1($v0)
/* 00421244 240D0070 */  li    $t5, 112
/* 00421248 90C50001 */  lbu   $a1, 1($a2)
/* 0042124C A0CD0000 */  sb    $t5, ($a2)
/* 00421250 8C4D0008 */  lw    $t5, 8($v0)
/* 00421254 0005CEC0 */  sll   $t9, $a1, 0x1b
/* 00421258 001976C2 */  srl   $t6, $t9, 0x1b
/* 0042125C 014E4026 */  xor   $t0, $t2, $t6
/* 00421260 310F001F */  andi  $t7, $t0, 0x1f
/* 00421264 8C59000C */  lw    $t9, 0xc($v0)
/* 00421268 01E5C026 */  xor   $t8, $t7, $a1
/* 0042126C 3309FF1F */  andi  $t1, $t8, 0xff1f
/* 00421270 352C0040 */  ori   $t4, $t1, 0x40
/* 00421274 A0D80001 */  sb    $t8, 1($a2)
/* 00421278 A0CC0001 */  sb    $t4, 1($a2)
/* 0042127C ACC70004 */  sw    $a3, 4($a2)
/* 00421280 ACCD000C */  sw    $t5, 0xc($a2)
/* 00421284 ACD90008 */  sw    $t9, 8($a2)
/* 00421288 8F998708 */  lw    $t9, %call16(coloroffset)($gp)
/* 0042128C 8FA4006C */  lw    $a0, 0x6c($sp)
/* 00421290 AFA3005C */  sw    $v1, 0x5c($sp)
/* 00421294 0320F809 */  jalr  $t9
/* 00421298 00000000 */   nop   
/* 0042129C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004212A0 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 004212A4 A4820002 */  sh    $v0, 2($a0)
/* 004212A8 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 004212AC 0320F809 */  jalr  $t9
/* 004212B0 00000000 */   nop   
/* 004212B4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004212B8 8FA3005C */  lw    $v1, 0x5c($sp)
.L004212BC:
/* 004212BC 8F8A8A5C */  lw     $t2, %got(lang)($gp)
/* 004212C0 24010002 */  li    $at, 2
/* 004212C4 914A0000 */  lbu   $t2, ($t2)
/* 004212C8 1541001D */  bne   $t2, $at, .L00421340
/* 004212CC 00000000 */   nop   
/* 004212D0 8E2E0040 */  lw    $t6, 0x40($s1)
/* 004212D4 91C80018 */  lbu   $t0, 0x18($t6)
/* 004212D8 29010004 */  slti  $at, $t0, 4
/* 004212DC 10200018 */  beqz  $at, .L00421340
/* 004212E0 00000000 */   nop   
/* 004212E4 8F8F89F4 */  lw     $t7, %got(pdeftab)($gp)
/* 004212E8 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 004212EC 24040052 */  li    $a0, 82
/* 004212F0 8DEF0000 */  lw    $t7, ($t7)
/* 004212F4 8FA5006C */  lw    $a1, 0x6c($sp)
/* 004212F8 24070004 */  li    $a3, 4
/* 004212FC 01F65821 */  addu  $t3, $t7, $s6
/* 00421300 91660001 */  lbu   $a2, 1($t3)
/* 00421304 0320F809 */  jalr  $t9
/* 00421308 AFA3005C */   sw    $v1, 0x5c($sp)
/* 0042130C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00421310 8E2C0040 */  lw    $t4, 0x40($s1)
/* 00421314 2404007B */  li    $a0, 123
/* 00421318 8F9889F4 */  lw     $t8, %got(pdeftab)($gp)
/* 0042131C 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00421320 8FA5006C */  lw    $a1, 0x6c($sp)
/* 00421324 8F180000 */  lw    $t8, ($t8)
/* 00421328 91870018 */  lbu   $a3, 0x18($t4)
/* 0042132C 03164821 */  addu  $t1, $t8, $s6
/* 00421330 0320F809 */  jalr  $t9
/* 00421334 91260001 */   lbu   $a2, 1($t1)
/* 00421338 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042133C 8FA3005C */  lw    $v1, 0x5c($sp)
.L00421340:
/* 00421340 10000009 */  b     .L00421368
/* 00421344 8FAD006C */   lw    $t5, 0x6c($sp)
.L00421348:
/* 00421348 8F9982A4 */  lw    $t9, %call16(genrlodrstr)($gp)
/* 0042134C 2404006D */  li    $a0, 109
/* 00421350 8FA5006C */  lw    $a1, 0x6c($sp)
/* 00421354 0320F809 */  jalr  $t9
/* 00421358 AFA3005C */   sw    $v1, 0x5c($sp)
/* 0042135C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00421360 8FA3005C */  lw    $v1, 0x5c($sp)
/* 00421364 8FAD006C */  lw    $t5, 0x6c($sp)
.L00421368:
/* 00421368 26100004 */  addiu $s0, $s0, 4
/* 0042136C 26310004 */  addiu $s1, $s1, 4
/* 00421370 25B90001 */  addiu $t9, $t5, 1
/* 00421374 1737FF70 */  bne   $t9, $s7, .L00421138
/* 00421378 AFB9006C */   sw    $t9, 0x6c($sp)
/* 0042137C 1000020C */  b     .L00421BB0
/* 00421380 00000000 */   nop   
.L00421384:
/* 00421384 8F8A8A00 */  lw     $t2, %got(pdefmax)($gp)
/* 00421388 0000A825 */  move  $s5, $zero
/* 0042138C 24170001 */  li    $s7, 1
/* 00421390 8D430000 */  lw    $v1, ($t2)
/* 00421394 28610004 */  slti  $at, $v1, 4
/* 00421398 14200002 */  bnez  $at, .L004213A4
/* 0042139C 00000000 */   nop   
/* 004213A0 24030003 */  li    $v1, 3
.L004213A4:
/* 004213A4 04600202 */  bltz  $v1, .L00421BB0
/* 004213A8 00000000 */   nop   
/* 004213AC 8F8489F4 */  lw     $a0, %got(pdeftab)($gp)
/* 004213B0 8F9E89AC */  lw     $fp, %got(graphhead)($gp)
/* 004213B4 8FB20068 */  lw    $s2, 0x68($sp)
/* 004213B8 8C840000 */  lw    $a0, ($a0)
/* 004213BC 0015B100 */  sll   $s6, $s5, 4
.L004213C0:
/* 004213C0 00961021 */  addu  $v0, $a0, $s6
/* 004213C4 904E0000 */  lbu   $t6, ($v0)
/* 004213C8 24010065 */  li    $at, 101
/* 004213CC 11C10003 */  beq   $t6, $at, .L004213DC
/* 004213D0 00000000 */   nop   
/* 004213D4 100001F2 */  b     .L00421BA0
/* 004213D8 26B50001 */   addiu $s5, $s5, 1
.L004213DC:
/* 004213DC 8F8F8A28 */  lw     $t7, %got(offsetpassedbyint)($gp)
/* 004213E0 8F988D44 */  lw     $t8, %got(firstparmreg)($gp)
/* 004213E4 00154080 */  sll   $t0, $s5, 2
/* 004213E8 8DEF0000 */  lw    $t7, ($t7)
/* 004213EC 2718FFFC */  addiu $t8, $t8, -4
/* 004213F0 24010002 */  li    $at, 2
/* 004213F4 010F182A */  slt   $v1, $t0, $t7
/* 004213F8 24630001 */  addiu $v1, $v1, 1
/* 004213FC 00035880 */  sll   $t3, $v1, 2
/* 00421400 01782821 */  addu  $a1, $t3, $t8
/* 00421404 8CA40000 */  lw    $a0, ($a1)
/* 00421408 AFA50044 */  sw    $a1, 0x44($sp)
/* 0042140C 24130001 */  li    $s3, 1
/* 00421410 00954821 */  addu  $t1, $a0, $s5
/* 00421414 14610004 */  bne   $v1, $at, .L00421428
/* 00421418 AFA9006C */   sw    $t1, 0x6c($sp)
/* 0042141C 12A00002 */  beqz  $s5, .L00421428
/* 00421420 248C0001 */   addiu $t4, $a0, 1
/* 00421424 AFAC006C */  sw    $t4, 0x6c($sp)
.L00421428:
/* 00421428 90430001 */  lbu   $v1, 1($v0)
/* 0042142C 24010009 */  li    $at, 9
/* 00421430 106100D3 */  beq   $v1, $at, .L00421780
/* 00421434 2C6D0020 */   sltiu $t5, $v1, 0x20
/* 00421438 000DC823 */  negu  $t9, $t5
/* 0042143C 3C010500 */  lui   $at, 0x500
/* 00421440 03215024 */  and   $t2, $t9, $at
/* 00421444 006A7004 */  sllv  $t6, $t2, $v1
/* 00421448 05C10005 */  bgez  $t6, .L00421460
/* 0042144C 8FAB006C */   lw    $t3, 0x6c($sp)
/* 00421450 8F888B28 */  lw     $t0, %got(mips3_64data)($gp)
/* 00421454 91080000 */  lbu   $t0, ($t0)
/* 00421458 110000C9 */  beqz  $t0, .L00421780
/* 0042145C 00000000 */   nop   
.L00421460:
/* 00421460 8FCF0000 */  lw    $t7, ($fp)
/* 00421464 000BC080 */  sll   $t8, $t3, 2
/* 00421468 01F84821 */  addu  $t1, $t7, $t8
/* 0042146C 8D240040 */  lw    $a0, 0x40($t1)
/* 00421470 10800020 */  beqz  $a0, .L004214F4
/* 00421474 00000000 */   nop   
/* 00421478 908C0000 */  lbu   $t4, ($a0)
/* 0042147C 24010003 */  li    $at, 3
/* 00421480 00801825 */  move  $v1, $a0
/* 00421484 1581001B */  bne   $t4, $at, .L004214F4
/* 00421488 00000000 */   nop   
/* 0042148C 908D0016 */  lbu   $t5, 0x16($a0)
/* 00421490 24010002 */  li    $at, 2
/* 00421494 31B90007 */  andi  $t9, $t5, 7
/* 00421498 17210016 */  bne   $t9, $at, .L004214F4
/* 0042149C 00000000 */   nop   
/* 004214A0 8F8A8980 */  lw     $t2, %got(curblk)($gp)
/* 004214A4 8C8E0014 */  lw    $t6, 0x14($a0)
/* 004214A8 8D4A0000 */  lw    $t2, ($t2)
/* 004214AC 000E42C2 */  srl   $t0, $t6, 0xb
/* 004214B0 15480010 */  bne   $t2, $t0, .L004214F4
/* 004214B4 00000000 */   nop   
/* 004214B8 8C840010 */  lw    $a0, 0x10($a0)
/* 004214BC 04810003 */  bgez  $a0, .L004214CC
/* 004214C0 00045883 */   sra   $t3, $a0, 2
/* 004214C4 24810003 */  addiu $at, $a0, 3
/* 004214C8 00015883 */  sra   $t3, $at, 2
.L004214CC:
/* 004214CC 16AB0009 */  bne   $s5, $t3, .L004214F4
/* 004214D0 00000000 */   nop   
/* 004214D4 8F9986EC */  lw    $t9, %call16(fitparmreg)($gp)
/* 004214D8 90650018 */  lbu   $a1, 0x18($v1)
/* 004214DC 8C460008 */  lw    $a2, 8($v0)
/* 004214E0 0320F809 */  jalr  $t9
/* 004214E4 8C47000C */   lw    $a3, 0xc($v0)
/* 004214E8 10400002 */  beqz  $v0, .L004214F4
/* 004214EC 8FBC0034 */   lw    $gp, 0x34($sp)
/* 004214F0 00009825 */  move  $s3, $zero
.L004214F4:
/* 004214F4 167700A2 */  bne   $s3, $s7, .L00421780
/* 004214F8 24140001 */   li    $s4, 1
/* 004214FC 24010002 */  li    $at, 2
.L00421500:
/* 00421500 12610006 */  beq   $s3, $at, .L0042151C
/* 00421504 00000000 */   nop   
/* 00421508 8F988D34 */  lw     $t8, %got(firsterreg)($gp)
/* 0042150C 00147880 */  sll   $t7, $s4, 2
/* 00421510 2718FFFC */  addiu $t8, $t8, -4
/* 00421514 01F84821 */  addu  $t1, $t7, $t8
/* 00421518 8D320000 */  lw    $s2, ($t1)
.L0042151C:
/* 0042151C 5677003F */  bnel  $s3, $s7, .L0042161C
/* 00421520 26940001 */   addiu $s4, $s4, 1
/* 00421524 8F8D8D40 */  lw     $t5, %got(lasteereg)($gp)
/* 00421528 00146080 */  sll   $t4, $s4, 2
/* 0042152C 00128080 */  sll   $s0, $s2, 2
/* 00421530 25ADFFFC */  addiu $t5, $t5, -4
/* 00421534 018D8821 */  addu  $s1, $t4, $t5
/* 00421538 8E390000 */  lw    $t9, ($s1)
/* 0042153C 0332082A */  slt   $at, $t9, $s2
/* 00421540 54200036 */  bnezl $at, .L0042161C
/* 00421544 26940001 */   addiu $s4, $s4, 1
/* 00421548 8FCE0000 */  lw    $t6, ($fp)
.L0042154C:
/* 0042154C 01D05021 */  addu  $t2, $t6, $s0
/* 00421550 8D420040 */  lw    $v0, 0x40($t2)
/* 00421554 50400029 */  beql  $v0, $zero, .L004215FC
/* 00421558 26520001 */   addiu $s2, $s2, 1
/* 0042155C 90480000 */  lbu   $t0, ($v0)
/* 00421560 24010003 */  li    $at, 3
/* 00421564 00401825 */  move  $v1, $v0
/* 00421568 55010021 */  bnel  $t0, $at, .L004215F0
/* 0042156C 26520001 */   addiu $s2, $s2, 1
/* 00421570 904B0016 */  lbu   $t3, 0x16($v0)
/* 00421574 24010002 */  li    $at, 2
/* 00421578 316F0007 */  andi  $t7, $t3, 7
/* 0042157C 55E1001C */  bnel  $t7, $at, .L004215F0
/* 00421580 26520001 */   addiu $s2, $s2, 1
/* 00421584 8F988980 */  lw     $t8, %got(curblk)($gp)
/* 00421588 8C490014 */  lw    $t1, 0x14($v0)
/* 0042158C 8F180000 */  lw    $t8, ($t8)
/* 00421590 000962C2 */  srl   $t4, $t1, 0xb
/* 00421594 570C0016 */  bnel  $t8, $t4, .L004215F0
/* 00421598 26520001 */   addiu $s2, $s2, 1
/* 0042159C 8C440010 */  lw    $a0, 0x10($v0)
/* 004215A0 04810003 */  bgez  $a0, .L004215B0
/* 004215A4 00046883 */   sra   $t5, $a0, 2
/* 004215A8 24810003 */  addiu $at, $a0, 3
/* 004215AC 00016883 */  sra   $t5, $at, 2
.L004215B0:
/* 004215B0 56AD000F */  bnel  $s5, $t5, .L004215F0
/* 004215B4 26520001 */   addiu $s2, $s2, 1
/* 004215B8 8F9989F4 */  lw     $t9, %got(pdeftab)($gp)
/* 004215BC 90650018 */  lbu   $a1, 0x18($v1)
/* 004215C0 8F390000 */  lw    $t9, ($t9)
/* 004215C4 03361021 */  addu  $v0, $t9, $s6
/* 004215C8 8F9986EC */  lw    $t9, %call16(fitparmreg)($gp)
/* 004215CC 8C460008 */  lw    $a2, 8($v0)
/* 004215D0 8C47000C */  lw    $a3, 0xc($v0)
/* 004215D4 0320F809 */  jalr  $t9
/* 004215D8 00000000 */   nop   
/* 004215DC 10400003 */  beqz  $v0, .L004215EC
/* 004215E0 8FBC0034 */   lw    $gp, 0x34($sp)
/* 004215E4 10000006 */  b     .L00421600
/* 004215E8 24130002 */   li    $s3, 2
.L004215EC:
/* 004215EC 26520001 */  addiu $s2, $s2, 1
.L004215F0:
/* 004215F0 10000003 */  b     .L00421600
/* 004215F4 26100004 */   addiu $s0, $s0, 4
/* 004215F8 26520001 */  addiu $s2, $s2, 1
.L004215FC:
/* 004215FC 26100004 */  addiu $s0, $s0, 4
.L00421600:
/* 00421600 56770006 */  bnel  $s3, $s7, .L0042161C
/* 00421604 26940001 */   addiu $s4, $s4, 1
/* 00421608 8E2E0000 */  lw    $t6, ($s1)
/* 0042160C 01D2082A */  slt   $at, $t6, $s2
/* 00421610 5020FFCE */  beql  $at, $zero, .L0042154C
/* 00421614 8FCE0000 */   lw    $t6, ($fp)
/* 00421618 26940001 */  addiu $s4, $s4, 1
.L0042161C:
/* 0042161C 24010003 */  li    $at, 3
/* 00421620 5681FFB7 */  bnel  $s4, $at, .L00421500
/* 00421624 24010002 */   li    $at, 2
/* 00421628 24010002 */  li    $at, 2
/* 0042162C 16610054 */  bne   $s3, $at, .L00421780
/* 00421630 8FAA0044 */   lw    $t2, 0x44($sp)
/* 00421634 8F888D44 */  lw     $t0, %got(firstparmreg)($gp)
/* 00421638 1548002A */  bne   $t2, $t0, .L004216E4
/* 0042163C 00000000 */   nop   
/* 00421640 8F828A00 */  lw     $v0, %got(pdefmax)($gp)
/* 00421644 8F8B89F4 */  lw     $t3, %got(pdeftab)($gp)
/* 00421648 8FA8006C */  lw    $t0, 0x6c($sp)
/* 0042164C 8C420000 */  lw    $v0, ($v0)
/* 00421650 8D6B0000 */  lw    $t3, ($t3)
/* 00421654 00027900 */  sll   $t7, $v0, 4
/* 00421658 016F4821 */  addu  $t1, $t3, $t7
/* 0042165C 8D38000C */  lw    $t8, 0xc($t1)
/* 00421660 07010003 */  bgez  $t8, .L00421670
/* 00421664 00186083 */   sra   $t4, $t8, 2
/* 00421668 27010003 */  addiu $at, $t8, 3
/* 0042166C 00016083 */  sra   $t4, $at, 2
.L00421670:
/* 00421670 004C6821 */  addu  $t5, $v0, $t4
/* 00421674 25B9FFFF */  addiu $t9, $t5, -1
/* 00421678 2B210004 */  slti  $at, $t9, 4
/* 0042167C 14200002 */  bnez  $at, .L00421688
/* 00421680 00000000 */   nop   
/* 00421684 24190003 */  li    $t9, 3
.L00421688:
/* 00421688 8F8E8D44 */  lw     $t6, %got(firstparmreg)($gp)
/* 0042168C 8DCE0000 */  lw    $t6, ($t6)
/* 00421690 032E5021 */  addu  $t2, $t9, $t6
/* 00421694 0152082A */  slt   $at, $t2, $s2
/* 00421698 14200039 */  bnez  $at, .L00421780
/* 0042169C 0112082A */   slt   $at, $t0, $s2
/* 004216A0 10200037 */  beqz  $at, .L00421780
/* 004216A4 2642FFFF */   addiu $v0, $s2, -1
/* 004216A8 8FCB0000 */  lw    $t3, ($fp)
/* 004216AC 000278C3 */  sra   $t7, $v0, 3
/* 004216B0 30450007 */  andi  $a1, $v0, 7
/* 004216B4 016F1821 */  addu  $v1, $t3, $t7
/* 004216B8 906400D0 */  lbu   $a0, 0xd0($v1)
/* 004216BC 24A50018 */  addiu $a1, $a1, 0x18
/* 004216C0 32F300FF */  andi  $s3, $s7, 0xff
/* 004216C4 00A44804 */  sllv  $t1, $a0, $a1
/* 004216C8 0009C7C2 */  srl   $t8, $t1, 0x1f
/* 004216CC 3B0C0001 */  xori  $t4, $t8, 1
/* 004216D0 000C6FC0 */  sll   $t5, $t4, 0x1f
/* 004216D4 00ADC806 */  srlv  $t9, $t5, $a1
/* 004216D8 03247026 */  xor   $t6, $t9, $a0
/* 004216DC 10000028 */  b     .L00421780
/* 004216E0 A06E00D0 */   sb    $t6, 0xd0($v1)
.L004216E4:
/* 004216E4 8F8A8D44 */  lw     $t2, %got(firstparmreg)($gp)
/* 004216E8 8D4A0004 */  lw    $t2, 4($t2)
/* 004216EC 25480001 */  addiu $t0, $t2, 1
/* 004216F0 1648000E */  bne   $s2, $t0, .L0042172C
/* 004216F4 00000000 */   nop   
/* 004216F8 8F828A28 */  lw     $v0, %got(offsetpassedbyint)($gp)
/* 004216FC 24010008 */  li    $at, 8
/* 00421700 8C420000 */  lw    $v0, ($v0)
/* 00421704 54410007 */  bnel  $v0, $at, .L00421724
/* 00421708 28410009 */   slti  $at, $v0, 9
/* 0042170C 8F8B89F4 */  lw     $t3, %got(pdeftab)($gp)
/* 00421710 2401000C */  li    $at, 12
/* 00421714 8D6B0000 */  lw    $t3, ($t3)
/* 00421718 916F0001 */  lbu   $t7, 1($t3)
/* 0042171C 15E10009 */  bne   $t7, $at, .L00421744
/* 00421720 28410009 */   slti  $at, $v0, 9
.L00421724:
/* 00421724 50200008 */  beql  $at, $zero, .L00421748
/* 00421728 8FCC0000 */   lw    $t4, ($fp)
.L0042172C:
/* 0042172C 8F898D44 */  lw     $t1, %got(firstparmreg)($gp)
/* 00421730 8D290000 */  lw    $t1, ($t1)
/* 00421734 25380004 */  addiu $t8, $t1, 4
/* 00421738 0258082A */  slt   $at, $s2, $t8
/* 0042173C 10200010 */  beqz  $at, .L00421780
/* 00421740 00000000 */   nop   
.L00421744:
/* 00421744 8FCC0000 */  lw    $t4, ($fp)
.L00421748:
/* 00421748 2642FFFF */  addiu $v0, $s2, -1
/* 0042174C 000268C3 */  sra   $t5, $v0, 3
/* 00421750 018D1821 */  addu  $v1, $t4, $t5
/* 00421754 906400D0 */  lbu   $a0, 0xd0($v1)
/* 00421758 30450007 */  andi  $a1, $v0, 7
/* 0042175C 24A50018 */  addiu $a1, $a1, 0x18
/* 00421760 00A4C804 */  sllv  $t9, $a0, $a1
/* 00421764 001977C2 */  srl   $t6, $t9, 0x1f
/* 00421768 39CA0001 */  xori  $t2, $t6, 1
/* 0042176C 000A47C0 */  sll   $t0, $t2, 0x1f
/* 00421770 00A85806 */  srlv  $t3, $t0, $a1
/* 00421774 01647826 */  xor   $t7, $t3, $a0
/* 00421778 A06F00D0 */  sb    $t7, 0xd0($v1)
/* 0042177C 32F300FF */  andi  $s3, $s7, 0xff
.L00421780:
/* 00421780 8F8989F4 */  lw     $t1, %got(pdeftab)($gp)
/* 00421784 8D290000 */  lw    $t1, ($t1)
/* 00421788 12770004 */  beq   $s3, $s7, .L0042179C
/* 0042178C 01361021 */   addu  $v0, $t1, $s6
/* 00421790 90580003 */  lbu   $t8, 3($v0)
/* 00421794 1300006D */  beqz  $t8, .L0042194C
/* 00421798 00000000 */   nop   
.L0042179C:
/* 0042179C 8F838DA4 */  lw     $v1, %got(u)($gp)
/* 004217A0 904D0001 */  lbu   $t5, 1($v0)
/* 004217A4 240C0070 */  li    $t4, 112
/* 004217A8 90650001 */  lbu   $a1, 1($v1)
/* 004217AC A06C0000 */  sb    $t4, ($v1)
/* 004217B0 8F8C8980 */  lw     $t4, %got(curblk)($gp)
/* 004217B4 0005CEC0 */  sll   $t9, $a1, 0x1b
/* 004217B8 001976C2 */  srl   $t6, $t9, 0x1b
/* 004217BC 01AE5026 */  xor   $t2, $t5, $t6
/* 004217C0 3148001F */  andi  $t0, $t2, 0x1f
/* 004217C4 01057826 */  xor   $t7, $t0, $a1
/* 004217C8 31E9FF1F */  andi  $t1, $t7, 0xff1f
/* 004217CC 35380040 */  ori   $t8, $t1, 0x40
/* 004217D0 A06F0001 */  sb    $t7, 1($v1)
/* 004217D4 A0780001 */  sb    $t8, 1($v1)
/* 004217D8 8C590008 */  lw    $t9, 8($v0)
/* 004217DC 8C4D000C */  lw    $t5, 0xc($v0)
/* 004217E0 8D8C0000 */  lw    $t4, ($t4)
/* 004217E4 AC79000C */  sw    $t9, 0xc($v1)
/* 004217E8 AC6D0008 */  sw    $t5, 8($v1)
/* 004217EC AC6C0004 */  sw    $t4, 4($v1)
/* 004217F0 8F998708 */  lw    $t9, %call16(coloroffset)($gp)
/* 004217F4 8FA4006C */  lw    $a0, 0x6c($sp)
/* 004217F8 0320F809 */  jalr  $t9
/* 004217FC 00000000 */   nop   
/* 00421800 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00421804 8FAE0044 */  lw    $t6, 0x44($sp)
/* 00421808 8F8A8D44 */  lw     $t2, %got(firstparmreg)($gp)
/* 0042180C 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00421810 254A0004 */  addiu $t2, $t2, 4
/* 00421814 11CA0008 */  beq   $t6, $t2, .L00421838
/* 00421818 A4820002 */   sh    $v0, 2($a0)
/* 0042181C 8F8889F4 */  lw     $t0, %got(pdeftab)($gp)
/* 00421820 8D080000 */  lw    $t0, ($t0)
/* 00421824 01165821 */  addu  $t3, $t0, $s6
/* 00421828 8D6F000C */  lw    $t7, 0xc($t3)
/* 0042182C 29E10005 */  slti  $at, $t7, 5
/* 00421830 10200006 */  beqz  $at, .L0042184C
/* 00421834 00000000 */   nop   
.L00421838:
/* 00421838 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042183C 0320F809 */  jalr  $t9
/* 00421840 00000000 */   nop   
/* 00421844 10000041 */  b     .L0042194C
/* 00421848 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042184C:
/* 0042184C 8F858DA4 */  lw     $a1, %got(u)($gp)
/* 00421850 2401000C */  li    $at, 12
/* 00421854 26B10001 */  addiu $s1, $s5, 1
/* 00421858 90A50001 */  lbu   $a1, 1($a1)
/* 0042185C 30A2001F */  andi  $v0, $a1, 0x1f
/* 00421860 14410005 */  bne   $v0, $at, .L00421878
/* 00421864 30A9FFE0 */   andi  $t1, $a1, 0xffe0
/* 00421868 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 0042186C 3538000D */  ori   $t8, $t1, 0xd
/* 00421870 1000000C */  b     .L004218A4
/* 00421874 A0980001 */   sb    $t8, 1($a0)
.L00421878:
/* 00421878 2C4C0020 */  sltiu $t4, $v0, 0x20
/* 0042187C 000CC823 */  negu  $t9, $t4
/* 00421880 3C010500 */  lui   $at, 0x500
/* 00421884 03216824 */  and   $t5, $t9, $at
/* 00421888 004D7004 */  sllv  $t6, $t5, $v0
/* 0042188C 05C10005 */  bgez  $t6, .L004218A4
/* 00421890 00000000 */   nop   
/* 00421894 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00421898 30AAFFE0 */  andi  $t2, $a1, 0xffe0
/* 0042189C 35480008 */  ori   $t0, $t2, 8
/* 004218A0 A0280001 */  sb    $t0, 1($at)
.L004218A4:
/* 004218A4 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 004218A8 240B0004 */  li    $t3, 4
/* 004218AC AC8B0008 */  sw    $t3, 8($a0)
/* 004218B0 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 004218B4 0320F809 */  jalr  $t9
/* 004218B8 00000000 */   nop   
/* 004218BC 2A210004 */  slti  $at, $s1, 4
/* 004218C0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004218C4 10200021 */  beqz  $at, .L0042194C
/* 004218C8 02208025 */   move  $s0, $s1
/* 004218CC 8F9889F4 */  lw     $t8, %got(pdeftab)($gp)
/* 004218D0 02357823 */  subu  $t7, $s1, $s5
/* 004218D4 000F4880 */  sll   $t1, $t7, 2
/* 004218D8 8F180000 */  lw    $t8, ($t8)
/* 004218DC 03166021 */  addu  $t4, $t8, $s6
/* 004218E0 8D99000C */  lw    $t9, 0xc($t4)
/* 004218E4 0139082A */  slt   $at, $t1, $t9
/* 004218E8 10200018 */  beqz  $at, .L0042194C
/* 004218EC 00000000 */   nop   
.L004218F0:
/* 004218F0 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 004218F4 8C8D000C */  lw    $t5, 0xc($a0)
/* 004218F8 948A0002 */  lhu   $t2, 2($a0)
/* 004218FC 25AE0004 */  addiu $t6, $t5, 4
/* 00421900 25480001 */  addiu $t0, $t2, 1
/* 00421904 AC8E000C */  sw    $t6, 0xc($a0)
/* 00421908 A4880002 */  sh    $t0, 2($a0)
/* 0042190C 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00421910 0320F809 */  jalr  $t9
/* 00421914 00000000 */   nop   
/* 00421918 26100001 */  addiu $s0, $s0, 1
/* 0042191C 2A010004 */  slti  $at, $s0, 4
/* 00421920 1020000A */  beqz  $at, .L0042194C
/* 00421924 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00421928 8F9889F4 */  lw     $t8, %got(pdeftab)($gp)
/* 0042192C 02155823 */  subu  $t3, $s0, $s5
/* 00421930 000B7880 */  sll   $t7, $t3, 2
/* 00421934 8F180000 */  lw    $t8, ($t8)
/* 00421938 03166021 */  addu  $t4, $t8, $s6
/* 0042193C 8D89000C */  lw    $t1, 0xc($t4)
/* 00421940 01E9082A */  slt   $at, $t7, $t1
/* 00421944 1420FFEA */  bnez  $at, .L004218F0
/* 00421948 00000000 */   nop   
.L0042194C:
/* 0042194C 8F8489F4 */  lw     $a0, %got(pdeftab)($gp)
/* 00421950 24010002 */  li    $at, 2
/* 00421954 8FB9006C */  lw    $t9, 0x6c($sp)
/* 00421958 8C840000 */  lw    $a0, ($a0)
/* 0042195C 1661005D */  bne   $s3, $at, .L00421AD4
/* 00421960 00961021 */   addu  $v0, $a0, $s6
/* 00421964 2B210018 */  slti  $at, $t9, 0x18
/* 00421968 10200042 */  beqz  $at, .L00421A74
/* 0042196C 8C47000C */   lw    $a3, 0xc($v0)
/* 00421970 28E10005 */  slti  $at, $a3, 5
/* 00421974 1420003F */  bnez  $at, .L00421A74
/* 00421978 00000000 */   nop   
/* 0042197C 8F8D8AF4 */  lw     $t5, %got(bigendian)($gp)
/* 00421980 24040052 */  li    $a0, 82
/* 00421984 8FA5006C */  lw    $a1, 0x6c($sp)
/* 00421988 91AD0000 */  lbu   $t5, ($t5)
/* 0042198C 15A00009 */  bnez  $t5, .L004219B4
/* 00421990 00000000 */   nop   
/* 00421994 03202825 */  move  $a1, $t9
/* 00421998 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 0042199C 24040052 */  li    $a0, 82
/* 004219A0 24060008 */  li    $a2, 8
/* 004219A4 0320F809 */  jalr  $t9
/* 004219A8 24070004 */   li    $a3, 4
/* 004219AC 10000007 */  b     .L004219CC
/* 004219B0 8FBC0034 */   lw    $gp, 0x34($sp)
.L004219B4:
/* 004219B4 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 004219B8 24A50001 */  addiu $a1, $a1, 1
/* 004219BC 24060008 */  li    $a2, 8
/* 004219C0 0320F809 */  jalr  $t9
/* 004219C4 24070004 */   li    $a3, 4
/* 004219C8 8FBC0034 */  lw    $gp, 0x34($sp)
.L004219CC:
/* 004219CC 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 004219D0 2404007B */  li    $a0, 123
/* 004219D4 02402825 */  move  $a1, $s2
/* 004219D8 24060008 */  li    $a2, 8
/* 004219DC 0320F809 */  jalr  $t9
/* 004219E0 24070004 */   li    $a3, 4
/* 004219E4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004219E8 8FA5006C */  lw    $a1, 0x6c($sp)
/* 004219EC 24040052 */  li    $a0, 82
/* 004219F0 8F8E8AF4 */  lw     $t6, %got(bigendian)($gp)
/* 004219F4 24A50001 */  addiu $a1, $a1, 1
/* 004219F8 91CE0000 */  lbu   $t6, ($t6)
/* 004219FC 15C00008 */  bnez  $t6, .L00421A20
/* 00421A00 00000000 */   nop   
/* 00421A04 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00421A08 24040052 */  li    $a0, 82
/* 00421A0C 24060008 */  li    $a2, 8
/* 00421A10 0320F809 */  jalr  $t9
/* 00421A14 24070004 */   li    $a3, 4
/* 00421A18 10000007 */  b     .L00421A38
/* 00421A1C 8FBC0034 */   lw    $gp, 0x34($sp)
.L00421A20:
/* 00421A20 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00421A24 8FA5006C */  lw    $a1, 0x6c($sp)
/* 00421A28 24060008 */  li    $a2, 8
/* 00421A2C 0320F809 */  jalr  $t9
/* 00421A30 24070004 */   li    $a3, 4
/* 00421A34 8FBC0034 */  lw    $gp, 0x34($sp)
.L00421A38:
/* 00421A38 8F998708 */  lw    $t9, %call16(coloroffset)($gp)
/* 00421A3C 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00421A40 240A007B */  li    $t2, 123
/* 00421A44 02402025 */  move  $a0, $s2
/* 00421A48 0320F809 */  jalr  $t9
/* 00421A4C A02A0000 */   sb    $t2, ($at)
/* 00421A50 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00421A54 24480001 */  addiu $t0, $v0, 1
/* 00421A58 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00421A5C AC88000C */  sw    $t0, 0xc($a0)
/* 00421A60 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00421A64 0320F809 */  jalr  $t9
/* 00421A68 00000000 */   nop   
/* 00421A6C 10000015 */  b     .L00421AC4
/* 00421A70 8FBC0034 */   lw    $gp, 0x34($sp)
.L00421A74:
/* 00421A74 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00421A78 24040052 */  li    $a0, 82
/* 00421A7C 8FA5006C */  lw    $a1, 0x6c($sp)
/* 00421A80 90460001 */  lbu   $a2, 1($v0)
/* 00421A84 0320F809 */  jalr  $t9
/* 00421A88 00128080 */   sll   $s0, $s2, 2
/* 00421A8C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00421A90 8FCC0000 */  lw    $t4, ($fp)
/* 00421A94 2404007B */  li    $a0, 123
/* 00421A98 8F8B89F4 */  lw     $t3, %got(pdeftab)($gp)
/* 00421A9C 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00421AA0 01907821 */  addu  $t7, $t4, $s0
/* 00421AA4 8D6B0000 */  lw    $t3, ($t3)
/* 00421AA8 8DE90040 */  lw    $t1, 0x40($t7)
/* 00421AAC 02402825 */  move  $a1, $s2
/* 00421AB0 0176C021 */  addu  $t8, $t3, $s6
/* 00421AB4 93060001 */  lbu   $a2, 1($t8)
/* 00421AB8 0320F809 */  jalr  $t9
/* 00421ABC 91270018 */   lbu   $a3, 0x18($t1)
/* 00421AC0 8FBC0034 */  lw    $gp, 0x34($sp)
.L00421AC4:
/* 00421AC4 8F8489F4 */  lw     $a0, %got(pdeftab)($gp)
/* 00421AC8 8C840000 */  lw    $a0, ($a0)
/* 00421ACC 10000028 */  b     .L00421B70
/* 00421AD0 00961021 */   addu  $v0, $a0, $s6
.L00421AD4:
/* 00421AD4 56600027 */  bnezl $s3, .L00421B74
/* 00421AD8 8C4E000C */   lw    $t6, 0xc($v0)
/* 00421ADC 8F8D8A5C */  lw     $t5, %got(lang)($gp)
/* 00421AE0 24010002 */  li    $at, 2
/* 00421AE4 8FB9006C */  lw    $t9, 0x6c($sp)
/* 00421AE8 91AD0000 */  lbu   $t5, ($t5)
/* 00421AEC 55A10021 */  bnel  $t5, $at, .L00421B74
/* 00421AF0 8C4E000C */   lw    $t6, 0xc($v0)
/* 00421AF4 8FCE0000 */  lw    $t6, ($fp)
/* 00421AF8 00198080 */  sll   $s0, $t9, 2
/* 00421AFC 03202825 */  move  $a1, $t9
/* 00421B00 01D05021 */  addu  $t2, $t6, $s0
/* 00421B04 8D480040 */  lw    $t0, 0x40($t2)
/* 00421B08 910B0018 */  lbu   $t3, 0x18($t0)
/* 00421B0C 29610004 */  slti  $at, $t3, 4
/* 00421B10 50200018 */  beql  $at, $zero, .L00421B74
/* 00421B14 8C4E000C */   lw    $t6, 0xc($v0)
/* 00421B18 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00421B1C 24040052 */  li    $a0, 82
/* 00421B20 90460001 */  lbu   $a2, 1($v0)
/* 00421B24 0320F809 */  jalr  $t9
/* 00421B28 24070004 */   li    $a3, 4
/* 00421B2C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00421B30 8FCF0000 */  lw    $t7, ($fp)
/* 00421B34 2404007B */  li    $a0, 123
/* 00421B38 8F9889F4 */  lw     $t8, %got(pdeftab)($gp)
/* 00421B3C 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00421B40 01F04821 */  addu  $t1, $t7, $s0
/* 00421B44 8F180000 */  lw    $t8, ($t8)
/* 00421B48 8D2D0040 */  lw    $t5, 0x40($t1)
/* 00421B4C 8FA5006C */  lw    $a1, 0x6c($sp)
/* 00421B50 03166021 */  addu  $t4, $t8, $s6
/* 00421B54 91860001 */  lbu   $a2, 1($t4)
/* 00421B58 0320F809 */  jalr  $t9
/* 00421B5C 91A70018 */   lbu   $a3, 0x18($t5)
/* 00421B60 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00421B64 8F8489F4 */  lw     $a0, %got(pdeftab)($gp)
/* 00421B68 8C840000 */  lw    $a0, ($a0)
/* 00421B6C 00961021 */  addu  $v0, $a0, $s6
.L00421B70:
/* 00421B70 8C4E000C */  lw    $t6, 0xc($v0)
.L00421B74:
/* 00421B74 8F8B8A00 */  lw     $t3, %got(pdefmax)($gp)
/* 00421B78 25CA0003 */  addiu $t2, $t6, 3
/* 00421B7C 8D630000 */  lw    $v1, ($t3)
/* 00421B80 05410003 */  bgez  $t2, .L00421B90
/* 00421B84 000A4083 */   sra   $t0, $t2, 2
/* 00421B88 25410003 */  addiu $at, $t2, 3
/* 00421B8C 00014083 */  sra   $t0, $at, 2
.L00421B90:
/* 00421B90 28610004 */  slti  $at, $v1, 4
/* 00421B94 14200002 */  bnez  $at, .L00421BA0
/* 00421B98 02A8A821 */   addu  $s5, $s5, $t0
/* 00421B9C 24030003 */  li    $v1, 3
.L00421BA0:
/* 00421BA0 0075082A */  slt   $at, $v1, $s5
/* 00421BA4 5020FE06 */  beql  $at, $zero, .L004213C0
/* 00421BA8 0015B100 */   sll   $s6, $s5, 4
/* 00421BAC AFB20068 */  sw    $s2, 0x68($sp)
.L00421BB0:
/* 00421BB0 8F9989C8 */  lw     $t9, %got(staticlinkloc)($gp)
/* 00421BB4 8F390000 */  lw    $t9, ($t9)
/* 00421BB8 53200006 */  beql  $t9, $zero, .L00421BD4
/* 00421BBC 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00421BC0 8F9982A0 */  lw    $t9, %call16(gen_static_link)($gp)
/* 00421BC4 0320F809 */  jalr  $t9
/* 00421BC8 00000000 */   nop   
/* 00421BCC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00421BD0 8FBF003C */  lw    $ra, 0x3c($sp)
.L00421BD4:
/* 00421BD4 8FB00014 */  lw    $s0, 0x14($sp)
/* 00421BD8 8FB10018 */  lw    $s1, 0x18($sp)
/* 00421BDC 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00421BE0 8FB30020 */  lw    $s3, 0x20($sp)
/* 00421BE4 8FB40024 */  lw    $s4, 0x24($sp)
/* 00421BE8 8FB50028 */  lw    $s5, 0x28($sp)
/* 00421BEC 8FB6002C */  lw    $s6, 0x2c($sp)
/* 00421BF0 8FB70030 */  lw    $s7, 0x30($sp)
/* 00421BF4 8FBE0038 */  lw    $fp, 0x38($sp)
/* 00421BF8 03E00008 */  jr    $ra
/* 00421BFC 27BD0098 */   addiu $sp, $sp, 0x98
    .type prolog, @function
    .size prolog, .-prolog
    .end prolog

glabel epilog
    .ent epilog
    # 0042BF08 reemit
/* 00421C00 3C1C0FC0 */  .cpload $t9
/* 00421C04 279C8690 */  
/* 00421C08 0399E021 */  
/* 00421C0C 27BDFF60 */  addiu $sp, $sp, -0xa0
/* 00421C10 8F8E8B0C */  lw     $t6, %got(allcallersave)($gp)
/* 00421C14 AFB50028 */  sw    $s5, 0x28($sp)
/* 00421C18 0080A825 */  move  $s5, $a0
/* 00421C1C 91CE0000 */  lbu   $t6, ($t6)
/* 00421C20 AFBF003C */  sw    $ra, 0x3c($sp)
/* 00421C24 AFBE0038 */  sw    $fp, 0x38($sp)
/* 00421C28 AFBC0034 */  sw    $gp, 0x34($sp)
/* 00421C2C AFB70030 */  sw    $s7, 0x30($sp)
/* 00421C30 AFB6002C */  sw    $s6, 0x2c($sp)
/* 00421C34 AFB40024 */  sw    $s4, 0x24($sp)
/* 00421C38 AFB30020 */  sw    $s3, 0x20($sp)
/* 00421C3C AFB2001C */  sw    $s2, 0x1c($sp)
/* 00421C40 AFB10018 */  sw    $s1, 0x18($sp)
/* 00421C44 11C000EF */  beqz  $t6, .L00422004
/* 00421C48 AFB00014 */   sw    $s0, 0x14($sp)
/* 00421C4C 8F8F8B6C */  lw     $t7, %got(curproc)($gp)
/* 00421C50 24130004 */  li    $s3, 4
/* 00421C54 27B00065 */  addiu $s0, $sp, 0x65
/* 00421C58 8DEF0000 */  lw    $t7, ($t7)
/* 00421C5C 241E0002 */  li    $fp, 2
/* 00421C60 8F9789F4 */  lw     $s7, %got(pdeftab)($gp)
/* 00421C64 8DE20024 */  lw    $v0, 0x24($t7)
/* 00421C68 8F8589AC */  lw     $a1, %got(graphhead)($gp)
/* 00421C6C 27A40088 */  addiu $a0, $sp, 0x88
/* 00421C70 2403FFFF */  li    $v1, -1
/* 00421C74 24420004 */  addiu $v0, $v0, 4
.L00421C78:
/* 00421C78 8C580020 */  lw    $t8, 0x20($v0)
/* 00421C7C 24420004 */  addiu $v0, $v0, 4
/* 00421C80 50780014 */  beql  $v1, $t8, .L00421CD4
/* 00421C84 A2000000 */   sb    $zero, ($s0)
/* 00421C88 8CB90000 */  lw    $t9, ($a1)
/* 00421C8C 8EEA0000 */  lw    $t2, ($s7)
/* 00421C90 03334021 */  addu  $t0, $t9, $s3
/* 00421C94 8D090040 */  lw    $t1, 0x40($t0)
/* 00421C98 8D320010 */  lw    $s2, 0x10($t1)
/* 00421C9C 06410002 */  bgez  $s2, .L00421CA8
/* 00421CA0 02400821 */   move  $at, $s2
/* 00421CA4 26410003 */  addiu $at, $s2, 3
.L00421CA8:
/* 00421CA8 00019083 */  sra   $s2, $at, 2
/* 00421CAC 00125900 */  sll   $t3, $s2, 4
/* 00421CB0 014B6021 */  addu  $t4, $t2, $t3
/* 00421CB4 918D0002 */  lbu   $t5, 2($t4)
/* 00421CB8 11A00003 */  beqz  $t5, .L00421CC8
/* 00421CBC 00000000 */   nop   
/* 00421CC0 10000004 */  b     .L00421CD4
/* 00421CC4 A21E0000 */   sb    $fp, ($s0)
.L00421CC8:
/* 00421CC8 10000002 */  b     .L00421CD4
/* 00421CCC A2000000 */   sb    $zero, ($s0)
/* 00421CD0 A2000000 */  sb    $zero, ($s0)
.L00421CD4:
/* 00421CD4 26100001 */  addiu $s0, $s0, 1
/* 00421CD8 1604FFE7 */  bne   $s0, $a0, .L00421C78
/* 00421CDC 26730004 */   addiu $s3, $s3, 4
/* 00421CE0 8F928D40 */  lw     $s2, %got(lasteereg)($gp)
/* 00421CE4 24140001 */  li    $s4, 1
/* 00421CE8 24130004 */  li    $s3, 4
/* 00421CEC 26B60004 */  addiu $s6, $s5, 4
/* 00421CF0 2652FFFC */  addiu $s2, $s2, -4
.L00421CF4:
/* 00421CF4 8ED10040 */  lw    $s1, 0x40($s6)
/* 00421CF8 522000A9 */  beql  $s1, $zero, .L00421FA0
/* 00421CFC 26940001 */   addiu $s4, $s4, 1
/* 00421D00 922E0000 */  lbu   $t6, ($s1)
/* 00421D04 24010003 */  li    $at, 3
/* 00421D08 55C100A5 */  bnel  $t6, $at, .L00421FA0
/* 00421D0C 26940001 */   addiu $s4, $s4, 1
/* 00421D10 922F0016 */  lbu   $t7, 0x16($s1)
/* 00421D14 31F80007 */  andi  $t8, $t7, 7
/* 00421D18 57D800A1 */  bnel  $fp, $t8, .L00421FA0
/* 00421D1C 26940001 */   addiu $s4, $s4, 1
/* 00421D20 8F998980 */  lw     $t9, %got(curblk)($gp)
/* 00421D24 8E280014 */  lw    $t0, 0x14($s1)
/* 00421D28 8F390000 */  lw    $t9, ($t9)
/* 00421D2C 00084AC2 */  srl   $t1, $t0, 0xb
/* 00421D30 5729009B */  bnel  $t9, $t1, .L00421FA0
/* 00421D34 26940001 */   addiu $s4, $s4, 1
/* 00421D38 8E2B0010 */  lw    $t3, 0x10($s1)
/* 00421D3C 8EEA0000 */  lw    $t2, ($s7)
/* 00421D40 05610003 */  bgez  $t3, .L00421D50
/* 00421D44 000B6083 */   sra   $t4, $t3, 2
/* 00421D48 25610003 */  addiu $at, $t3, 3
/* 00421D4C 00016083 */  sra   $t4, $at, 2
.L00421D50:
/* 00421D50 000C6900 */  sll   $t5, $t4, 4
/* 00421D54 014D7021 */  addu  $t6, $t2, $t5
/* 00421D58 91CF0002 */  lbu   $t7, 2($t6)
/* 00421D5C 51E00090 */  beql  $t7, $zero, .L00421FA0
/* 00421D60 26940001 */   addiu $s4, $s4, 1
/* 00421D64 8F988B10 */  lw     $t8, %got(propagate_ee_saves)($gp)
/* 00421D68 2E880040 */  sltiu $t0, $s4, 0x40
/* 00421D6C 93180000 */  lbu   $t8, ($t8)
/* 00421D70 17000018 */  bnez  $t8, .L00421DD4
/* 00421D74 00000000 */   nop   
/* 00421D78 11000008 */  beqz  $t0, .L00421D9C
/* 00421D7C 2E8F0040 */   sltiu $t7, $s4, 0x40
/* 00421D80 8F8B8D80 */  lw     $t3, %got(seteeregs)($gp)
/* 00421D84 0014C943 */  sra   $t9, $s4, 5
/* 00421D88 00194880 */  sll   $t1, $t9, 2
/* 00421D8C 012B6021 */  addu  $t4, $t1, $t3
/* 00421D90 8D8A0000 */  lw    $t2, ($t4)
/* 00421D94 028A6804 */  sllv  $t5, $t2, $s4
/* 00421D98 29A80000 */  slti  $t0, $t5, 0
.L00421D9C:
/* 00421D9C 15000079 */  bnez  $t0, .L00421F84
/* 00421DA0 00000000 */   nop   
/* 00421DA4 11E00009 */  beqz  $t7, .L00421DCC
/* 00421DA8 00000000 */   nop   
/* 00421DAC 8F898D80 */  lw     $t1, %got(seteeregs)($gp)
/* 00421DB0 0014C143 */  sra   $t8, $s4, 5
/* 00421DB4 0018C880 */  sll   $t9, $t8, 2
/* 00421DB8 25290008 */  addiu $t1, $t1, 8
/* 00421DBC 03295821 */  addu  $t3, $t9, $t1
/* 00421DC0 8D6C0000 */  lw    $t4, ($t3)
/* 00421DC4 028C5004 */  sllv  $t2, $t4, $s4
/* 00421DC8 294F0000 */  slti  $t7, $t2, 0
.L00421DCC:
/* 00421DCC 15E0006D */  bnez  $t7, .L00421F84
/* 00421DD0 00000000 */   nop   
.L00421DD4:
/* 00421DD4 8F8589AC */  lw     $a1, %got(graphhead)($gp)
/* 00421DD8 2A820018 */  slti  $v0, $s4, 0x18
/* 00421DDC 38420001 */  xori  $v0, $v0, 1
/* 00421DE0 8CA50000 */  lw    $a1, ($a1)
/* 00421DE4 24440001 */  addiu $a0, $v0, 1
/* 00421DE8 0002C080 */  sll   $t8, $v0, 2
/* 00421DEC 00B37021 */  addu  $t6, $a1, $s3
/* 00421DF0 8DC80040 */  lw    $t0, 0x40($t6)
/* 00421DF4 00045880 */  sll   $t3, $a0, 2
/* 00421DF8 24190001 */  li    $t9, 1
/* 00421DFC 12280053 */  beq   $s1, $t0, .L00421F4C
/* 00421E00 27A90064 */   addiu $t1, $sp, 0x64
/* 00421E04 8F998D34 */  lw     $t9, %got(firsterreg)($gp)
/* 00421E08 024B6021 */  addu  $t4, $s2, $t3
/* 00421E0C 8D8A0000 */  lw    $t2, ($t4)
/* 00421E10 2739FFFC */  addiu $t9, $t9, -4
/* 00421E14 03194821 */  addu  $t1, $t8, $t9
/* 00421E18 8D300004 */  lw    $s0, 4($t1)
/* 00421E1C 00001825 */  move  $v1, $zero
/* 00421E20 0150082A */  slt   $at, $t2, $s0
/* 00421E24 14200011 */  bnez  $at, .L00421E6C
/* 00421E28 00106880 */   sll   $t5, $s0, 2
/* 00421E2C 00AD1021 */  addu  $v0, $a1, $t5
/* 00421E30 8C4F0040 */  lw    $t7, 0x40($v0)
.L00421E34:
/* 00421E34 00047080 */  sll   $t6, $a0, 2
/* 00421E38 024E4021 */  addu  $t0, $s2, $t6
/* 00421E3C 562F0004 */  bnel  $s1, $t7, .L00421E50
/* 00421E40 26100001 */   addiu $s0, $s0, 1
/* 00421E44 10000003 */  b     .L00421E54
/* 00421E48 24030001 */   li    $v1, 1
/* 00421E4C 26100001 */  addiu $s0, $s0, 1
.L00421E50:
/* 00421E50 24420004 */  addiu $v0, $v0, 4
.L00421E54:
/* 00421E54 14600005 */  bnez  $v1, .L00421E6C
/* 00421E58 00000000 */   nop   
/* 00421E5C 8D180000 */  lw    $t8, ($t0)
/* 00421E60 0310082A */  slt   $at, $t8, $s0
/* 00421E64 5020FFF3 */  beql  $at, $zero, .L00421E34
/* 00421E68 8C4F0040 */   lw    $t7, 0x40($v0)
.L00421E6C:
/* 00421E6C 10600030 */  beqz  $v1, .L00421F30
/* 00421E70 0214082A */   slt   $at, $s0, $s4
/* 00421E74 1420000D */  bnez  $at, .L00421EAC
/* 00421E78 0010C880 */   sll   $t9, $s0, 2
/* 00421E7C 02B94821 */  addu  $t1, $s5, $t9
/* 00421E80 8D220040 */  lw    $v0, 0x40($t1)
/* 00421E84 10400009 */  beqz  $v0, .L00421EAC
/* 00421E88 00000000 */   nop   
/* 00421E8C 904B0000 */  lbu   $t3, ($v0)
/* 00421E90 24010003 */  li    $at, 3
/* 00421E94 15610005 */  bne   $t3, $at, .L00421EAC
/* 00421E98 00000000 */   nop   
/* 00421E9C 904C0016 */  lbu   $t4, 0x16($v0)
/* 00421EA0 318A0007 */  andi  $t2, $t4, 7
/* 00421EA4 13CA0022 */  beq   $fp, $t2, .L00421F30
/* 00421EA8 00000000 */   nop   
.L00421EAC:
/* 00421EAC 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00421EB0 24040052 */  li    $a0, 82
/* 00421EB4 02802825 */  move  $a1, $s4
/* 00421EB8 92260001 */  lbu   $a2, 1($s1)
/* 00421EBC 0320F809 */  jalr  $t9
/* 00421EC0 92270018 */   lbu   $a3, 0x18($s1)
/* 00421EC4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00421EC8 8ED10040 */  lw    $s1, 0x40($s6)
/* 00421ECC 2404007B */  li    $a0, 123
/* 00421ED0 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00421ED4 02002825 */  move  $a1, $s0
/* 00421ED8 92260001 */  lbu   $a2, 1($s1)
/* 00421EDC 0320F809 */  jalr  $t9
/* 00421EE0 92270018 */   lbu   $a3, 0x18($s1)
/* 00421EE4 27AD0064 */  addiu $t5, $sp, 0x64
/* 00421EE8 020D1021 */  addu  $v0, $s0, $t5
/* 00421EEC 904F0000 */  lbu   $t7, ($v0)
/* 00421EF0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00421EF4 03CF02B6 */  tne   $fp, $t7, 0xa
/* 00421EF8 8F888B5C */  lw     $t0, %got(entflag)($gp)
/* 00421EFC 240E0001 */  li    $t6, 1
/* 00421F00 A04E0000 */  sb    $t6, ($v0)
/* 00421F04 91080000 */  lbu   $t0, ($t0)
/* 00421F08 31180004 */  andi  $t8, $t0, 4
/* 00421F0C 53000024 */  beql  $t8, $zero, .L00421FA0
/* 00421F10 26940001 */   addiu $s4, $s4, 1
/* 00421F14 8F9982A4 */  lw    $t9, %call16(genrlodrstr)($gp)
/* 00421F18 24040070 */  li    $a0, 112
/* 00421F1C 02002825 */  move  $a1, $s0
/* 00421F20 0320F809 */  jalr  $t9
/* 00421F24 8EC60040 */   lw    $a2, 0x40($s6)
/* 00421F28 1000001C */  b     .L00421F9C
/* 00421F2C 8FBC0034 */   lw    $gp, 0x34($sp)
.L00421F30:
/* 00421F30 8F9982A4 */  lw    $t9, %call16(genrlodrstr)($gp)
/* 00421F34 24040070 */  li    $a0, 112
/* 00421F38 02802825 */  move  $a1, $s4
/* 00421F3C 0320F809 */  jalr  $t9
/* 00421F40 02203025 */   move  $a2, $s1
/* 00421F44 10000015 */  b     .L00421F9C
/* 00421F48 8FBC0034 */   lw    $gp, 0x34($sp)
.L00421F4C:
/* 00421F4C 8F8C8B5C */  lw     $t4, %got(entflag)($gp)
/* 00421F50 02895821 */  addu  $t3, $s4, $t1
/* 00421F54 A1790000 */  sb    $t9, ($t3)
/* 00421F58 918C0000 */  lbu   $t4, ($t4)
/* 00421F5C 318A0004 */  andi  $t2, $t4, 4
/* 00421F60 5140000F */  beql  $t2, $zero, .L00421FA0
/* 00421F64 26940001 */   addiu $s4, $s4, 1
/* 00421F68 8F9982A4 */  lw    $t9, %call16(genrlodrstr)($gp)
/* 00421F6C 24040070 */  li    $a0, 112
/* 00421F70 02802825 */  move  $a1, $s4
/* 00421F74 0320F809 */  jalr  $t9
/* 00421F78 02203025 */   move  $a2, $s1
/* 00421F7C 10000007 */  b     .L00421F9C
/* 00421F80 8FBC0034 */   lw    $gp, 0x34($sp)
.L00421F84:
/* 00421F84 8F9982A4 */  lw    $t9, %call16(genrlodrstr)($gp)
/* 00421F88 24040070 */  li    $a0, 112
/* 00421F8C 02802825 */  move  $a1, $s4
/* 00421F90 0320F809 */  jalr  $t9
/* 00421F94 02203025 */   move  $a2, $s1
/* 00421F98 8FBC0034 */  lw    $gp, 0x34($sp)
.L00421F9C:
/* 00421F9C 26940001 */  addiu $s4, $s4, 1
.L00421FA0:
/* 00421FA0 24010024 */  li    $at, 36
/* 00421FA4 26730004 */  addiu $s3, $s3, 4
/* 00421FA8 1681FF52 */  bne   $s4, $at, .L00421CF4
/* 00421FAC 26D60004 */   addiu $s6, $s6, 4
/* 00421FB0 24140001 */  li    $s4, 1
/* 00421FB4 27B00065 */  addiu $s0, $sp, 0x65
.L00421FB8:
/* 00421FB8 920D0000 */  lbu   $t5, ($s0)
/* 00421FBC 57CD000C */  bnel  $fp, $t5, .L00421FF0
/* 00421FC0 26940001 */   addiu $s4, $s4, 1
/* 00421FC4 8F8F89AC */  lw     $t7, %got(graphhead)($gp)
/* 00421FC8 8F9982A4 */  lw    $t9, %call16(genrlodrstr)($gp)
/* 00421FCC 00147080 */  sll   $t6, $s4, 2
/* 00421FD0 8DEF0000 */  lw    $t7, ($t7)
/* 00421FD4 2404006D */  li    $a0, 109
/* 00421FD8 02802825 */  move  $a1, $s4
/* 00421FDC 01EE4021 */  addu  $t0, $t7, $t6
/* 00421FE0 0320F809 */  jalr  $t9
/* 00421FE4 8D060040 */   lw    $a2, 0x40($t0)
/* 00421FE8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00421FEC 26940001 */  addiu $s4, $s4, 1
.L00421FF0:
/* 00421FF0 24010024 */  li    $at, 36
/* 00421FF4 1681FFF0 */  bne   $s4, $at, .L00421FB8
/* 00421FF8 26100001 */   addiu $s0, $s0, 1
/* 00421FFC 1000019C */  b     .L00422670
/* 00422000 8FBF003C */   lw    $ra, 0x3c($sp)
.L00422004:
/* 00422004 A3A00065 */  sb    $zero, 0x65($sp)
/* 00422008 A3A00066 */  sb    $zero, 0x66($sp)
/* 0042200C A3A00067 */  sb    $zero, 0x67($sp)
/* 00422010 27B00068 */  addiu $s0, $sp, 0x68
/* 00422014 27A20088 */  addiu $v0, $sp, 0x88
.L00422018:
/* 00422018 26100004 */  addiu $s0, $s0, 4
/* 0042201C A200FFFC */  sb    $zero, -4($s0)
/* 00422020 A200FFFD */  sb    $zero, -3($s0)
/* 00422024 A200FFFE */  sb    $zero, -2($s0)
/* 00422028 1602FFFB */  bne   $s0, $v0, .L00422018
/* 0042202C A200FFFF */   sb    $zero, -1($s0)
/* 00422030 8F988A00 */  lw     $t8, %got(pdefmax)($gp)
/* 00422034 00009025 */  move  $s2, $zero
/* 00422038 8F060000 */  lw    $a2, ($t8)
/* 0042203C 28C10004 */  slti  $at, $a2, 4
/* 00422040 14200002 */  bnez  $at, .L0042204C
/* 00422044 00000000 */   nop   
/* 00422048 24060003 */  li    $a2, 3
.L0042204C:
/* 0042204C 04C20077 */  bltzl $a2, .L0042222C
/* 00422050 241E0002 */   li    $fp, 2
/* 00422054 8F8589F4 */  lw     $a1, %got(pdeftab)($gp)
/* 00422058 241E0002 */  li    $fp, 2
/* 0042205C 24100009 */  li    $s0, 9
/* 00422060 8CA50000 */  lw    $a1, ($a1)
/* 00422064 00129900 */  sll   $s3, $s2, 4
.L00422068:
/* 00422068 00B31821 */  addu  $v1, $a1, $s3
/* 0042206C 90690000 */  lbu   $t1, ($v1)
/* 00422070 24010065 */  li    $at, 101
/* 00422074 15210004 */  bne   $t1, $at, .L00422088
/* 00422078 00000000 */   nop   
/* 0042207C 90790002 */  lbu   $t9, 2($v1)
/* 00422080 17200003 */  bnez  $t9, .L00422090
/* 00422084 00000000 */   nop   
.L00422088:
/* 00422088 10000064 */  b     .L0042221C
/* 0042208C 26520001 */   addiu $s2, $s2, 1
.L00422090:
/* 00422090 8F8C8A28 */  lw     $t4, %got(offsetpassedbyint)($gp)
/* 00422094 8F8D8D44 */  lw     $t5, %got(firstparmreg)($gp)
/* 00422098 00125880 */  sll   $t3, $s2, 2
/* 0042209C 8D8C0000 */  lw    $t4, ($t4)
/* 004220A0 25ADFFFC */  addiu $t5, $t5, -4
/* 004220A4 24010002 */  li    $at, 2
/* 004220A8 016C102A */  slt   $v0, $t3, $t4
/* 004220AC 24420001 */  addiu $v0, $v0, 1
/* 004220B0 00025080 */  sll   $t2, $v0, 2
/* 004220B4 014D7821 */  addu  $t7, $t2, $t5
/* 004220B8 8DE40000 */  lw    $a0, ($t7)
/* 004220BC 27B80064 */  addiu $t8, $sp, 0x64
/* 004220C0 14410004 */  bne   $v0, $at, .L004220D4
/* 004220C4 0092A021 */   addu  $s4, $a0, $s2
/* 004220C8 52400003 */  beql  $s2, $zero, .L004220D8
/* 004220CC 906E0001 */   lbu   $t6, 1($v1)
/* 004220D0 24940001 */  addiu $s4, $a0, 1
.L004220D4:
/* 004220D4 906E0001 */  lbu   $t6, 1($v1)
.L004220D8:
/* 004220D8 00144080 */  sll   $t0, $s4, 2
/* 004220DC 02A8B021 */  addu  $s6, $s5, $t0
/* 004220E0 020E02B4 */  teq   $s0, $t6, 0xa
/* 004220E4 8ED10040 */  lw    $s1, 0x40($s6)
/* 004220E8 02984821 */  addu  $t1, $s4, $t8
/* 004220EC 56200004 */  bnezl $s1, .L00422100
/* 004220F0 92390000 */   lbu   $t9, ($s1)
/* 004220F4 10000042 */  b     .L00422200
/* 004220F8 A13E0000 */   sb    $fp, ($t1)
/* 004220FC 92390000 */  lbu   $t9, ($s1)
.L00422100:
/* 00422100 24010003 */  li    $at, 3
/* 00422104 02201025 */  move  $v0, $s1
/* 00422108 17210032 */  bne   $t9, $at, .L004221D4
/* 0042210C 00000000 */   nop   
/* 00422110 922B0016 */  lbu   $t3, 0x16($s1)
/* 00422114 316C0007 */  andi  $t4, $t3, 7
/* 00422118 17CC002E */  bne   $fp, $t4, .L004221D4
/* 0042211C 00000000 */   nop   
/* 00422120 8F8A8980 */  lw     $t2, %got(curblk)($gp)
/* 00422124 8E2D0014 */  lw    $t5, 0x14($s1)
/* 00422128 8D4A0000 */  lw    $t2, ($t2)
/* 0042212C 000D7AC2 */  srl   $t7, $t5, 0xb
/* 00422130 154F0028 */  bne   $t2, $t7, .L004221D4
/* 00422134 00000000 */   nop   
/* 00422138 8E240010 */  lw    $a0, 0x10($s1)
/* 0042213C 04810003 */  bgez  $a0, .L0042214C
/* 00422140 00047083 */   sra   $t6, $a0, 2
/* 00422144 24810003 */  addiu $at, $a0, 3
/* 00422148 00017083 */  sra   $t6, $at, 2
.L0042214C:
/* 0042214C 164E0021 */  bne   $s2, $t6, .L004221D4
/* 00422150 00000000 */   nop   
/* 00422154 8F9986EC */  lw    $t9, %call16(fitparmreg)($gp)
/* 00422158 90450018 */  lbu   $a1, 0x18($v0)
/* 0042215C 8C660008 */  lw    $a2, 8($v1)
/* 00422160 0320F809 */  jalr  $t9
/* 00422164 8C67000C */   lw    $a3, 0xc($v1)
/* 00422168 1040001A */  beqz  $v0, .L004221D4
/* 0042216C 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00422170 8F998B5C */  lw     $t9, %got(entflag)($gp)
/* 00422174 27B80064 */  addiu $t8, $sp, 0x64
/* 00422178 02984821 */  addu  $t1, $s4, $t8
/* 0042217C 24080001 */  li    $t0, 1
/* 00422180 A1280000 */  sb    $t0, ($t1)
/* 00422184 93390000 */  lbu   $t9, ($t9)
/* 00422188 332B0004 */  andi  $t3, $t9, 4
/* 0042218C 11600007 */  beqz  $t3, .L004221AC
/* 00422190 00000000 */   nop   
/* 00422194 8F9982A4 */  lw    $t9, %call16(genrlodrstr)($gp)
/* 00422198 24040070 */  li    $a0, 112
/* 0042219C 02802825 */  move  $a1, $s4
/* 004221A0 0320F809 */  jalr  $t9
/* 004221A4 8EC60040 */   lw    $a2, 0x40($s6)
/* 004221A8 8FBC0034 */  lw    $gp, 0x34($sp)
.L004221AC:
/* 004221AC 8F8C8A00 */  lw     $t4, %got(pdefmax)($gp)
/* 004221B0 8F8589F4 */  lw     $a1, %got(pdeftab)($gp)
/* 004221B4 8D860000 */  lw    $a2, ($t4)
/* 004221B8 8CA50000 */  lw    $a1, ($a1)
/* 004221BC 28C10004 */  slti  $at, $a2, 4
/* 004221C0 1420000F */  bnez  $at, .L00422200
/* 004221C4 00B31821 */   addu  $v1, $a1, $s3
/* 004221C8 24060003 */  li    $a2, 3
/* 004221CC 1000000D */  b     .L00422204
/* 004221D0 8C6E000C */   lw    $t6, 0xc($v1)
.L004221D4:
/* 004221D4 8F8F8A00 */  lw     $t7, %got(pdefmax)($gp)
/* 004221D8 27AD0064 */  addiu $t5, $sp, 0x64
/* 004221DC 028D5021 */  addu  $t2, $s4, $t5
/* 004221E0 8F8589F4 */  lw     $a1, %got(pdeftab)($gp)
/* 004221E4 A15E0000 */  sb    $fp, ($t2)
/* 004221E8 8DE60000 */  lw    $a2, ($t7)
/* 004221EC 8CA50000 */  lw    $a1, ($a1)
/* 004221F0 28C10004 */  slti  $at, $a2, 4
/* 004221F4 14200002 */  bnez  $at, .L00422200
/* 004221F8 00B31821 */   addu  $v1, $a1, $s3
/* 004221FC 24060003 */  li    $a2, 3
.L00422200:
/* 00422200 8C6E000C */  lw    $t6, 0xc($v1)
.L00422204:
/* 00422204 25D80003 */  addiu $t8, $t6, 3
/* 00422208 07010003 */  bgez  $t8, .L00422218
/* 0042220C 00184083 */   sra   $t0, $t8, 2
/* 00422210 27010003 */  addiu $at, $t8, 3
/* 00422214 00014083 */  sra   $t0, $at, 2
.L00422218:
/* 00422218 02489021 */  addu  $s2, $s2, $t0
.L0042221C:
/* 0042221C 00D2082A */  slt   $at, $a2, $s2
/* 00422220 5020FF91 */  beql  $at, $zero, .L00422068
/* 00422224 00129900 */   sll   $s3, $s2, 4
/* 00422228 241E0002 */  li    $fp, 2
.L0042222C:
/* 0042222C 24140001 */  li    $s4, 1
/* 00422230 26B60004 */  addiu $s6, $s5, 4
/* 00422234 8F9789F4 */  lw     $s7, %got(pdeftab)($gp)
.L00422238:
/* 00422238 8ED10040 */  lw    $s1, 0x40($s6)
/* 0042223C 52200076 */  beql  $s1, $zero, .L00422418
/* 00422240 26940001 */   addiu $s4, $s4, 1
/* 00422244 92290000 */  lbu   $t1, ($s1)
/* 00422248 24010003 */  li    $at, 3
/* 0042224C 55210072 */  bnel  $t1, $at, .L00422418
/* 00422250 26940001 */   addiu $s4, $s4, 1
/* 00422254 92390016 */  lbu   $t9, 0x16($s1)
/* 00422258 332B0007 */  andi  $t3, $t9, 7
/* 0042225C 57CB006E */  bnel  $fp, $t3, .L00422418
/* 00422260 26940001 */   addiu $s4, $s4, 1
/* 00422264 8F8C8980 */  lw     $t4, %got(curblk)($gp)
/* 00422268 8E2D0014 */  lw    $t5, 0x14($s1)
/* 0042226C 8D8C0000 */  lw    $t4, ($t4)
/* 00422270 000D52C2 */  srl   $t2, $t5, 0xb
/* 00422274 558A0068 */  bnel  $t4, $t2, .L00422418
/* 00422278 26940001 */   addiu $s4, $s4, 1
/* 0042227C 8E320010 */  lw    $s2, 0x10($s1)
/* 00422280 06410002 */  bgez  $s2, .L0042228C
/* 00422284 02400821 */   move  $at, $s2
/* 00422288 26410003 */  addiu $at, $s2, 3
.L0042228C:
/* 0042228C 00019083 */  sra   $s2, $at, 2
/* 00422290 00D2082A */  slt   $at, $a2, $s2
/* 00422294 54200060 */  bnezl $at, .L00422418
/* 00422298 26940001 */   addiu $s4, $s4, 1
/* 0042229C 8EEF0000 */  lw    $t7, ($s7)
/* 004222A0 00127100 */  sll   $t6, $s2, 4
/* 004222A4 01EEC021 */  addu  $t8, $t7, $t6
/* 004222A8 93080002 */  lbu   $t0, 2($t8)
/* 004222AC 5100005A */  beql  $t0, $zero, .L00422418
/* 004222B0 26940001 */   addiu $s4, $s4, 1
/* 004222B4 8F898A28 */  lw     $t1, %got(offsetpassedbyint)($gp)
/* 004222B8 8F8B8D44 */  lw     $t3, %got(firstparmreg)($gp)
/* 004222BC 00121080 */  sll   $v0, $s2, 2
/* 004222C0 8D290000 */  lw    $t1, ($t1)
/* 004222C4 256BFFFC */  addiu $t3, $t3, -4
/* 004222C8 24010002 */  li    $at, 2
/* 004222CC 0049202A */  slt   $a0, $v0, $t1
/* 004222D0 24840001 */  addiu $a0, $a0, 1
/* 004222D4 0004C880 */  sll   $t9, $a0, 2
/* 004222D8 032B6821 */  addu  $t5, $t9, $t3
/* 004222DC 8DA30000 */  lw    $v1, ($t5)
/* 004222E0 14810004 */  bne   $a0, $at, .L004222F4
/* 004222E4 00728021 */   addu  $s0, $v1, $s2
/* 004222E8 10400002 */  beqz  $v0, .L004222F4
/* 004222EC 00000000 */   nop   
/* 004222F0 24700001 */  addiu $s0, $v1, 1
.L004222F4:
/* 004222F4 12900047 */  beq   $s4, $s0, .L00422414
/* 004222F8 0214082A */   slt   $at, $s0, $s4
/* 004222FC 1420000C */  bnez  $at, .L00422330
/* 00422300 00106080 */   sll   $t4, $s0, 2
/* 00422304 02AC5021 */  addu  $t2, $s5, $t4
/* 00422308 8D420040 */  lw    $v0, 0x40($t2)
/* 0042230C 50400009 */  beql  $v0, $zero, .L00422334
/* 00422310 2A810018 */   slti  $at, $s4, 0x18
/* 00422314 904F0000 */  lbu   $t7, ($v0)
/* 00422318 24010003 */  li    $at, 3
/* 0042231C 55E10005 */  bnel  $t7, $at, .L00422334
/* 00422320 2A810018 */   slti  $at, $s4, 0x18
/* 00422324 904E0016 */  lbu   $t6, 0x16($v0)
/* 00422328 31D80007 */  andi  $t8, $t6, 7
/* 0042232C 13D8002D */  beq   $fp, $t8, .L004223E4
.L00422330:
/* 00422330 2A810018 */   slti  $at, $s4, 0x18
.L00422334:
/* 00422334 14200004 */  bnez  $at, .L00422348
/* 00422338 24040052 */   li    $a0, 82
/* 0042233C 2A010018 */  slti  $at, $s0, 0x18
/* 00422340 14200028 */  bnez  $at, .L004223E4
/* 00422344 00000000 */   nop   
.L00422348:
/* 00422348 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 0042234C 02802825 */  move  $a1, $s4
/* 00422350 92260001 */  lbu   $a2, 1($s1)
/* 00422354 0320F809 */  jalr  $t9
/* 00422358 92270018 */   lbu   $a3, 0x18($s1)
/* 0042235C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00422360 8ED10040 */  lw    $s1, 0x40($s6)
/* 00422364 2404007B */  li    $a0, 123
/* 00422368 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 0042236C 02002825 */  move  $a1, $s0
/* 00422370 92260001 */  lbu   $a2, 1($s1)
/* 00422374 0320F809 */  jalr  $t9
/* 00422378 92270018 */   lbu   $a3, 0x18($s1)
/* 0042237C 27A80064 */  addiu $t0, $sp, 0x64
/* 00422380 02081021 */  addu  $v0, $s0, $t0
/* 00422384 90490000 */  lbu   $t1, ($v0)
/* 00422388 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042238C 03C902B6 */  tne   $fp, $t1, 0xa
/* 00422390 8F8B8B5C */  lw     $t3, %got(entflag)($gp)
/* 00422394 24190001 */  li    $t9, 1
/* 00422398 A0590000 */  sb    $t9, ($v0)
/* 0042239C 916B0000 */  lbu   $t3, ($t3)
/* 004223A0 316D0004 */  andi  $t5, $t3, 4
/* 004223A4 11A00007 */  beqz  $t5, .L004223C4
/* 004223A8 00000000 */   nop   
/* 004223AC 8F9982A4 */  lw    $t9, %call16(genrlodrstr)($gp)
/* 004223B0 24040070 */  li    $a0, 112
/* 004223B4 02002825 */  move  $a1, $s0
/* 004223B8 0320F809 */  jalr  $t9
/* 004223BC 8EC60040 */   lw    $a2, 0x40($s6)
/* 004223C0 8FBC0034 */  lw    $gp, 0x34($sp)
.L004223C4:
/* 004223C4 8F8C8A00 */  lw     $t4, %got(pdefmax)($gp)
/* 004223C8 8D860000 */  lw    $a2, ($t4)
/* 004223CC 28C10004 */  slti  $at, $a2, 4
/* 004223D0 54200011 */  bnezl $at, .L00422418
/* 004223D4 26940001 */   addiu $s4, $s4, 1
/* 004223D8 24060003 */  li    $a2, 3
/* 004223DC 1000000E */  b     .L00422418
/* 004223E0 26940001 */   addiu $s4, $s4, 1
.L004223E4:
/* 004223E4 8F9982A4 */  lw    $t9, %call16(genrlodrstr)($gp)
/* 004223E8 24040070 */  li    $a0, 112
/* 004223EC 02802825 */  move  $a1, $s4
/* 004223F0 0320F809 */  jalr  $t9
/* 004223F4 02203025 */   move  $a2, $s1
/* 004223F8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004223FC 8F8A8A00 */  lw     $t2, %got(pdefmax)($gp)
/* 00422400 8D460000 */  lw    $a2, ($t2)
/* 00422404 28C10004 */  slti  $at, $a2, 4
/* 00422408 54200003 */  bnezl $at, .L00422418
/* 0042240C 26940001 */   addiu $s4, $s4, 1
/* 00422410 24060003 */  li    $a2, 3
.L00422414:
/* 00422414 26940001 */  addiu $s4, $s4, 1
.L00422418:
/* 00422418 24010024 */  li    $at, 36
/* 0042241C 1681FF86 */  bne   $s4, $at, .L00422238
/* 00422420 26D60004 */   addiu $s6, $s6, 4
/* 00422424 04C00091 */  bltz  $a2, .L0042266C
/* 00422428 00009025 */   move  $s2, $zero
/* 0042242C 8EE50000 */  lw    $a1, ($s7)
/* 00422430 2416FF1F */  li    $s6, -225
/* 00422434 2415006D */  li    $s5, 109
/* 00422438 8F918DA4 */  lw     $s1, %got(u)($gp)
/* 0042243C 00129900 */  sll   $s3, $s2, 4
.L00422440:
/* 00422440 00B31821 */  addu  $v1, $a1, $s3
/* 00422444 906F0000 */  lbu   $t7, ($v1)
/* 00422448 24010065 */  li    $at, 101
/* 0042244C 15E10004 */  bne   $t7, $at, .L00422460
/* 00422450 00000000 */   nop   
/* 00422454 906E0002 */  lbu   $t6, 2($v1)
/* 00422458 15C00003 */  bnez  $t6, .L00422468
/* 0042245C 00000000 */   nop   
.L00422460:
/* 00422460 1000007F */  b     .L00422660
/* 00422464 26520001 */   addiu $s2, $s2, 1
.L00422468:
/* 00422468 8F888A28 */  lw     $t0, %got(offsetpassedbyint)($gp)
/* 0042246C 8F998D44 */  lw     $t9, %got(firstparmreg)($gp)
/* 00422470 0012C080 */  sll   $t8, $s2, 2
/* 00422474 8D080000 */  lw    $t0, ($t0)
/* 00422478 2739FFFC */  addiu $t9, $t9, -4
/* 0042247C 24010002 */  li    $at, 2
/* 00422480 0308102A */  slt   $v0, $t8, $t0
/* 00422484 24420001 */  addiu $v0, $v0, 1
/* 00422488 00024880 */  sll   $t1, $v0, 2
/* 0042248C 01398021 */  addu  $s0, $t1, $t9
/* 00422490 8E040000 */  lw    $a0, ($s0)
/* 00422494 27AB0064 */  addiu $t3, $sp, 0x64
/* 00422498 14410004 */  bne   $v0, $at, .L004224AC
/* 0042249C 0092A021 */   addu  $s4, $a0, $s2
/* 004224A0 52400003 */  beql  $s2, $zero, .L004224B0
/* 004224A4 028B6821 */   addu  $t5, $s4, $t3
/* 004224A8 24940001 */  addiu $s4, $a0, 1
.L004224AC:
/* 004224AC 028B6821 */  addu  $t5, $s4, $t3
.L004224B0:
/* 004224B0 91AC0000 */  lbu   $t4, ($t5)
/* 004224B4 57CC005D */  bnel  $fp, $t4, .L0042262C
/* 004224B8 8EE50000 */   lw    $a1, ($s7)
/* 004224BC 92220001 */  lbu   $v0, 1($s1)
/* 004224C0 906A0001 */  lbu   $t2, 1($v1)
/* 004224C4 8F8C8980 */  lw     $t4, %got(curblk)($gp)
/* 004224C8 00027EC0 */  sll   $t7, $v0, 0x1b
/* 004224CC 000F76C2 */  srl   $t6, $t7, 0x1b
/* 004224D0 014EC026 */  xor   $t8, $t2, $t6
/* 004224D4 3308001F */  andi  $t0, $t8, 0x1f
/* 004224D8 0102C826 */  xor   $t9, $t0, $v0
/* 004224DC 03365824 */  and   $t3, $t9, $s6
/* 004224E0 A2390001 */  sb    $t9, 1($s1)
/* 004224E4 356D0040 */  ori   $t5, $t3, 0x40
/* 004224E8 A2350000 */  sb    $s5, ($s1)
/* 004224EC A22D0001 */  sb    $t5, 1($s1)
/* 004224F0 8C6F0008 */  lw    $t7, 8($v1)
/* 004224F4 8C6A000C */  lw    $t2, 0xc($v1)
/* 004224F8 8D8C0000 */  lw    $t4, ($t4)
/* 004224FC AE2F000C */  sw    $t7, 0xc($s1)
/* 00422500 AE2A0008 */  sw    $t2, 8($s1)
/* 00422504 AE2C0004 */  sw    $t4, 4($s1)
/* 00422508 8F998708 */  lw    $t9, %call16(coloroffset)($gp)
/* 0042250C 02802025 */  move  $a0, $s4
/* 00422510 0320F809 */  jalr  $t9
/* 00422514 00000000 */   nop   
/* 00422518 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042251C A6220002 */  sh    $v0, 2($s1)
/* 00422520 8F8E8D44 */  lw     $t6, %got(firstparmreg)($gp)
/* 00422524 25CE0004 */  addiu $t6, $t6, 4
/* 00422528 120E0008 */  beq   $s0, $t6, .L0042254C
/* 0042252C 00000000 */   nop   
/* 00422530 8EF80000 */  lw    $t8, ($s7)
/* 00422534 240C0004 */  li    $t4, 4
/* 00422538 03134021 */  addu  $t0, $t8, $s3
/* 0042253C 8D09000C */  lw    $t1, 0xc($t0)
/* 00422540 29210005 */  slti  $at, $t1, 5
/* 00422544 50200008 */  beql  $at, $zero, .L00422568
/* 00422548 92220001 */   lbu   $v0, 1($s1)
.L0042254C:
/* 0042254C 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00422550 02202025 */  move  $a0, $s1
/* 00422554 0320F809 */  jalr  $t9
/* 00422558 00000000 */   nop   
/* 0042255C 10000032 */  b     .L00422628
/* 00422560 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00422564 92220001 */  lbu   $v0, 1($s1)
.L00422568:
/* 00422568 2401000C */  li    $at, 12
/* 0042256C 26430001 */  addiu $v1, $s2, 1
/* 00422570 3059001F */  andi  $t9, $v0, 0x1f
/* 00422574 17210003 */  bne   $t9, $at, .L00422584
/* 00422578 304BFFE0 */   andi  $t3, $v0, 0xffe0
/* 0042257C 356D000D */  ori   $t5, $t3, 0xd
/* 00422580 A22D0001 */  sb    $t5, 1($s1)
.L00422584:
/* 00422584 AE2C0008 */  sw    $t4, 8($s1)
/* 00422588 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042258C 02202025 */  move  $a0, $s1
/* 00422590 AFA30058 */  sw    $v1, 0x58($sp)
/* 00422594 0320F809 */  jalr  $t9
/* 00422598 00000000 */   nop   
/* 0042259C 8FA30058 */  lw    $v1, 0x58($sp)
/* 004225A0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004225A4 28610004 */  slti  $at, $v1, 4
/* 004225A8 1020001F */  beqz  $at, .L00422628
/* 004225AC 00608025 */   move  $s0, $v1
/* 004225B0 8EEE0000 */  lw    $t6, ($s7)
/* 004225B4 00727823 */  subu  $t7, $v1, $s2
/* 004225B8 000F5080 */  sll   $t2, $t7, 2
/* 004225BC 01D3C021 */  addu  $t8, $t6, $s3
/* 004225C0 8F08000C */  lw    $t0, 0xc($t8)
/* 004225C4 0148082A */  slt   $at, $t2, $t0
/* 004225C8 50200018 */  beql  $at, $zero, .L0042262C
/* 004225CC 8EE50000 */   lw    $a1, ($s7)
/* 004225D0 8E29000C */  lw    $t1, 0xc($s1)
.L004225D4:
/* 004225D4 962B0002 */  lhu   $t3, 2($s1)
/* 004225D8 02202025 */  move  $a0, $s1
/* 004225DC 25390004 */  addiu $t9, $t1, 4
/* 004225E0 256D0001 */  addiu $t5, $t3, 1
/* 004225E4 AE39000C */  sw    $t9, 0xc($s1)
/* 004225E8 A62D0002 */  sh    $t5, 2($s1)
/* 004225EC 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 004225F0 0320F809 */  jalr  $t9
/* 004225F4 00000000 */   nop   
/* 004225F8 26100001 */  addiu $s0, $s0, 1
/* 004225FC 2A010004 */  slti  $at, $s0, 4
/* 00422600 10200009 */  beqz  $at, .L00422628
/* 00422604 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00422608 8EEE0000 */  lw    $t6, ($s7)
/* 0042260C 02126023 */  subu  $t4, $s0, $s2
/* 00422610 000C7880 */  sll   $t7, $t4, 2
/* 00422614 01D3C021 */  addu  $t8, $t6, $s3
/* 00422618 8F0A000C */  lw    $t2, 0xc($t8)
/* 0042261C 01EA082A */  slt   $at, $t7, $t2
/* 00422620 5420FFEC */  bnezl $at, .L004225D4
/* 00422624 8E29000C */   lw    $t1, 0xc($s1)
.L00422628:
/* 00422628 8EE50000 */  lw    $a1, ($s7)
.L0042262C:
/* 0042262C 8F8D8A00 */  lw     $t5, %got(pdefmax)($gp)
/* 00422630 00B34021 */  addu  $t0, $a1, $s3
/* 00422634 8D09000C */  lw    $t1, 0xc($t0)
/* 00422638 8DA60000 */  lw    $a2, ($t5)
/* 0042263C 25390003 */  addiu $t9, $t1, 3
/* 00422640 07210003 */  bgez  $t9, .L00422650
/* 00422644 00195883 */   sra   $t3, $t9, 2
/* 00422648 27210003 */  addiu $at, $t9, 3
/* 0042264C 00015883 */  sra   $t3, $at, 2
.L00422650:
/* 00422650 28C10004 */  slti  $at, $a2, 4
/* 00422654 14200002 */  bnez  $at, .L00422660
/* 00422658 024B9021 */   addu  $s2, $s2, $t3
/* 0042265C 24060003 */  li    $a2, 3
.L00422660:
/* 00422660 00D2082A */  slt   $at, $a2, $s2
/* 00422664 5020FF76 */  beql  $at, $zero, .L00422440
/* 00422668 00129900 */   sll   $s3, $s2, 4
.L0042266C:
/* 0042266C 8FBF003C */  lw    $ra, 0x3c($sp)
.L00422670:
/* 00422670 8FB00014 */  lw    $s0, 0x14($sp)
/* 00422674 8FB10018 */  lw    $s1, 0x18($sp)
/* 00422678 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0042267C 8FB30020 */  lw    $s3, 0x20($sp)
/* 00422680 8FB40024 */  lw    $s4, 0x24($sp)
/* 00422684 8FB50028 */  lw    $s5, 0x28($sp)
/* 00422688 8FB6002C */  lw    $s6, 0x2c($sp)
/* 0042268C 8FB70030 */  lw    $s7, 0x30($sp)
/* 00422690 8FBE0038 */  lw    $fp, 0x38($sp)
/* 00422694 03E00008 */  jr    $ra
/* 00422698 27BD00A0 */   addiu $sp, $sp, 0xa0
    .type epilog, @function
    .size epilog, .-epilog
    .end epilog

glabel gen_outparcode
    .ent gen_outparcode
    # 0042BF08 reemit
/* 0042269C 3C1C0FBF */  .cpload $t9
/* 004226A0 279C7BF4 */  
/* 004226A4 0399E021 */  
/* 004226A8 27BDFF90 */  addiu $sp, $sp, -0x70
/* 004226AC AFBF003C */  sw    $ra, 0x3c($sp)
/* 004226B0 AFBE0038 */  sw    $fp, 0x38($sp)
/* 004226B4 AFBC0034 */  sw    $gp, 0x34($sp)
/* 004226B8 AFB70030 */  sw    $s7, 0x30($sp)
/* 004226BC AFB6002C */  sw    $s6, 0x2c($sp)
/* 004226C0 AFB50028 */  sw    $s5, 0x28($sp)
/* 004226C4 AFB40024 */  sw    $s4, 0x24($sp)
/* 004226C8 AFB30020 */  sw    $s3, 0x20($sp)
/* 004226CC AFB2001C */  sw    $s2, 0x1c($sp)
/* 004226D0 AFB10018 */  sw    $s1, 0x18($sp)
/* 004226D4 AFB00014 */  sw    $s0, 0x14($sp)
/* 004226D8 8C8E001C */  lw    $t6, 0x1c($a0)
/* 004226DC 0080A825 */  move  $s5, $a0
/* 004226E0 8F968D44 */  lw     $s6, %got(firstparmreg)($gp)
/* 004226E4 8F978A34 */  lw     $s7, %got(curmst)($gp)
/* 004226E8 241E0005 */  li    $fp, 5
/* 004226EC 8DD1000C */  lw    $s1, 0xc($t6)
.L004226F0:
/* 004226F0 8E310008 */  lw    $s1, 8($s1)
/* 004226F4 2401007B */  li    $at, 123
/* 004226F8 922F0000 */  lbu   $t7, ($s1)
/* 004226FC 55E100EF */  bnel  $t7, $at, .L00422ABC
/* 00422700 8EA90020 */   lw    $t1, 0x20($s5)
/* 00422704 92380003 */  lbu   $t8, 3($s1)
/* 00422708 530000EC */  beql  $t8, $zero, .L00422ABC
/* 0042270C 8EA90020 */   lw    $t1, 0x20($s5)
/* 00422710 8EE30000 */  lw    $v1, ($s7)
/* 00422714 8E30002C */  lw    $s0, 0x2c($s1)
/* 00422718 8C790020 */  lw    $t9, 0x20($v1)
/* 0042271C 9328000C */  lbu   $t0, 0xc($t9)
/* 00422720 550000A2 */  bnezl $t0, .L004229AC
/* 00422724 920D0016 */   lbu   $t5, 0x16($s0)
/* 00422728 8E020018 */  lw    $v0, 0x18($s0)
/* 0042272C 02A02825 */  move  $a1, $s5
/* 00422730 27A60068 */  addiu $a2, $sp, 0x68
/* 00422734 28410005 */  slti  $at, $v0, 5
/* 00422738 50200081 */  beql  $at, $zero, .L00422940
/* 0042273C 8E300004 */   lw    $s0, 4($s1)
/* 00422740 8E09001C */  lw    $t1, 0x1c($s0)
/* 00422744 8C6A0018 */  lw    $t2, 0x18($v1)
/* 00422748 00009825 */  move  $s3, $zero
/* 0042274C 012A082A */  slt   $at, $t1, $t2
/* 00422750 50200006 */  beql  $at, $zero, .L0042276C
/* 00422754 8ECC0000 */   lw    $t4, ($s6)
/* 00422758 8ECB0004 */  lw    $t3, 4($s6)
/* 0042275C 0162A021 */  addu  $s4, $t3, $v0
/* 00422760 10000004 */  b     .L00422774
/* 00422764 2694FFFF */   addiu $s4, $s4, -1
/* 00422768 8ECC0000 */  lw    $t4, ($s6)
.L0042276C:
/* 0042276C 0182A021 */  addu  $s4, $t4, $v0
/* 00422770 2694FFFF */  addiu $s4, $s4, -1
.L00422774:
/* 00422774 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 00422778 8E2D0004 */  lw    $t5, 4($s1)
/* 0042277C 00003825 */  move  $a3, $zero
/* 00422780 0320F809 */  jalr  $t9
/* 00422784 8DA40014 */   lw    $a0, 0x14($t5)
/* 00422788 14400003 */  bnez  $v0, .L00422798
/* 0042278C 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00422790 1000005E */  b     .L0042290C
/* 00422794 24130001 */   li    $s3, 1
.L00422798:
/* 00422798 8FB20068 */  lw    $s2, 0x68($sp)
/* 0042279C 2A810018 */  slti  $at, $s4, 0x18
/* 004227A0 5292005B */  beql  $s4, $s2, .L00422910
/* 004227A4 24010001 */   li    $at, 1
/* 004227A8 1020002B */  beqz  $at, .L00422858
/* 004227AC 0292082A */   slt   $at, $s4, $s2
/* 004227B0 50200018 */  beql  $at, $zero, .L00422814
/* 004227B4 8E300004 */   lw    $s0, 4($s1)
/* 004227B8 8EEE0000 */  lw    $t6, ($s7)
/* 004227BC 8ED80000 */  lw    $t8, ($s6)
/* 004227C0 2642FFFF */  addiu $v0, $s2, -1
/* 004227C4 8DCF001C */  lw    $t7, 0x1c($t6)
/* 004227C8 0258C823 */  subu  $t9, $s2, $t8
/* 004227CC 00194080 */  sll   $t0, $t9, 2
/* 004227D0 01E8082A */  slt   $at, $t7, $t0
/* 004227D4 1420000E */  bnez  $at, .L00422810
/* 004227D8 000248C3 */   sra   $t1, $v0, 3
/* 004227DC 02A91821 */  addu  $v1, $s5, $t1
/* 004227E0 906400D0 */  lbu   $a0, 0xd0($v1)
/* 004227E4 30450007 */  andi  $a1, $v0, 7
/* 004227E8 24A50018 */  addiu $a1, $a1, 0x18
/* 004227EC 00A45004 */  sllv  $t2, $a0, $a1
/* 004227F0 000A5FC2 */  srl   $t3, $t2, 0x1f
/* 004227F4 396C0001 */  xori  $t4, $t3, 1
/* 004227F8 000C6FC0 */  sll   $t5, $t4, 0x1f
/* 004227FC 00AD7006 */  srlv  $t6, $t5, $a1
/* 00422800 01C4C026 */  xor   $t8, $t6, $a0
/* 00422804 A07800D0 */  sb    $t8, 0xd0($v1)
/* 00422808 10000040 */  b     .L0042290C
/* 0042280C 24130001 */   li    $s3, 1
.L00422810:
/* 00422810 8E300004 */  lw    $s0, 4($s1)
.L00422814:
/* 00422814 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00422818 24130002 */  li    $s3, 2
/* 0042281C 24040052 */  li    $a0, 82
/* 00422820 02802825 */  move  $a1, $s4
/* 00422824 92060001 */  lbu   $a2, 1($s0)
/* 00422828 0320F809 */  jalr  $t9
/* 0042282C 92070020 */   lbu   $a3, 0x20($s0)
/* 00422830 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00422834 8E300004 */  lw    $s0, 4($s1)
/* 00422838 2404007B */  li    $a0, 123
/* 0042283C 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00422840 02402825 */  move  $a1, $s2
/* 00422844 92060001 */  lbu   $a2, 1($s0)
/* 00422848 0320F809 */  jalr  $t9
/* 0042284C 92070020 */   lbu   $a3, 0x20($s0)
/* 00422850 1000002E */  b     .L0042290C
/* 00422854 8FBC0034 */   lw    $gp, 0x34($sp)
.L00422858:
/* 00422858 8ED90004 */  lw    $t9, 4($s6)
/* 0042285C 272F0001 */  addiu $t7, $t9, 1
/* 00422860 564F0007 */  bnel  $s2, $t7, .L00422880
/* 00422864 8ECA0000 */   lw    $t2, ($s6)
/* 00422868 8EE80000 */  lw    $t0, ($s7)
/* 0042286C 8D090018 */  lw    $t1, 0x18($t0)
/* 00422870 29210008 */  slti  $at, $t1, 8
/* 00422874 50200006 */  beql  $at, $zero, .L00422890
/* 00422878 2642FFFF */   addiu $v0, $s2, -1
/* 0042287C 8ECA0000 */  lw    $t2, ($s6)
.L00422880:
/* 00422880 254B0004 */  addiu $t3, $t2, 4
/* 00422884 024B082A */  slt   $at, $s2, $t3
/* 00422888 1020000F */  beqz  $at, .L004228C8
/* 0042288C 2642FFFF */   addiu $v0, $s2, -1
.L00422890:
/* 00422890 000260C3 */  sra   $t4, $v0, 3
/* 00422894 02AC1821 */  addu  $v1, $s5, $t4
/* 00422898 906400D0 */  lbu   $a0, 0xd0($v1)
/* 0042289C 30450007 */  andi  $a1, $v0, 7
/* 004228A0 24A50018 */  addiu $a1, $a1, 0x18
/* 004228A4 00A46804 */  sllv  $t5, $a0, $a1
/* 004228A8 000D77C2 */  srl   $t6, $t5, 0x1f
/* 004228AC 39D80001 */  xori  $t8, $t6, 1
/* 004228B0 0018CFC0 */  sll   $t9, $t8, 0x1f
/* 004228B4 00B97806 */  srlv  $t7, $t9, $a1
/* 004228B8 01E44026 */  xor   $t0, $t7, $a0
/* 004228BC A06800D0 */  sb    $t0, 0xd0($v1)
/* 004228C0 10000012 */  b     .L0042290C
/* 004228C4 24130001 */   li    $s3, 1
.L004228C8:
/* 004228C8 8E300004 */  lw    $s0, 4($s1)
/* 004228CC 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 004228D0 24130002 */  li    $s3, 2
/* 004228D4 24040052 */  li    $a0, 82
/* 004228D8 02802825 */  move  $a1, $s4
/* 004228DC 92060001 */  lbu   $a2, 1($s0)
/* 004228E0 0320F809 */  jalr  $t9
/* 004228E4 92070020 */   lbu   $a3, 0x20($s0)
/* 004228E8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004228EC 8E300004 */  lw    $s0, 4($s1)
/* 004228F0 2404007B */  li    $a0, 123
/* 004228F4 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 004228F8 02402825 */  move  $a1, $s2
/* 004228FC 92060001 */  lbu   $a2, 1($s0)
/* 00422900 0320F809 */  jalr  $t9
/* 00422904 92070020 */   lbu   $a3, 0x20($s0)
/* 00422908 8FBC0034 */  lw    $gp, 0x34($sp)
.L0042290C:
/* 0042290C 24010001 */  li    $at, 1
.L00422910:
/* 00422910 16610069 */  bne   $s3, $at, .L00422AB8
/* 00422914 AFB4006C */   sw    $s4, 0x6c($sp)
/* 00422918 8E290004 */  lw    $t1, 4($s1)
/* 0042291C 8F9982A4 */  lw    $t9, %call16(genrlodrstr)($gp)
/* 00422920 24040070 */  li    $a0, 112
/* 00422924 8D260014 */  lw    $a2, 0x14($t1)
/* 00422928 AFB4006C */  sw    $s4, 0x6c($sp)
/* 0042292C 0320F809 */  jalr  $t9
/* 00422930 02802825 */   move  $a1, $s4
/* 00422934 10000060 */  b     .L00422AB8
/* 00422938 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0042293C 8E300004 */  lw    $s0, 4($s1)
.L00422940:
/* 00422940 920A002E */  lbu   $t2, 0x2e($s0)
/* 00422944 314B0007 */  andi  $t3, $t2, 7
/* 00422948 53CB005C */  beql  $fp, $t3, .L00422ABC
/* 0042294C 8EA90020 */   lw    $t1, 0x20($s5)
/* 00422950 8F998268 */  lw    $t9, %call16(outparlod)($gp)
/* 00422954 24040052 */  li    $a0, 82
/* 00422958 8E050034 */  lw    $a1, 0x34($s0)
/* 0042295C 0320F809 */  jalr  $t9
/* 00422960 00000000 */   nop   
/* 00422964 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00422968 8E2C0004 */  lw    $t4, 4($s1)
/* 0042296C 2404007B */  li    $a0, 123
/* 00422970 8F99828C */  lw    $t9, %call16(varlodstr)($gp)
/* 00422974 02A03025 */  move  $a2, $s5
/* 00422978 00003825 */  move  $a3, $zero
/* 0042297C 0320F809 */  jalr  $t9
/* 00422980 8D850014 */   lw    $a1, 0x14($t4)
/* 00422984 1040004C */  beqz  $v0, .L00422AB8
/* 00422988 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0042298C 8F998268 */  lw    $t9, %call16(outparlod)($gp)
/* 00422990 2404007B */  li    $a0, 123
/* 00422994 8E250004 */  lw    $a1, 4($s1)
/* 00422998 0320F809 */  jalr  $t9
/* 0042299C 00000000 */   nop   
/* 004229A0 10000045 */  b     .L00422AB8
/* 004229A4 8FBC0034 */   lw    $gp, 0x34($sp)
/* 004229A8 920D0016 */  lbu   $t5, 0x16($s0)
.L004229AC:
/* 004229AC 02A02825 */  move  $a1, $s5
/* 004229B0 27A6006C */  addiu $a2, $sp, 0x6c
/* 004229B4 15A0001D */  bnez  $t5, .L00422A2C
/* 004229B8 00000000 */   nop   
/* 004229BC 8E300004 */  lw    $s0, 4($s1)
/* 004229C0 920E002E */  lbu   $t6, 0x2e($s0)
/* 004229C4 31D80007 */  andi  $t8, $t6, 7
/* 004229C8 53D8003C */  beql  $fp, $t8, .L00422ABC
/* 004229CC 8EA90020 */   lw    $t1, 0x20($s5)
/* 004229D0 8F998268 */  lw    $t9, %call16(outparlod)($gp)
/* 004229D4 24040052 */  li    $a0, 82
/* 004229D8 8E050034 */  lw    $a1, 0x34($s0)
/* 004229DC 0320F809 */  jalr  $t9
/* 004229E0 00000000 */   nop   
/* 004229E4 8E390004 */  lw    $t9, 4($s1)
/* 004229E8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004229EC 2404007B */  li    $a0, 123
/* 004229F0 8F250014 */  lw    $a1, 0x14($t9)
/* 004229F4 8F99828C */  lw    $t9, %call16(varlodstr)($gp)
/* 004229F8 02A03025 */  move  $a2, $s5
/* 004229FC 00003825 */  move  $a3, $zero
/* 00422A00 0320F809 */  jalr  $t9
/* 00422A04 00000000 */   nop   
/* 00422A08 1040002B */  beqz  $v0, .L00422AB8
/* 00422A0C 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00422A10 8F998268 */  lw    $t9, %call16(outparlod)($gp)
/* 00422A14 2404007B */  li    $a0, 123
/* 00422A18 8E250004 */  lw    $a1, 4($s1)
/* 00422A1C 0320F809 */  jalr  $t9
/* 00422A20 00000000 */   nop   
/* 00422A24 10000024 */  b     .L00422AB8
/* 00422A28 8FBC0034 */   lw    $gp, 0x34($sp)
.L00422A2C:
/* 00422A2C 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 00422A30 8E2F0004 */  lw    $t7, 4($s1)
/* 00422A34 00003825 */  move  $a3, $zero
/* 00422A38 0320F809 */  jalr  $t9
/* 00422A3C 8DE40014 */   lw    $a0, 0x14($t7)
/* 00422A40 14400009 */  bnez  $v0, .L00422A68
/* 00422A44 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00422A48 8F9982A4 */  lw    $t9, %call16(genrlodrstr)($gp)
/* 00422A4C 8E280004 */  lw    $t0, 4($s1)
/* 00422A50 24040070 */  li    $a0, 112
/* 00422A54 92050016 */  lbu   $a1, 0x16($s0)
/* 00422A58 0320F809 */  jalr  $t9
/* 00422A5C 8D060014 */   lw    $a2, 0x14($t0)
/* 00422A60 10000015 */  b     .L00422AB8
/* 00422A64 8FBC0034 */   lw    $gp, 0x34($sp)
.L00422A68:
/* 00422A68 8FB4006C */  lw    $s4, 0x6c($sp)
/* 00422A6C 92050016 */  lbu   $a1, 0x16($s0)
/* 00422A70 52850012 */  beql  $s4, $a1, .L00422ABC
/* 00422A74 8EA90020 */   lw    $t1, 0x20($s5)
/* 00422A78 8E300004 */  lw    $s0, 4($s1)
/* 00422A7C 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00422A80 24040052 */  li    $a0, 82
/* 00422A84 92060001 */  lbu   $a2, 1($s0)
/* 00422A88 0320F809 */  jalr  $t9
/* 00422A8C 92070020 */   lbu   $a3, 0x20($s0)
/* 00422A90 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00422A94 8E300004 */  lw    $s0, 4($s1)
/* 00422A98 2404007B */  li    $a0, 123
/* 00422A9C 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00422AA0 02802825 */  move  $a1, $s4
/* 00422AA4 AFB4006C */  sw    $s4, 0x6c($sp)
/* 00422AA8 92060001 */  lbu   $a2, 1($s0)
/* 00422AAC 0320F809 */  jalr  $t9
/* 00422AB0 92070020 */   lbu   $a3, 0x20($s0)
/* 00422AB4 8FBC0034 */  lw    $gp, 0x34($sp)
.L00422AB8:
/* 00422AB8 8EA90020 */  lw    $t1, 0x20($s5)
.L00422ABC:
/* 00422ABC 8FB00014 */  lw    $s0, 0x14($sp)
/* 00422AC0 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00422AC4 1629FF0A */  bne   $s1, $t1, .L004226F0
/* 00422AC8 8FB30020 */   lw    $s3, 0x20($sp)
/* 00422ACC 8FBF003C */  lw    $ra, 0x3c($sp)
/* 00422AD0 8FB10018 */  lw    $s1, 0x18($sp)
/* 00422AD4 8FB40024 */  lw    $s4, 0x24($sp)
/* 00422AD8 8FB50028 */  lw    $s5, 0x28($sp)
/* 00422ADC 8FB6002C */  lw    $s6, 0x2c($sp)
/* 00422AE0 8FB70030 */  lw    $s7, 0x30($sp)
/* 00422AE4 8FBE0038 */  lw    $fp, 0x38($sp)
/* 00422AE8 03E00008 */  jr    $ra
/* 00422AEC 27BD0070 */   addiu $sp, $sp, 0x70
    .type gen_outparcode, @function
    .size gen_outparcode, .-gen_outparcode
    .end gen_outparcode
)"");

/*
0042BF08 reemit
*/
static void func_00422AF0(struct Graphnode *node) {
    RegisterColor reg;
    RegisterColor reg2;

    OPC = Uunal;
    DTYPE = 0;
    for (reg = 1; reg <= 23; reg++) {
        if (baseregexpr[reg - 1] != NULL && baseregexpr[reg - 1] != node->regdata.unk44[reg - 1]) {
            LEXLEV = coloroffset(reg);
            for (reg2 = 1; reg2 <= 23; reg2++) {
                if (unaltab[reg - 1].data[reg2 - 1] != 0) {
                    if (unaltab[reg - 1].data[reg2 - 1] == 2) {
                        IONE = coloroffset(reg2);
                        uwrite(&u);
                    }

                    unaltab[reg  - 1].data[reg2 - 1] = 0;
                    unaltab[reg2 - 1].data[reg  - 1] = 0;
                }
            }

            if (gpunaltab[reg - 1] != 0) {
                if (gpunaltab[reg - 1] == 2) {
                    IONE = r_gp;
                    uwrite(&u);
                }
                gpunaltab[reg - 1] = 0;
            }

            if (spunaltab[reg - 1] != 0) {
                if (spunaltab[reg - 1] == 2) {
                    IONE = r_sp;
                    uwrite(&u);
                }
                spunaltab[reg - 1] = 0;
            }

            baseregexpr[reg - 1] = NULL;
        }
    }
}

/*
00422D04 func_00422D04
004230F0 func_004230F0
00426FA4 func_00426FA4
0042B2C0 func_0042B2C0
*/
static void func_00422D04(struct IChain *ichain, struct Graphnode *node) {
    int reg;

    switch (ichain->type) {
        case isconst:
            genloadnum(ichain->dtype, 0, ichain->isconst.number, ichain->isconst.size, 1);
            break;

        case islda:
            genloadaddr(Ulda, ichain->islda_isilda.address.memtype, ichain->islda_isilda.address.blockno, ichain->islda_isilda.offset, ichain->islda_isilda.address.addr, ichain->islda_isilda.size);
            break;

        case isilda:
            func_00422D04(ichain->islda_isilda.outer_stack_ichain, node);
            genloadaddr(Ulda, ichain->islda_isilda.address.memtype, ichain->islda_isilda.address.blockno, ichain->islda_isilda.offset, ichain->islda_isilda.address.addr, ichain->islda_isilda.size);
            break;

        case isvar:
            if (inreg(ichain, node, &reg, 1)) {
                genrop(Ulod, reg, ichain->dtype, ichain->isvar_issvar.size);
            } else {
                igen3(Ulod, ichain, 0);
            }
            break;

        case issvar:
            func_00422D04(ichain->isvar_issvar.outer_stack_ichain, node);
            igen3(Uisld, ichain, 0);
            break;

        case isop:
            func_00422D04(ichain->isop.op1, node);
            if (optab[ichain->isop.opc].is_binary_op) {
                func_00422D04(ichain->isop.op2, node);
            }

            if (ichain->isop.opc == Udec ||
                    ichain->isop.opc == Uilod ||
                    ichain->isop.opc == Uinc ||
                    ichain->isop.opc == Uixa ||
                    ichain->isop.opc == Uirld) {
                IONE = ichain->isop.size;
            }

            if (ichain->isop.opc == Uilod || ichain->isop.opc == Uirld) {
                LENGTH = ichain->isop.unk24_u16;
                LEXLEV = ichain->isop.unk13;
                OFFSET = ichain->isop.s.mtagno;
            }

            OPC = ichain->isop.opc;

            if ((ichain->isop.opc == Uabs ||
                        ichain->isop.opc == Uadd ||
                        ichain->isop.opc == Ucvt ||
                        ichain->isop.opc == Ucvtl ||
                        ichain->isop.opc == Udec ||
                        ichain->isop.opc == Udiv ||
                        ichain->isop.opc == Uinc ||
                        ichain->isop.opc == Umod ||
                        ichain->isop.opc == Umpy ||
                        ichain->isop.opc == Uneg ||
                        ichain->isop.opc == Urem ||
                        ichain->isop.opc == Usqr ||
                        ichain->isop.opc == Usub) &&
                    ichain->isop.overflow_attr) {
                LEXLEV = OVERFLOW_ATTR;
            } else {
                LEXLEV = 0;
            }

            DTYPE = ichain->dtype;
            uwrite(&u);
            break;

        default:
            caseerror(1, 1274, "uoptemit.p", 10);
            break;
    }
}

__asm__(R""(
.set noat
.set noreorder

    .type func_0042305C, @function
func_0042305C:
    # 004230F0 func_004230F0
/* 0042305C 3C1C0FBF */  .cpload $t9
/* 00423060 279C7234 */  
/* 00423064 0399E021 */  
/* 00423068 27BDFFF8 */  addiu $sp, $sp, -8
/* 0042306C AFA5000C */  sw    $a1, 0xc($sp)
/* 00423070 AFA20004 */  sw    $v0, 4($sp)
/* 00423074 8F8389CC */  lw     $v1, %got(nocopy)($gp)
.L00423078:
/* 00423078 908E0000 */  lbu   $t6, ($a0)
/* 0042307C 3C011200 */  lui   $at, 0x1200
/* 00423080 2DCF0020 */  sltiu $t7, $t6, 0x20
/* 00423084 000FC023 */  negu  $t8, $t7
/* 00423088 0301C824 */  and   $t9, $t8, $at
/* 0042308C 01D94004 */  sllv  $t0, $t9, $t6
/* 00423090 05010015 */  bgez  $t0, .L004230E8
/* 00423094 00000000 */   nop   
/* 00423098 8C820030 */  lw    $v0, 0x30($a0)
/* 0042309C 50400008 */  beql  $v0, $zero, .L004230C0
/* 004230A0 908A0020 */   lbu   $t2, 0x20($a0)
/* 004230A4 8C690000 */  lw    $t1, ($v1)
/* 004230A8 51220005 */  beql  $t1, $v0, .L004230C0
/* 004230AC 908A0020 */   lbu   $t2, 0x20($a0)
/* 004230B0 00402025 */  move  $a0, $v0
/* 004230B4 1000FFF0 */  b     .L00423078
/* 004230B8 30A500FF */   andi  $a1, $a1, 0xff
/* 004230BC 908A0020 */  lbu   $t2, 0x20($a0)
.L004230C0:
/* 004230C0 2CAB0020 */  sltiu $t3, $a1, 0x20
/* 004230C4 000B6023 */  negu  $t4, $t3
/* 004230C8 29410004 */  slti  $at, $t2, 4
/* 004230CC 10200005 */  beqz  $at, .L004230E4
/* 004230D0 3C018800 */   lui   $at, 0x8800
/* 004230D4 01816824 */  and   $t5, $t4, $at
/* 004230D8 00AD7804 */  sllv  $t7, $t5, $a1
/* 004230DC 05E00002 */  bltz  $t7, .L004230E8
/* 004230E0 00000000 */   nop   
.L004230E4:
/* 004230E4 A0850001 */  sb    $a1, 1($a0)
.L004230E8:
/* 004230E8 03E00008 */  jr    $ra
/* 004230EC 27BD0008 */   addiu $sp, $sp, 8

    .type func_004230F0, @function
func_004230F0:
    # 004230F0 func_004230F0
    # 00424FFC func_00424FFC
    # 0042BB4C func_0042BB4C
    # 0042BF08 reemit
/* 004230F0 3C1C0FBF */  .cpload $t9
/* 004230F4 279C71A0 */  
/* 004230F8 0399E021 */  
/* 004230FC 27BDFF80 */  addiu $sp, $sp, -0x80
/* 00423100 AFB0001C */  sw    $s0, 0x1c($sp)
/* 00423104 AFA50084 */  sw    $a1, 0x84($sp)
/* 00423108 8F8589CC */  lw     $a1, %got(nocopy)($gp)
/* 0042310C 00808025 */  move  $s0, $a0
/* 00423110 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00423114 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00423118 AFA60088 */  sw    $a2, 0x88($sp)
/* 0042311C AFA7008C */  sw    $a3, 0x8c($sp)
/* 00423120 AFA2007C */  sw    $v0, 0x7c($sp)
.L00423124:
/* 00423124 520007B1 */  beql  $s0, $zero, .L00424FEC
/* 00423128 8FBF0024 */   lw    $ra, 0x24($sp)
/* 0042312C 92030000 */  lbu   $v1, ($s0)
/* 00423130 02002025 */  move  $a0, $s0
/* 00423134 246EFFFF */  addiu $t6, $v1, -1
/* 00423138 2DC10008 */  sltiu $at, $t6, 8
/* 0042313C 102007A2 */  beqz  $at, .L00424FC8
/* 00423140 00000000 */   nop   
/* 00423144 8F818044 */  lw    $at, %got(jtbl_1000AFC8)($gp)
/* 00423148 000E7080 */  sll   $t6, $t6, 2
/* 0042314C 002E0821 */  addu  $at, $at, $t6
/* 00423150 8C2EAFC8 */  lw    $t6, %lo(jtbl_1000AFC8)($at)
/* 00423154 01DC7021 */  addu  $t6, $t6, $gp
/* 00423158 01C00008 */  jr    $t6
/* 0042315C 00000000 */   nop   
.L00423160:
/* 00423160 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 00423164 8FAF007C */  lw    $t7, 0x7c($sp)
/* 00423168 8E040014 */  lw    $a0, 0x14($s0)
/* 0042316C 27A60074 */  addiu $a2, $sp, 0x74
/* 00423170 24070001 */  li    $a3, 1
/* 00423174 0320F809 */  jalr  $t9
/* 00423178 8DE5FFF4 */   lw    $a1, -0xc($t7)
/* 0042317C 10400018 */  beqz  $v0, .L004231E0
/* 00423180 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00423184 8FB80088 */  lw    $t8, 0x88($sp)
/* 00423188 13000007 */  beqz  $t8, .L004231A8
/* 0042318C 00000000 */   nop   
/* 00423190 8F998288 */  lw    $t9, %call16(base_in_reg)($gp)
/* 00423194 8FA40074 */  lw    $a0, 0x74($sp)
/* 00423198 8E050014 */  lw    $a1, 0x14($s0)
/* 0042319C 0320F809 */  jalr  $t9
/* 004231A0 03003025 */   move  $a2, $t8
/* 004231A4 8FBC0020 */  lw    $gp, 0x20($sp)
.L004231A8:
/* 004231A8 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 004231AC 00002025 */  move  $a0, $zero
/* 004231B0 0320F809 */  jalr  $t9
/* 004231B4 00000000 */   nop   
/* 004231B8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004231BC 24040052 */  li    $a0, 82
/* 004231C0 8FA50074 */  lw    $a1, 0x74($sp)
/* 004231C4 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 004231C8 92060001 */  lbu   $a2, 1($s0)
/* 004231CC 00403825 */  move  $a3, $v0
/* 004231D0 0320F809 */  jalr  $t9
/* 004231D4 00000000 */   nop   
/* 004231D8 10000783 */  b     .L00424FE8
/* 004231DC 8FBC0020 */   lw    $gp, 0x20($sp)
.L004231E0:
/* 004231E0 8E19002C */  lw    $t9, 0x2c($s0)
/* 004231E4 92050032 */  lbu   $a1, 0x32($s0)
/* 004231E8 8E060030 */  lw    $a2, 0x30($s0)
/* 004231EC AFB90010 */  sw    $t9, 0x10($sp)
/* 004231F0 8F998294 */  lw    $t9, %call16(genloadaddr)($gp)
/* 004231F4 8E090024 */  lw    $t1, 0x24($s0)
/* 004231F8 24040047 */  li    $a0, 71
/* 004231FC 8E070020 */  lw    $a3, 0x20($s0)
/* 00423200 30A50007 */  andi  $a1, $a1, 7
/* 00423204 000632C2 */  srl   $a2, $a2, 0xb
/* 00423208 0320F809 */  jalr  $t9
/* 0042320C AFA90014 */   sw    $t1, 0x14($sp)
/* 00423210 10000775 */  b     .L00424FE8
/* 00423214 8FBC0020 */   lw    $gp, 0x20($sp)
.L00423218:
/* 00423218 26020020 */  addiu $v0, $s0, 0x20
/* 0042321C 8C460000 */  lw    $a2, ($v0)
/* 00423220 8F9986C0 */  lw    $t9, %call16(constinreg)($gp)
/* 00423224 93AC0087 */  lbu   $t4, 0x87($sp)
/* 00423228 AFA60008 */  sw    $a2, 8($sp)
/* 0042322C 8C470004 */  lw    $a3, 4($v0)
/* 00423230 AFA20038 */  sw    $v0, 0x38($sp)
/* 00423234 92040001 */  lbu   $a0, 1($s0)
/* 00423238 AFAC0010 */  sw    $t4, 0x10($sp)
/* 0042323C 0320F809 */  jalr  $t9
/* 00423240 AFA7000C */   sw    $a3, 0xc($sp)
/* 00423244 10400018 */  beqz  $v0, .L004232A8
/* 00423248 8FBC0020 */   lw    $gp, 0x20($sp)
/* 0042324C 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 00423250 8FAD007C */  lw    $t5, 0x7c($sp)
/* 00423254 8E040014 */  lw    $a0, 0x14($s0)
/* 00423258 27A60074 */  addiu $a2, $sp, 0x74
/* 0042325C 24070001 */  li    $a3, 1
/* 00423260 0320F809 */  jalr  $t9
/* 00423264 8DA5FFF4 */   lw    $a1, -0xc($t5)
/* 00423268 1040000F */  beqz  $v0, .L004232A8
/* 0042326C 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00423270 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 00423274 92040001 */  lbu   $a0, 1($s0)
/* 00423278 0320F809 */  jalr  $t9
/* 0042327C 00000000 */   nop   
/* 00423280 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00423284 24040052 */  li    $a0, 82
/* 00423288 8FA50074 */  lw    $a1, 0x74($sp)
/* 0042328C 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00423290 92060001 */  lbu   $a2, 1($s0)
/* 00423294 00403825 */  move  $a3, $v0
/* 00423298 0320F809 */  jalr  $t9
/* 0042329C 00000000 */   nop   
/* 004232A0 10000751 */  b     .L00424FE8
/* 004232A4 8FBC0020 */   lw    $gp, 0x20($sp)
.L004232A8:
/* 004232A8 8FAE0038 */  lw    $t6, 0x38($sp)
/* 004232AC 8E190028 */  lw    $t9, 0x28($s0)
/* 004232B0 24090001 */  li    $t1, 1
/* 004232B4 8DC60000 */  lw    $a2, ($t6)
/* 004232B8 92040001 */  lbu   $a0, 1($s0)
/* 004232BC AFA60008 */  sw    $a2, 8($sp)
/* 004232C0 8DC70004 */  lw    $a3, 4($t6)
/* 004232C4 AFB90010 */  sw    $t9, 0x10($sp)
/* 004232C8 8F998298 */  lw    $t9, %call16(genloadnum)($gp)
/* 004232CC AFA90014 */  sw    $t1, 0x14($sp)
/* 004232D0 AFA7000C */  sw    $a3, 0xc($sp)
/* 004232D4 0320F809 */  jalr  $t9
/* 004232D8 00000000 */   nop   
/* 004232DC 10000742 */  b     .L00424FE8
/* 004232E0 8FBC0020 */   lw    $gp, 0x20($sp)
.L004232E4:
/* 004232E4 8F99829C */  lw    $t9, %call16(genloadrnum)($gp)
/* 004232E8 92040001 */  lbu   $a0, 1($s0)
/* 004232EC 96050020 */  lhu   $a1, 0x20($s0)
/* 004232F0 8E060024 */  lw    $a2, 0x24($s0)
/* 004232F4 0320F809 */  jalr  $t9
/* 004232F8 24070001 */   li    $a3, 1
/* 004232FC 1000073A */  b     .L00424FE8
/* 00423300 8FBC0020 */   lw    $gp, 0x20($sp)
.L00423304:
/* 00423304 8E020030 */  lw    $v0, 0x30($s0)
/* 00423308 50400008 */  beql  $v0, $zero, .L0042332C
/* 0042330C 24010003 */   li    $at, 3
/* 00423310 8CAA0000 */  lw    $t2, ($a1)
/* 00423314 51420005 */  beql  $t2, $v0, .L0042332C
/* 00423318 24010003 */   li    $at, 3
/* 0042331C 8C900030 */  lw    $s0, 0x30($a0)
/* 00423320 1000FF80 */  b     .L00423124
/* 00423324 A3A0008F */   sb    $zero, 0x8f($sp)
/* 00423328 24010003 */  li    $at, 3
.L0042332C:
/* 0042332C 54610018 */  bnel  $v1, $at, .L00423390
/* 00423330 92020004 */   lbu   $v0, 4($s0)
/* 00423334 920B0001 */  lbu   $t3, 1($s0)
/* 00423338 8E0C0014 */  lw    $t4, 0x14($s0)
/* 0042333C 24040052 */  li    $a0, 82
/* 00423340 A18B0001 */  sb    $t3, 1($t4)
/* 00423344 8E0E0014 */  lw    $t6, 0x14($s0)
/* 00423348 920D0020 */  lbu   $t5, 0x20($s0)
/* 0042334C A1CD0018 */  sb    $t5, 0x18($t6)
/* 00423350 8F99828C */  lw    $t9, %call16(varlodstr)($gp)
/* 00423354 8FAF007C */  lw    $t7, 0x7c($sp)
/* 00423358 8FA70088 */  lw    $a3, 0x88($sp)
/* 0042335C 8E050014 */  lw    $a1, 0x14($s0)
/* 00423360 0320F809 */  jalr  $t9
/* 00423364 8DE6FFF4 */   lw    $a2, -0xc($t7)
/* 00423368 1040071F */  beqz  $v0, .L00424FE8
/* 0042336C 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00423370 8F998264 */  lw    $t9, %call16(igen3)($gp)
/* 00423374 24040052 */  li    $a0, 82
/* 00423378 8E050014 */  lw    $a1, 0x14($s0)
/* 0042337C 0320F809 */  jalr  $t9
/* 00423380 92060023 */   lbu   $a2, 0x23($s0)
/* 00423384 10000718 */  b     .L00424FE8
/* 00423388 8FBC0020 */   lw    $gp, 0x20($sp)
/* 0042338C 92020004 */  lbu   $v0, 4($s0)
.L00423390:
/* 00423390 2407000A */  li    $a3, 10
/* 00423394 2458FFFF */  addiu $t8, $v0, -1
/* 00423398 2F010005 */  sltiu $at, $t8, 5
/* 0042339C 10200011 */  beqz  $at, .L004233E4
/* 004233A0 00000000 */   nop   
/* 004233A4 8F818044 */  lw    $at, %got(jtbl_1000AF84)($gp)
/* 004233A8 0018C080 */  sll   $t8, $t8, 2
/* 004233AC 00380821 */  addu  $at, $at, $t8
/* 004233B0 8C38AF84 */  lw    $t8, %lo(jtbl_1000AF84)($at)
/* 004233B4 031CC021 */  addu  $t8, $t8, $gp
/* 004233B8 03000008 */  jr    $t8
/* 004233BC 00000000 */   nop   
.L004233C0:
/* 004233C0 10000010 */  b     .L00423404
/* 004233C4 8E02003C */   lw    $v0, 0x3c($s0)
.L004233C8:
/* 004233C8 8E02003C */  lw    $v0, 0x3c($s0)
/* 004233CC 1440000D */  bnez  $v0, .L00423404
/* 004233D0 00000000 */   nop   
/* 004233D4 8E190014 */  lw    $t9, 0x14($s0)
/* 004233D8 8F220020 */  lw    $v0, 0x20($t9)
/* 004233DC 10000009 */  b     .L00423404
/* 004233E0 AE02003C */   sw    $v0, 0x3c($s0)
.L004233E4:
/* 004233E4 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 004233E8 8F868044 */  lw    $a2, %got(RO_1000AF7A)($gp)
/* 004233EC 24040001 */  li    $a0, 1
/* 004233F0 2405055D */  li    $a1, 1373
/* 004233F4 0320F809 */  jalr  $t9
/* 004233F8 24C6AF7A */   addiu $a2, %lo(RO_1000AF7A) # addiu $a2, $a2, -0x5086
/* 004233FC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00423400 8E02003C */  lw    $v0, 0x3c($s0)
.L00423404:
/* 00423404 1040002A */  beqz  $v0, .L004234B0
/* 00423408 00002825 */   move  $a1, $zero
/* 0042340C 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 00423410 8FAA007C */  lw    $t2, 0x7c($sp)
/* 00423414 8E040014 */  lw    $a0, 0x14($s0)
/* 00423418 27A60074 */  addiu $a2, $sp, 0x74
/* 0042341C 24070001 */  li    $a3, 1
/* 00423420 0320F809 */  jalr  $t9
/* 00423424 8D45FFF4 */   lw    $a1, -0xc($t2)
/* 00423428 1040000F */  beqz  $v0, .L00423468
/* 0042342C 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00423430 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 00423434 92040001 */  lbu   $a0, 1($s0)
/* 00423438 0320F809 */  jalr  $t9
/* 0042343C 00000000 */   nop   
/* 00423440 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00423444 24040052 */  li    $a0, 82
/* 00423448 8FA50074 */  lw    $a1, 0x74($sp)
/* 0042344C 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00423450 92060001 */  lbu   $a2, 1($s0)
/* 00423454 00403825 */  move  $a3, $v0
/* 00423458 0320F809 */  jalr  $t9
/* 0042345C 00000000 */   nop   
/* 00423460 10000007 */  b     .L00423480
/* 00423464 8FBC0020 */   lw    $gp, 0x20($sp)
.L00423468:
/* 00423468 8F998290 */  lw    $t9, %call16(spilltemplodstr)($gp)
/* 0042346C 24040052 */  li    $a0, 82
/* 00423470 92050001 */  lbu   $a1, 1($s0)
/* 00423474 0320F809 */  jalr  $t9
/* 00423478 8E06003C */   lw    $a2, 0x3c($s0)
/* 0042347C 8FBC0020 */  lw    $gp, 0x20($sp)
.L00423480:
/* 00423480 960B0006 */  lhu   $t3, 6($s0)
/* 00423484 256CFFFF */  addiu $t4, $t3, -1
/* 00423488 318DFFFF */  andi  $t5, $t4, 0xffff
/* 0042348C 15A006D6 */  bnez  $t5, .L00424FE8
/* 00423490 A60C0006 */   sh    $t4, 6($s0)
/* 00423494 920E0004 */  lbu   $t6, 4($s0)
/* 00423498 24020001 */  li    $v0, 1
/* 0042349C 544E06D3 */  bnel  $v0, $t6, .L00424FEC
/* 004234A0 8FBF0024 */   lw    $ra, 0x24($sp)
/* 004234A4 8E0F003C */  lw    $t7, 0x3c($s0)
/* 004234A8 100006CF */  b     .L00424FE8
/* 004234AC A1E2000C */   sb    $v0, 0xc($t7)
.L004234B0:
/* 004234B0 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 004234B4 8E040024 */  lw    $a0, 0x24($s0)
/* 004234B8 00003025 */  move  $a2, $zero
/* 004234BC 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 004234C0 00003825 */  move  $a3, $zero
/* 004234C4 0320F809 */  jalr  $t9
/* 004234C8 8FA2007C */   lw    $v0, 0x7c($sp)
/* 004234CC 92180001 */  lbu   $t8, 1($s0)
/* 004234D0 8E190014 */  lw    $t9, 0x14($s0)
/* 004234D4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004234D8 2404003D */  li    $a0, 61
/* 004234DC A3380001 */  sb    $t8, 1($t9)
/* 004234E0 8E0A0014 */  lw    $t2, 0x14($s0)
/* 004234E4 92090020 */  lbu   $t1, 0x20($s0)
/* 004234E8 A1490018 */  sb    $t1, 0x18($t2)
/* 004234EC 8F998264 */  lw    $t9, %call16(igen3)($gp)
/* 004234F0 92060023 */  lbu   $a2, 0x23($s0)
/* 004234F4 8E050014 */  lw    $a1, 0x14($s0)
/* 004234F8 0320F809 */  jalr  $t9
/* 004234FC 00000000 */   nop   
/* 00423500 960B0006 */  lhu   $t3, 6($s0)
/* 00423504 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00423508 2D610002 */  sltiu $at, $t3, 2
/* 0042350C 54200006 */  bnezl $at, .L00423528
/* 00423510 92020004 */   lbu   $v0, 4($s0)
/* 00423514 92020004 */  lbu   $v0, 4($s0)
/* 00423518 24010002 */  li    $at, 2
/* 0042351C 5441000D */  bnel  $v0, $at, .L00423554
/* 00423520 2C590020 */   sltiu $t9, $v0, 0x20
/* 00423524 92020004 */  lbu   $v0, 4($s0)
.L00423528:
/* 00423528 3C011400 */  lui   $at, 0x1400
/* 0042352C 2C4C0020 */  sltiu $t4, $v0, 0x20
/* 00423530 000C6823 */  negu  $t5, $t4
/* 00423534 01A17024 */  and   $t6, $t5, $at
/* 00423538 004E7804 */  sllv  $t7, $t6, $v0
/* 0042353C 05E306AB */  bgezl $t7, .L00424FEC
/* 00423540 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00423544 8E18003C */  lw    $t8, 0x3c($s0)
/* 00423548 570006A8 */  bnezl $t8, .L00424FEC
/* 0042354C 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00423550 2C590020 */  sltiu $t9, $v0, 0x20
.L00423554:
/* 00423554 00194823 */  negu  $t1, $t9
/* 00423558 3C011C00 */  lui   $at, 0x1c00
/* 0042355C 01215024 */  and   $t2, $t1, $at
/* 00423560 004A5804 */  sllv  $t3, $t2, $v0
/* 00423564 05610005 */  bgez  $t3, .L0042357C
/* 00423568 00000000 */   nop   
/* 0042356C 8E040014 */  lw    $a0, 0x14($s0)
/* 00423570 8C8C0020 */  lw    $t4, 0x20($a0)
/* 00423574 10000008 */  b     .L00423598
/* 00423578 AE0C003C */   sw    $t4, 0x3c($s0)
.L0042357C:
/* 0042357C 8F998604 */  lw    $t9, %call16(gettemp)($gp)
/* 00423580 2604003C */  addiu $a0, $s0, 0x3c
/* 00423584 24050004 */  li    $a1, 4
/* 00423588 0320F809 */  jalr  $t9
/* 0042358C 00000000 */   nop   
/* 00423590 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00423594 8E040014 */  lw    $a0, 0x14($s0)
.L00423598:
/* 00423598 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 0042359C 8FAD007C */  lw    $t5, 0x7c($sp)
/* 004235A0 27A60074 */  addiu $a2, $sp, 0x74
/* 004235A4 00003825 */  move  $a3, $zero
/* 004235A8 0320F809 */  jalr  $t9
/* 004235AC 8DA5FFF4 */   lw    $a1, -0xc($t5)
/* 004235B0 1040000F */  beqz  $v0, .L004235F0
/* 004235B4 8FBC0020 */   lw    $gp, 0x20($sp)
/* 004235B8 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 004235BC 92040001 */  lbu   $a0, 1($s0)
/* 004235C0 0320F809 */  jalr  $t9
/* 004235C4 00000000 */   nop   
/* 004235C8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004235CC 2404007B */  li    $a0, 123
/* 004235D0 8FA50074 */  lw    $a1, 0x74($sp)
/* 004235D4 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 004235D8 92060001 */  lbu   $a2, 1($s0)
/* 004235DC 00403825 */  move  $a3, $v0
/* 004235E0 0320F809 */  jalr  $t9
/* 004235E4 00000000 */   nop   
/* 004235E8 1000067F */  b     .L00424FE8
/* 004235EC 8FBC0020 */   lw    $gp, 0x20($sp)
.L004235F0:
/* 004235F0 8F998290 */  lw    $t9, %call16(spilltemplodstr)($gp)
/* 004235F4 2404007B */  li    $a0, 123
/* 004235F8 92050001 */  lbu   $a1, 1($s0)
/* 004235FC 0320F809 */  jalr  $t9
/* 00423600 8E06003C */   lw    $a2, 0x3c($s0)
/* 00423604 10000678 */  b     .L00424FE8
/* 00423608 8FBC0020 */   lw    $gp, 0x20($sp)
.L0042360C:
/* 0042360C 92020004 */  lbu   $v0, 4($s0)
/* 00423610 2C410006 */  sltiu $at, $v0, 6
/* 00423614 10200018 */  beqz  $at, .L00423678
/* 00423618 00000000 */   nop   
/* 0042361C 8F818044 */  lw    $at, %got(jtbl_1000AF98)($gp)
/* 00423620 00027080 */  sll   $t6, $v0, 2
/* 00423624 002E0821 */  addu  $at, $at, $t6
/* 00423628 8C2EAF98 */  lw    $t6, %lo(jtbl_1000AF98)($at)
/* 0042362C 01DC7021 */  addu  $t6, $t6, $gp
/* 00423630 01C00008 */  jr    $t6
/* 00423634 00000000 */   nop   
.L00423638:
/* 00423638 10000018 */  b     .L0042369C
/* 0042363C 8E020038 */   lw    $v0, 0x38($s0)
.L00423640:
/* 00423640 8E020038 */  lw    $v0, 0x38($s0)
/* 00423644 14400015 */  bnez  $v0, .L0042369C
/* 00423648 00000000 */   nop   
/* 0042364C 8E0F0014 */  lw    $t7, 0x14($s0)
/* 00423650 8DE20024 */  lw    $v0, 0x24($t7)
/* 00423654 10000011 */  b     .L0042369C
/* 00423658 AE020038 */   sw    $v0, 0x38($s0)
.L0042365C:
/* 0042365C 8F99861C */  lw    $t9, %call16(dbgerror)($gp)
/* 00423660 24040137 */  li    $a0, 311
/* 00423664 0320F809 */  jalr  $t9
/* 00423668 00000000 */   nop   
/* 0042366C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00423670 1000000A */  b     .L0042369C
/* 00423674 8E020038 */   lw    $v0, 0x38($s0)
.L00423678:
/* 00423678 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0042367C 8F868044 */  lw    $a2, %got(RO_1000AF70)($gp)
/* 00423680 24040001 */  li    $a0, 1
/* 00423684 24050592 */  li    $a1, 1426
/* 00423688 2407000A */  li    $a3, 10
/* 0042368C 0320F809 */  jalr  $t9
/* 00423690 24C6AF70 */   addiu $a2, %lo(RO_1000AF70) # addiu $a2, $a2, -0x5090
/* 00423694 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00423698 8E020038 */  lw    $v0, 0x38($s0)
.L0042369C:
/* 0042369C 1040002B */  beqz  $v0, .L0042374C
/* 004236A0 00002825 */   move  $a1, $zero
/* 004236A4 8FB9007C */  lw    $t9, 0x7c($sp)
/* 004236A8 8E040014 */  lw    $a0, 0x14($s0)
/* 004236AC 27A60074 */  addiu $a2, $sp, 0x74
/* 004236B0 8F25FFF4 */  lw    $a1, -0xc($t9)
/* 004236B4 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 004236B8 24070001 */  li    $a3, 1
/* 004236BC 0320F809 */  jalr  $t9
/* 004236C0 00000000 */   nop   
/* 004236C4 1040000F */  beqz  $v0, .L00423704
/* 004236C8 8FBC0020 */   lw    $gp, 0x20($sp)
/* 004236CC 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 004236D0 92040001 */  lbu   $a0, 1($s0)
/* 004236D4 0320F809 */  jalr  $t9
/* 004236D8 00000000 */   nop   
/* 004236DC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004236E0 24040052 */  li    $a0, 82
/* 004236E4 8FA50074 */  lw    $a1, 0x74($sp)
/* 004236E8 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 004236EC 92060001 */  lbu   $a2, 1($s0)
/* 004236F0 00403825 */  move  $a3, $v0
/* 004236F4 0320F809 */  jalr  $t9
/* 004236F8 00000000 */   nop   
/* 004236FC 10000007 */  b     .L0042371C
/* 00423700 8FBC0020 */   lw    $gp, 0x20($sp)
.L00423704:
/* 00423704 8F998290 */  lw    $t9, %call16(spilltemplodstr)($gp)
/* 00423708 24040052 */  li    $a0, 82
/* 0042370C 92050001 */  lbu   $a1, 1($s0)
/* 00423710 0320F809 */  jalr  $t9
/* 00423714 8E060038 */   lw    $a2, 0x38($s0)
/* 00423718 8FBC0020 */  lw    $gp, 0x20($sp)
.L0042371C:
/* 0042371C 96090006 */  lhu   $t1, 6($s0)
/* 00423720 252AFFFF */  addiu $t2, $t1, -1
/* 00423724 314BFFFF */  andi  $t3, $t2, 0xffff
/* 00423728 1560062F */  bnez  $t3, .L00424FE8
/* 0042372C A60A0006 */   sh    $t2, 6($s0)
/* 00423730 920C0004 */  lbu   $t4, 4($s0)
/* 00423734 24020001 */  li    $v0, 1
/* 00423738 544C062C */  bnel  $v0, $t4, .L00424FEC
/* 0042373C 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00423740 8E0D0038 */  lw    $t5, 0x38($s0)
/* 00423744 10000628 */  b     .L00424FE8
/* 00423748 A1A2000C */   sb    $v0, 0xc($t5)
.L0042374C:
/* 0042374C 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 00423750 8E040034 */  lw    $a0, 0x34($s0)
/* 00423754 00003025 */  move  $a2, $zero
/* 00423758 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 0042375C 00003825 */  move  $a3, $zero
/* 00423760 0320F809 */  jalr  $t9
/* 00423764 8FA2007C */   lw    $v0, 0x7c($sp)
/* 00423768 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042376C 92050032 */  lbu   $a1, 0x32($s0)
/* 00423770 8E060030 */  lw    $a2, 0x30($s0)
/* 00423774 8F998294 */  lw    $t9, %call16(genloadaddr)($gp)
/* 00423778 8E0E002C */  lw    $t6, 0x2c($s0)
/* 0042377C 8E0F0024 */  lw    $t7, 0x24($s0)
/* 00423780 24040032 */  li    $a0, 50
/* 00423784 8E070020 */  lw    $a3, 0x20($s0)
/* 00423788 30A50007 */  andi  $a1, $a1, 7
/* 0042378C 000632C2 */  srl   $a2, $a2, 0xb
/* 00423790 AFAE0010 */  sw    $t6, 0x10($sp)
/* 00423794 0320F809 */  jalr  $t9
/* 00423798 AFAF0014 */   sw    $t7, 0x14($sp)
/* 0042379C 96180006 */  lhu   $t8, 6($s0)
/* 004237A0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004237A4 2F010002 */  sltiu $at, $t8, 2
/* 004237A8 54200006 */  bnezl $at, .L004237C4
/* 004237AC 92020004 */   lbu   $v0, 4($s0)
/* 004237B0 92020004 */  lbu   $v0, 4($s0)
/* 004237B4 24010002 */  li    $at, 2
/* 004237B8 5441000C */  bnel  $v0, $at, .L004237EC
/* 004237BC 2C4D0020 */   sltiu $t5, $v0, 0x20
/* 004237C0 92020004 */  lbu   $v0, 4($s0)
.L004237C4:
/* 004237C4 3C011400 */  lui   $at, 0x1400
/* 004237C8 2C590020 */  sltiu $t9, $v0, 0x20
/* 004237CC 00194823 */  negu  $t1, $t9
/* 004237D0 01215024 */  and   $t2, $t1, $at
/* 004237D4 004A5804 */  sllv  $t3, $t2, $v0
/* 004237D8 05630604 */  bgezl $t3, .L00424FEC
/* 004237DC 8FBF0024 */   lw    $ra, 0x24($sp)
/* 004237E0 8E0C0038 */  lw    $t4, 0x38($s0)
/* 004237E4 15800600 */  bnez  $t4, .L00424FE8
/* 004237E8 2C4D0020 */   sltiu $t5, $v0, 0x20
.L004237EC:
/* 004237EC 000D7023 */  negu  $t6, $t5
/* 004237F0 3C011C00 */  lui   $at, 0x1c00
/* 004237F4 01C17824 */  and   $t7, $t6, $at
/* 004237F8 004FC004 */  sllv  $t8, $t7, $v0
/* 004237FC 07010005 */  bgez  $t8, .L00423814
/* 00423800 00000000 */   nop   
/* 00423804 8E040014 */  lw    $a0, 0x14($s0)
/* 00423808 8C990024 */  lw    $t9, 0x24($a0)
/* 0042380C 10000008 */  b     .L00423830
/* 00423810 AE190038 */   sw    $t9, 0x38($s0)
.L00423814:
/* 00423814 8F998604 */  lw    $t9, %call16(gettemp)($gp)
/* 00423818 26040038 */  addiu $a0, $s0, 0x38
/* 0042381C 24050004 */  li    $a1, 4
/* 00423820 0320F809 */  jalr  $t9
/* 00423824 00000000 */   nop   
/* 00423828 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042382C 8E040014 */  lw    $a0, 0x14($s0)
.L00423830:
/* 00423830 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 00423834 8FA9007C */  lw    $t1, 0x7c($sp)
/* 00423838 27A60074 */  addiu $a2, $sp, 0x74
/* 0042383C 00003825 */  move  $a3, $zero
/* 00423840 0320F809 */  jalr  $t9
/* 00423844 8D25FFF4 */   lw    $a1, -0xc($t1)
/* 00423848 1040000F */  beqz  $v0, .L00423888
/* 0042384C 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00423850 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 00423854 92040001 */  lbu   $a0, 1($s0)
/* 00423858 0320F809 */  jalr  $t9
/* 0042385C 00000000 */   nop   
/* 00423860 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00423864 2404007B */  li    $a0, 123
/* 00423868 8FA50074 */  lw    $a1, 0x74($sp)
/* 0042386C 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00423870 92060001 */  lbu   $a2, 1($s0)
/* 00423874 00403825 */  move  $a3, $v0
/* 00423878 0320F809 */  jalr  $t9
/* 0042387C 00000000 */   nop   
/* 00423880 100005D9 */  b     .L00424FE8
/* 00423884 8FBC0020 */   lw    $gp, 0x20($sp)
.L00423888:
/* 00423888 8F998290 */  lw    $t9, %call16(spilltemplodstr)($gp)
/* 0042388C 2404007B */  li    $a0, 123
/* 00423890 92050001 */  lbu   $a1, 1($s0)
/* 00423894 0320F809 */  jalr  $t9
/* 00423898 8E060038 */   lw    $a2, 0x38($s0)
/* 0042389C 100005D2 */  b     .L00424FE8
/* 004238A0 8FBC0020 */   lw    $gp, 0x20($sp)
.L004238A4:
/* 004238A4 92020004 */  lbu   $v0, 4($s0)
/* 004238A8 2C410006 */  sltiu $at, $v0, 6
/* 004238AC 10200018 */  beqz  $at, .L00423910
/* 004238B0 00000000 */   nop   
/* 004238B4 8F818044 */  lw    $at, %got(jtbl_1000AFB0)($gp)
/* 004238B8 00025080 */  sll   $t2, $v0, 2
/* 004238BC 002A0821 */  addu  $at, $at, $t2
/* 004238C0 8C2AAFB0 */  lw    $t2, %lo(jtbl_1000AFB0)($at)
/* 004238C4 015C5021 */  addu  $t2, $t2, $gp
/* 004238C8 01400008 */  jr    $t2
/* 004238CC 00000000 */   nop   
.L004238D0:
/* 004238D0 10000018 */  b     .L00423934
/* 004238D4 8E020030 */   lw    $v0, 0x30($s0)
.L004238D8:
/* 004238D8 8E020030 */  lw    $v0, 0x30($s0)
/* 004238DC 14400015 */  bnez  $v0, .L00423934
/* 004238E0 00000000 */   nop   
/* 004238E4 8E0B0014 */  lw    $t3, 0x14($s0)
/* 004238E8 8D620020 */  lw    $v0, 0x20($t3)
/* 004238EC 10000011 */  b     .L00423934
/* 004238F0 AE020030 */   sw    $v0, 0x30($s0)
.L004238F4:
/* 004238F4 8F99861C */  lw    $t9, %call16(dbgerror)($gp)
/* 004238F8 24040137 */  li    $a0, 311
/* 004238FC 0320F809 */  jalr  $t9
/* 00423900 00000000 */   nop   
/* 00423904 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00423908 1000000A */  b     .L00423934
/* 0042390C 8E020030 */   lw    $v0, 0x30($s0)
.L00423910:
/* 00423910 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00423914 8F868044 */  lw    $a2, %got(RO_1000AF66)($gp)
/* 00423918 24040001 */  li    $a0, 1
/* 0042391C 240505C4 */  li    $a1, 1476
/* 00423920 2407000A */  li    $a3, 10
/* 00423924 0320F809 */  jalr  $t9
/* 00423928 24C6AF66 */   addiu $a2, %lo(RO_1000AF66) # addiu $a2, $a2, -0x509a
/* 0042392C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00423930 8E020030 */  lw    $v0, 0x30($s0)
.L00423934:
/* 00423934 1040006E */  beqz  $v0, .L00423AF0
/* 00423938 93AD008F */   lbu   $t5, 0x8f($sp)
/* 0042393C 11A0000F */  beqz  $t5, .L0042397C
/* 00423940 27A50058 */   addiu $a1, $sp, 0x58
/* 00423944 8F8E8C34 */  lw     $t6, %got(loopno)($gp)
/* 00423948 8F99871C */  lw    $t9, %call16(check_loop_nest_ix_cand)($gp)
/* 0042394C 8E040014 */  lw    $a0, 0x14($s0)
/* 00423950 8DCE0000 */  lw    $t6, ($t6)
/* 00423954 27A60054 */  addiu $a2, $sp, 0x54
/* 00423958 0320F809 */  jalr  $t9
/* 0042395C AFAE0058 */   sw    $t6, 0x58($sp)
/* 00423960 8FAF0054 */  lw    $t7, 0x54($sp)
/* 00423964 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00423968 11E00004 */  beqz  $t7, .L0042397C
/* 0042396C 00000000 */   nop   
/* 00423970 8F8288E0 */  lw     $v0, %got(use_ix)($gp)
/* 00423974 24180001 */  li    $t8, 1
/* 00423978 A0580000 */  sb    $t8, ($v0)
.L0042397C:
/* 0042397C 8F8288E0 */  lw     $v0, %got(use_ix)($gp)
/* 00423980 90590000 */  lbu   $t9, ($v0)
/* 00423984 13200027 */  beqz  $t9, .L00423A24
/* 00423988 00000000 */   nop   
/* 0042398C 8F998724 */  lw    $t9, %call16(get_ix_source)($gp)
/* 00423990 8FA40054 */  lw    $a0, 0x54($sp)
/* 00423994 8FA50058 */  lw    $a1, 0x58($sp)
/* 00423998 0320F809 */  jalr  $t9
/* 0042399C 00000000 */   nop   
/* 004239A0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004239A4 8FA9007C */  lw    $t1, 0x7c($sp)
/* 004239A8 AFA20050 */  sw    $v0, 0x50($sp)
/* 004239AC 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 004239B0 8C440000 */  lw    $a0, ($v0)
/* 004239B4 27A60074 */  addiu $a2, $sp, 0x74
/* 004239B8 24070001 */  li    $a3, 1
/* 004239BC 0320F809 */  jalr  $t9
/* 004239C0 8D25FFF4 */   lw    $a1, -0xc($t1)
/* 004239C4 1040000F */  beqz  $v0, .L00423A04
/* 004239C8 8FBC0020 */   lw    $gp, 0x20($sp)
/* 004239CC 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 004239D0 00002025 */  move  $a0, $zero
/* 004239D4 0320F809 */  jalr  $t9
/* 004239D8 00000000 */   nop   
/* 004239DC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004239E0 24040052 */  li    $a0, 82
/* 004239E4 8FA50074 */  lw    $a1, 0x74($sp)
/* 004239E8 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 004239EC 00003025 */  move  $a2, $zero
/* 004239F0 00403825 */  move  $a3, $v0
/* 004239F4 0320F809 */  jalr  $t9
/* 004239F8 00000000 */   nop   
/* 004239FC 10000009 */  b     .L00423A24
/* 00423A00 8FBC0020 */   lw    $gp, 0x20($sp)
.L00423A04:
/* 00423A04 8FAA0050 */  lw    $t2, 0x50($sp)
/* 00423A08 8F998290 */  lw    $t9, %call16(spilltemplodstr)($gp)
/* 00423A0C 24040052 */  li    $a0, 82
/* 00423A10 8D4B0000 */  lw    $t3, ($t2)
/* 00423A14 00002825 */  move  $a1, $zero
/* 00423A18 0320F809 */  jalr  $t9
/* 00423A1C 8D660020 */   lw    $a2, 0x20($t3)
/* 00423A20 8FBC0020 */  lw    $gp, 0x20($sp)
.L00423A24:
/* 00423A24 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 00423A28 8FAC007C */  lw    $t4, 0x7c($sp)
/* 00423A2C 8E040014 */  lw    $a0, 0x14($s0)
/* 00423A30 27A60074 */  addiu $a2, $sp, 0x74
/* 00423A34 24070001 */  li    $a3, 1
/* 00423A38 0320F809 */  jalr  $t9
/* 00423A3C 8D85FFF4 */   lw    $a1, -0xc($t4)
/* 00423A40 10400018 */  beqz  $v0, .L00423AA4
/* 00423A44 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00423A48 8FAD0088 */  lw    $t5, 0x88($sp)
/* 00423A4C 11A00007 */  beqz  $t5, .L00423A6C
/* 00423A50 00000000 */   nop   
/* 00423A54 8F998288 */  lw    $t9, %call16(base_in_reg)($gp)
/* 00423A58 8FA40074 */  lw    $a0, 0x74($sp)
/* 00423A5C 8E050014 */  lw    $a1, 0x14($s0)
/* 00423A60 0320F809 */  jalr  $t9
/* 00423A64 01A03025 */   move  $a2, $t5
/* 00423A68 8FBC0020 */  lw    $gp, 0x20($sp)
.L00423A6C:
/* 00423A6C 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 00423A70 92040023 */  lbu   $a0, 0x23($s0)
/* 00423A74 0320F809 */  jalr  $t9
/* 00423A78 00000000 */   nop   
/* 00423A7C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00423A80 24040052 */  li    $a0, 82
/* 00423A84 8FA50074 */  lw    $a1, 0x74($sp)
/* 00423A88 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00423A8C 92060023 */  lbu   $a2, 0x23($s0)
/* 00423A90 00403825 */  move  $a3, $v0
/* 00423A94 0320F809 */  jalr  $t9
/* 00423A98 00000000 */   nop   
/* 00423A9C 10000007 */  b     .L00423ABC
/* 00423AA0 8FBC0020 */   lw    $gp, 0x20($sp)
.L00423AA4:
/* 00423AA4 8F998290 */  lw    $t9, %call16(spilltemplodstr)($gp)
/* 00423AA8 24040052 */  li    $a0, 82
/* 00423AAC 92050023 */  lbu   $a1, 0x23($s0)
/* 00423AB0 0320F809 */  jalr  $t9
/* 00423AB4 8E060030 */   lw    $a2, 0x30($s0)
/* 00423AB8 8FBC0020 */  lw    $gp, 0x20($sp)
.L00423ABC:
/* 00423ABC 960E0006 */  lhu   $t6, 6($s0)
/* 00423AC0 25CFFFFF */  addiu $t7, $t6, -1
/* 00423AC4 31F8FFFF */  andi  $t8, $t7, 0xffff
/* 00423AC8 17000547 */  bnez  $t8, .L00424FE8
/* 00423ACC A60F0006 */   sh    $t7, 6($s0)
/* 00423AD0 92190004 */  lbu   $t9, 4($s0)
/* 00423AD4 24010001 */  li    $at, 1
/* 00423AD8 57210544 */  bnel  $t9, $at, .L00424FEC
/* 00423ADC 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00423AE0 8E0A0030 */  lw    $t2, 0x30($s0)
/* 00423AE4 24090001 */  li    $t1, 1
/* 00423AE8 1000053F */  b     .L00424FE8
/* 00423AEC A149000C */   sb    $t1, 0xc($t2)
.L00423AF0:
/* 00423AF0 92030020 */  lbu   $v1, 0x20($s0)
/* 00423AF4 8F8C8DBC */  lw     $t4, %got(optab)($gp)
/* 00423AF8 00035880 */  sll   $t3, $v1, 2
/* 00423AFC 01635823 */  subu  $t3, $t3, $v1
/* 00423B00 016C6821 */  addu  $t5, $t3, $t4
/* 00423B04 91AE0002 */  lbu   $t6, 2($t5)
/* 00423B08 246CFFE0 */  addiu $t4, $v1, -0x20
/* 00423B0C 2D980080 */  sltiu $t8, $t4, 0x80
/* 00423B10 11C0028B */  beqz  $t6, .L00424540
/* 00423B14 2465FFE0 */   addiu $a1, $v1, -0x20
/* 00423B18 2CAF0040 */  sltiu $t7, $a1, 0x40
/* 00423B1C 11E00009 */  beqz  $t7, .L00423B44
/* 00423B20 A3A0007B */   sb    $zero, 0x7b($sp)
/* 00423B24 8F898044 */  lw    $t1, %got(D_10010574)($gp)
/* 00423B28 0005C143 */  sra   $t8, $a1, 5
/* 00423B2C 0018C880 */  sll   $t9, $t8, 2
/* 00423B30 25290574 */  addiu $t1, %lo(D_10010574) # addiu $t1, $t1, 0x574
/* 00423B34 01395021 */  addu  $t2, $t1, $t9
/* 00423B38 8D4B0000 */  lw    $t3, ($t2)
/* 00423B3C 00AB6004 */  sllv  $t4, $t3, $a1
/* 00423B40 298F0000 */  slti  $t7, $t4, 0
.L00423B44:
/* 00423B44 11E000E6 */  beqz  $t7, .L00423EE0
/* 00423B48 00003025 */   move  $a2, $zero
/* 00423B4C 8E020038 */  lw    $v0, 0x38($s0)
/* 00423B50 8C480004 */  lw    $t0, 4($v0)
/* 00423B54 15000005 */  bnez  $t0, .L00423B6C
/* 00423B58 00000000 */   nop   
/* 00423B5C 8E0E003C */  lw    $t6, 0x3c($s0)
/* 00423B60 8DD80004 */  lw    $t8, 4($t6)
/* 00423B64 530000DF */  beql  $t8, $zero, .L00423EE4
/* 00423B68 2CB80040 */   sltiu $t8, $a1, 0x40
.L00423B6C:
/* 00423B6C 15000070 */  bnez  $t0, .L00423D30
/* 00423B70 27A60074 */   addiu $a2, $sp, 0x74
/* 00423B74 8E02003C */  lw    $v0, 0x3c($s0)
/* 00423B78 8E0A0024 */  lw    $t2, 0x24($s0)
/* 00423B7C 24010002 */  li    $at, 2
/* 00423B80 8C490004 */  lw    $t1, 4($v0)
/* 00423B84 27A60074 */  addiu $a2, $sp, 0x74
/* 00423B88 24070001 */  li    $a3, 1
/* 00423B8C 91390012 */  lbu   $t9, 0x12($t1)
/* 00423B90 A2190001 */  sb    $t9, 1($s0)
/* 00423B94 914B0000 */  lbu   $t3, ($t2)
/* 00423B98 8FAC007C */  lw    $t4, 0x7c($sp)
/* 00423B9C 8FAF007C */  lw    $t7, 0x7c($sp)
/* 00423BA0 5561001F */  bnel  $t3, $at, .L00423C20
/* 00423BA4 8E0D0038 */   lw    $t5, 0x38($s0)
/* 00423BA8 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 00423BAC 8D85FFF4 */  lw    $a1, -0xc($t4)
/* 00423BB0 8C440028 */  lw    $a0, 0x28($v0)
/* 00423BB4 27A60074 */  addiu $a2, $sp, 0x74
/* 00423BB8 24070001 */  li    $a3, 1
/* 00423BBC 0320F809 */  jalr  $t9
/* 00423BC0 AFA50038 */   sw    $a1, 0x38($sp)
/* 00423BC4 1040000F */  beqz  $v0, .L00423C04
/* 00423BC8 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00423BCC 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 00423BD0 92040001 */  lbu   $a0, 1($s0)
/* 00423BD4 0320F809 */  jalr  $t9
/* 00423BD8 00000000 */   nop   
/* 00423BDC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00423BE0 24040052 */  li    $a0, 82
/* 00423BE4 8FA50074 */  lw    $a1, 0x74($sp)
/* 00423BE8 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00423BEC 92060001 */  lbu   $a2, 1($s0)
/* 00423BF0 00403825 */  move  $a3, $v0
/* 00423BF4 0320F809 */  jalr  $t9
/* 00423BF8 00000000 */   nop   
/* 00423BFC 10000025 */  b     .L00423C94
/* 00423C00 8FBC0020 */   lw    $gp, 0x20($sp)
.L00423C04:
/* 00423C04 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00423C08 8E04003C */  lw    $a0, 0x3c($s0)
/* 00423C0C 0320F809 */  jalr  $t9
/* 00423C10 24840008 */   addiu $a0, $a0, 8
/* 00423C14 1000001F */  b     .L00423C94
/* 00423C18 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00423C1C 8E0D0038 */  lw    $t5, 0x38($s0)
.L00423C20:
/* 00423C20 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 00423C24 8DE5FFF4 */  lw    $a1, -0xc($t7)
/* 00423C28 8DA40000 */  lw    $a0, ($t5)
/* 00423C2C 0320F809 */  jalr  $t9
/* 00423C30 AFA50038 */   sw    $a1, 0x38($sp)
/* 00423C34 1040000F */  beqz  $v0, .L00423C74
/* 00423C38 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00423C3C 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 00423C40 92040001 */  lbu   $a0, 1($s0)
/* 00423C44 0320F809 */  jalr  $t9
/* 00423C48 00000000 */   nop   
/* 00423C4C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00423C50 24040052 */  li    $a0, 82
/* 00423C54 8FA50074 */  lw    $a1, 0x74($sp)
/* 00423C58 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00423C5C 92060001 */  lbu   $a2, 1($s0)
/* 00423C60 00403825 */  move  $a3, $v0
/* 00423C64 0320F809 */  jalr  $t9
/* 00423C68 00000000 */   nop   
/* 00423C6C 10000009 */  b     .L00423C94
/* 00423C70 8FBC0020 */   lw    $gp, 0x20($sp)
.L00423C74:
/* 00423C74 8E0E0038 */  lw    $t6, 0x38($s0)
/* 00423C78 8F998290 */  lw    $t9, %call16(spilltemplodstr)($gp)
/* 00423C7C 24040052 */  li    $a0, 82
/* 00423C80 8DD80000 */  lw    $t8, ($t6)
/* 00423C84 92050001 */  lbu   $a1, 1($s0)
/* 00423C88 0320F809 */  jalr  $t9
/* 00423C8C 8F060020 */   lw    $a2, 0x20($t8)
/* 00423C90 8FBC0020 */  lw    $gp, 0x20($sp)
.L00423C94:
/* 00423C94 8E03003C */  lw    $v1, 0x3c($s0)
/* 00423C98 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 00423C9C 8FA50038 */  lw    $a1, 0x38($sp)
/* 00423CA0 27A60074 */  addiu $a2, $sp, 0x74
/* 00423CA4 24070001 */  li    $a3, 1
/* 00423CA8 8C640004 */  lw    $a0, 4($v1)
/* 00423CAC 0320F809 */  jalr  $t9
/* 00423CB0 AFA3003C */   sw    $v1, 0x3c($sp)
/* 00423CB4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00423CB8 1040000F */  beqz  $v0, .L00423CF8
/* 00423CBC 8FA3003C */   lw    $v1, 0x3c($sp)
/* 00423CC0 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 00423CC4 92040001 */  lbu   $a0, 1($s0)
/* 00423CC8 0320F809 */  jalr  $t9
/* 00423CCC 00000000 */   nop   
/* 00423CD0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00423CD4 24040052 */  li    $a0, 82
/* 00423CD8 8FA50074 */  lw    $a1, 0x74($sp)
/* 00423CDC 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00423CE0 92060001 */  lbu   $a2, 1($s0)
/* 00423CE4 00403825 */  move  $a3, $v0
/* 00423CE8 0320F809 */  jalr  $t9
/* 00423CEC 00000000 */   nop   
/* 00423CF0 10000008 */  b     .L00423D14
/* 00423CF4 8FBC0020 */   lw    $gp, 0x20($sp)
.L00423CF8:
/* 00423CF8 8F998290 */  lw    $t9, %call16(spilltemplodstr)($gp)
/* 00423CFC 8C690004 */  lw    $t1, 4($v1)
/* 00423D00 24040052 */  li    $a0, 82
/* 00423D04 92050001 */  lbu   $a1, 1($s0)
/* 00423D08 0320F809 */  jalr  $t9
/* 00423D0C 8D260020 */   lw    $a2, 0x20($t1)
/* 00423D10 8FBC0020 */  lw    $gp, 0x20($sp)
.L00423D14:
/* 00423D14 8E19003C */  lw    $t9, 0x3c($s0)
/* 00423D18 240B0001 */  li    $t3, 1
/* 00423D1C 8F2A002C */  lw    $t2, 0x2c($t9)
/* 00423D20 0541006D */  bgez  $t2, .L00423ED8
/* 00423D24 00000000 */   nop   
/* 00423D28 1000006B */  b     .L00423ED8
/* 00423D2C A3AB007B */   sb    $t3, 0x7b($sp)
.L00423D30:
/* 00423D30 910C0012 */  lbu   $t4, 0x12($t0)
/* 00423D34 8FAD007C */  lw    $t5, 0x7c($sp)
/* 00423D38 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 00423D3C A20C0001 */  sb    $t4, 1($s0)
/* 00423D40 8DA5FFF4 */  lw    $a1, -0xc($t5)
/* 00423D44 AFA2003C */  sw    $v0, 0x3c($sp)
/* 00423D48 8C440004 */  lw    $a0, 4($v0)
/* 00423D4C 24070001 */  li    $a3, 1
/* 00423D50 0320F809 */  jalr  $t9
/* 00423D54 AFA50038 */   sw    $a1, 0x38($sp)
/* 00423D58 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00423D5C 1040000F */  beqz  $v0, .L00423D9C
/* 00423D60 8FA3003C */   lw    $v1, 0x3c($sp)
/* 00423D64 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 00423D68 92040001 */  lbu   $a0, 1($s0)
/* 00423D6C 0320F809 */  jalr  $t9
/* 00423D70 00000000 */   nop   
/* 00423D74 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00423D78 24040052 */  li    $a0, 82
/* 00423D7C 8FA50074 */  lw    $a1, 0x74($sp)
/* 00423D80 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00423D84 92060001 */  lbu   $a2, 1($s0)
/* 00423D88 00403825 */  move  $a3, $v0
/* 00423D8C 0320F809 */  jalr  $t9
/* 00423D90 00000000 */   nop   
/* 00423D94 10000008 */  b     .L00423DB8
/* 00423D98 8FBC0020 */   lw    $gp, 0x20($sp)
.L00423D9C:
/* 00423D9C 8F998290 */  lw    $t9, %call16(spilltemplodstr)($gp)
/* 00423DA0 8C6E0004 */  lw    $t6, 4($v1)
/* 00423DA4 24040052 */  li    $a0, 82
/* 00423DA8 92050001 */  lbu   $a1, 1($s0)
/* 00423DAC 0320F809 */  jalr  $t9
/* 00423DB0 8DC60020 */   lw    $a2, 0x20($t6)
/* 00423DB4 8FBC0020 */  lw    $gp, 0x20($sp)
.L00423DB8:
/* 00423DB8 8E180028 */  lw    $t8, 0x28($s0)
/* 00423DBC 24010002 */  li    $at, 2
/* 00423DC0 8FA50038 */  lw    $a1, 0x38($sp)
/* 00423DC4 93090000 */  lbu   $t1, ($t8)
/* 00423DC8 27A60074 */  addiu $a2, $sp, 0x74
/* 00423DCC 1521001F */  bne   $t1, $at, .L00423E4C
/* 00423DD0 00000000 */   nop   
/* 00423DD4 8E190038 */  lw    $t9, 0x38($s0)
/* 00423DD8 8FA50038 */  lw    $a1, 0x38($sp)
/* 00423DDC 27A60074 */  addiu $a2, $sp, 0x74
/* 00423DE0 8F240028 */  lw    $a0, 0x28($t9)
/* 00423DE4 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 00423DE8 24070001 */  li    $a3, 1
/* 00423DEC 0320F809 */  jalr  $t9
/* 00423DF0 00000000 */   nop   
/* 00423DF4 1040000F */  beqz  $v0, .L00423E34
/* 00423DF8 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00423DFC 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 00423E00 92040001 */  lbu   $a0, 1($s0)
/* 00423E04 0320F809 */  jalr  $t9
/* 00423E08 00000000 */   nop   
/* 00423E0C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00423E10 24040052 */  li    $a0, 82
/* 00423E14 8FA50074 */  lw    $a1, 0x74($sp)
/* 00423E18 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00423E1C 92060001 */  lbu   $a2, 1($s0)
/* 00423E20 00403825 */  move  $a3, $v0
/* 00423E24 0320F809 */  jalr  $t9
/* 00423E28 00000000 */   nop   
/* 00423E2C 10000024 */  b     .L00423EC0
/* 00423E30 8FBC0020 */   lw    $gp, 0x20($sp)
.L00423E34:
/* 00423E34 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00423E38 8E040038 */  lw    $a0, 0x38($s0)
/* 00423E3C 0320F809 */  jalr  $t9
/* 00423E40 24840008 */   addiu $a0, $a0, 8
/* 00423E44 1000001E */  b     .L00423EC0
/* 00423E48 8FBC0020 */   lw    $gp, 0x20($sp)
.L00423E4C:
/* 00423E4C 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 00423E50 8E0A003C */  lw    $t2, 0x3c($s0)
/* 00423E54 24070001 */  li    $a3, 1
/* 00423E58 0320F809 */  jalr  $t9
/* 00423E5C 8D440000 */   lw    $a0, ($t2)
/* 00423E60 1040000F */  beqz  $v0, .L00423EA0
/* 00423E64 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00423E68 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 00423E6C 92040001 */  lbu   $a0, 1($s0)
/* 00423E70 0320F809 */  jalr  $t9
/* 00423E74 00000000 */   nop   
/* 00423E78 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00423E7C 24040052 */  li    $a0, 82
/* 00423E80 8FA50074 */  lw    $a1, 0x74($sp)
/* 00423E84 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00423E88 92060001 */  lbu   $a2, 1($s0)
/* 00423E8C 00403825 */  move  $a3, $v0
/* 00423E90 0320F809 */  jalr  $t9
/* 00423E94 00000000 */   nop   
/* 00423E98 10000009 */  b     .L00423EC0
/* 00423E9C 8FBC0020 */   lw    $gp, 0x20($sp)
.L00423EA0:
/* 00423EA0 8E0B003C */  lw    $t3, 0x3c($s0)
/* 00423EA4 8F998290 */  lw    $t9, %call16(spilltemplodstr)($gp)
/* 00423EA8 24040052 */  li    $a0, 82
/* 00423EAC 8D6C0000 */  lw    $t4, ($t3)
/* 00423EB0 92050001 */  lbu   $a1, 1($s0)
/* 00423EB4 0320F809 */  jalr  $t9
/* 00423EB8 8D860020 */   lw    $a2, 0x20($t4)
/* 00423EBC 8FBC0020 */  lw    $gp, 0x20($sp)
.L00423EC0:
/* 00423EC0 8E0D0038 */  lw    $t5, 0x38($s0)
/* 00423EC4 240E0001 */  li    $t6, 1
/* 00423EC8 8DAF002C */  lw    $t7, 0x2c($t5)
/* 00423ECC 05E10002 */  bgez  $t7, .L00423ED8
/* 00423ED0 00000000 */   nop   
/* 00423ED4 A3AE007B */  sb    $t6, 0x7b($sp)
.L00423ED8:
/* 00423ED8 10000155 */  b     .L00424430
/* 00423EDC 92030020 */   lbu   $v1, 0x20($s0)
.L00423EE0:
/* 00423EE0 2CB80040 */  sltiu $t8, $a1, 0x40
.L00423EE4:
/* 00423EE4 13000009 */  beqz  $t8, .L00423F0C
/* 00423EE8 AFA0006C */   sw    $zero, 0x6c($sp)
/* 00423EEC 8F8A8044 */  lw    $t2, %got(D_1001056C)($gp)
/* 00423EF0 00054943 */  sra   $t1, $a1, 5
/* 00423EF4 0009C880 */  sll   $t9, $t1, 2
/* 00423EF8 254A056C */  addiu $t2, %lo(D_1001056C) # addiu $t2, $t2, 0x56c
/* 00423EFC 01595821 */  addu  $t3, $t2, $t9
/* 00423F00 8D6C0000 */  lw    $t4, ($t3)
/* 00423F04 00AC6804 */  sllv  $t5, $t4, $a1
/* 00423F08 29B80000 */  slti  $t8, $t5, 0
.L00423F0C:
/* 00423F0C 17000036 */  bnez  $t8, .L00423FE8
/* 00423F10 2401003A */   li    $at, 58
/* 00423F14 8F99801C */  lw    $t9, %got(func_0042305C)($gp)
/* 00423F18 8E040024 */  lw    $a0, 0x24($s0)
/* 00423F1C 92050001 */  lbu   $a1, 1($s0)
/* 00423F20 2739305C */  addiu $t9, %lo(func_0042305C) # addiu $t9, $t9, 0x305c
/* 00423F24 8FA2007C */  lw    $v0, 0x7c($sp)
/* 00423F28 0320F809 */  jalr  $t9
/* 00423F2C AFA60070 */   sw    $a2, 0x70($sp)
/* 00423F30 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00423F34 8E040028 */  lw    $a0, 0x28($s0)
/* 00423F38 92050001 */  lbu   $a1, 1($s0)
/* 00423F3C 8F99801C */  lw    $t9, %got(func_0042305C)($gp)
/* 00423F40 8FA2007C */  lw    $v0, 0x7c($sp)
/* 00423F44 2739305C */  addiu $t9, %lo(func_0042305C) # addiu $t9, $t9, 0x305c
/* 00423F48 0320F809 */  jalr  $t9
/* 00423F4C 00000000 */   nop   
/* 00423F50 92030020 */  lbu   $v1, 0x20($s0)
/* 00423F54 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00423F58 8FA60070 */  lw    $a2, 0x70($sp)
/* 00423F5C 2C6E0080 */  sltiu $t6, $v1, 0x80
/* 00423F60 11C00009 */  beqz  $t6, .L00423F88
/* 00423F64 2465FFE0 */   addiu $a1, $v1, -0x20
/* 00423F68 8F998044 */  lw    $t9, %got(D_1001055C)($gp)
/* 00423F6C 00034943 */  sra   $t1, $v1, 5
/* 00423F70 00095080 */  sll   $t2, $t1, 2
/* 00423F74 2739055C */  addiu $t9, %lo(D_1001055C) # addiu $t9, $t9, 0x55c
/* 00423F78 032A5821 */  addu  $t3, $t9, $t2
/* 00423F7C 8D6C0000 */  lw    $t4, ($t3)
/* 00423F80 006C6804 */  sllv  $t5, $t4, $v1
/* 00423F84 29AE0000 */  slti  $t6, $t5, 0
.L00423F88:
/* 00423F88 11C00015 */  beqz  $t6, .L00423FE0
/* 00423F8C 00000000 */   nop   
/* 00423F90 8E180024 */  lw    $t8, 0x24($s0)
/* 00423F94 3C018800 */  lui   $at, 0x8800
/* 00423F98 93090001 */  lbu   $t1, 1($t8)
/* 00423F9C 2D390020 */  sltiu $t9, $t1, 0x20
/* 00423FA0 00195023 */  negu  $t2, $t9
/* 00423FA4 01415824 */  and   $t3, $t2, $at
/* 00423FA8 012B6004 */  sllv  $t4, $t3, $t1
/* 00423FAC 05810002 */  bgez  $t4, .L00423FB8
/* 00423FB0 8FAB0088 */   lw    $t3, 0x88($sp)
/* 00423FB4 8FA60088 */  lw    $a2, 0x88($sp)
.L00423FB8:
/* 00423FB8 8E0D0028 */  lw    $t5, 0x28($s0)
/* 00423FBC 3C018800 */  lui   $at, 0x8800
/* 00423FC0 91AF0001 */  lbu   $t7, 1($t5)
/* 00423FC4 2DEE0020 */  sltiu $t6, $t7, 0x20
/* 00423FC8 000EC023 */  negu  $t8, $t6
/* 00423FCC 0301C824 */  and   $t9, $t8, $at
/* 00423FD0 01F95004 */  sllv  $t2, $t9, $t7
/* 00423FD4 05410002 */  bgez  $t2, .L00423FE0
/* 00423FD8 00000000 */   nop   
/* 00423FDC AFAB006C */  sw    $t3, 0x6c($sp)
.L00423FE0:
/* 00423FE0 1000006B */  b     .L00424190
/* 00423FE4 8E040024 */   lw    $a0, 0x24($s0)
.L00423FE8:
/* 00423FE8 5461001C */  bnel  $v1, $at, .L0042405C
/* 00423FEC 24010041 */   li    $at, 65
/* 00423FF0 8E020024 */  lw    $v0, 0x24($s0)
/* 00423FF4 3C011200 */  lui   $at, 0x1200
/* 00423FF8 90490000 */  lbu   $t1, ($v0)
/* 00423FFC 2D2C0020 */  sltiu $t4, $t1, 0x20
/* 00424000 000C6823 */  negu  $t5, $t4
/* 00424004 01A17024 */  and   $t6, $t5, $at
/* 00424008 012EC004 */  sllv  $t8, $t6, $t1
/* 0042400C 07010003 */  bgez  $t8, .L0042401C
/* 00424010 240E000E */   li    $t6, 14
/* 00424014 92190001 */  lbu   $t9, 1($s0)
/* 00424018 A0590001 */  sb    $t9, 1($v0)
.L0042401C:
/* 0042401C 8E020028 */  lw    $v0, 0x28($s0)
/* 00424020 3C011200 */  lui   $at, 0x1200
/* 00424024 904F0000 */  lbu   $t7, ($v0)
/* 00424028 2DEA0020 */  sltiu $t2, $t7, 0x20
/* 0042402C 000A5823 */  negu  $t3, $t2
/* 00424030 01616024 */  and   $t4, $t3, $at
/* 00424034 01EC6804 */  sllv  $t5, $t4, $t7
/* 00424038 05A30003 */  bgezl $t5, .L00424048
/* 0042403C 8E040024 */   lw    $a0, 0x24($s0)
/* 00424040 A04E0001 */  sb    $t6, 1($v0)
/* 00424044 8E040024 */  lw    $a0, 0x24($s0)
.L00424048:
/* 00424048 92030020 */  lbu   $v1, 0x20($s0)
/* 0042404C AFA40034 */  sw    $a0, 0x34($sp)
/* 00424050 1000004F */  b     .L00424190
/* 00424054 2465FFE0 */   addiu $a1, $v1, -0x20
/* 00424058 24010041 */  li    $at, 65
.L0042405C:
/* 0042405C 5061002B */  beql  $v1, $at, .L0042410C
/* 00424060 8E020024 */   lw    $v0, 0x24($s0)
/* 00424064 8E020024 */  lw    $v0, 0x24($s0)
/* 00424068 3C011200 */  lui   $at, 0x1200
/* 0042406C 90580000 */  lbu   $t8, ($v0)
/* 00424070 2F190020 */  sltiu $t9, $t8, 0x20
/* 00424074 00195023 */  negu  $t2, $t9
/* 00424078 01415824 */  and   $t3, $t2, $at
/* 0042407C 030B6004 */  sllv  $t4, $t3, $t8
/* 00424080 0583000B */  bgezl $t4, .L004240B0
/* 00424084 8E020028 */   lw    $v0, 0x28($s0)
/* 00424088 904F0001 */  lbu   $t7, 1($v0)
/* 0042408C 3C018800 */  lui   $at, 0x8800
/* 00424090 2DED0020 */  sltiu $t5, $t7, 0x20
/* 00424094 000D7023 */  negu  $t6, $t5
/* 00424098 01C14824 */  and   $t1, $t6, $at
/* 0042409C 01E9C804 */  sllv  $t9, $t1, $t7
/* 004240A0 07220003 */  bltzl $t9, .L004240B0
/* 004240A4 8E020028 */   lw    $v0, 0x28($s0)
/* 004240A8 A0400001 */  sb    $zero, 1($v0)
/* 004240AC 8E020028 */  lw    $v0, 0x28($s0)
.L004240B0:
/* 004240B0 3C011200 */  lui   $at, 0x1200
/* 004240B4 904A0000 */  lbu   $t2, ($v0)
/* 004240B8 2D4B0020 */  sltiu $t3, $t2, 0x20
/* 004240BC 000BC023 */  negu  $t8, $t3
/* 004240C0 03016024 */  and   $t4, $t8, $at
/* 004240C4 014C6804 */  sllv  $t5, $t4, $t2
/* 004240C8 05A3000B */  bgezl $t5, .L004240F8
/* 004240CC 8E040024 */   lw    $a0, 0x24($s0)
/* 004240D0 904E0001 */  lbu   $t6, 1($v0)
/* 004240D4 3C018800 */  lui   $at, 0x8800
/* 004240D8 2DC90020 */  sltiu $t1, $t6, 0x20
/* 004240DC 00097823 */  negu  $t7, $t1
/* 004240E0 01E1C824 */  and   $t9, $t7, $at
/* 004240E4 01D95804 */  sllv  $t3, $t9, $t6
/* 004240E8 05620003 */  bltzl $t3, .L004240F8
/* 004240EC 8E040024 */   lw    $a0, 0x24($s0)
/* 004240F0 A0400001 */  sb    $zero, 1($v0)
/* 004240F4 8E040024 */  lw    $a0, 0x24($s0)
.L004240F8:
/* 004240F8 92030020 */  lbu   $v1, 0x20($s0)
/* 004240FC AFA40034 */  sw    $a0, 0x34($sp)
/* 00424100 10000023 */  b     .L00424190
/* 00424104 2465FFE0 */   addiu $a1, $v1, -0x20
/* 00424108 8E020024 */  lw    $v0, 0x24($s0)
.L0042410C:
/* 0042410C 3C011200 */  lui   $at, 0x1200
/* 00424110 904C0000 */  lbu   $t4, ($v0)
/* 00424114 2D8A0020 */  sltiu $t2, $t4, 0x20
/* 00424118 000A6823 */  negu  $t5, $t2
/* 0042411C 01A14824 */  and   $t1, $t5, $at
/* 00424120 01897804 */  sllv  $t7, $t1, $t4
/* 00424124 05E3000B */  bgezl $t7, .L00424154
/* 00424128 8E020028 */   lw    $v0, 0x28($s0)
/* 0042412C 90590001 */  lbu   $t9, 1($v0)
/* 00424130 3C018800 */  lui   $at, 0x8800
/* 00424134 2F2E0020 */  sltiu $t6, $t9, 0x20
/* 00424138 000E5823 */  negu  $t3, $t6
/* 0042413C 0161C024 */  and   $t8, $t3, $at
/* 00424140 03385004 */  sllv  $t2, $t8, $t9
/* 00424144 05420003 */  bltzl $t2, .L00424154
/* 00424148 8E020028 */   lw    $v0, 0x28($s0)
/* 0042414C A0400001 */  sb    $zero, 1($v0)
/* 00424150 8E020028 */  lw    $v0, 0x28($s0)
.L00424154:
/* 00424154 3C011200 */  lui   $at, 0x1200
/* 00424158 904D0000 */  lbu   $t5, ($v0)
/* 0042415C 2DA90020 */  sltiu $t1, $t5, 0x20
/* 00424160 00096023 */  negu  $t4, $t1
/* 00424164 01817824 */  and   $t7, $t4, $at
/* 00424168 01AF7004 */  sllv  $t6, $t7, $t5
/* 0042416C 05C30004 */  bgezl $t6, .L00424180
/* 00424170 8E040024 */   lw    $a0, 0x24($s0)
/* 00424174 920B0001 */  lbu   $t3, 1($s0)
/* 00424178 A04B0001 */  sb    $t3, 1($v0)
/* 0042417C 8E040024 */  lw    $a0, 0x24($s0)
.L00424180:
/* 00424180 92030020 */  lbu   $v1, 0x20($s0)
/* 00424184 8FA60088 */  lw    $a2, 0x88($sp)
/* 00424188 AFA40034 */  sw    $a0, 0x34($sp)
/* 0042418C 2465FFE0 */  addiu $a1, $v1, -0x20
.L00424190:
/* 00424190 2CB90040 */  sltiu $t9, $a1, 0x40
/* 00424194 13200009 */  beqz  $t9, .L004241BC
/* 00424198 2401007D */   li    $at, 125
/* 0042419C 8F8C8044 */  lw    $t4, %got(D_10010554)($gp)
/* 004241A0 00055143 */  sra   $t2, $a1, 5
/* 004241A4 000A4880 */  sll   $t1, $t2, 2
/* 004241A8 258C0554 */  addiu $t4, %lo(D_10010554) # addiu $t4, $t4, 0x554
/* 004241AC 01897821 */  addu  $t7, $t4, $t1
/* 004241B0 8DED0000 */  lw    $t5, ($t7)
/* 004241B4 00AD7004 */  sllv  $t6, $t5, $a1
/* 004241B8 29D90000 */  slti  $t9, $t6, 0
.L004241BC:
/* 004241BC 13200004 */  beqz  $t9, .L004241D0
/* 004241C0 2C6A00A0 */   sltiu $t2, $v1, 0xa0
/* 004241C4 24180003 */  li    $t8, 3
/* 004241C8 1000002C */  b     .L0042427C
/* 004241CC A3B80087 */   sb    $t8, 0x87($sp)
.L004241D0:
/* 004241D0 11400009 */  beqz  $t2, .L004241F8
/* 004241D4 24180002 */   li    $t8, 2
/* 004241D8 8F8F8044 */  lw    $t7, %got(D_10010540)($gp)
/* 004241DC 00036143 */  sra   $t4, $v1, 5
/* 004241E0 000C4880 */  sll   $t1, $t4, 2
/* 004241E4 25EF0540 */  addiu $t7, %lo(D_10010540) # addiu $t7, $t7, 0x540
/* 004241E8 01E96821 */  addu  $t5, $t7, $t1
/* 004241EC 8DAE0000 */  lw    $t6, ($t5)
/* 004241F0 006E5804 */  sllv  $t3, $t6, $v1
/* 004241F4 296A0000 */  slti  $t2, $t3, 0
.L004241F8:
/* 004241F8 11400003 */  beqz  $t2, .L00424208
/* 004241FC 2C6C0080 */   sltiu $t4, $v1, 0x80
/* 00424200 1000001E */  b     .L0042427C
/* 00424204 A3B80087 */   sb    $t8, 0x87($sp)
.L00424208:
/* 00424208 11800009 */  beqz  $t4, .L00424230
/* 0042420C 24180001 */   li    $t8, 1
/* 00424210 8F8D8044 */  lw    $t5, %got(D_10010530)($gp)
/* 00424214 00037943 */  sra   $t7, $v1, 5
/* 00424218 000F4880 */  sll   $t1, $t7, 2
/* 0042421C 25AD0530 */  addiu $t5, %lo(D_10010530) # addiu $t5, $t5, 0x530
/* 00424220 01A97021 */  addu  $t6, $t5, $t1
/* 00424224 8DCB0000 */  lw    $t3, ($t6)
/* 00424228 006BC804 */  sllv  $t9, $t3, $v1
/* 0042422C 2B2C0000 */  slti  $t4, $t9, 0
.L00424230:
/* 00424230 11800003 */  beqz  $t4, .L00424240
/* 00424234 2C6F0080 */   sltiu $t7, $v1, 0x80
/* 00424238 10000010 */  b     .L0042427C
/* 0042423C A3B80087 */   sb    $t8, 0x87($sp)
.L00424240:
/* 00424240 11E00009 */  beqz  $t7, .L00424268
/* 00424244 24180005 */   li    $t8, 5
/* 00424248 8F8E8044 */  lw    $t6, %got(D_10010520)($gp)
/* 0042424C 00036943 */  sra   $t5, $v1, 5
/* 00424250 000D4880 */  sll   $t1, $t5, 2
/* 00424254 25CE0520 */  addiu $t6, %lo(D_10010520) # addiu $t6, $t6, 0x520
/* 00424258 01C95821 */  addu  $t3, $t6, $t1
/* 0042425C 8D790000 */  lw    $t9, ($t3)
/* 00424260 00795004 */  sllv  $t2, $t9, $v1
/* 00424264 294F0000 */  slti  $t7, $t2, 0
.L00424268:
/* 00424268 51E00004 */  beql  $t7, $zero, .L0042427C
/* 0042426C A3A00087 */   sb    $zero, 0x87($sp)
/* 00424270 10000002 */  b     .L0042427C
/* 00424274 A3B80087 */   sb    $t8, 0x87($sp)
/* 00424278 A3A00087 */  sb    $zero, 0x87($sp)
.L0042427C:
/* 0042427C 14610009 */  bne   $v1, $at, .L004242A4
/* 00424280 00000000 */   nop   
/* 00424284 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 00424288 24050003 */  li    $a1, 3
/* 0042428C 00003825 */  move  $a3, $zero
/* 00424290 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 00424294 0320F809 */  jalr  $t9
/* 00424298 8FA2007C */   lw    $v0, 0x7c($sp)
/* 0042429C 10000008 */  b     .L004242C0
/* 004242A0 8FBC0020 */   lw    $gp, 0x20($sp)
.L004242A4:
/* 004242A4 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 004242A8 93A50087 */  lbu   $a1, 0x87($sp)
/* 004242AC 00003825 */  move  $a3, $zero
/* 004242B0 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 004242B4 0320F809 */  jalr  $t9
/* 004242B8 8FA2007C */   lw    $v0, 0x7c($sp)
/* 004242BC 8FBC0020 */  lw    $gp, 0x20($sp)
.L004242C0:
/* 004242C0 920D0020 */  lbu   $t5, 0x20($s0)
/* 004242C4 25AEFFE0 */  addiu $t6, $t5, -0x20
/* 004242C8 2DC90040 */  sltiu $t1, $t6, 0x40
/* 004242CC 11200009 */  beqz  $t1, .L004242F4
/* 004242D0 00000000 */   nop   
/* 004242D4 8F8A8044 */  lw    $t2, %got(D_1001056C)($gp)
/* 004242D8 000E5943 */  sra   $t3, $t6, 5
/* 004242DC 000BC880 */  sll   $t9, $t3, 2
/* 004242E0 254A056C */  addiu $t2, %lo(D_1001056C) # addiu $t2, $t2, 0x56c
/* 004242E4 01596021 */  addu  $t4, $t2, $t9
/* 004242E8 8D8F0000 */  lw    $t7, ($t4)
/* 004242EC 01CFC004 */  sllv  $t8, $t7, $t6
/* 004242F0 2B090000 */  slti  $t1, $t8, 0
.L004242F4:
/* 004242F4 1520001B */  bnez  $t1, .L00424364
/* 004242F8 00000000 */   nop   
/* 004242FC 92060001 */  lbu   $a2, 1($s0)
/* 00424300 3C010500 */  lui   $at, 0x500
/* 00424304 2CCB0020 */  sltiu $t3, $a2, 0x20
/* 00424308 000B5023 */  negu  $t2, $t3
/* 0042430C 0141C824 */  and   $t9, $t2, $at
/* 00424310 00D96004 */  sllv  $t4, $t9, $a2
/* 00424314 05810013 */  bgez  $t4, .L00424364
/* 00424318 00000000 */   nop   
/* 0042431C 8E020024 */  lw    $v0, 0x24($s0)
/* 00424320 24010002 */  li    $at, 2
/* 00424324 904F0000 */  lbu   $t7, ($v0)
/* 00424328 15E1000E */  bne   $t7, $at, .L00424364
/* 0042432C 00000000 */   nop   
/* 00424330 90450001 */  lbu   $a1, 1($v0)
/* 00424334 3C010280 */  lui   $at, 0x280
/* 00424338 2CAE0020 */  sltiu $t6, $a1, 0x20
/* 0042433C 000EC023 */  negu  $t8, $t6
/* 00424340 03016824 */  and   $t5, $t8, $at
/* 00424344 00AD4804 */  sllv  $t1, $t5, $a1
/* 00424348 05210006 */  bgez  $t1, .L00424364
/* 0042434C 00000000 */   nop   
/* 00424350 8F998270 */  lw    $t9, %call16(gen_cvt)($gp)
/* 00424354 00C02025 */  move  $a0, $a2
/* 00424358 0320F809 */  jalr  $t9
/* 0042435C 00000000 */   nop   
/* 00424360 8FBC0020 */  lw    $gp, 0x20($sp)
.L00424364:
/* 00424364 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 00424368 8E040028 */  lw    $a0, 0x28($s0)
/* 0042436C 93A50087 */  lbu   $a1, 0x87($sp)
/* 00424370 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 00424374 8FA6006C */  lw    $a2, 0x6c($sp)
/* 00424378 00003825 */  move  $a3, $zero
/* 0042437C 0320F809 */  jalr  $t9
/* 00424380 8FA2007C */   lw    $v0, 0x7c($sp)
/* 00424384 92030020 */  lbu   $v1, 0x20($s0)
/* 00424388 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042438C 246BFFE0 */  addiu $t3, $v1, -0x20
/* 00424390 2D6A0040 */  sltiu $t2, $t3, 0x40
/* 00424394 11400009 */  beqz  $t2, .L004243BC
/* 00424398 00000000 */   nop   
/* 0042439C 8F8F8044 */  lw    $t7, %got(D_1001056C)($gp)
/* 004243A0 000BC943 */  sra   $t9, $t3, 5
/* 004243A4 00196080 */  sll   $t4, $t9, 2
/* 004243A8 25EF056C */  addiu $t7, %lo(D_1001056C) # addiu $t7, $t7, 0x56c
/* 004243AC 01EC7021 */  addu  $t6, $t7, $t4
/* 004243B0 8DD80000 */  lw    $t8, ($t6)
/* 004243B4 01786804 */  sllv  $t5, $t8, $t3
/* 004243B8 29AA0000 */  slti  $t2, $t5, 0
.L004243BC:
/* 004243BC 5540001D */  bnezl $t2, .L00424434
/* 004243C0 93B9007B */   lbu   $t9, 0x7b($sp)
/* 004243C4 92060001 */  lbu   $a2, 1($s0)
/* 004243C8 3C010500 */  lui   $at, 0x500
/* 004243CC 2CD90020 */  sltiu $t9, $a2, 0x20
/* 004243D0 00197823 */  negu  $t7, $t9
/* 004243D4 01E16024 */  and   $t4, $t7, $at
/* 004243D8 00CC7004 */  sllv  $t6, $t4, $a2
/* 004243DC 05C30015 */  bgezl $t6, .L00424434
/* 004243E0 93B9007B */   lbu   $t9, 0x7b($sp)
/* 004243E4 8E020028 */  lw    $v0, 0x28($s0)
/* 004243E8 24010002 */  li    $at, 2
/* 004243EC 90580000 */  lbu   $t8, ($v0)
/* 004243F0 57010010 */  bnel  $t8, $at, .L00424434
/* 004243F4 93B9007B */   lbu   $t9, 0x7b($sp)
/* 004243F8 90450001 */  lbu   $a1, 1($v0)
/* 004243FC 3C010280 */  lui   $at, 0x280
/* 00424400 2CAB0020 */  sltiu $t3, $a1, 0x20
/* 00424404 000B6823 */  negu  $t5, $t3
/* 00424408 01A14824 */  and   $t1, $t5, $at
/* 0042440C 00A95004 */  sllv  $t2, $t1, $a1
/* 00424410 05430008 */  bgezl $t2, .L00424434
/* 00424414 93B9007B */   lbu   $t9, 0x7b($sp)
/* 00424418 8F998270 */  lw    $t9, %call16(gen_cvt)($gp)
/* 0042441C 00C02025 */  move  $a0, $a2
/* 00424420 0320F809 */  jalr  $t9
/* 00424424 00000000 */   nop   
/* 00424428 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042442C 92030020 */  lbu   $v1, 0x20($s0)
.L00424430:
/* 00424430 93B9007B */  lbu   $t9, 0x7b($sp)
.L00424434:
/* 00424434 24010041 */  li    $at, 65
/* 00424438 1320003F */  beqz  $t9, .L00424538
/* 0042443C 00000000 */   nop   
/* 00424440 14610015 */  bne   $v1, $at, .L00424498
/* 00424444 92060001 */   lbu   $a2, 1($s0)
/* 00424448 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 0042444C 920C0023 */  lbu   $t4, 0x23($s0)
/* 00424450 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00424454 90820001 */  lbu   $v0, 1($a0)
/* 00424458 240F007E */  li    $t7, 126
/* 0042445C A08F0000 */  sb    $t7, ($a0)
/* 00424460 000276C0 */  sll   $t6, $v0, 0x1b
/* 00424464 000EC6C2 */  srl   $t8, $t6, 0x1b
/* 00424468 01985826 */  xor   $t3, $t4, $t8
/* 0042446C 316D001F */  andi  $t5, $t3, 0x1f
/* 00424470 01A24826 */  xor   $t1, $t5, $v0
/* 00424474 A0290001 */  sb    $t1, 1($at)
/* 00424478 A0860008 */  sb    $a2, 8($a0)
/* 0042447C 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00424480 0320F809 */  jalr  $t9
/* 00424484 00000000 */   nop   
/* 00424488 92030020 */  lbu   $v1, 0x20($s0)
/* 0042448C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00424490 100000E4 */  b     .L00424824
/* 00424494 2465FFE0 */   addiu $a1, $v1, -0x20
.L00424498:
/* 00424498 2401003A */  li    $at, 58
/* 0042449C 14610015 */  bne   $v1, $at, .L004244F4
/* 004244A0 00000000 */   nop   
/* 004244A4 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 004244A8 8F818DA4 */  lw     $at, %got(u)($gp)
/* 004244AC 240A007E */  li    $t2, 126
/* 004244B0 90820001 */  lbu   $v0, 1($a0)
/* 004244B4 A08A0000 */  sb    $t2, ($a0)
/* 004244B8 240B000E */  li    $t3, 14
/* 004244BC 0002CEC0 */  sll   $t9, $v0, 0x1b
/* 004244C0 00197EC2 */  srl   $t7, $t9, 0x1b
/* 004244C4 00CF7026 */  xor   $t6, $a2, $t7
/* 004244C8 31CC001F */  andi  $t4, $t6, 0x1f
/* 004244CC 0182C026 */  xor   $t8, $t4, $v0
/* 004244D0 A0380001 */  sb    $t8, 1($at)
/* 004244D4 A08B0008 */  sb    $t3, 8($a0)
/* 004244D8 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 004244DC 0320F809 */  jalr  $t9
/* 004244E0 00000000 */   nop   
/* 004244E4 92030020 */  lbu   $v1, 0x20($s0)
/* 004244E8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004244EC 100000CD */  b     .L00424824
/* 004244F0 2465FFE0 */   addiu $a1, $v1, -0x20
.L004244F4:
/* 004244F4 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 004244F8 8F818DA4 */  lw     $at, %got(u)($gp)
/* 004244FC 240D007E */  li    $t5, 126
/* 00424500 90820001 */  lbu   $v0, 1($a0)
/* 00424504 A08D0000 */  sb    $t5, ($a0)
/* 00424508 00024EC0 */  sll   $t1, $v0, 0x1b
/* 0042450C 000956C2 */  srl   $t2, $t1, 0x1b
/* 00424510 00CAC826 */  xor   $t9, $a2, $t2
/* 00424514 332F001F */  andi  $t7, $t9, 0x1f
/* 00424518 01E27026 */  xor   $t6, $t7, $v0
/* 0042451C A02E0001 */  sb    $t6, 1($at)
/* 00424520 A0860008 */  sb    $a2, 8($a0)
/* 00424524 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00424528 0320F809 */  jalr  $t9
/* 0042452C 00000000 */   nop   
/* 00424530 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00424534 92030020 */  lbu   $v1, 0x20($s0)
.L00424538:
/* 00424538 100000BA */  b     .L00424824
/* 0042453C 2465FFE0 */   addiu $a1, $v1, -0x20
.L00424540:
/* 00424540 13000009 */  beqz  $t8, .L00424568
/* 00424544 00000000 */   nop   
/* 00424548 8F898044 */  lw    $t1, %got(D_10010510)($gp)
/* 0042454C 000C5943 */  sra   $t3, $t4, 5
/* 00424550 000B6880 */  sll   $t5, $t3, 2
/* 00424554 25290510 */  addiu $t1, %lo(D_10010510) # addiu $t1, $t1, 0x510
/* 00424558 012D5021 */  addu  $t2, $t1, $t5
/* 0042455C 8D590000 */  lw    $t9, ($t2)
/* 00424560 01997804 */  sllv  $t7, $t9, $t4
/* 00424564 29F80000 */  slti  $t8, $t7, 0
.L00424568:
/* 00424568 13000018 */  beqz  $t8, .L004245CC
/* 0042456C 2C6D00A0 */   sltiu $t5, $v1, 0xa0
/* 00424570 8E0B0024 */  lw    $t3, 0x24($s0)
/* 00424574 3C011200 */  lui   $at, 0x1200
/* 00424578 AFAB0034 */  sw    $t3, 0x34($sp)
/* 0042457C 916D0000 */  lbu   $t5, ($t3)
/* 00424580 01604825 */  move  $t1, $t3
/* 00424584 2DAA0020 */  sltiu $t2, $t5, 0x20
/* 00424588 000AC823 */  negu  $t9, $t2
/* 0042458C 03216024 */  and   $t4, $t9, $at
/* 00424590 01AC7804 */  sllv  $t7, $t4, $t5
/* 00424594 05E30036 */  bgezl $t7, .L00424670
/* 00424598 8FAC0034 */   lw    $t4, 0x34($sp)
/* 0042459C 916E0001 */  lbu   $t6, 1($t3)
/* 004245A0 3C018800 */  lui   $at, 0x8800
/* 004245A4 2DD80020 */  sltiu $t8, $t6, 0x20
/* 004245A8 00185823 */  negu  $t3, $t8
/* 004245AC 01615024 */  and   $t2, $t3, $at
/* 004245B0 01CAC804 */  sllv  $t9, $t2, $t6
/* 004245B4 0722002E */  bltzl $t9, .L00424670
/* 004245B8 8FAC0034 */   lw    $t4, 0x34($sp)
/* 004245BC A1200001 */  sb    $zero, 1($t1)
/* 004245C0 8E0C0024 */  lw    $t4, 0x24($s0)
/* 004245C4 10000029 */  b     .L0042466C
/* 004245C8 AFAC0034 */   sw    $t4, 0x34($sp)
.L004245CC:
/* 004245CC 11A00009 */  beqz  $t5, .L004245F4
/* 004245D0 00000000 */   nop   
/* 004245D4 8F8B8044 */  lw    $t3, %got(D_100104FC)($gp)
/* 004245D8 00037943 */  sra   $t7, $v1, 5
/* 004245DC 000FC080 */  sll   $t8, $t7, 2
/* 004245E0 256B04FC */  addiu $t3, %lo(D_100104FC) # addiu $t3, $t3, 0x4fc
/* 004245E4 01785021 */  addu  $t2, $t3, $t8
/* 004245E8 8D4E0000 */  lw    $t6, ($t2)
/* 004245EC 006EC804 */  sllv  $t9, $t6, $v1
/* 004245F0 2B2D0000 */  slti  $t5, $t9, 0
.L004245F4:
/* 004245F4 51A00010 */  beql  $t5, $zero, .L00424638
/* 004245F8 8E030024 */   lw    $v1, 0x24($s0)
/* 004245FC 8E030024 */  lw    $v1, 0x24($s0)
/* 00424600 3C011200 */  lui   $at, 0x1200
/* 00424604 906C0000 */  lbu   $t4, ($v1)
/* 00424608 2D8F0020 */  sltiu $t7, $t4, 0x20
/* 0042460C 000F5823 */  negu  $t3, $t7
/* 00424610 0161C024 */  and   $t8, $t3, $at
/* 00424614 01985004 */  sllv  $t2, $t8, $t4
/* 00424618 05410004 */  bgez  $t2, .L0042462C
/* 0042461C 00000000 */   nop   
/* 00424620 920E0038 */  lbu   $t6, 0x38($s0)
/* 00424624 A06E0001 */  sb    $t6, 1($v1)
/* 00424628 8E030024 */  lw    $v1, 0x24($s0)
.L0042462C:
/* 0042462C 1000000F */  b     .L0042466C
/* 00424630 AFA30034 */   sw    $v1, 0x34($sp)
/* 00424634 8E030024 */  lw    $v1, 0x24($s0)
.L00424638:
/* 00424638 3C011200 */  lui   $at, 0x1200
/* 0042463C 90790000 */  lbu   $t9, ($v1)
/* 00424640 AFA30034 */  sw    $v1, 0x34($sp)
/* 00424644 2F290020 */  sltiu $t1, $t9, 0x20
/* 00424648 00096823 */  negu  $t5, $t1
/* 0042464C 01A17824 */  and   $t7, $t5, $at
/* 00424650 032F5804 */  sllv  $t3, $t7, $t9
/* 00424654 05630006 */  bgezl $t3, .L00424670
/* 00424658 8FAC0034 */   lw    $t4, 0x34($sp)
/* 0042465C 92180001 */  lbu   $t8, 1($s0)
/* 00424660 A0780001 */  sb    $t8, 1($v1)
/* 00424664 8E030024 */  lw    $v1, 0x24($s0)
/* 00424668 AFA30034 */  sw    $v1, 0x34($sp)
.L0042466C:
/* 0042466C 8FAC0034 */  lw    $t4, 0x34($sp)
.L00424670:
/* 00424670 5180003D */  beql  $t4, $zero, .L00424768
/* 00424674 92180020 */   lbu   $t8, 0x20($s0)
/* 00424678 920A0020 */  lbu   $t2, 0x20($s0)
/* 0042467C 24010036 */  li    $at, 54
/* 00424680 55410039 */  bnel  $t2, $at, .L00424768
/* 00424684 92180020 */   lbu   $t8, 0x20($s0)
/* 00424688 918E0000 */  lbu   $t6, ($t4)
/* 0042468C 24010001 */  li    $at, 1
/* 00424690 8FA9007C */  lw    $t1, 0x7c($sp)
/* 00424694 15C10033 */  bne   $t6, $at, .L00424764
/* 00424698 27A60074 */   addiu $a2, $sp, 0x74
/* 0042469C 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 004246A0 8D840014 */  lw    $a0, 0x14($t4)
/* 004246A4 8D25FFF4 */  lw    $a1, -0xc($t1)
/* 004246A8 0320F809 */  jalr  $t9
/* 004246AC 24070001 */   li    $a3, 1
/* 004246B0 1440002C */  bnez  $v0, .L00424764
/* 004246B4 8FBC0020 */   lw    $gp, 0x20($sp)
/* 004246B8 8F818DA4 */  lw     $at, %got(u)($gp)
/* 004246BC 8F828DA4 */  lw     $v0, %got(u)($gp)
/* 004246C0 240D0052 */  li    $t5, 82
/* 004246C4 A02D0000 */  sb    $t5, ($at)
/* 004246C8 90420001 */  lbu   $v0, 1($v0)
/* 004246CC 920F0001 */  lbu   $t7, 1($s0)
/* 004246D0 8F818DA4 */  lw     $at, %got(u)($gp)
/* 004246D4 0002CEC0 */  sll   $t9, $v0, 0x1b
/* 004246D8 00195EC2 */  srl   $t3, $t9, 0x1b
/* 004246DC 01EBC026 */  xor   $t8, $t7, $t3
/* 004246E0 330A001F */  andi  $t2, $t8, 0x1f
/* 004246E4 01427026 */  xor   $t6, $t2, $v0
/* 004246E8 A02E0001 */  sb    $t6, 1($at)
/* 004246EC 8E030024 */  lw    $v1, 0x24($s0)
/* 004246F0 01C01025 */  move  $v0, $t6
/* 004246F4 00026E00 */  sll   $t5, $v0, 0x18
/* 004246F8 90690032 */  lbu   $t1, 0x32($v1)
/* 004246FC 000DCF42 */  srl   $t9, $t5, 0x1d
/* 00424700 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00424704 01397826 */  xor   $t7, $t1, $t9
/* 00424708 000F5F40 */  sll   $t3, $t7, 0x1d
/* 0042470C 000BC602 */  srl   $t8, $t3, 0x18
/* 00424710 03025026 */  xor   $t2, $t8, $v0
/* 00424714 A02A0001 */  sb    $t2, 1($at)
/* 00424718 8C6E0030 */  lw    $t6, 0x30($v1)
/* 0042471C 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00424720 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00424724 000E62C2 */  srl   $t4, $t6, 0xb
/* 00424728 AC2C0004 */  sw    $t4, 4($at)
/* 0042472C 8E09002C */  lw    $t1, 0x2c($s0)
/* 00424730 8C6D0020 */  lw    $t5, 0x20($v1)
/* 00424734 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00424738 01A9C821 */  addu  $t9, $t5, $t1
/* 0042473C AC39000C */  sw    $t9, 0xc($at)
/* 00424740 960F003C */  lhu   $t7, 0x3c($s0)
/* 00424744 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00424748 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042474C AC2F0008 */  sw    $t7, 8($at)
/* 00424750 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00424754 0320F809 */  jalr  $t9
/* 00424758 A4200002 */   sh    $zero, 2($at)
/* 0042475C 10000105 */  b     .L00424B74
/* 00424760 8FBC0020 */   lw    $gp, 0x20($sp)
.L00424764:
/* 00424764 92180020 */  lbu   $t8, 0x20($s0)
.L00424768:
/* 00424768 8E0B0024 */  lw    $t3, 0x24($s0)
/* 0042476C 00002825 */  move  $a1, $zero
/* 00424770 270AFFE0 */  addiu $t2, $t8, -0x20
/* 00424774 2D4E0080 */  sltiu $t6, $t2, 0x80
/* 00424778 11C00009 */  beqz  $t6, .L004247A0
/* 0042477C AFAB0034 */   sw    $t3, 0x34($sp)
/* 00424780 8F898044 */  lw    $t1, %got(D_10010510)($gp)
/* 00424784 000A6143 */  sra   $t4, $t2, 5
/* 00424788 000C6880 */  sll   $t5, $t4, 2
/* 0042478C 25290510 */  addiu $t1, %lo(D_10010510) # addiu $t1, $t1, 0x510
/* 00424790 012DC821 */  addu  $t9, $t1, $t5
/* 00424794 8F2F0000 */  lw    $t7, ($t9)
/* 00424798 014F5804 */  sllv  $t3, $t7, $t2
/* 0042479C 296E0000 */  slti  $t6, $t3, 0
.L004247A0:
/* 004247A0 11C00017 */  beqz  $t6, .L00424800
/* 004247A4 8FA40034 */   lw    $a0, 0x34($sp)
/* 004247A8 8F878C30 */  lw     $a3, %got(has_ix)($gp)
/* 004247AC 8FA40034 */  lw    $a0, 0x34($sp)
/* 004247B0 90E70000 */  lbu   $a3, ($a3)
/* 004247B4 10E00008 */  beqz  $a3, .L004247D8
/* 004247B8 00000000 */   nop   
/* 004247BC 92060001 */  lbu   $a2, 1($s0)
/* 004247C0 38C7000C */  xori  $a3, $a2, 0xc
/* 004247C4 2CE70001 */  sltiu $a3, $a3, 1
/* 004247C8 14E00003 */  bnez  $a3, .L004247D8
/* 004247CC 00000000 */   nop   
/* 004247D0 38C7000D */  xori  $a3, $a2, 0xd
/* 004247D4 2CE70001 */  sltiu $a3, $a3, 1
.L004247D8:
/* 004247D8 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 004247DC 24050003 */  li    $a1, 3
/* 004247E0 8E060034 */  lw    $a2, 0x34($s0)
/* 004247E4 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 004247E8 0320F809 */  jalr  $t9
/* 004247EC 8FA2007C */   lw    $v0, 0x7c($sp)
/* 004247F0 92030020 */  lbu   $v1, 0x20($s0)
/* 004247F4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004247F8 1000000A */  b     .L00424824
/* 004247FC 2465FFE0 */   addiu $a1, $v1, -0x20
.L00424800:
/* 00424800 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 00424804 8FA60088 */  lw    $a2, 0x88($sp)
/* 00424808 00003825 */  move  $a3, $zero
/* 0042480C 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 00424810 0320F809 */  jalr  $t9
/* 00424814 8FA2007C */   lw    $v0, 0x7c($sp)
/* 00424818 92030020 */  lbu   $v1, 0x20($s0)
/* 0042481C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00424820 2465FFE0 */  addiu $a1, $v1, -0x20
.L00424824:
/* 00424824 2C6C0060 */  sltiu $t4, $v1, 0x60
/* 00424828 11800009 */  beqz  $t4, .L00424850
/* 0042482C 00000000 */   nop   
/* 00424830 8F998044 */  lw    $t9, %got(D_100104F0)($gp)
/* 00424834 00034943 */  sra   $t1, $v1, 5
/* 00424838 00096880 */  sll   $t5, $t1, 2
/* 0042483C 273904F0 */  addiu $t9, %lo(D_100104F0) # addiu $t9, $t9, 0x4f0
/* 00424840 032D7821 */  addu  $t7, $t9, $t5
/* 00424844 8DEA0000 */  lw    $t2, ($t7)
/* 00424848 006A5804 */  sllv  $t3, $t2, $v1
/* 0042484C 296C0000 */  slti  $t4, $t3, 0
.L00424850:
/* 00424850 11800005 */  beqz  $t4, .L00424868
/* 00424854 2CA90080 */   sltiu $t1, $a1, 0x80
/* 00424858 8E0E002C */  lw    $t6, 0x2c($s0)
/* 0042485C 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00424860 10000058 */  b     .L004249C4
/* 00424864 AC2E0004 */   sw    $t6, 4($at)
.L00424868:
/* 00424868 11200009 */  beqz  $t1, .L00424890
/* 0042486C 00000000 */   nop   
/* 00424870 8F8F8044 */  lw    $t7, %got(D_10010510)($gp)
/* 00424874 0005C943 */  sra   $t9, $a1, 5
/* 00424878 00196880 */  sll   $t5, $t9, 2
/* 0042487C 25EF0510 */  addiu $t7, %lo(D_10010510) # addiu $t7, $t7, 0x510
/* 00424880 01ED5021 */  addu  $t2, $t7, $t5
/* 00424884 8D4B0000 */  lw    $t3, ($t2)
/* 00424888 00ABC004 */  sllv  $t8, $t3, $a1
/* 0042488C 2B090000 */  slti  $t1, $t8, 0
.L00424890:
/* 00424890 11200008 */  beqz  $t1, .L004248B4
/* 00424894 2C6F00A0 */   sltiu $t7, $v1, 0xa0
/* 00424898 8E0E002C */  lw    $t6, 0x2c($s0)
/* 0042489C 8F818DA4 */  lw     $at, %got(u)($gp)
/* 004248A0 AC2E0004 */  sw    $t6, 4($at)
/* 004248A4 9619003C */  lhu   $t9, 0x3c($s0)
/* 004248A8 8F818DA4 */  lw     $at, %got(u)($gp)
/* 004248AC 10000045 */  b     .L004249C4
/* 004248B0 AC390008 */   sw    $t9, 8($at)
.L004248B4:
/* 004248B4 11E00009 */  beqz  $t7, .L004248DC
/* 004248B8 3C010003 */   lui   $at, 3
/* 004248BC 8F8B8044 */  lw    $t3, %got(D_100104FC)($gp)
/* 004248C0 00036943 */  sra   $t5, $v1, 5
/* 004248C4 000D5080 */  sll   $t2, $t5, 2
/* 004248C8 256B04FC */  addiu $t3, %lo(D_100104FC) # addiu $t3, $t3, 0x4fc
/* 004248CC 016AC021 */  addu  $t8, $t3, $t2
/* 004248D0 8F0C0000 */  lw    $t4, ($t8)
/* 004248D4 006C4804 */  sllv  $t1, $t4, $v1
/* 004248D8 292F0000 */  slti  $t7, $t1, 0
.L004248DC:
/* 004248DC 11E00005 */  beqz  $t7, .L004248F4
/* 004248E0 2CAD0020 */   sltiu $t5, $a1, 0x20
/* 004248E4 92190038 */  lbu   $t9, 0x38($s0)
/* 004248E8 8F818DA4 */  lw     $at, %got(u)($gp)
/* 004248EC 10000035 */  b     .L004249C4
/* 004248F0 A0390008 */   sb    $t9, 8($at)
.L004248F4:
/* 004248F4 000D5823 */  negu  $t3, $t5
/* 004248F8 34218C80 */  ori   $at, $at, 0x8c80
/* 004248FC 01615024 */  and   $t2, $t3, $at
/* 00424900 00AAC004 */  sllv  $t8, $t2, $a1
/* 00424904 0703000D */  bgezl $t8, .L0042493C
/* 00424908 24010002 */   li    $at, 2
/* 0042490C 8F828DA4 */  lw     $v0, %got(u)($gp)
/* 00424910 8E0F002C */  lw    $t7, 0x2c($s0)
/* 00424914 9619003C */  lhu   $t9, 0x3c($s0)
/* 00424918 904C0001 */  lbu   $t4, 1($v0)
/* 0042491C 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00424920 AC4F0008 */  sw    $t7, 8($v0)
/* 00424924 3189FFE0 */  andi  $t1, $t4, 0xffe0
/* 00424928 352E0009 */  ori   $t6, $t1, 9
/* 0042492C A04E0001 */  sb    $t6, 1($v0)
/* 00424930 10000024 */  b     .L004249C4
/* 00424934 AC390004 */   sw    $t9, 4($at)
/* 00424938 24010002 */  li    $at, 2
.L0042493C:
/* 0042493C 54610009 */  bnel  $v1, $at, .L00424964
/* 00424940 2C6A00A0 */   sltiu $t2, $v1, 0xa0
/* 00424944 8E0D002C */  lw    $t5, 0x2c($s0)
/* 00424948 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042494C AC2D000C */  sw    $t5, 0xc($at)
/* 00424950 960B003C */  lhu   $t3, 0x3c($s0)
/* 00424954 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00424958 1000001A */  b     .L004249C4
/* 0042495C AC2B0008 */   sw    $t3, 8($at)
/* 00424960 2C6A00A0 */  sltiu $t2, $v1, 0xa0
.L00424964:
/* 00424964 11400009 */  beqz  $t2, .L0042498C
/* 00424968 2401003A */   li    $at, 58
/* 0042496C 8F898044 */  lw    $t1, %got(D_100104DC)($gp)
/* 00424970 0003C143 */  sra   $t8, $v1, 5
/* 00424974 00186080 */  sll   $t4, $t8, 2
/* 00424978 252904DC */  addiu $t1, %lo(D_100104DC) # addiu $t1, $t1, 0x4dc
/* 0042497C 012C7021 */  addu  $t6, $t1, $t4
/* 00424980 8DCF0000 */  lw    $t7, ($t6)
/* 00424984 006FC804 */  sllv  $t9, $t7, $v1
/* 00424988 2B2A0000 */  slti  $t2, $t9, 0
.L0042498C:
/* 0042498C 11400005 */  beqz  $t2, .L004249A4
/* 00424990 00000000 */   nop   
/* 00424994 8E0B002C */  lw    $t3, 0x2c($s0)
/* 00424998 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042499C 10000009 */  b     .L004249C4
/* 004249A0 AC2B0008 */   sw    $t3, 8($at)
.L004249A4:
/* 004249A4 54610008 */  bnel  $v1, $at, .L004249C8
/* 004249A8 920C003E */   lbu   $t4, 0x3e($s0)
/* 004249AC 8E18002C */  lw    $t8, 0x2c($s0)
/* 004249B0 8F818DA4 */  lw     $at, %got(u)($gp)
/* 004249B4 AC380008 */  sw    $t8, 8($at)
/* 004249B8 9609003C */  lhu   $t1, 0x3c($s0)
/* 004249BC 8F818DA4 */  lw     $at, %got(u)($gp)
/* 004249C0 AC290004 */  sw    $t1, 4($at)
.L004249C4:
/* 004249C4 920C003E */  lbu   $t4, 0x3e($s0)
.L004249C8:
/* 004249C8 11800021 */  beqz  $t4, .L00424A50
/* 004249CC 2CAE0040 */   sltiu $t6, $a1, 0x40
/* 004249D0 11C00009 */  beqz  $t6, .L004249F8
/* 004249D4 2C6C0080 */   sltiu $t4, $v1, 0x80
/* 004249D8 8F8D8044 */  lw    $t5, %got(D_10010574)($gp)
/* 004249DC 00057943 */  sra   $t7, $a1, 5
/* 004249E0 000FC880 */  sll   $t9, $t7, 2
/* 004249E4 25AD0574 */  addiu $t5, %lo(D_10010574) # addiu $t5, $t5, 0x574
/* 004249E8 01B95021 */  addu  $t2, $t5, $t9
/* 004249EC 8D4B0000 */  lw    $t3, ($t2)
/* 004249F0 00ABC004 */  sllv  $t8, $t3, $a1
/* 004249F4 2B0E0000 */  slti  $t6, $t8, 0
.L004249F8:
/* 004249F8 15C00015 */  bnez  $t6, .L00424A50
/* 004249FC 00000000 */   nop   
/* 00424A00 11800009 */  beqz  $t4, .L00424A28
/* 00424A04 00000000 */   nop   
/* 00424A08 8F998044 */  lw    $t9, %got(D_100104CC)($gp)
/* 00424A0C 00037943 */  sra   $t7, $v1, 5
/* 00424A10 000F6880 */  sll   $t5, $t7, 2
/* 00424A14 273904CC */  addiu $t9, %lo(D_100104CC) # addiu $t9, $t9, 0x4cc
/* 00424A18 032D5021 */  addu  $t2, $t9, $t5
/* 00424A1C 8D4B0000 */  lw    $t3, ($t2)
/* 00424A20 006BC004 */  sllv  $t8, $t3, $v1
/* 00424A24 2B0C0000 */  slti  $t4, $t8, 0
.L00424A28:
/* 00424A28 11800005 */  beqz  $t4, .L00424A40
/* 00424A2C 00000000 */   nop   
/* 00424A30 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00424A34 240E0002 */  li    $t6, 2
/* 00424A38 10000008 */  b     .L00424A5C
/* 00424A3C A48E0002 */   sh    $t6, 2($a0)
.L00424A40:
/* 00424A40 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00424A44 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00424A48 10000004 */  b     .L00424A5C
/* 00424A4C A4200002 */   sh    $zero, 2($at)
.L00424A50:
/* 00424A50 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00424A54 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00424A58 A4200002 */  sh    $zero, 2($at)
.L00424A5C:
/* 00424A5C 2CAF0080 */  sltiu $t7, $a1, 0x80
/* 00424A60 11E00009 */  beqz  $t7, .L00424A88
/* 00424A64 00000000 */   nop   
/* 00424A68 8F8A8044 */  lw    $t2, %got(D_10010510)($gp)
/* 00424A6C 0005C943 */  sra   $t9, $a1, 5
/* 00424A70 00196880 */  sll   $t5, $t9, 2
/* 00424A74 254A0510 */  addiu $t2, %lo(D_10010510) # addiu $t2, $t2, 0x510
/* 00424A78 014D5821 */  addu  $t3, $t2, $t5
/* 00424A7C 8D780000 */  lw    $t8, ($t3)
/* 00424A80 00B84804 */  sllv  $t1, $t8, $a1
/* 00424A84 292F0000 */  slti  $t7, $t1, 0
.L00424A88:
/* 00424A88 51E00008 */  beql  $t7, $zero, .L00424AAC
/* 00424A8C 24010033 */   li    $at, 51
/* 00424A90 920E003F */  lbu   $t6, 0x3f($s0)
/* 00424A94 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00424A98 A42E0002 */  sh    $t6, 2($at)
/* 00424A9C 8E190038 */  lw    $t9, 0x38($s0)
/* 00424AA0 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00424AA4 AC39000C */  sw    $t9, 0xc($at)
/* 00424AA8 24010033 */  li    $at, 51
.L00424AAC:
/* 00424AAC 54610008 */  bnel  $v1, $at, .L00424AD0
/* 00424AB0 2401009A */   li    $at, 154
/* 00424AB4 948D0002 */  lhu   $t5, 2($a0)
/* 00424AB8 240A0036 */  li    $t2, 54
/* 00424ABC A08A0000 */  sb    $t2, ($a0)
/* 00424AC0 35AB0001 */  ori   $t3, $t5, 1
/* 00424AC4 1000000C */  b     .L00424AF8
/* 00424AC8 A48B0002 */   sh    $t3, 2($a0)
/* 00424ACC 2401009A */  li    $at, 154
.L00424AD0:
/* 00424AD0 14610007 */  bne   $v1, $at, .L00424AF0
/* 00424AD4 00000000 */   nop   
/* 00424AD8 94890002 */  lhu   $t1, 2($a0)
/* 00424ADC 24180093 */  li    $t8, 147
/* 00424AE0 A0980000 */  sb    $t8, ($a0)
/* 00424AE4 352C0001 */  ori   $t4, $t1, 1
/* 00424AE8 10000003 */  b     .L00424AF8
/* 00424AEC A48C0002 */   sh    $t4, 2($a0)
.L00424AF0:
/* 00424AF0 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00424AF4 A0230000 */  sb    $v1, ($at)
.L00424AF8:
/* 00424AF8 908F0000 */  lbu   $t7, ($a0)
/* 00424AFC 24010036 */  li    $at, 54
/* 00424B00 2CAA0020 */  sltiu $t2, $a1, 0x20
/* 00424B04 15E10008 */  bne   $t7, $at, .L00424B28
/* 00424B08 000A6823 */   negu  $t5, $t2
/* 00424B0C 8F8288E0 */  lw     $v0, %got(use_ix)($gp)
/* 00424B10 24190091 */  li    $t9, 145
/* 00424B14 904E0000 */  lbu   $t6, ($v0)
/* 00424B18 51C00004 */  beql  $t6, $zero, .L00424B2C
/* 00424B1C 3C010003 */   lui   $at, 3
/* 00424B20 A0990000 */  sb    $t9, ($a0)
/* 00424B24 A0400000 */  sb    $zero, ($v0)
.L00424B28:
/* 00424B28 3C010003 */  lui   $at, 3
.L00424B2C:
/* 00424B2C 34218C80 */  ori   $at, $at, 0x8c80
/* 00424B30 01A15824 */  and   $t3, $t5, $at
/* 00424B34 00ABC004 */  sllv  $t8, $t3, $a1
/* 00424B38 0700000A */  bltz  $t8, .L00424B64
/* 00424B3C 00000000 */   nop   
/* 00424B40 90820001 */  lbu   $v0, 1($a0)
/* 00424B44 92090001 */  lbu   $t1, 1($s0)
/* 00424B48 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00424B4C 000266C0 */  sll   $t4, $v0, 0x1b
/* 00424B50 000C7EC2 */  srl   $t7, $t4, 0x1b
/* 00424B54 012F7026 */  xor   $t6, $t1, $t7
/* 00424B58 31D9001F */  andi  $t9, $t6, 0x1f
/* 00424B5C 03225026 */  xor   $t2, $t9, $v0
/* 00424B60 A02A0001 */  sb    $t2, 1($at)
.L00424B64:
/* 00424B64 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00424B68 0320F809 */  jalr  $t9
/* 00424B6C 00000000 */   nop   
/* 00424B70 8FBC0020 */  lw    $gp, 0x20($sp)
.L00424B74:
/* 00424B74 960D0006 */  lhu   $t5, 6($s0)
/* 00424B78 2DA10002 */  sltiu $at, $t5, 2
/* 00424B7C 54200006 */  bnezl $at, .L00424B98
/* 00424B80 92020004 */   lbu   $v0, 4($s0)
/* 00424B84 92020004 */  lbu   $v0, 4($s0)
/* 00424B88 24010002 */  li    $at, 2
/* 00424B8C 5441000D */  bnel  $v0, $at, .L00424BC4
/* 00424B90 8FAE007C */   lw    $t6, 0x7c($sp)
/* 00424B94 92020004 */  lbu   $v0, 4($s0)
.L00424B98:
/* 00424B98 3C011400 */  lui   $at, 0x1400
/* 00424B9C 2C4B0020 */  sltiu $t3, $v0, 0x20
/* 00424BA0 000BC023 */  negu  $t8, $t3
/* 00424BA4 03016024 */  and   $t4, $t8, $at
/* 00424BA8 004C4804 */  sllv  $t1, $t4, $v0
/* 00424BAC 0523010F */  bgezl $t1, .L00424FEC
/* 00424BB0 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00424BB4 8E0F0030 */  lw    $t7, 0x30($s0)
/* 00424BB8 55E0010C */  bnezl $t7, .L00424FEC
/* 00424BBC 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00424BC0 8FAE007C */  lw    $t6, 0x7c($sp)
.L00424BC4:
/* 00424BC4 2C4A0020 */  sltiu $t2, $v0, 0x20
/* 00424BC8 000A6823 */  negu  $t5, $t2
/* 00424BCC 3C011C00 */  lui   $at, 0x1c00
/* 00424BD0 8DD9FFF4 */  lw    $t9, -0xc($t6)
/* 00424BD4 01A15824 */  and   $t3, $t5, $at
/* 00424BD8 004BC004 */  sllv  $t8, $t3, $v0
/* 00424BDC 07010005 */  bgez  $t8, .L00424BF4
/* 00424BE0 AFB90038 */   sw    $t9, 0x38($sp)
/* 00424BE4 8E040014 */  lw    $a0, 0x14($s0)
/* 00424BE8 8C8C0020 */  lw    $t4, 0x20($a0)
/* 00424BEC 10000022 */  b     .L00424C78
/* 00424BF0 AE0C0030 */   sw    $t4, 0x30($s0)
.L00424BF4:
/* 00424BF4 92040023 */  lbu   $a0, 0x23($s0)
/* 00424BF8 2401000E */  li    $at, 14
/* 00424BFC 5081000D */  beql  $a0, $at, .L00424C34
/* 00424C00 92090020 */   lbu   $t1, 0x20($s0)
/* 00424C04 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 00424C08 0320F809 */  jalr  $t9
/* 00424C0C 00000000 */   nop   
/* 00424C10 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00424C14 26040030 */  addiu $a0, $s0, 0x30
/* 00424C18 00402825 */  move  $a1, $v0
/* 00424C1C 8F998604 */  lw    $t9, %call16(gettemp)($gp)
/* 00424C20 0320F809 */  jalr  $t9
/* 00424C24 00000000 */   nop   
/* 00424C28 10000012 */  b     .L00424C74
/* 00424C2C 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00424C30 92090020 */  lbu   $t1, 0x20($s0)
.L00424C34:
/* 00424C34 24010002 */  li    $at, 2
/* 00424C38 15210008 */  bne   $t1, $at, .L00424C5C
/* 00424C3C 00000000 */   nop   
/* 00424C40 8F998604 */  lw    $t9, %call16(gettemp)($gp)
/* 00424C44 26040030 */  addiu $a0, $s0, 0x30
/* 00424C48 9605003C */  lhu   $a1, 0x3c($s0)
/* 00424C4C 0320F809 */  jalr  $t9
/* 00424C50 00000000 */   nop   
/* 00424C54 10000007 */  b     .L00424C74
/* 00424C58 8FBC0020 */   lw    $gp, 0x20($sp)
.L00424C5C:
/* 00424C5C 8F998604 */  lw    $t9, %call16(gettemp)($gp)
/* 00424C60 26040030 */  addiu $a0, $s0, 0x30
/* 00424C64 8E05002C */  lw    $a1, 0x2c($s0)
/* 00424C68 0320F809 */  jalr  $t9
/* 00424C6C 00000000 */   nop   
/* 00424C70 8FBC0020 */  lw    $gp, 0x20($sp)
.L00424C74:
/* 00424C74 8E040014 */  lw    $a0, 0x14($s0)
.L00424C78:
/* 00424C78 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 00424C7C 8FA50038 */  lw    $a1, 0x38($sp)
/* 00424C80 27A60074 */  addiu $a2, $sp, 0x74
/* 00424C84 0320F809 */  jalr  $t9
/* 00424C88 00003825 */   move  $a3, $zero
/* 00424C8C 10400018 */  beqz  $v0, .L00424CF0
/* 00424C90 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00424C94 8FAF0088 */  lw    $t7, 0x88($sp)
/* 00424C98 11E00007 */  beqz  $t7, .L00424CB8
/* 00424C9C 00000000 */   nop   
/* 00424CA0 8F998288 */  lw    $t9, %call16(base_in_reg)($gp)
/* 00424CA4 8FA40074 */  lw    $a0, 0x74($sp)
/* 00424CA8 8E050014 */  lw    $a1, 0x14($s0)
/* 00424CAC 0320F809 */  jalr  $t9
/* 00424CB0 01E03025 */   move  $a2, $t7
/* 00424CB4 8FBC0020 */  lw    $gp, 0x20($sp)
.L00424CB8:
/* 00424CB8 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 00424CBC 92040023 */  lbu   $a0, 0x23($s0)
/* 00424CC0 0320F809 */  jalr  $t9
/* 00424CC4 00000000 */   nop   
/* 00424CC8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00424CCC 2404007B */  li    $a0, 123
/* 00424CD0 8FA50074 */  lw    $a1, 0x74($sp)
/* 00424CD4 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00424CD8 92060023 */  lbu   $a2, 0x23($s0)
/* 00424CDC 00403825 */  move  $a3, $v0
/* 00424CE0 0320F809 */  jalr  $t9
/* 00424CE4 00000000 */   nop   
/* 00424CE8 10000007 */  b     .L00424D08
/* 00424CEC 8FBC0020 */   lw    $gp, 0x20($sp)
.L00424CF0:
/* 00424CF0 8F998290 */  lw    $t9, %call16(spilltemplodstr)($gp)
/* 00424CF4 2404007B */  li    $a0, 123
/* 00424CF8 92050023 */  lbu   $a1, 0x23($s0)
/* 00424CFC 0320F809 */  jalr  $t9
/* 00424D00 8E060030 */   lw    $a2, 0x30($s0)
/* 00424D04 8FBC0020 */  lw    $gp, 0x20($sp)
.L00424D08:
/* 00424D08 920E0020 */  lbu   $t6, 0x20($s0)
/* 00424D0C 2DD900A0 */  sltiu $t9, $t6, 0xa0
/* 00424D10 13200009 */  beqz  $t9, .L00424D38
/* 00424D14 00000000 */   nop   
/* 00424D18 8F8B8044 */  lw    $t3, %got(D_100104B8)($gp)
/* 00424D1C 000E5143 */  sra   $t2, $t6, 5
/* 00424D20 000A6880 */  sll   $t5, $t2, 2
/* 00424D24 256B04B8 */  addiu $t3, %lo(D_100104B8) # addiu $t3, $t3, 0x4b8
/* 00424D28 016DC021 */  addu  $t8, $t3, $t5
/* 00424D2C 8F0C0000 */  lw    $t4, ($t8)
/* 00424D30 01CC4804 */  sllv  $t1, $t4, $t6
/* 00424D34 29390000 */  slti  $t9, $t1, 0
.L00424D38:
/* 00424D38 572000AC */  bnezl $t9, .L00424FEC
/* 00424D3C 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00424D40 8E0A0014 */  lw    $t2, 0x14($s0)
/* 00424D44 8D430024 */  lw    $v1, 0x24($t2)
/* 00424D48 506000A8 */  beql  $v1, $zero, .L00424FEC
/* 00424D4C 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00424D50 8F8B89D0 */  lw     $t3, %got(nota_candof)($gp)
/* 00424D54 8D6B0000 */  lw    $t3, ($t3)
/* 00424D58 516300A4 */  beql  $t3, $v1, .L00424FEC
/* 00424D5C 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00424D60 8F99801C */  lw    $t9, %got(func_00422D04)($gp)
/* 00424D64 8C640010 */  lw    $a0, 0x10($v1)
/* 00424D68 8FA2007C */  lw    $v0, 0x7c($sp)
                            lw $a1, -0xc($v0)
/* 00424D6C 27392D04 */  addiu $t9, %lo(func_00422D04) # addiu $t9, $t9, 0x2d04
/* 00424D70 0320F809 */  jalr  $t9
/* 00424D74 00000000 */   nop   
/* 00424D78 8E0D0014 */  lw    $t5, 0x14($s0)
/* 00424D7C 2401FFFF */  li    $at, -1
/* 00424D80 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00424D84 8DA30024 */  lw    $v1, 0x24($t5)
/* 00424D88 240E005E */  li    $t6, 94
/* 00424D8C 8C780008 */  lw    $t8, 8($v1)
/* 00424D90 8C6C0014 */  lw    $t4, 0x14($v1)
/* 00424D94 030C0019 */  multu $t8, $t4
/* 00424D98 00001012 */  mflo  $v0
/* 00424D9C 54410014 */  bnel  $v0, $at, .L00424DF0
/* 00424DA0 24010001 */   li    $at, 1
/* 00424DA4 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00424DA8 92090023 */  lbu   $t1, 0x23($s0)
/* 00424DAC 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00424DB0 90820001 */  lbu   $v0, 1($a0)
/* 00424DB4 A08E0000 */  sb    $t6, ($a0)
/* 00424DB8 A4800002 */  sh    $zero, 2($a0)
/* 00424DBC 00027EC0 */  sll   $t7, $v0, 0x1b
/* 00424DC0 000FCEC2 */  srl   $t9, $t7, 0x1b
/* 00424DC4 01395026 */  xor   $t2, $t1, $t9
/* 00424DC8 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00424DCC 314B001F */  andi  $t3, $t2, 0x1f
/* 00424DD0 01626826 */  xor   $t5, $t3, $v0
/* 00424DD4 0320F809 */  jalr  $t9
/* 00424DD8 A02D0001 */   sb    $t5, 1($at)
/* 00424DDC 8E180014 */  lw    $t8, 0x14($s0)
/* 00424DE0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00424DE4 10000023 */  b     .L00424E74
/* 00424DE8 8F030024 */   lw    $v1, 0x24($t8)
/* 00424DEC 24010001 */  li    $at, 1
.L00424DF0:
/* 00424DF0 10410020 */  beq   $v0, $at, .L00424E74
/* 00424DF4 27AC0060 */   addiu $t4, $sp, 0x60
/* 00424DF8 AFA20060 */  sw    $v0, 0x60($sp)
/* 00424DFC 8D860000 */  lw    $a2, ($t4)
/* 00424E00 24190001 */  li    $t9, 1
/* 00424E04 24090004 */  li    $t1, 4
/* 00424E08 AFA60008 */  sw    $a2, 8($sp)
/* 00424E0C 8D870004 */  lw    $a3, 4($t4)
/* 00424E10 AFB90014 */  sw    $t9, 0x14($sp)
/* 00424E14 8F998298 */  lw    $t9, %call16(genloadnum)($gp)
/* 00424E18 AFA90010 */  sw    $t1, 0x10($sp)
/* 00424E1C 92040023 */  lbu   $a0, 0x23($s0)
/* 00424E20 0320F809 */  jalr  $t9
/* 00424E24 AFA7000C */   sw    $a3, 0xc($sp)
/* 00424E28 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00424E2C 920B0023 */  lbu   $t3, 0x23($s0)
/* 00424E30 240A005B */  li    $t2, 91
/* 00424E34 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00424E38 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00424E3C 90820001 */  lbu   $v0, 1($a0)
/* 00424E40 A08A0000 */  sb    $t2, ($a0)
/* 00424E44 A4800002 */  sh    $zero, 2($a0)
/* 00424E48 00026EC0 */  sll   $t5, $v0, 0x1b
/* 00424E4C 000DC6C2 */  srl   $t8, $t5, 0x1b
/* 00424E50 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00424E54 01786026 */  xor   $t4, $t3, $t8
/* 00424E58 318E001F */  andi  $t6, $t4, 0x1f
/* 00424E5C 01C27826 */  xor   $t7, $t6, $v0
/* 00424E60 0320F809 */  jalr  $t9
/* 00424E64 A02F0001 */   sb    $t7, 1($at)
/* 00424E68 8E090014 */  lw    $t1, 0x14($s0)
/* 00424E6C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00424E70 8D230024 */  lw    $v1, 0x24($t1)
.L00424E74:
/* 00424E74 8F9989EC */  lw     $t9, %got(bittab)($gp)
/* 00424E78 8C6A0018 */  lw    $t2, 0x18($v1)
/* 00424E7C 8FB8007C */  lw    $t8, 0x7c($sp)
/* 00424E80 8F390000 */  lw    $t9, ($t9)
/* 00424E84 000A68C0 */  sll   $t5, $t2, 3
/* 00424E88 8F05FFF4 */  lw    $a1, -0xc($t8)
/* 00424E8C 032D5821 */  addu  $t3, $t9, $t5
/* 00424E90 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 00424E94 8D640000 */  lw    $a0, ($t3)
/* 00424E98 27A60074 */  addiu $a2, $sp, 0x74
/* 00424E9C 00003825 */  move  $a3, $zero
/* 00424EA0 0320F809 */  jalr  $t9
/* 00424EA4 AFA4005C */   sw    $a0, 0x5c($sp)
/* 00424EA8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00424EAC 1040000F */  beqz  $v0, .L00424EEC
/* 00424EB0 8FA4005C */   lw    $a0, 0x5c($sp)
/* 00424EB4 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 00424EB8 92040023 */  lbu   $a0, 0x23($s0)
/* 00424EBC 0320F809 */  jalr  $t9
/* 00424EC0 00000000 */   nop   
/* 00424EC4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00424EC8 2404007B */  li    $a0, 123
/* 00424ECC 8FA50074 */  lw    $a1, 0x74($sp)
/* 00424ED0 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00424ED4 92060023 */  lbu   $a2, 0x23($s0)
/* 00424ED8 00403825 */  move  $a3, $v0
/* 00424EDC 0320F809 */  jalr  $t9
/* 00424EE0 00000000 */   nop   
/* 00424EE4 10000040 */  b     .L00424FE8
/* 00424EE8 8FBC0020 */   lw    $gp, 0x20($sp)
.L00424EEC:
/* 00424EEC 8F838DA4 */  lw     $v1, %got(u)($gp)
/* 00424EF0 920C0023 */  lbu   $t4, 0x23($s0)
/* 00424EF4 90620001 */  lbu   $v0, 1($v1)
/* 00424EF8 000276C0 */  sll   $t6, $v0, 0x1b
/* 00424EFC 000E7EC2 */  srl   $t7, $t6, 0x1b
/* 00424F00 018F4826 */  xor   $t1, $t4, $t7
/* 00424F04 312A001F */  andi  $t2, $t1, 0x1f
/* 00424F08 0142C826 */  xor   $t9, $t2, $v0
/* 00424F0C A0790001 */  sb    $t9, 1($v1)
/* 00424F10 906D0001 */  lbu   $t5, 1($v1)
/* 00424F14 8F8E8980 */  lw     $t6, %got(curblk)($gp)
/* 00424F18 8C8C0020 */  lw    $t4, 0x20($a0)
/* 00424F1C 31ABFF1F */  andi  $t3, $t5, 0xff1f
/* 00424F20 35780020 */  ori   $t8, $t3, 0x20
/* 00424F24 A0780001 */  sb    $t8, 1($v1)
/* 00424F28 8DCE0000 */  lw    $t6, ($t6)
/* 00424F2C 8F898B48 */  lw     $t1, %got(stack_reversed)($gp)
/* 00424F30 AC6E0004 */  sw    $t6, 4($v1)
/* 00424F34 8D8F0004 */  lw    $t7, 4($t4)
/* 00424F38 AC6F000C */  sw    $t7, 0xc($v1)
/* 00424F3C 91290000 */  lbu   $t1, ($t1)
/* 00424F40 1520000A */  bnez  $t1, .L00424F6C
/* 00424F44 00000000 */   nop   
/* 00424F48 8F8289FC */  lw     $v0, %got(highestmdef)($gp)
/* 00424F4C 000FC823 */  negu  $t9, $t7
/* 00424F50 8C4D0000 */  lw    $t5, ($v0)
/* 00424F54 01B9082A */  slt   $at, $t5, $t9
/* 00424F58 10200002 */  beqz  $at, .L00424F64
/* 00424F5C 00000000 */   nop   
/* 00424F60 03206825 */  move  $t5, $t9
.L00424F64:
/* 00424F64 10000009 */  b     .L00424F8C
/* 00424F68 AC4D0000 */   sw    $t5, ($v0)
.L00424F6C:
/* 00424F6C 8F8289FC */  lw     $v0, %got(highestmdef)($gp)
/* 00424F70 8C6B000C */  lw    $t3, 0xc($v1)
/* 00424F74 8C580000 */  lw    $t8, ($v0)
/* 00424F78 030B082A */  slt   $at, $t8, $t3
/* 00424F7C 50200003 */  beql  $at, $zero, .L00424F8C
/* 00424F80 AC580000 */   sw    $t8, ($v0)
/* 00424F84 0160C025 */  move  $t8, $t3
/* 00424F88 AC580000 */  sw    $t8, ($v0)
.L00424F8C:
/* 00424F8C 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 00424F90 90640001 */  lbu   $a0, 1($v1)
/* 00424F94 0320F809 */  jalr  $t9
/* 00424F98 3084001F */   andi  $a0, $a0, 0x1f
/* 00424F9C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00424FA0 240E007B */  li    $t6, 123
/* 00424FA4 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00424FA8 AC820008 */  sw    $v0, 8($a0)
/* 00424FAC A4800002 */  sh    $zero, 2($a0)
/* 00424FB0 A08E0000 */  sb    $t6, ($a0)
/* 00424FB4 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00424FB8 0320F809 */  jalr  $t9
/* 00424FBC 00000000 */   nop   
/* 00424FC0 10000009 */  b     .L00424FE8
/* 00424FC4 8FBC0020 */   lw    $gp, 0x20($sp)
.L00424FC8:
/* 00424FC8 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00424FCC 8F868044 */  lw    $a2, %got(RO_1000AF5C)($gp)
/* 00424FD0 24040001 */  li    $a0, 1
/* 00424FD4 24050542 */  li    $a1, 1346
/* 00424FD8 2407000A */  li    $a3, 10
/* 00424FDC 0320F809 */  jalr  $t9
/* 00424FE0 24C6AF5C */   addiu $a2, %lo(RO_1000AF5C) # addiu $a2, $a2, -0x50a4
/* 00424FE4 8FBC0020 */  lw    $gp, 0x20($sp)
.L00424FE8:
/* 00424FE8 8FBF0024 */  lw    $ra, 0x24($sp)
.L00424FEC:
/* 00424FEC 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00424FF0 27BD0080 */  addiu $sp, $sp, 0x80
/* 00424FF4 03E00008 */  jr    $ra
/* 00424FF8 00000000 */   nop   

    .type func_00424FFC, @function
func_00424FFC:
    # 00424FFC func_00424FFC
    # 0042BB4C func_0042BB4C
    # 0042BF08 reemit
/* 00424FFC 3C1C0FBF */  .cpload $t9
/* 00425000 279C5294 */  
/* 00425004 0399E021 */  
/* 00425008 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0042500C AFB1001C */  sw    $s1, 0x1c($sp)
/* 00425010 00A08825 */  move  $s1, $a1
/* 00425014 AFB00018 */  sw    $s0, 0x18($sp)
/* 00425018 00808025 */  move  $s0, $a0
/* 0042501C 8F8589CC */  lw     $a1, %got(nocopy)($gp)
/* 00425020 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00425024 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00425028 AFA20034 */  sw    $v0, 0x34($sp)
.L0042502C:
/* 0042502C 52000155 */  beql  $s0, $zero, .L00425584
/* 00425030 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00425034 92030000 */  lbu   $v1, ($s0)
/* 00425038 02002025 */  move  $a0, $s0
/* 0042503C 246EFFFF */  addiu $t6, $v1, -1
/* 00425040 2DC10008 */  sltiu $at, $t6, 8
/* 00425044 10200146 */  beqz  $at, .L00425560
/* 00425048 00000000 */   nop   
/* 0042504C 8F818044 */  lw    $at, %got(jtbl_1000B054)($gp)
/* 00425050 000E7080 */  sll   $t6, $t6, 2
/* 00425054 002E0821 */  addu  $at, $at, $t6
/* 00425058 8C2EB054 */  lw    $t6, %lo(jtbl_1000B054)($at)
/* 0042505C 01DC7021 */  addu  $t6, $t6, $gp
/* 00425060 01C00008 */  jr    $t6
/* 00425064 00000000 */   nop   
.L00425068:
/* 00425068 8E020030 */  lw    $v0, 0x30($s0)
/* 0042506C 50400007 */  beql  $v0, $zero, .L0042508C
/* 00425070 24010003 */   li    $at, 3
/* 00425074 8CAF0000 */  lw    $t7, ($a1)
/* 00425078 51E20004 */  beql  $t7, $v0, .L0042508C
/* 0042507C 24010003 */   li    $at, 3
/* 00425080 1000FFEA */  b     .L0042502C
/* 00425084 8C900030 */   lw    $s0, 0x30($a0)
/* 00425088 24010003 */  li    $at, 3
.L0042508C:
/* 0042508C 5061013D */  beql  $v1, $at, .L00425584
/* 00425090 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00425094 92020004 */  lbu   $v0, 4($s0)
/* 00425098 2407000A */  li    $a3, 10
/* 0042509C 2C410006 */  sltiu $at, $v0, 6
/* 004250A0 10200018 */  beqz  $at, .L00425104
/* 004250A4 00000000 */   nop   
/* 004250A8 8F818044 */  lw    $at, %got(jtbl_1000B010)($gp)
/* 004250AC 0002C080 */  sll   $t8, $v0, 2
/* 004250B0 00380821 */  addu  $at, $at, $t8
/* 004250B4 8C38B010 */  lw    $t8, %lo(jtbl_1000B010)($at)
/* 004250B8 031CC021 */  addu  $t8, $t8, $gp
/* 004250BC 03000008 */  jr    $t8
/* 004250C0 00000000 */   nop   
.L004250C4:
/* 004250C4 10000017 */  b     .L00425124
/* 004250C8 8E02003C */   lw    $v0, 0x3c($s0)
.L004250CC:
/* 004250CC 8E02003C */  lw    $v0, 0x3c($s0)
/* 004250D0 14400014 */  bnez  $v0, .L00425124
/* 004250D4 00000000 */   nop   
/* 004250D8 8E190014 */  lw    $t9, 0x14($s0)
/* 004250DC 8F220020 */  lw    $v0, 0x20($t9)
/* 004250E0 10000010 */  b     .L00425124
/* 004250E4 AE02003C */   sw    $v0, 0x3c($s0)
.L004250E8:
/* 004250E8 8F99861C */  lw    $t9, %call16(dbgerror)($gp)
/* 004250EC 24040137 */  li    $a0, 311
/* 004250F0 0320F809 */  jalr  $t9
/* 004250F4 00000000 */   nop   
/* 004250F8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004250FC 10000009 */  b     .L00425124
/* 00425100 8E02003C */   lw    $v0, 0x3c($s0)
.L00425104:
/* 00425104 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00425108 8F868044 */  lw    $a2, %got(RO_1000B006)($gp)
/* 0042510C 24040001 */  li    $a0, 1
/* 00425110 2405073B */  li    $a1, 1851
/* 00425114 0320F809 */  jalr  $t9
/* 00425118 24C6B006 */   addiu $a2, %lo(RO_1000B006) # addiu $a2, $a2, -0x4ffa
/* 0042511C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00425120 8E02003C */  lw    $v0, 0x3c($s0)
.L00425124:
/* 00425124 54400117 */  bnezl $v0, .L00425584
/* 00425128 8FBF0024 */   lw    $ra, 0x24($sp)
/* 0042512C 8F99801C */  lw    $t9, %got(func_00424FFC)($gp)
/* 00425130 8E040024 */  lw    $a0, 0x24($s0)
/* 00425134 00002825 */  move  $a1, $zero
/* 00425138 27394FFC */  addiu $t9, %lo(func_00424FFC) # addiu $t9, $t9, 0x4ffc
/* 0042513C 0320F809 */  jalr  $t9
/* 00425140 8FA20034 */   lw    $v0, 0x34($sp)
/* 00425144 96090006 */  lhu   $t1, 6($s0)
/* 00425148 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042514C 2D210002 */  sltiu $at, $t1, 2
/* 00425150 54200006 */  bnezl $at, .L0042516C
/* 00425154 920B0004 */   lbu   $t3, 4($s0)
/* 00425158 920A0004 */  lbu   $t2, 4($s0)
/* 0042515C 24010002 */  li    $at, 2
/* 00425160 1541000C */  bne   $t2, $at, .L00425194
/* 00425164 00000000 */   nop   
/* 00425168 920B0004 */  lbu   $t3, 4($s0)
.L0042516C:
/* 0042516C 3C011400 */  lui   $at, 0x1400
/* 00425170 2D6C0020 */  sltiu $t4, $t3, 0x20
/* 00425174 000C6823 */  negu  $t5, $t4
/* 00425178 01A17024 */  and   $t6, $t5, $at
/* 0042517C 016E7804 */  sllv  $t7, $t6, $t3
/* 00425180 05E30100 */  bgezl $t7, .L00425584
/* 00425184 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00425188 8E18003C */  lw    $t8, 0x3c($s0)
/* 0042518C 570000FD */  bnezl $t8, .L00425584
/* 00425190 8FBF0024 */   lw    $ra, 0x24($sp)
.L00425194:
/* 00425194 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 00425198 02002025 */  move  $a0, $s0
/* 0042519C 24050003 */  li    $a1, 3
/* 004251A0 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 004251A4 02203025 */  move  $a2, $s1
/* 004251A8 00003825 */  move  $a3, $zero
/* 004251AC 0320F809 */  jalr  $t9
/* 004251B0 8FA20034 */   lw    $v0, 0x34($sp)
/* 004251B4 100000F2 */  b     .L00425580
/* 004251B8 8FBC0020 */   lw    $gp, 0x20($sp)
.L004251BC:
/* 004251BC 92020004 */  lbu   $v0, 4($s0)
/* 004251C0 2C410006 */  sltiu $at, $v0, 6
/* 004251C4 10200018 */  beqz  $at, .L00425228
/* 004251C8 00000000 */   nop   
/* 004251CC 8F818044 */  lw    $at, %got(jtbl_1000B028)($gp)
/* 004251D0 0002C880 */  sll   $t9, $v0, 2
/* 004251D4 00390821 */  addu  $at, $at, $t9
/* 004251D8 8C39B028 */  lw    $t9, %lo(jtbl_1000B028)($at)
/* 004251DC 033CC821 */  addu  $t9, $t9, $gp
/* 004251E0 03200008 */  jr    $t9
/* 004251E4 00000000 */   nop   
.L004251E8:
/* 004251E8 10000018 */  b     .L0042524C
/* 004251EC 8E020038 */   lw    $v0, 0x38($s0)
.L004251F0:
/* 004251F0 8E020038 */  lw    $v0, 0x38($s0)
/* 004251F4 14400015 */  bnez  $v0, .L0042524C
/* 004251F8 00000000 */   nop   
/* 004251FC 8E080014 */  lw    $t0, 0x14($s0)
/* 00425200 8D020024 */  lw    $v0, 0x24($t0)
/* 00425204 10000011 */  b     .L0042524C
/* 00425208 AE020038 */   sw    $v0, 0x38($s0)
.L0042520C:
/* 0042520C 8F99861C */  lw    $t9, %call16(dbgerror)($gp)
/* 00425210 24040137 */  li    $a0, 311
/* 00425214 0320F809 */  jalr  $t9
/* 00425218 00000000 */   nop   
/* 0042521C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00425220 1000000A */  b     .L0042524C
/* 00425224 8E020038 */   lw    $v0, 0x38($s0)
.L00425228:
/* 00425228 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0042522C 8F868044 */  lw    $a2, %got(RO_1000AFFC)($gp)
/* 00425230 24040001 */  li    $a0, 1
/* 00425234 2405074C */  li    $a1, 1868
/* 00425238 2407000A */  li    $a3, 10
/* 0042523C 0320F809 */  jalr  $t9
/* 00425240 24C6AFFC */   addiu $a2, %lo(RO_1000AFFC) # addiu $a2, $a2, -0x5004
/* 00425244 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00425248 8E020038 */  lw    $v0, 0x38($s0)
.L0042524C:
/* 0042524C 544000CD */  bnezl $v0, .L00425584
/* 00425250 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00425254 8F99801C */  lw    $t9, %got(func_00424FFC)($gp)
/* 00425258 8E040034 */  lw    $a0, 0x34($s0)
/* 0042525C 00002825 */  move  $a1, $zero
/* 00425260 27394FFC */  addiu $t9, %lo(func_00424FFC) # addiu $t9, $t9, 0x4ffc
/* 00425264 0320F809 */  jalr  $t9
/* 00425268 8FA20034 */   lw    $v0, 0x34($sp)
/* 0042526C 960A0006 */  lhu   $t2, 6($s0)
/* 00425270 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00425274 2D410002 */  sltiu $at, $t2, 2
/* 00425278 54200006 */  bnezl $at, .L00425294
/* 0042527C 920D0004 */   lbu   $t5, 4($s0)
/* 00425280 920C0004 */  lbu   $t4, 4($s0)
/* 00425284 24010002 */  li    $at, 2
/* 00425288 1581000C */  bne   $t4, $at, .L004252BC
/* 0042528C 00000000 */   nop   
/* 00425290 920D0004 */  lbu   $t5, 4($s0)
.L00425294:
/* 00425294 3C011400 */  lui   $at, 0x1400
/* 00425298 2DAE0020 */  sltiu $t6, $t5, 0x20
/* 0042529C 000E5823 */  negu  $t3, $t6
/* 004252A0 01617824 */  and   $t7, $t3, $at
/* 004252A4 01AFC004 */  sllv  $t8, $t7, $t5
/* 004252A8 070300B6 */  bgezl $t8, .L00425584
/* 004252AC 8FBF0024 */   lw    $ra, 0x24($sp)
/* 004252B0 8E190038 */  lw    $t9, 0x38($s0)
/* 004252B4 572000B3 */  bnezl $t9, .L00425584
/* 004252B8 8FBF0024 */   lw    $ra, 0x24($sp)
.L004252BC:
/* 004252BC 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 004252C0 02002025 */  move  $a0, $s0
/* 004252C4 24050003 */  li    $a1, 3
/* 004252C8 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 004252CC 00003025 */  move  $a2, $zero
/* 004252D0 00003825 */  move  $a3, $zero
/* 004252D4 0320F809 */  jalr  $t9
/* 004252D8 8FA20034 */   lw    $v0, 0x34($sp)
/* 004252DC 100000A8 */  b     .L00425580
/* 004252E0 8FBC0020 */   lw    $gp, 0x20($sp)
.L004252E4:
/* 004252E4 92020004 */  lbu   $v0, 4($s0)
/* 004252E8 2448FFFF */  addiu $t0, $v0, -1
/* 004252EC 2D010005 */  sltiu $at, $t0, 5
/* 004252F0 10200011 */  beqz  $at, .L00425338
/* 004252F4 00000000 */   nop   
/* 004252F8 8F818044 */  lw    $at, %got(jtbl_1000B040)($gp)
/* 004252FC 00084080 */  sll   $t0, $t0, 2
/* 00425300 00280821 */  addu  $at, $at, $t0
/* 00425304 8C28B040 */  lw    $t0, %lo(jtbl_1000B040)($at)
/* 00425308 011C4021 */  addu  $t0, $t0, $gp
/* 0042530C 01000008 */  jr    $t0
/* 00425310 00000000 */   nop   
.L00425314:
/* 00425314 10000011 */  b     .L0042535C
/* 00425318 8E020030 */   lw    $v0, 0x30($s0)
.L0042531C:
/* 0042531C 8E020030 */  lw    $v0, 0x30($s0)
/* 00425320 1440000E */  bnez  $v0, .L0042535C
/* 00425324 00000000 */   nop   
/* 00425328 8E090014 */  lw    $t1, 0x14($s0)
/* 0042532C 8D220020 */  lw    $v0, 0x20($t1)
/* 00425330 1000000A */  b     .L0042535C
/* 00425334 AE020030 */   sw    $v0, 0x30($s0)
.L00425338:
/* 00425338 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0042533C 8F868044 */  lw    $a2, %got(RO_1000AFF2)($gp)
/* 00425340 24040001 */  li    $a0, 1
/* 00425344 2405075E */  li    $a1, 1886
/* 00425348 2407000A */  li    $a3, 10
/* 0042534C 0320F809 */  jalr  $t9
/* 00425350 24C6AFF2 */   addiu $a2, %lo(RO_1000AFF2) # addiu $a2, $a2, -0x500e
/* 00425354 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00425358 8E020030 */  lw    $v0, 0x30($s0)
.L0042535C:
/* 0042535C 54400089 */  bnezl $v0, .L00425584
/* 00425360 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00425364 92020020 */  lbu   $v0, 0x20($s0)
/* 00425368 2443FFE0 */  addiu $v1, $v0, -0x20
/* 0042536C 2C6C0040 */  sltiu $t4, $v1, 0x40
/* 00425370 11800009 */  beqz  $t4, .L00425398
/* 00425374 00000000 */   nop   
/* 00425378 8F8F8044 */  lw    $t7, %got(D_1001059C)($gp)
/* 0042537C 00037143 */  sra   $t6, $v1, 5
/* 00425380 000E5880 */  sll   $t3, $t6, 2
/* 00425384 25EF059C */  addiu $t7, %lo(D_1001059C) # addiu $t7, $t7, 0x59c
/* 00425388 01EB6821 */  addu  $t5, $t7, $t3
/* 0042538C 8DB80000 */  lw    $t8, ($t5)
/* 00425390 0078C804 */  sllv  $t9, $t8, $v1
/* 00425394 2B2C0000 */  slti  $t4, $t9, 0
.L00425398:
/* 00425398 11800009 */  beqz  $t4, .L004253C0
/* 0042539C 00000000 */   nop   
/* 004253A0 8E090038 */  lw    $t1, 0x38($s0)
/* 004253A4 8D2A0004 */  lw    $t2, 4($t1)
/* 004253A8 55400054 */  bnezl $t2, .L004254FC
/* 004253AC 960C0006 */   lhu   $t4, 6($s0)
/* 004253B0 8E0E003C */  lw    $t6, 0x3c($s0)
/* 004253B4 8DCF0004 */  lw    $t7, 4($t6)
/* 004253B8 55E00050 */  bnezl $t7, .L004254FC
/* 004253BC 960C0006 */   lhu   $t4, 6($s0)
.L004253C0:
/* 004253C0 8F8D8DBC */  lw     $t5, %got(optab)($gp)
/* 004253C4 00025880 */  sll   $t3, $v0, 2
/* 004253C8 01625823 */  subu  $t3, $t3, $v0
/* 004253CC 016DC021 */  addu  $t8, $t3, $t5
/* 004253D0 93190002 */  lbu   $t9, 2($t8)
/* 004253D4 00002825 */  move  $a1, $zero
/* 004253D8 2C480080 */  sltiu $t0, $v0, 0x80
/* 004253DC 1320002B */  beqz  $t9, .L0042548C
/* 004253E0 2C690080 */   sltiu $t1, $v1, 0x80
/* 004253E4 11000009 */  beqz  $t0, .L0042540C
/* 004253E8 00003025 */   move  $a2, $zero
/* 004253EC 8F8A8044 */  lw    $t2, %got(D_1001058C)($gp)
/* 004253F0 00026143 */  sra   $t4, $v0, 5
/* 004253F4 000C4880 */  sll   $t1, $t4, 2
/* 004253F8 254A058C */  addiu $t2, %lo(D_1001058C) # addiu $t2, $t2, 0x58c
/* 004253FC 01497021 */  addu  $t6, $t2, $t1
/* 00425400 8DCF0000 */  lw    $t7, ($t6)
/* 00425404 004F5804 */  sllv  $t3, $t7, $v0
/* 00425408 29680000 */  slti  $t0, $t3, 0
.L0042540C:
/* 0042540C 1100000C */  beqz  $t0, .L00425440
/* 00425410 24010041 */   li    $at, 65
/* 00425414 8E180024 */  lw    $t8, 0x24($s0)
/* 00425418 93190001 */  lbu   $t9, 1($t8)
/* 0042541C 57200003 */  bnezl $t9, .L0042542C
/* 00425420 8E0C0028 */   lw    $t4, 0x28($s0)
/* 00425424 02202825 */  move  $a1, $s1
/* 00425428 8E0C0028 */  lw    $t4, 0x28($s0)
.L0042542C:
/* 0042542C 918A0001 */  lbu   $t2, 1($t4)
/* 00425430 15400006 */  bnez  $t2, .L0042544C
/* 00425434 00000000 */   nop   
/* 00425438 10000004 */  b     .L0042544C
/* 0042543C 02203025 */   move  $a2, $s1
.L00425440:
/* 00425440 14410002 */  bne   $v0, $at, .L0042544C
/* 00425444 00000000 */   nop   
/* 00425448 02202825 */  move  $a1, $s1
.L0042544C:
/* 0042544C 8F99801C */  lw    $t9, %got(func_00424FFC)($gp)
/* 00425450 8E040024 */  lw    $a0, 0x24($s0)
/* 00425454 8FA20034 */  lw    $v0, 0x34($sp)
/* 00425458 27394FFC */  addiu $t9, %lo(func_00424FFC) # addiu $t9, $t9, 0x4ffc
/* 0042545C 0320F809 */  jalr  $t9
/* 00425460 AFA6002C */   sw    $a2, 0x2c($sp)
/* 00425464 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00425468 8FA5002C */  lw    $a1, 0x2c($sp)
/* 0042546C 8E040028 */  lw    $a0, 0x28($s0)
/* 00425470 8F99801C */  lw    $t9, %got(func_00424FFC)($gp)
/* 00425474 8FA20034 */  lw    $v0, 0x34($sp)
/* 00425478 27394FFC */  addiu $t9, %lo(func_00424FFC) # addiu $t9, $t9, 0x4ffc
/* 0042547C 0320F809 */  jalr  $t9
/* 00425480 00000000 */   nop   
/* 00425484 1000001C */  b     .L004254F8
/* 00425488 8FBC0020 */   lw    $gp, 0x20($sp)
.L0042548C:
/* 0042548C 11200009 */  beqz  $t1, .L004254B4
/* 00425490 00000000 */   nop   
/* 00425494 8F8B8044 */  lw    $t3, %got(D_1001057C)($gp)
/* 00425498 00037143 */  sra   $t6, $v1, 5
/* 0042549C 000E7880 */  sll   $t7, $t6, 2
/* 004254A0 256B057C */  addiu $t3, %lo(D_1001057C) # addiu $t3, $t3, 0x57c
/* 004254A4 016F6821 */  addu  $t5, $t3, $t7
/* 004254A8 8DA80000 */  lw    $t0, ($t5)
/* 004254AC 0068C004 */  sllv  $t8, $t0, $v1
/* 004254B0 2B090000 */  slti  $t1, $t8, 0
.L004254B4:
/* 004254B4 11200009 */  beqz  $t1, .L004254DC
/* 004254B8 00000000 */   nop   
/* 004254BC 8F99801C */  lw    $t9, %got(func_00424FFC)($gp)
/* 004254C0 8E040024 */  lw    $a0, 0x24($s0)
/* 004254C4 8E050034 */  lw    $a1, 0x34($s0)
/* 004254C8 27394FFC */  addiu $t9, %lo(func_00424FFC) # addiu $t9, $t9, 0x4ffc
/* 004254CC 0320F809 */  jalr  $t9
/* 004254D0 8FA20034 */   lw    $v0, 0x34($sp)
/* 004254D4 10000008 */  b     .L004254F8
/* 004254D8 8FBC0020 */   lw    $gp, 0x20($sp)
.L004254DC:
/* 004254DC 8F99801C */  lw    $t9, %got(func_00424FFC)($gp)
/* 004254E0 8E040024 */  lw    $a0, 0x24($s0)
/* 004254E4 02202825 */  move  $a1, $s1
/* 004254E8 27394FFC */  addiu $t9, %lo(func_00424FFC) # addiu $t9, $t9, 0x4ffc
/* 004254EC 0320F809 */  jalr  $t9
/* 004254F0 8FA20034 */   lw    $v0, 0x34($sp)
/* 004254F4 8FBC0020 */  lw    $gp, 0x20($sp)
.L004254F8:
/* 004254F8 960C0006 */  lhu   $t4, 6($s0)
.L004254FC:
/* 004254FC 92020004 */  lbu   $v0, 4($s0)
/* 00425500 2D810002 */  sltiu $at, $t4, 2
/* 00425504 14200003 */  bnez  $at, .L00425514
/* 00425508 2C4A0020 */   sltiu $t2, $v0, 0x20
/* 0042550C 24010002 */  li    $at, 2
/* 00425510 14410009 */  bne   $v0, $at, .L00425538
.L00425514:
/* 00425514 000A7023 */   negu  $t6, $t2
/* 00425518 3C011400 */  lui   $at, 0x1400
/* 0042551C 01C15824 */  and   $t3, $t6, $at
/* 00425520 004B7804 */  sllv  $t7, $t3, $v0
/* 00425524 05E30017 */  bgezl $t7, .L00425584
/* 00425528 8FBF0024 */   lw    $ra, 0x24($sp)
/* 0042552C 8E0D0030 */  lw    $t5, 0x30($s0)
/* 00425530 55A00014 */  bnezl $t5, .L00425584
/* 00425534 8FBF0024 */   lw    $ra, 0x24($sp)
.L00425538:
/* 00425538 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 0042553C 02002025 */  move  $a0, $s0
/* 00425540 24050003 */  li    $a1, 3
/* 00425544 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 00425548 02203025 */  move  $a2, $s1
/* 0042554C 00003825 */  move  $a3, $zero
/* 00425550 0320F809 */  jalr  $t9
/* 00425554 8FA20034 */   lw    $v0, 0x34($sp)
/* 00425558 10000009 */  b     .L00425580
/* 0042555C 8FBC0020 */   lw    $gp, 0x20($sp)
.L00425560:
/* 00425560 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00425564 8F868044 */  lw    $a2, %got(RO_1000AFE8)($gp)
/* 00425568 24040001 */  li    $a0, 1
/* 0042556C 24050734 */  li    $a1, 1844
/* 00425570 2407000A */  li    $a3, 10
/* 00425574 0320F809 */  jalr  $t9
/* 00425578 24C6AFE8 */   addiu $a2, %lo(RO_1000AFE8) # addiu $a2, $a2, -0x5018
/* 0042557C 8FBC0020 */  lw    $gp, 0x20($sp)
.L00425580:
/* 00425580 8FBF0024 */  lw    $ra, 0x24($sp)
.L00425584:
/* 00425584 8FB00018 */  lw    $s0, 0x18($sp)
/* 00425588 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0042558C 03E00008 */  jr    $ra
/* 00425590 27BD0038 */   addiu $sp, $sp, 0x38

    .type func_00425594, @function
func_00425594:
    # 0042BF08 reemit
/* 00425594 3C1C0FBF */  .cpload $t9
/* 00425598 279C4CFC */  
/* 0042559C 0399E021 */  
/* 004255A0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 004255A4 AFB00014 */  sw    $s0, 0x14($sp)
/* 004255A8 00808025 */  move  $s0, $a0
/* 004255AC AFBF001C */  sw    $ra, 0x1c($sp)
/* 004255B0 10800014 */  beqz  $a0, .L00425604
/* 004255B4 AFBC0018 */   sw    $gp, 0x18($sp)
/* 004255B8 920E0001 */  lbu   $t6, 1($s0)
.L004255BC:
/* 004255BC 11C00008 */  beqz  $t6, .L004255E0
/* 004255C0 00000000 */   nop   
/* 004255C4 8F9982A4 */  lw    $t9, %call16(genrlodrstr)($gp)
/* 004255C8 2404006D */  li    $a0, 109
/* 004255CC 92050000 */  lbu   $a1, ($s0)
/* 004255D0 0320F809 */  jalr  $t9
/* 004255D4 8E060004 */   lw    $a2, 4($s0)
/* 004255D8 10000007 */  b     .L004255F8
/* 004255DC 8FBC0018 */   lw    $gp, 0x18($sp)
.L004255E0:
/* 004255E0 8F9982A4 */  lw    $t9, %call16(genrlodrstr)($gp)
/* 004255E4 24040070 */  li    $a0, 112
/* 004255E8 92050000 */  lbu   $a1, ($s0)
/* 004255EC 0320F809 */  jalr  $t9
/* 004255F0 8E060004 */   lw    $a2, 4($s0)
/* 004255F4 8FBC0018 */  lw    $gp, 0x18($sp)
.L004255F8:
/* 004255F8 8E100008 */  lw    $s0, 8($s0)
/* 004255FC 5600FFEF */  bnezl $s0, .L004255BC
/* 00425600 920E0001 */   lbu   $t6, 1($s0)
.L00425604:
/* 00425604 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00425608 8FB00014 */  lw    $s0, 0x14($sp)
/* 0042560C 27BD0020 */  addiu $sp, $sp, 0x20
/* 00425610 03E00008 */  jr    $ra
/* 00425614 00000000 */   nop   

    .type func_00425618, @function
func_00425618:
    # 00425618 func_00425618
    # 00426DE8 func_00426DE8
/* 00425618 3C1C0FBF */  .cpload $t9
/* 0042561C 279C4C78 */  
/* 00425620 0399E021 */  
/* 00425624 27BDFF98 */  addiu $sp, $sp, -0x68
/* 00425628 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0042562C AFBC0018 */  sw    $gp, 0x18($sp)
/* 00425630 AFB00014 */  sw    $s0, 0x14($sp)
/* 00425634 AFA20064 */  sw    $v0, 0x64($sp)
/* 00425638 90830000 */  lbu   $v1, ($a0)
/* 0042563C 00808025 */  move  $s0, $a0
/* 00425640 246EFFFF */  addiu $t6, $v1, -1
/* 00425644 2DC10008 */  sltiu $at, $t6, 8
/* 00425648 102005DA */  beqz  $at, .L00426DB4
/* 0042564C 00000000 */   nop   
/* 00425650 8F818044 */  lw    $at, %got(jtbl_1000B1C8)($gp)
/* 00425654 000E7080 */  sll   $t6, $t6, 2
/* 00425658 002E0821 */  addu  $at, $at, $t6
/* 0042565C 8C2EB1C8 */  lw    $t6, %lo(jtbl_1000B1C8)($at)
/* 00425660 01DC7021 */  addu  $t6, $t6, $gp
/* 00425664 01C00008 */  jr    $t6
/* 00425668 00000000 */   nop   
.L0042566C:
/* 0042566C 8FAF0064 */  lw    $t7, 0x64($sp)
/* 00425670 8DEAFFF8 */  lw    $t2, -8($t7)
/* 00425674 5540000D */  bnezl $t2, .L004256AC
/* 00425678 8D44002C */   lw    $a0, 0x2c($t2)
/* 0042567C 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00425680 24040030 */  li    $a0, 48
/* 00425684 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00425688 0320F809 */  jalr  $t9
/* 0042568C 00000000 */   nop   
/* 00425690 8FA30064 */  lw    $v1, 0x64($sp)
/* 00425694 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00425698 AC62FFF8 */  sw    $v0, -8($v1)
/* 0042569C AC400028 */  sw    $zero, 0x28($v0)
/* 004256A0 10000012 */  b     .L004256EC
/* 004256A4 AC40002C */   sw    $zero, 0x2c($v0)
/* 004256A8 8D44002C */  lw    $a0, 0x2c($t2)
.L004256AC:
/* 004256AC 5480000E */  bnezl $a0, .L004256E8
/* 004256B0 8FB90064 */   lw    $t9, 0x64($sp)
/* 004256B4 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 004256B8 24040030 */  li    $a0, 48
/* 004256BC 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 004256C0 0320F809 */  jalr  $t9
/* 004256C4 AFAA0024 */   sw    $t2, 0x24($sp)
/* 004256C8 8FAA0024 */  lw    $t2, 0x24($sp)
/* 004256CC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004256D0 AD42002C */  sw    $v0, 0x2c($t2)
/* 004256D4 AC4A0028 */  sw    $t2, 0x28($v0)
/* 004256D8 8D58002C */  lw    $t8, 0x2c($t2)
/* 004256DC AF00002C */  sw    $zero, 0x2c($t8)
/* 004256E0 8D44002C */  lw    $a0, 0x2c($t2)
/* 004256E4 8FB90064 */  lw    $t9, 0x64($sp)
.L004256E8:
/* 004256E8 AF24FFF8 */  sw    $a0, -8($t9)
.L004256EC:
/* 004256EC 8FAD0064 */  lw    $t5, 0x64($sp)
/* 004256F0 0200C825 */  move  $t9, $s0
/* 004256F4 8DAEFFF8 */  lw    $t6, -8($t5)
/* 004256F8 260D0024 */  addiu $t5, $s0, 0x24
.L004256FC:
/* 004256FC 8F380000 */  lw    $t8, ($t9)
/* 00425700 2739000C */  addiu $t9, $t9, 0xc
/* 00425704 25CE000C */  addiu $t6, $t6, 0xc
/* 00425708 ADD8FFF4 */  sw    $t8, -0xc($t6)
/* 0042570C 8F2FFFF8 */  lw    $t7, -8($t9)
/* 00425710 ADCFFFF8 */  sw    $t7, -8($t6)
/* 00425714 8F38FFFC */  lw    $t8, -4($t9)
/* 00425718 172DFFF8 */  bne   $t9, $t5, .L004256FC
/* 0042571C ADD8FFFC */   sw    $t8, -4($t6)
/* 00425720 8F380000 */  lw    $t8, ($t9)
/* 00425724 100005AB */  b     .L00426DD4
/* 00425728 ADD80000 */   sw    $t8, ($t6)
.L0042572C:
/* 0042572C 26020010 */  addiu $v0, $s0, 0x10
/* 00425730 8C440000 */  lw    $a0, ($v0)
/* 00425734 8F99864C */  lw    $t9, %call16(isvarhash)($gp)
/* 00425738 AFA40000 */  sw    $a0, ($sp)
/* 0042573C 8C450004 */  lw    $a1, 4($v0)
/* 00425740 AFA20024 */  sw    $v0, 0x24($sp)
/* 00425744 0320F809 */  jalr  $t9
/* 00425748 AFA50004 */   sw    $a1, 4($sp)
/* 0042574C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00425750 00027080 */  sll   $t6, $v0, 2
/* 00425754 AFA20054 */  sw    $v0, 0x54($sp)
/* 00425758 8F8F8DF8 */  lw     $t7, %got(table)($gp)
/* 0042575C 00004025 */  move  $t0, $zero
/* 00425760 01CFC021 */  addu  $t8, $t6, $t7
/* 00425764 8F030000 */  lw    $v1, ($t8)
/* 00425768 10600028 */  beqz  $v1, .L0042580C
/* 0042576C 00000000 */   nop   
/* 00425770 906D0000 */  lbu   $t5, ($v1)
.L00425774:
/* 00425774 24010003 */  li    $at, 3
/* 00425778 15A1001D */  bne   $t5, $at, .L004257F0
/* 0042577C 00000000 */   nop   
/* 00425780 8C640028 */  lw    $a0, 0x28($v1)
/* 00425784 8C65002C */  lw    $a1, 0x2c($v1)
/* 00425788 8FAF0024 */  lw    $t7, 0x24($sp)
/* 0042578C AFA40000 */  sw    $a0, ($sp)
/* 00425790 AFA50004 */  sw    $a1, 4($sp)
/* 00425794 8DE60000 */  lw    $a2, ($t7)
/* 00425798 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 0042579C AFA60008 */  sw    $a2, 8($sp)
/* 004257A0 8DE70004 */  lw    $a3, 4($t7)
/* 004257A4 A3A8005F */  sb    $t0, 0x5f($sp)
/* 004257A8 AFA30060 */  sw    $v1, 0x60($sp)
/* 004257AC 0320F809 */  jalr  $t9
/* 004257B0 AFA7000C */   sw    $a3, 0xc($sp)
/* 004257B4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004257B8 8FA30060 */  lw    $v1, 0x60($sp)
/* 004257BC 1040000C */  beqz  $v0, .L004257F0
/* 004257C0 93A8005F */   lbu   $t0, 0x5f($sp)
/* 004257C4 8FB90064 */  lw    $t9, 0x64($sp)
/* 004257C8 8C780010 */  lw    $t8, 0x10($v1)
/* 004257CC 8F2EFFFC */  lw    $t6, -4($t9)
/* 004257D0 8DCFFFF4 */  lw    $t7, -0xc($t6)
/* 004257D4 01F81026 */  xor   $v0, $t7, $t8
/* 004257D8 2C420001 */  sltiu $v0, $v0, 1
/* 004257DC 50400004 */  beql  $v0, $zero, .L004257F0
/* 004257E0 304800FF */   andi  $t0, $v0, 0xff
/* 004257E4 90620002 */  lbu   $v0, 2($v1)
/* 004257E8 2C420001 */  sltiu $v0, $v0, 1
/* 004257EC 304800FF */  andi  $t0, $v0, 0xff
.L004257F0:
/* 004257F0 15000002 */  bnez  $t0, .L004257FC
/* 004257F4 00000000 */   nop   
/* 004257F8 8C63001C */  lw    $v1, 0x1c($v1)
.L004257FC:
/* 004257FC 15000003 */  bnez  $t0, .L0042580C
/* 00425800 00000000 */   nop   
/* 00425804 5460FFDB */  bnezl $v1, .L00425774
/* 00425808 906D0000 */   lbu   $t5, ($v1)
.L0042580C:
/* 0042580C 1500002D */  bnez  $t0, .L004258C4
/* 00425810 8FAD0054 */   lw    $t5, 0x54($sp)
/* 00425814 8F8E8DF8 */  lw     $t6, %got(table)($gp)
/* 00425818 000DC880 */  sll   $t9, $t5, 2
/* 0042581C 032E7821 */  addu  $t7, $t9, $t6
/* 00425820 15000028 */  bnez  $t0, .L004258C4
/* 00425824 8DE30000 */   lw    $v1, ($t7)
/* 00425828 90780000 */  lbu   $t8, ($v1)
.L0042582C:
/* 0042582C 24010003 */  li    $at, 3
/* 00425830 1701001F */  bne   $t8, $at, .L004258B0
/* 00425834 00000000 */   nop   
/* 00425838 8C640028 */  lw    $a0, 0x28($v1)
/* 0042583C 8C65002C */  lw    $a1, 0x2c($v1)
/* 00425840 8FAE0024 */  lw    $t6, 0x24($sp)
/* 00425844 AFA40000 */  sw    $a0, ($sp)
/* 00425848 AFA50004 */  sw    $a1, 4($sp)
/* 0042584C 8DC60000 */  lw    $a2, ($t6)
/* 00425850 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 00425854 AFA60008 */  sw    $a2, 8($sp)
/* 00425858 8DC70004 */  lw    $a3, 4($t6)
/* 0042585C A3A8005F */  sb    $t0, 0x5f($sp)
/* 00425860 AFA30060 */  sw    $v1, 0x60($sp)
/* 00425864 0320F809 */  jalr  $t9
/* 00425868 AFA7000C */   sw    $a3, 0xc($sp)
/* 0042586C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00425870 8FA30060 */  lw    $v1, 0x60($sp)
/* 00425874 1040000E */  beqz  $v0, .L004258B0
/* 00425878 93A8005F */   lbu   $t0, 0x5f($sp)
/* 0042587C 8FAD0064 */  lw    $t5, 0x64($sp)
/* 00425880 8DB9FFFC */  lw    $t9, -4($t5)
/* 00425884 8C6D0010 */  lw    $t5, 0x10($v1)
/* 00425888 8F2EFFF4 */  lw    $t6, -0xc($t9)
/* 0042588C 8DCF0014 */  lw    $t7, 0x14($t6)
/* 00425890 8DF80000 */  lw    $t8, ($t7)
/* 00425894 030D1026 */  xor   $v0, $t8, $t5
/* 00425898 2C420001 */  sltiu $v0, $v0, 1
/* 0042589C 50400004 */  beql  $v0, $zero, .L004258B0
/* 004258A0 304800FF */   andi  $t0, $v0, 0xff
/* 004258A4 90620002 */  lbu   $v0, 2($v1)
/* 004258A8 2C420001 */  sltiu $v0, $v0, 1
/* 004258AC 304800FF */  andi  $t0, $v0, 0xff
.L004258B0:
/* 004258B0 15000002 */  bnez  $t0, .L004258BC
/* 004258B4 00000000 */   nop   
/* 004258B8 8C63001C */  lw    $v1, 0x1c($v1)
.L004258BC:
/* 004258BC 5100FFDB */  beql  $t0, $zero, .L0042582C
/* 004258C0 90780000 */   lbu   $t8, ($v1)
.L004258C4:
/* 004258C4 8FB90064 */  lw    $t9, 0x64($sp)
/* 004258C8 8F2AFFF8 */  lw    $t2, -8($t9)
/* 004258CC 5540000E */  bnezl $t2, .L00425908
/* 004258D0 8D44002C */   lw    $a0, 0x2c($t2)
/* 004258D4 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 004258D8 24040030 */  li    $a0, 48
/* 004258DC 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 004258E0 0320F809 */  jalr  $t9
/* 004258E4 AFA30060 */   sw    $v1, 0x60($sp)
/* 004258E8 8FAE0064 */  lw    $t6, 0x64($sp)
/* 004258EC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004258F0 8FA30060 */  lw    $v1, 0x60($sp)
/* 004258F4 ADC2FFF8 */  sw    $v0, -8($t6)
/* 004258F8 AC400028 */  sw    $zero, 0x28($v0)
/* 004258FC 10000014 */  b     .L00425950
/* 00425900 AC40002C */   sw    $zero, 0x2c($v0)
/* 00425904 8D44002C */  lw    $a0, 0x2c($t2)
.L00425908:
/* 00425908 54800010 */  bnezl $a0, .L0042594C
/* 0042590C 8FB80064 */   lw    $t8, 0x64($sp)
/* 00425910 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00425914 24040030 */  li    $a0, 48
/* 00425918 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0042591C AFA30060 */  sw    $v1, 0x60($sp)
/* 00425920 0320F809 */  jalr  $t9
/* 00425924 AFAA0024 */   sw    $t2, 0x24($sp)
/* 00425928 8FAA0024 */  lw    $t2, 0x24($sp)
/* 0042592C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00425930 8FA30060 */  lw    $v1, 0x60($sp)
/* 00425934 AD42002C */  sw    $v0, 0x2c($t2)
/* 00425938 AC4A0028 */  sw    $t2, 0x28($v0)
/* 0042593C 8D4F002C */  lw    $t7, 0x2c($t2)
/* 00425940 ADE0002C */  sw    $zero, 0x2c($t7)
/* 00425944 8D44002C */  lw    $a0, 0x2c($t2)
/* 00425948 8FB80064 */  lw    $t8, 0x64($sp)
.L0042594C:
/* 0042594C AF04FFF8 */  sw    $a0, -8($t8)
.L00425950:
/* 00425950 8C790034 */  lw    $t9, 0x34($v1)
/* 00425954 8FAD0064 */  lw    $t5, 0x64($sp)
/* 00425958 24040002 */  li    $a0, 2
/* 0042595C 932E0000 */  lbu   $t6, ($t9)
/* 00425960 8DAAFFF8 */  lw    $t2, -8($t5)
/* 00425964 31CF00FF */  andi  $t7, $t6, 0xff
/* 00425968 148F0028 */  bne   $a0, $t7, .L00425A0C
/* 0042596C A14E0000 */   sb    $t6, ($t2)
/* 00425970 8C780034 */  lw    $t8, 0x34($v1)
/* 00425974 24010003 */  li    $at, 3
/* 00425978 930D0001 */  lbu   $t5, 1($t8)
/* 0042597C 31B900FF */  andi  $t9, $t5, 0xff
/* 00425980 17210009 */  bne   $t9, $at, .L004259A8
/* 00425984 A14D0001 */   sb    $t5, 1($t2)
/* 00425988 8F99861C */  lw    $t9, %call16(dbgerror)($gp)
/* 0042598C 2404045E */  li    $a0, 1118
/* 00425990 AFA30060 */  sw    $v1, 0x60($sp)
/* 00425994 0320F809 */  jalr  $t9
/* 00425998 AFAA0024 */   sw    $t2, 0x24($sp)
/* 0042599C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004259A0 8FA30060 */  lw    $v1, 0x60($sp)
/* 004259A4 8FAA0024 */  lw    $t2, 0x24($sp)
.L004259A8:
/* 004259A8 92020018 */  lbu   $v0, 0x18($s0)
/* 004259AC 28410004 */  slti  $at, $v0, 4
/* 004259B0 1020000D */  beqz  $at, .L004259E8
/* 004259B4 000228C0 */   sll   $a1, $v0, 3
/* 004259B8 8C6E0034 */  lw    $t6, 0x34($v1)
/* 004259BC 8F9986A8 */  lw    $t9, %call16(cutbits)($gp)
/* 004259C0 91460001 */  lbu   $a2, 1($t2)
/* 004259C4 8DC40020 */  lw    $a0, 0x20($t6)
/* 004259C8 AFAA0024 */  sw    $t2, 0x24($sp)
/* 004259CC 0320F809 */  jalr  $t9
/* 004259D0 AFA30060 */   sw    $v1, 0x60($sp)
/* 004259D4 8FAA0024 */  lw    $t2, 0x24($sp)
/* 004259D8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004259DC 8FA30060 */  lw    $v1, 0x60($sp)
/* 004259E0 10000006 */  b     .L004259FC
/* 004259E4 AD420010 */   sw    $v0, 0x10($t2)
.L004259E8:
/* 004259E8 8C6F0034 */  lw    $t7, 0x34($v1)
/* 004259EC 8DED0020 */  lw    $t5, 0x20($t7)
/* 004259F0 AD4D0010 */  sw    $t5, 0x10($t2)
/* 004259F4 8DF80024 */  lw    $t8, 0x24($t7)
/* 004259F8 AD580014 */  sw    $t8, 0x14($t2)
.L004259FC:
/* 004259FC 8C790034 */  lw    $t9, 0x34($v1)
/* 00425A00 8F2E0028 */  lw    $t6, 0x28($t9)
/* 00425A04 100004F3 */  b     .L00426DD4
/* 00425A08 AD4E0018 */   sw    $t6, 0x18($t2)
.L00425A0C:
/* 00425A0C 8C6F0034 */  lw    $t7, 0x34($v1)
/* 00425A10 8DF80020 */  lw    $t8, 0x20($t7)
/* 00425A14 AD580010 */  sw    $t8, 0x10($t2)
/* 00425A18 8C6D0034 */  lw    $t5, 0x34($v1)
/* 00425A1C 8DAE002C */  lw    $t6, 0x2c($t5)
/* 00425A20 AD4E0018 */  sw    $t6, 0x18($t2)
/* 00425A24 8DB90030 */  lw    $t9, 0x30($t5)
/* 00425A28 AD59001C */  sw    $t9, 0x1c($t2)
/* 00425A2C 8C6F0034 */  lw    $t7, 0x34($v1)
/* 00425A30 8DF80024 */  lw    $t8, 0x24($t7)
/* 00425A34 100004E7 */  b     .L00426DD4
/* 00425A38 AD580014 */   sw    $t8, 0x14($t2)
.L00425A3C:
/* 00425A3C 8F99801C */  lw    $t9, %got(func_00425618)($gp)
/* 00425A40 8E040014 */  lw    $a0, 0x14($s0)
/* 00425A44 8FA20064 */  lw    $v0, 0x64($sp)
/* 00425A48 27395618 */  addiu $t9, %lo(func_00425618) # addiu $t9, $t9, 0x5618
/* 00425A4C 0320F809 */  jalr  $t9
/* 00425A50 00000000 */   nop   
/* 00425A54 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00425A58 92050010 */  lbu   $a1, 0x10($s0)
/* 00425A5C 8F998DBC */  lw     $t9, %got(optab)($gp)
/* 00425A60 00056880 */  sll   $t5, $a1, 2
/* 00425A64 01A56823 */  subu  $t5, $t5, $a1
/* 00425A68 01B97021 */  addu  $t6, $t5, $t9
/* 00425A6C 91C20002 */  lbu   $v0, 2($t6)
/* 00425A70 1040000E */  beqz  $v0, .L00425AAC
/* 00425A74 00000000 */   nop   
/* 00425A78 8F99801C */  lw    $t9, %got(func_00425618)($gp)
/* 00425A7C 8E040018 */  lw    $a0, 0x18($s0)
/* 00425A80 8FA20064 */  lw    $v0, 0x64($sp)
/* 00425A84 27395618 */  addiu $t9, %lo(func_00425618) # addiu $t9, $t9, 0x5618
/* 00425A88 0320F809 */  jalr  $t9
/* 00425A8C 00000000 */   nop   
/* 00425A90 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00425A94 92050010 */  lbu   $a1, 0x10($s0)
/* 00425A98 8F988DBC */  lw     $t8, %got(optab)($gp)
/* 00425A9C 00057880 */  sll   $t7, $a1, 2
/* 00425AA0 01E57823 */  subu  $t7, $t7, $a1
/* 00425AA4 01F86821 */  addu  $t5, $t7, $t8
/* 00425AA8 91A20002 */  lbu   $v0, 2($t5)
.L00425AAC:
/* 00425AAC 10400373 */  beqz  $v0, .L0042687C
/* 00425AB0 8FB90064 */   lw    $t9, 0x64($sp)
/* 00425AB4 8F2AFFF8 */  lw    $t2, -8($t9)
/* 00425AB8 240B0001 */  li    $t3, 1
/* 00425ABC 00004825 */  move  $t1, $zero
/* 00425AC0 8D480028 */  lw    $t0, 0x28($t2)
/* 00425AC4 00006025 */  move  $t4, $zero
/* 00425AC8 910E0000 */  lbu   $t6, ($t0)
/* 00425ACC 016E1026 */  xor   $v0, $t3, $t6
/* 00425AD0 2C420001 */  sltiu $v0, $v0, 1
/* 00425AD4 50400005 */  beql  $v0, $zero, .L00425AEC
/* 00425AD8 8D180010 */   lw    $t8, 0x10($t0)
/* 00425ADC 8D0F0010 */  lw    $t7, 0x10($t0)
/* 00425AE0 10000003 */  b     .L00425AF0
/* 00425AE4 AFAF0050 */   sw    $t7, 0x50($sp)
/* 00425AE8 8D180010 */  lw    $t8, 0x10($t0)
.L00425AEC:
/* 00425AEC AFB80050 */  sw    $t8, 0x50($sp)
.L00425AF0:
/* 00425AF0 914D0000 */  lbu   $t5, ($t2)
/* 00425AF4 016D1826 */  xor   $v1, $t3, $t5
/* 00425AF8 2C630001 */  sltiu $v1, $v1, 1
/* 00425AFC 50600005 */  beql  $v1, $zero, .L00425B14
/* 00425B00 8D4E0010 */   lw    $t6, 0x10($t2)
/* 00425B04 8D590010 */  lw    $t9, 0x10($t2)
/* 00425B08 10000003 */  b     .L00425B18
/* 00425B0C AFB9004C */   sw    $t9, 0x4c($sp)
/* 00425B10 8D4E0010 */  lw    $t6, 0x10($t2)
.L00425B14:
/* 00425B14 AFAE004C */  sw    $t6, 0x4c($sp)
.L00425B18:
/* 00425B18 10400005 */  beqz  $v0, .L00425B30
/* 00425B1C 00000000 */   nop   
/* 00425B20 10600003 */  beqz  $v1, .L00425B30
/* 00425B24 240F0006 */   li    $t7, 6
/* 00425B28 A20F0001 */  sb    $t7, 1($s0)
/* 00425B2C 92050010 */  lbu   $a1, 0x10($s0)
.L00425B30:
/* 00425B30 100000AB */  b     .L00425DE0
/* 00425B34 30A200FF */   andi  $v0, $a1, 0xff
.L00425B38:
/* 00425B38 91180000 */  lbu   $t8, ($t0)
/* 00425B3C 8FA50050 */  lw    $a1, 0x50($sp)
/* 00425B40 8FA6004C */  lw    $a2, 0x4c($sp)
/* 00425B44 55780004 */  bnel  $t3, $t8, .L00425B58
/* 00425B48 914D0000 */   lbu   $t5, ($t2)
/* 00425B4C 10000005 */  b     .L00425B64
/* 00425B50 240C0001 */   li    $t4, 1
/* 00425B54 914D0000 */  lbu   $t5, ($t2)
.L00425B58:
/* 00425B58 156D0002 */  bne   $t3, $t5, .L00425B64
/* 00425B5C 00000000 */   nop   
/* 00425B60 240C0001 */  li    $t4, 1
.L00425B64:
/* 00425B64 8F998688 */  lw    $t9, %call16(addovfw)($gp)
/* 00425B68 92040001 */  lbu   $a0, 1($s0)
/* 00425B6C AFA8002C */  sw    $t0, 0x2c($sp)
/* 00425B70 AFAA0024 */  sw    $t2, 0x24($sp)
/* 00425B74 0320F809 */  jalr  $t9
/* 00425B78 A3AC0043 */   sb    $t4, 0x43($sp)
/* 00425B7C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00425B80 8FA8002C */  lw    $t0, 0x2c($sp)
/* 00425B84 8FAA0024 */  lw    $t2, 0x24($sp)
/* 00425B88 93AC0043 */  lbu   $t4, 0x43($sp)
/* 00425B8C 304900FF */  andi  $t1, $v0, 0xff
/* 00425B90 10000113 */  b     .L00425FE0
/* 00425B94 92050010 */   lbu   $a1, 0x10($s0)
/* 00425B98 91190000 */  lbu   $t9, ($t0)
.L00425B9C:
/* 00425B9C 01791026 */  xor   $v0, $t3, $t9
/* 00425BA0 2C420001 */  sltiu $v0, $v0, 1
/* 00425BA4 10400007 */  beqz  $v0, .L00425BC4
/* 00425BA8 00000000 */   nop   
/* 00425BAC 914E0000 */  lbu   $t6, ($t2)
/* 00425BB0 156E0004 */  bne   $t3, $t6, .L00425BC4
/* 00425BB4 00000000 */   nop   
/* 00425BB8 8F818A3C */  lw     $at, %got(noop)($gp)
/* 00425BBC 10000009 */  b     .L00425BE4
/* 00425BC0 AC200000 */   sw    $zero, ($at)
.L00425BC4:
/* 00425BC4 50400004 */  beql  $v0, $zero, .L00425BD8
/* 00425BC8 914F0000 */   lbu   $t7, ($t2)
/* 00425BCC 10000005 */  b     .L00425BE4
/* 00425BD0 240C0001 */   li    $t4, 1
/* 00425BD4 914F0000 */  lbu   $t7, ($t2)
.L00425BD8:
/* 00425BD8 156F0002 */  bne   $t3, $t7, .L00425BE4
/* 00425BDC 00000000 */   nop   
/* 00425BE0 240C0001 */  li    $t4, 1
.L00425BE4:
/* 00425BE4 8F99868C */  lw    $t9, %call16(subovfw)($gp)
/* 00425BE8 92040001 */  lbu   $a0, 1($s0)
/* 00425BEC 8FA50050 */  lw    $a1, 0x50($sp)
/* 00425BF0 8FA6004C */  lw    $a2, 0x4c($sp)
/* 00425BF4 AFA8002C */  sw    $t0, 0x2c($sp)
/* 00425BF8 AFAA0024 */  sw    $t2, 0x24($sp)
/* 00425BFC 0320F809 */  jalr  $t9
/* 00425C00 A3AC0043 */   sb    $t4, 0x43($sp)
/* 00425C04 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00425C08 8FA8002C */  lw    $t0, 0x2c($sp)
/* 00425C0C 8FAA0024 */  lw    $t2, 0x24($sp)
/* 00425C10 93AC0043 */  lbu   $t4, 0x43($sp)
/* 00425C14 304900FF */  andi  $t1, $v0, 0xff
/* 00425C18 100000F1 */  b     .L00425FE0
/* 00425C1C 92050010 */   lbu   $a1, 0x10($s0)
.L00425C20:
/* 00425C20 8F998690 */  lw    $t9, %call16(mpyovfw)($gp)
/* 00425C24 92040001 */  lbu   $a0, 1($s0)
/* 00425C28 8E06001C */  lw    $a2, 0x1c($s0)
/* 00425C2C AFA8002C */  sw    $t0, 0x2c($sp)
/* 00425C30 A3A9005E */  sb    $t1, 0x5e($sp)
/* 00425C34 0320F809 */  jalr  $t9
/* 00425C38 AFAA0024 */   sw    $t2, 0x24($sp)
/* 00425C3C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00425C40 8FA8002C */  lw    $t0, 0x2c($sp)
/* 00425C44 93A9005E */  lbu   $t1, 0x5e($sp)
/* 00425C48 8FAA0024 */  lw    $t2, 0x24($sp)
/* 00425C4C 10400002 */  beqz  $v0, .L00425C58
/* 00425C50 240B0001 */   li    $t3, 1
/* 00425C54 316900FF */  andi  $t1, $t3, 0xff
.L00425C58:
/* 00425C58 8FB8004C */  lw    $t8, 0x4c($sp)
/* 00425C5C 8E0D001C */  lw    $t5, 0x1c($s0)
/* 00425C60 910E0000 */  lbu   $t6, ($t0)
/* 00425C64 8FA50050 */  lw    $a1, 0x50($sp)
/* 00425C68 030D0019 */  multu $t8, $t5
/* 00425C6C 016E6026 */  xor   $t4, $t3, $t6
/* 00425C70 2D8C0001 */  sltiu $t4, $t4, 1
/* 00425C74 318C00FF */  andi  $t4, $t4, 0xff
/* 00425C78 0000C812 */  mflo  $t9
/* 00425C7C AFB9004C */  sw    $t9, 0x4c($sp)
/* 00425C80 1520000D */  bnez  $t1, .L00425CB8
/* 00425C84 00000000 */   nop   
/* 00425C88 03203025 */  move  $a2, $t9
/* 00425C8C 8F998688 */  lw    $t9, %call16(addovfw)($gp)
/* 00425C90 00002025 */  move  $a0, $zero
/* 00425C94 AFA8002C */  sw    $t0, 0x2c($sp)
/* 00425C98 AFAA0024 */  sw    $t2, 0x24($sp)
/* 00425C9C 0320F809 */  jalr  $t9
/* 00425CA0 A3AC0043 */   sb    $t4, 0x43($sp)
/* 00425CA4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00425CA8 8FA8002C */  lw    $t0, 0x2c($sp)
/* 00425CAC 8FAA0024 */  lw    $t2, 0x24($sp)
/* 00425CB0 93AC0043 */  lbu   $t4, 0x43($sp)
/* 00425CB4 304900FF */  andi  $t1, $v0, 0xff
.L00425CB8:
/* 00425CB8 100000C9 */  b     .L00425FE0
/* 00425CBC 92050010 */   lbu   $a1, 0x10($s0)
.L00425CC0:
/* 00425CC0 910F0000 */  lbu   $t7, ($t0)
/* 00425CC4 016F1026 */  xor   $v0, $t3, $t7
/* 00425CC8 2C420001 */  sltiu $v0, $v0, 1
/* 00425CCC 14400004 */  bnez  $v0, .L00425CE0
/* 00425CD0 00000000 */   nop   
/* 00425CD4 91580000 */  lbu   $t8, ($t2)
/* 00425CD8 01781026 */  xor   $v0, $t3, $t8
/* 00425CDC 2C420001 */  sltiu $v0, $v0, 1
.L00425CE0:
/* 00425CE0 100000BF */  b     .L00425FE0
/* 00425CE4 304C00FF */   andi  $t4, $v0, 0xff
.L00425CE8:
/* 00425CE8 910D0000 */  lbu   $t5, ($t0)
/* 00425CEC 016D1026 */  xor   $v0, $t3, $t5
/* 00425CF0 2C420001 */  sltiu $v0, $v0, 1
/* 00425CF4 14400004 */  bnez  $v0, .L00425D08
/* 00425CF8 00000000 */   nop   
/* 00425CFC 914E0000 */  lbu   $t6, ($t2)
/* 00425D00 016E1026 */  xor   $v0, $t3, $t6
/* 00425D04 2C420001 */  sltiu $v0, $v0, 1
.L00425D08:
/* 00425D08 100000B5 */  b     .L00425FE0
/* 00425D0C 304C00FF */   andi  $t4, $v0, 0xff
.L00425D10:
/* 00425D10 8F998690 */  lw    $t9, %call16(mpyovfw)($gp)
/* 00425D14 92040001 */  lbu   $a0, 1($s0)
/* 00425D18 8FA50050 */  lw    $a1, 0x50($sp)
/* 00425D1C 8FA6004C */  lw    $a2, 0x4c($sp)
/* 00425D20 AFA8002C */  sw    $t0, 0x2c($sp)
/* 00425D24 AFAA0024 */  sw    $t2, 0x24($sp)
/* 00425D28 0320F809 */  jalr  $t9
/* 00425D2C A3AC0043 */   sb    $t4, 0x43($sp)
/* 00425D30 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00425D34 8FA8002C */  lw    $t0, 0x2c($sp)
/* 00425D38 8FAA0024 */  lw    $t2, 0x24($sp)
/* 00425D3C 93AC0043 */  lbu   $t4, 0x43($sp)
/* 00425D40 304900FF */  andi  $t1, $v0, 0xff
/* 00425D44 100000A6 */  b     .L00425FE0
/* 00425D48 92050010 */   lbu   $a1, 0x10($s0)
.L00425D4C:
/* 00425D4C 8FA9004C */  lw    $t1, 0x4c($sp)
.L00425D50:
/* 00425D50 2D290001 */  sltiu $t1, $t1, 1
/* 00425D54 100000A2 */  b     .L00425FE0
/* 00425D58 312900FF */   andi  $t1, $t1, 0xff
.L00425D5C:
/* 00425D5C 8FA9004C */  lw    $t1, 0x4c($sp)
/* 00425D60 29290001 */  slti  $t1, $t1, 1
/* 00425D64 1000009E */  b     .L00425FE0
/* 00425D68 312900FF */   andi  $t1, $t1, 0xff
.L00425D6C:
/* 00425D6C 8FB9004C */  lw    $t9, 0x4c($sp)
/* 00425D70 2B220000 */  slti  $v0, $t9, 0
/* 00425D74 14400003 */  bnez  $v0, .L00425D84
/* 00425D78 00000000 */   nop   
/* 00425D7C 2B220020 */  slti  $v0, $t9, 0x20
/* 00425D80 38420001 */  xori  $v0, $v0, 1
.L00425D84:
/* 00425D84 10000096 */  b     .L00425FE0
/* 00425D88 304900FF */   andi  $t1, $v0, 0xff
.L00425D8C:
/* 00425D8C 8FA30050 */  lw    $v1, 0x50($sp)
/* 00425D90 3C018000 */  lui   $at, 0x8000
/* 00425D94 00611826 */  xor   $v1, $v1, $at
/* 00425D98 2C620001 */  sltiu $v0, $v1, 1
/* 00425D9C 10400004 */  beqz  $v0, .L00425DB0
/* 00425DA0 00000000 */   nop   
/* 00425DA4 8FA2004C */  lw    $v0, 0x4c($sp)
/* 00425DA8 28420000 */  slti  $v0, $v0, 0
/* 00425DAC 38420001 */  xori  $v0, $v0, 1
.L00425DB0:
/* 00425DB0 1000008B */  b     .L00425FE0
/* 00425DB4 304900FF */   andi  $t1, $v0, 0xff
.L00425DB8:
/* 00425DB8 910F0000 */  lbu   $t7, ($t0)
.L00425DBC:
/* 00425DBC 556F0004 */  bnel  $t3, $t7, .L00425DD0
/* 00425DC0 91580000 */   lbu   $t8, ($t2)
/* 00425DC4 10000086 */  b     .L00425FE0
/* 00425DC8 240C0001 */   li    $t4, 1
/* 00425DCC 91580000 */  lbu   $t8, ($t2)
.L00425DD0:
/* 00425DD0 15780083 */  bne   $t3, $t8, .L00425FE0
/* 00425DD4 00000000 */   nop   
/* 00425DD8 10000081 */  b     .L00425FE0
/* 00425DDC 240C0001 */   li    $t4, 1
.L00425DE0:
/* 00425DE0 2C410042 */  sltiu $at, $v0, 0x42
/* 00425DE4 14200025 */  bnez  $at, .L00425E7C
/* 00425DE8 2C41006A */   sltiu $at, $v0, 0x6a
/* 00425DEC 14200015 */  bnez  $at, .L00425E44
/* 00425DF0 244EFFAB */   addiu $t6, $v0, -0x55
/* 00425DF4 2C41007E */  sltiu $at, $v0, 0x7e
/* 00425DF8 14200005 */  bnez  $at, .L00425E10
/* 00425DFC 2401008A */   li    $at, 138
/* 00425E00 10410077 */  beq   $v0, $at, .L00425FE0
/* 00425E04 00000000 */   nop   
/* 00425E08 1000004A */  b     .L00425F34
/* 00425E0C 00000000 */   nop   
.L00425E10:
/* 00425E10 2C410076 */  sltiu $at, $v0, 0x76
/* 00425E14 1020006D */  beqz  $at, .L00425FCC
/* 00425E18 244DFF8D */   addiu $t5, $v0, -0x73
/* 00425E1C 2DA10003 */  sltiu $at, $t5, 3
/* 00425E20 10200044 */  beqz  $at, .L00425F34
/* 00425E24 00000000 */   nop   
/* 00425E28 8F818044 */  lw    $at, %got(jtbl_1000B0F8)($gp)
/* 00425E2C 000D6880 */  sll   $t5, $t5, 2
/* 00425E30 002D0821 */  addu  $at, $at, $t5
/* 00425E34 8C2DB0F8 */  lw    $t5, %lo(jtbl_1000B0F8)($at)
/* 00425E38 01BC6821 */  addu  $t5, $t5, $gp
/* 00425E3C 01A00008 */  jr    $t5
/* 00425E40 00000000 */   nop   
.L00425E44:
/* 00425E44 2C41004F */  sltiu $at, $v0, 0x4f
/* 00425E48 14200056 */  bnez  $at, .L00425FA4
/* 00425E4C 2C410060 */   sltiu $at, $v0, 0x60
/* 00425E50 10200059 */  beqz  $at, .L00425FB8
/* 00425E54 2DC1000B */   sltiu $at, $t6, 0xb
/* 00425E58 10200036 */  beqz  $at, .L00425F34
/* 00425E5C 00000000 */   nop   
/* 00425E60 8F818044 */  lw    $at, %got(jtbl_1000B0CC)($gp)
/* 00425E64 000E7080 */  sll   $t6, $t6, 2
/* 00425E68 002E0821 */  addu  $at, $at, $t6
/* 00425E6C 8C2EB0CC */  lw    $t6, %lo(jtbl_1000B0CC)($at)
/* 00425E70 01DC7021 */  addu  $t6, $t6, $gp
/* 00425E74 01C00008 */  jr    $t6
/* 00425E78 00000000 */   nop   
.L00425E7C:
/* 00425E7C 2C410024 */  sltiu $at, $v0, 0x24
/* 00425E80 1420000F */  bnez  $at, .L00425EC0
/* 00425E84 2C41002A */   sltiu $at, $v0, 0x2a
/* 00425E88 1420003C */  bnez  $at, .L00425F7C
/* 00425E8C 2C41003D */   sltiu $at, $v0, 0x3d
/* 00425E90 1020003F */  beqz  $at, .L00425F90
/* 00425E94 2459FFC6 */   addiu $t9, $v0, -0x3a
/* 00425E98 2F210003 */  sltiu $at, $t9, 3
/* 00425E9C 10200025 */  beqz  $at, .L00425F34
/* 00425EA0 00000000 */   nop   
/* 00425EA4 8F818044 */  lw    $at, %got(jtbl_1000B0C0)($gp)
/* 00425EA8 0019C880 */  sll   $t9, $t9, 2
/* 00425EAC 00390821 */  addu  $at, $at, $t9
/* 00425EB0 8C39B0C0 */  lw    $t9, %lo(jtbl_1000B0C0)($at)
/* 00425EB4 033CC821 */  addu  $t9, $t9, $gp
/* 00425EB8 03200008 */  jr    $t9
/* 00425EBC 00000000 */   nop   
.L00425EC0:
/* 00425EC0 2C410005 */  sltiu $at, $v0, 5
/* 00425EC4 1420000D */  bnez  $at, .L00425EFC
/* 00425EC8 244FFFE4 */   addiu $t7, $v0, -0x1c
/* 00425ECC 2C41001E */  sltiu $at, $v0, 0x1e
/* 00425ED0 10200015 */  beqz  $at, .L00425F28
/* 00425ED4 2DE10002 */   sltiu $at, $t7, 2
/* 00425ED8 10200016 */  beqz  $at, .L00425F34
/* 00425EDC 00000000 */   nop   
/* 00425EE0 8F818044 */  lw    $at, %got(jtbl_1000B0B8)($gp)
/* 00425EE4 000F7880 */  sll   $t7, $t7, 2
/* 00425EE8 002F0821 */  addu  $at, $at, $t7
/* 00425EEC 8C2FB0B8 */  lw    $t7, %lo(jtbl_1000B0B8)($at)
/* 00425EF0 01FC7821 */  addu  $t7, $t7, $gp
/* 00425EF4 01E00008 */  jr    $t7
/* 00425EF8 00000000 */   nop   
.L00425EFC:
/* 00425EFC 2458FFFF */  addiu $t8, $v0, -1
/* 00425F00 2F010004 */  sltiu $at, $t8, 4
/* 00425F04 1020000B */  beqz  $at, .L00425F34
/* 00425F08 00000000 */   nop   
/* 00425F0C 8F818044 */  lw    $at, %got(jtbl_1000B0A8)($gp)
/* 00425F10 0018C080 */  sll   $t8, $t8, 2
/* 00425F14 00380821 */  addu  $at, $at, $t8
/* 00425F18 8C38B0A8 */  lw    $t8, %lo(jtbl_1000B0A8)($at)
/* 00425F1C 031CC021 */  addu  $t8, $t8, $gp
/* 00425F20 03000008 */  jr    $t8
/* 00425F24 00000000 */   nop   
.L00425F28:
/* 00425F28 24010023 */  li    $at, 35
/* 00425F2C 5041FFA3 */  beql  $v0, $at, .L00425DBC
/* 00425F30 910F0000 */   lbu   $t7, ($t0)
.L00425F34:
/* 00425F34 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00425F38 8F868044 */  lw    $a2, %got(RO_1000B09C)($gp)
/* 00425F3C 24040001 */  li    $a0, 1
/* 00425F40 2405081F */  li    $a1, 2079
/* 00425F44 2407000A */  li    $a3, 10
/* 00425F48 AFA8002C */  sw    $t0, 0x2c($sp)
/* 00425F4C A3A9005E */  sb    $t1, 0x5e($sp)
/* 00425F50 AFAA0024 */  sw    $t2, 0x24($sp)
/* 00425F54 A3AC0043 */  sb    $t4, 0x43($sp)
/* 00425F58 0320F809 */  jalr  $t9
/* 00425F5C 24C6B09C */   addiu $a2, %lo(RO_1000B09C) # addiu $a2, $a2, -0x4f64
/* 00425F60 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00425F64 8FA8002C */  lw    $t0, 0x2c($sp)
/* 00425F68 93A9005E */  lbu   $t1, 0x5e($sp)
/* 00425F6C 8FAA0024 */  lw    $t2, 0x24($sp)
/* 00425F70 93AC0043 */  lbu   $t4, 0x43($sp)
/* 00425F74 1000001A */  b     .L00425FE0
/* 00425F78 92050010 */   lbu   $a1, 0x10($s0)
.L00425F7C:
/* 00425F7C 2C410028 */  sltiu $at, $v0, 0x28
/* 00425F80 10200017 */  beqz  $at, .L00425FE0
/* 00425F84 00000000 */   nop   
/* 00425F88 1000FFEA */  b     .L00425F34
/* 00425F8C 00000000 */   nop   
.L00425F90:
/* 00425F90 24010041 */  li    $at, 65
/* 00425F94 1041FF22 */  beq   $v0, $at, .L00425C20
/* 00425F98 8FA5004C */   lw    $a1, 0x4c($sp)
/* 00425F9C 1000FFE5 */  b     .L00425F34
/* 00425FA0 00000000 */   nop   
.L00425FA4:
/* 00425FA4 2C41004D */  sltiu $at, $v0, 0x4d
/* 00425FA8 1020000D */  beqz  $at, .L00425FE0
/* 00425FAC 00000000 */   nop   
/* 00425FB0 1000FFE0 */  b     .L00425F34
/* 00425FB4 00000000 */   nop   
.L00425FB8:
/* 00425FB8 24010069 */  li    $at, 105
/* 00425FBC 5041FF64 */  beql  $v0, $at, .L00425D50
/* 00425FC0 8FA9004C */   lw    $t1, 0x4c($sp)
/* 00425FC4 1000FFDB */  b     .L00425F34
/* 00425FC8 00000000 */   nop   
.L00425FCC:
/* 00425FCC 2401007D */  li    $at, 125
/* 00425FD0 5041FEF2 */  beql  $v0, $at, .L00425B9C
/* 00425FD4 91190000 */   lbu   $t9, ($t0)
/* 00425FD8 1000FFD6 */  b     .L00425F34
/* 00425FDC 00000000 */   nop   
.L00425FE0:
/* 00425FE0 51200012 */  beql  $t1, $zero, .L0042602C
/* 00425FE4 8FA30058 */   lw    $v1, 0x58($sp)
/* 00425FE8 920D0011 */  lbu   $t5, 0x11($s0)
/* 00425FEC 51A0000F */  beql  $t5, $zero, .L0042602C
/* 00425FF0 8FA30058 */   lw    $v1, 0x58($sp)
/* 00425FF4 8F998618 */  lw    $t9, %call16(ovfwwarning)($gp)
/* 00425FF8 00A02025 */  move  $a0, $a1
/* 00425FFC AFA8002C */  sw    $t0, 0x2c($sp)
/* 00426000 AFAA0024 */  sw    $t2, 0x24($sp)
/* 00426004 0320F809 */  jalr  $t9
/* 00426008 A3AC0043 */   sb    $t4, 0x43($sp)
/* 0042600C 24030001 */  li    $v1, 1
/* 00426010 AFA30058 */  sw    $v1, 0x58($sp)
/* 00426014 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00426018 8FA8002C */  lw    $t0, 0x2c($sp)
/* 0042601C 8FAA0024 */  lw    $t2, 0x24($sp)
/* 00426020 93AC0043 */  lbu   $t4, 0x43($sp)
/* 00426024 92050010 */  lbu   $a1, 0x10($s0)
/* 00426028 8FA30058 */  lw    $v1, 0x58($sp)
.L0042602C:
/* 0042602C 1000016A */  b     .L004265D8
/* 00426030 30A200FF */   andi  $v0, $a1, 0xff
.L00426034:
/* 00426034 8FAE0050 */  lw    $t6, 0x50($sp)
/* 00426038 8FB9004C */  lw    $t9, 0x4c($sp)
/* 0042603C 91020000 */  lbu   $v0, ($t0)
/* 00426040 100001E7 */  b     .L004267E0
/* 00426044 01D91821 */   addu  $v1, $t6, $t9
.L00426048:
/* 00426048 8FB8004C */  lw    $t8, 0x4c($sp)
/* 0042604C 91020000 */  lbu   $v0, ($t0)
/* 00426050 100001E3 */  b     .L004267E0
/* 00426054 01F81823 */   subu  $v1, $t7, $t8
.L00426058:
/* 00426058 8FAD0050 */  lw    $t5, 0x50($sp)
/* 0042605C 8FAE004C */  lw    $t6, 0x4c($sp)
/* 00426060 91020000 */  lbu   $v0, ($t0)
/* 00426064 01AE0019 */  multu $t5, $t6
/* 00426068 00001812 */  mflo  $v1
/* 0042606C 100001DD */  b     .L004267E4
/* 00426070 24040002 */   li    $a0, 2
.L00426074:
/* 00426074 92190001 */  lbu   $t9, 1($s0)
/* 00426078 3C010600 */  lui   $at, 0x600
/* 0042607C 91020000 */  lbu   $v0, ($t0)
/* 00426080 2F2F0020 */  sltiu $t7, $t9, 0x20
/* 00426084 000FC023 */  negu  $t8, $t7
/* 00426088 03016824 */  and   $t5, $t8, $at
/* 0042608C 032D7004 */  sllv  $t6, $t5, $t9
/* 00426090 05C30011 */  bgezl $t6, .L004260D8
/* 00426094 8FAD0050 */   lw    $t5, 0x50($sp)
/* 00426098 8FAF0050 */  lw    $t7, 0x50($sp)
/* 0042609C 8FB8004C */  lw    $t8, 0x4c($sp)
/* 004260A0 01F8001A */  div   $zero, $t7, $t8
/* 004260A4 00001812 */  mflo  $v1
/* 004260A8 17000002 */  bnez  $t8, .L004260B4
/* 004260AC 00000000 */   nop   
/* 004260B0 0007000D */  break 7
.L004260B4:
/* 004260B4 2401FFFF */  li    $at, -1
/* 004260B8 17010004 */  bne   $t8, $at, .L004260CC
/* 004260BC 3C018000 */   lui   $at, 0x8000
/* 004260C0 15E10002 */  bne   $t7, $at, .L004260CC
/* 004260C4 00000000 */   nop   
/* 004260C8 0006000D */  break 6
.L004260CC:
/* 004260CC 100001C5 */  b     .L004267E4
/* 004260D0 24040002 */   li    $a0, 2
/* 004260D4 8FAD0050 */  lw    $t5, 0x50($sp)
.L004260D8:
/* 004260D8 8FB9004C */  lw    $t9, 0x4c($sp)
/* 004260DC 01B9001B */  divu  $zero, $t5, $t9
/* 004260E0 00001812 */  mflo  $v1
/* 004260E4 17200002 */  bnez  $t9, .L004260F0
/* 004260E8 00000000 */   nop   
/* 004260EC 0007000D */  break 7
.L004260F0:
/* 004260F0 100001BC */  b     .L004267E4
/* 004260F4 24040002 */   li    $a0, 2
.L004260F8:
/* 004260F8 8FAF004C */  lw    $t7, 0x4c($sp)
/* 004260FC 8FAE0050 */  lw    $t6, 0x50($sp)
/* 00426100 01CF001A */  div   $zero, $t6, $t7
/* 00426104 00001810 */  mfhi  $v1
/* 00426108 006FC026 */  xor   $t8, $v1, $t7
/* 0042610C 15E00002 */  bnez  $t7, .L00426118
/* 00426110 00000000 */   nop   
/* 00426114 0007000D */  break 7
.L00426118:
/* 00426118 2401FFFF */  li    $at, -1
/* 0042611C 15E10004 */  bne   $t7, $at, .L00426130
/* 00426120 3C018000 */   lui   $at, 0x8000
/* 00426124 15C10002 */  bne   $t6, $at, .L00426130
/* 00426128 00000000 */   nop   
/* 0042612C 0006000D */  break 6
.L00426130:
/* 00426130 07010002 */  bgez  $t8, .L0042613C
/* 00426134 00000000 */   nop   
/* 00426138 006F1821 */  addu  $v1, $v1, $t7
.L0042613C:
/* 0042613C 100001A8 */  b     .L004267E0
/* 00426140 91020000 */   lbu   $v0, ($t0)
/* 00426144 920D0001 */  lbu   $t5, 1($s0)
.L00426148:
/* 00426148 3C010600 */  lui   $at, 0x600
/* 0042614C 91020000 */  lbu   $v0, ($t0)
/* 00426150 2DB90020 */  sltiu $t9, $t5, 0x20
/* 00426154 00197023 */  negu  $t6, $t9
/* 00426158 01C17824 */  and   $t7, $t6, $at
/* 0042615C 01AFC004 */  sllv  $t8, $t7, $t5
/* 00426160 07030014 */  bgezl $t8, .L004261B4
/* 00426164 8FB80050 */   lw    $t8, 0x50($sp)
/* 00426168 8FB90050 */  lw    $t9, 0x50($sp)
/* 0042616C 8FAE004C */  lw    $t6, 0x4c($sp)
/* 00426170 032E001A */  div   $zero, $t9, $t6
/* 00426174 00007812 */  mflo  $t7
/* 00426178 15C00002 */  bnez  $t6, .L00426184
/* 0042617C 00000000 */   nop   
/* 00426180 0007000D */  break 7
.L00426184:
/* 00426184 2401FFFF */  li    $at, -1
/* 00426188 15C10004 */  bne   $t6, $at, .L0042619C
/* 0042618C 3C018000 */   lui   $at, 0x8000
/* 00426190 17210002 */  bne   $t9, $at, .L0042619C
/* 00426194 00000000 */   nop   
/* 00426198 0006000D */  break 6
.L0042619C:
/* 0042619C 01EE0019 */  multu $t7, $t6
/* 004261A0 00006812 */  mflo  $t5
/* 004261A4 032D1823 */  subu  $v1, $t9, $t5
/* 004261A8 1000018E */  b     .L004267E4
/* 004261AC 24040002 */   li    $a0, 2
/* 004261B0 8FB80050 */  lw    $t8, 0x50($sp)
.L004261B4:
/* 004261B4 8FAF004C */  lw    $t7, 0x4c($sp)
/* 004261B8 030F001B */  divu  $zero, $t8, $t7
/* 004261BC 00007012 */  mflo  $t6
/* 004261C0 15E00002 */  bnez  $t7, .L004261CC
/* 004261C4 00000000 */   nop   
/* 004261C8 0007000D */  break 7
.L004261CC:
/* 004261CC 01CF0019 */  multu $t6, $t7
/* 004261D0 0000C812 */  mflo  $t9
/* 004261D4 03191823 */  subu  $v1, $t8, $t9
/* 004261D8 10000182 */  b     .L004267E4
/* 004261DC 24040002 */   li    $a0, 2
.L004261E0:
/* 004261E0 8FAD0050 */  lw    $t5, 0x50($sp)
/* 004261E4 8FAE004C */  lw    $t6, 0x4c($sp)
/* 004261E8 91020000 */  lbu   $v0, ($t0)
/* 004261EC 1000017C */  b     .L004267E0
/* 004261F0 01AE1824 */   and   $v1, $t5, $t6
.L004261F4:
/* 004261F4 8FAF0050 */  lw    $t7, 0x50($sp)
/* 004261F8 8FB8004C */  lw    $t8, 0x4c($sp)
/* 004261FC 91020000 */  lbu   $v0, ($t0)
/* 00426200 10000177 */  b     .L004267E0
/* 00426204 01F81825 */   or    $v1, $t7, $t8
.L00426208:
/* 00426208 8FB90050 */  lw    $t9, 0x50($sp)
/* 0042620C 8FAD004C */  lw    $t5, 0x4c($sp)
/* 00426210 91020000 */  lbu   $v0, ($t0)
/* 00426214 10000172 */  b     .L004267E0
/* 00426218 032D1826 */   xor   $v1, $t9, $t5
.L0042621C:
/* 0042621C 8FAE0050 */  lw    $t6, 0x50($sp)
/* 00426220 8FAF004C */  lw    $t7, 0x4c($sp)
/* 00426224 91020000 */  lbu   $v0, ($t0)
/* 00426228 1000016D */  b     .L004267E0
/* 0042622C 01EE1804 */   sllv  $v1, $t6, $t7
.L00426230:
/* 00426230 92180001 */  lbu   $t8, 1($s0)
/* 00426234 3C010600 */  lui   $at, 0x600
/* 00426238 91020000 */  lbu   $v0, ($t0)
/* 0042623C 2F190020 */  sltiu $t9, $t8, 0x20
/* 00426240 00196823 */  negu  $t5, $t9
/* 00426244 01A17024 */  and   $t6, $t5, $at
/* 00426248 030E7804 */  sllv  $t7, $t6, $t8
/* 0042624C 05E10005 */  bgez  $t7, .L00426264
/* 00426250 8FAE0050 */   lw    $t6, 0x50($sp)
/* 00426254 8FB90050 */  lw    $t9, 0x50($sp)
/* 00426258 8FAD004C */  lw    $t5, 0x4c($sp)
/* 0042625C 10000160 */  b     .L004267E0
/* 00426260 01B91807 */   srav  $v1, $t9, $t5
.L00426264:
/* 00426264 8FB8004C */  lw    $t8, 0x4c($sp)
/* 00426268 1000015D */  b     .L004267E0
/* 0042626C 030E1806 */   srlv  $v1, $t6, $t8
.L00426270:
/* 00426270 8FAF004C */  lw    $t7, 0x4c($sp)
/* 00426274 91020000 */  lbu   $v0, ($t0)
/* 00426278 8FA30050 */  lw    $v1, 0x50($sp)
/* 0042627C 05E00007 */  bltz  $t7, .L0042629C
/* 00426280 00000000 */   nop   
/* 00426284 8FA30050 */  lw    $v1, 0x50($sp)
/* 00426288 04630156 */  bgezl $v1, .L004267E4
/* 0042628C 24040002 */   li    $a0, 2
/* 00426290 00031823 */  negu  $v1, $v1
/* 00426294 10000153 */  b     .L004267E4
/* 00426298 24040002 */   li    $a0, 2
.L0042629C:
/* 0042629C 04610002 */  bgez  $v1, .L004262A8
/* 004262A0 00000000 */   nop   
/* 004262A4 00031823 */  negu  $v1, $v1
.L004262A8:
/* 004262A8 1000014D */  b     .L004267E0
/* 004262AC 00031823 */   negu  $v1, $v1
.L004262B0:
/* 004262B0 11800004 */  beqz  $t4, .L004262C4
/* 004262B4 91020000 */   lbu   $v0, ($t0)
/* 004262B8 00001825 */  move  $v1, $zero
/* 004262BC 10000148 */  b     .L004267E0
/* 004262C0 00006025 */   move  $t4, $zero
.L004262C4:
/* 004262C4 8FB90050 */  lw    $t9, 0x50($sp)
/* 004262C8 8FAD004C */  lw    $t5, 0x4c($sp)
/* 004262CC 172D0003 */  bne   $t9, $t5, .L004262DC
/* 004262D0 00000000 */   nop   
/* 004262D4 10000142 */  b     .L004267E0
/* 004262D8 24030001 */   li    $v1, 1
.L004262DC:
/* 004262DC 10000140 */  b     .L004267E0
/* 004262E0 00001825 */   move  $v1, $zero
.L004262E4:
/* 004262E4 11800004 */  beqz  $t4, .L004262F8
/* 004262E8 91020000 */   lbu   $v0, ($t0)
/* 004262EC 24030001 */  li    $v1, 1
/* 004262F0 1000013B */  b     .L004267E0
/* 004262F4 00006025 */   move  $t4, $zero
.L004262F8:
/* 004262F8 8FAE0050 */  lw    $t6, 0x50($sp)
/* 004262FC 8FB8004C */  lw    $t8, 0x4c($sp)
/* 00426300 11D80003 */  beq   $t6, $t8, .L00426310
/* 00426304 00000000 */   nop   
/* 00426308 10000135 */  b     .L004267E0
/* 0042630C 24030001 */   li    $v1, 1
.L00426310:
/* 00426310 10000133 */  b     .L004267E0
/* 00426314 00001825 */   move  $v1, $zero
.L00426318:
/* 00426318 920F0001 */  lbu   $t7, 1($s0)
/* 0042631C 3C010600 */  lui   $at, 0x600
/* 00426320 91020000 */  lbu   $v0, ($t0)
/* 00426324 2DF90020 */  sltiu $t9, $t7, 0x20
/* 00426328 00196823 */  negu  $t5, $t9
/* 0042632C 01A17024 */  and   $t6, $t5, $at
/* 00426330 01EEC004 */  sllv  $t8, $t6, $t7
/* 00426334 0701000A */  bgez  $t8, .L00426360
/* 00426338 8FAE0050 */   lw    $t6, 0x50($sp)
/* 0042633C 8FB90050 */  lw    $t9, 0x50($sp)
/* 00426340 8FAD004C */  lw    $t5, 0x4c($sp)
/* 00426344 032D082A */  slt   $at, $t9, $t5
/* 00426348 14200003 */  bnez  $at, .L00426358
/* 0042634C 00000000 */   nop   
/* 00426350 10000123 */  b     .L004267E0
/* 00426354 24030001 */   li    $v1, 1
.L00426358:
/* 00426358 10000121 */  b     .L004267E0
/* 0042635C 00001825 */   move  $v1, $zero
.L00426360:
/* 00426360 8FAF004C */  lw    $t7, 0x4c($sp)
/* 00426364 01CF082B */  sltu  $at, $t6, $t7
/* 00426368 14200003 */  bnez  $at, .L00426378
/* 0042636C 00000000 */   nop   
/* 00426370 1000011B */  b     .L004267E0
/* 00426374 24030001 */   li    $v1, 1
.L00426378:
/* 00426378 10000119 */  b     .L004267E0
/* 0042637C 00001825 */   move  $v1, $zero
.L00426380:
/* 00426380 92180001 */  lbu   $t8, 1($s0)
/* 00426384 3C010600 */  lui   $at, 0x600
/* 00426388 91020000 */  lbu   $v0, ($t0)
/* 0042638C 2F190020 */  sltiu $t9, $t8, 0x20
/* 00426390 00196823 */  negu  $t5, $t9
/* 00426394 01A17024 */  and   $t6, $t5, $at
/* 00426398 030E7804 */  sllv  $t7, $t6, $t8
/* 0042639C 05E1000A */  bgez  $t7, .L004263C8
/* 004263A0 8FAE004C */   lw    $t6, 0x4c($sp)
/* 004263A4 8FB9004C */  lw    $t9, 0x4c($sp)
/* 004263A8 8FAD0050 */  lw    $t5, 0x50($sp)
/* 004263AC 032D082A */  slt   $at, $t9, $t5
/* 004263B0 10200003 */  beqz  $at, .L004263C0
/* 004263B4 00000000 */   nop   
/* 004263B8 10000109 */  b     .L004267E0
/* 004263BC 24030001 */   li    $v1, 1
.L004263C0:
/* 004263C0 10000107 */  b     .L004267E0
/* 004263C4 00001825 */   move  $v1, $zero
.L004263C8:
/* 004263C8 8FB80050 */  lw    $t8, 0x50($sp)
/* 004263CC 01D8082B */  sltu  $at, $t6, $t8
/* 004263D0 10200003 */  beqz  $at, .L004263E0
/* 004263D4 00000000 */   nop   
/* 004263D8 10000101 */  b     .L004267E0
/* 004263DC 24030001 */   li    $v1, 1
.L004263E0:
/* 004263E0 100000FF */  b     .L004267E0
/* 004263E4 00001825 */   move  $v1, $zero
.L004263E8:
/* 004263E8 920F0001 */  lbu   $t7, 1($s0)
/* 004263EC 3C010600 */  lui   $at, 0x600
/* 004263F0 91020000 */  lbu   $v0, ($t0)
/* 004263F4 2DF90020 */  sltiu $t9, $t7, 0x20
/* 004263F8 00196823 */  negu  $t5, $t9
/* 004263FC 01A17024 */  and   $t6, $t5, $at
/* 00426400 01EEC004 */  sllv  $t8, $t6, $t7
/* 00426404 0701000A */  bgez  $t8, .L00426430
/* 00426408 8FAE004C */   lw    $t6, 0x4c($sp)
/* 0042640C 8FB9004C */  lw    $t9, 0x4c($sp)
/* 00426410 8FAD0050 */  lw    $t5, 0x50($sp)
/* 00426414 032D082A */  slt   $at, $t9, $t5
/* 00426418 14200003 */  bnez  $at, .L00426428
/* 0042641C 00000000 */   nop   
/* 00426420 100000EF */  b     .L004267E0
/* 00426424 24030001 */   li    $v1, 1
.L00426428:
/* 00426428 100000ED */  b     .L004267E0
/* 0042642C 00001825 */   move  $v1, $zero
.L00426430:
/* 00426430 8FAF0050 */  lw    $t7, 0x50($sp)
/* 00426434 01CF082B */  sltu  $at, $t6, $t7
/* 00426438 14200003 */  bnez  $at, .L00426448
/* 0042643C 00000000 */   nop   
/* 00426440 100000E7 */  b     .L004267E0
/* 00426444 24030001 */   li    $v1, 1
.L00426448:
/* 00426448 100000E5 */  b     .L004267E0
/* 0042644C 00001825 */   move  $v1, $zero
.L00426450:
/* 00426450 92180001 */  lbu   $t8, 1($s0)
/* 00426454 3C010600 */  lui   $at, 0x600
/* 00426458 91020000 */  lbu   $v0, ($t0)
/* 0042645C 2F190020 */  sltiu $t9, $t8, 0x20
/* 00426460 00196823 */  negu  $t5, $t9
/* 00426464 01A17024 */  and   $t6, $t5, $at
/* 00426468 030E7804 */  sllv  $t7, $t6, $t8
/* 0042646C 05E1000A */  bgez  $t7, .L00426498
/* 00426470 8FAE0050 */   lw    $t6, 0x50($sp)
/* 00426474 8FB90050 */  lw    $t9, 0x50($sp)
/* 00426478 8FAD004C */  lw    $t5, 0x4c($sp)
/* 0042647C 032D082A */  slt   $at, $t9, $t5
/* 00426480 10200003 */  beqz  $at, .L00426490
/* 00426484 00000000 */   nop   
/* 00426488 100000D5 */  b     .L004267E0
/* 0042648C 24030001 */   li    $v1, 1
.L00426490:
/* 00426490 100000D3 */  b     .L004267E0
/* 00426494 00001825 */   move  $v1, $zero
.L00426498:
/* 00426498 8FB8004C */  lw    $t8, 0x4c($sp)
/* 0042649C 01D8082B */  sltu  $at, $t6, $t8
/* 004264A0 10200003 */  beqz  $at, .L004264B0
/* 004264A4 00000000 */   nop   
/* 004264A8 100000CD */  b     .L004267E0
/* 004264AC 24030001 */   li    $v1, 1
.L004264B0:
/* 004264B0 100000CB */  b     .L004267E0
/* 004264B4 00001825 */   move  $v1, $zero
.L004264B8:
/* 004264B8 920F0001 */  lbu   $t7, 1($s0)
/* 004264BC 3C010600 */  lui   $at, 0x600
/* 004264C0 91020000 */  lbu   $v0, ($t0)
/* 004264C4 2DF90020 */  sltiu $t9, $t7, 0x20
/* 004264C8 00196823 */  negu  $t5, $t9
/* 004264CC 01A17024 */  and   $t6, $t5, $at
/* 004264D0 01EEC004 */  sllv  $t8, $t6, $t7
/* 004264D4 07010009 */  bgez  $t8, .L004264FC
/* 004264D8 8FAE004C */   lw    $t6, 0x4c($sp)
/* 004264DC 8FB9004C */  lw    $t9, 0x4c($sp)
/* 004264E0 8FA30050 */  lw    $v1, 0x50($sp)
/* 004264E4 0323082A */  slt   $at, $t9, $v1
/* 004264E8 502000BE */  beql  $at, $zero, .L004267E4
/* 004264EC 24040002 */   li    $a0, 2
/* 004264F0 03201825 */  move  $v1, $t9
/* 004264F4 100000BB */  b     .L004267E4
/* 004264F8 24040002 */   li    $a0, 2
.L004264FC:
/* 004264FC 8FA30050 */  lw    $v1, 0x50($sp)
/* 00426500 01C3082B */  sltu  $at, $t6, $v1
/* 00426504 502000B7 */  beql  $at, $zero, .L004267E4
/* 00426508 24040002 */   li    $a0, 2
/* 0042650C 01C01825 */  move  $v1, $t6
/* 00426510 100000B4 */  b     .L004267E4
/* 00426514 24040002 */   li    $a0, 2
.L00426518:
/* 00426518 92180001 */  lbu   $t8, 1($s0)
/* 0042651C 3C010600 */  lui   $at, 0x600
/* 00426520 91020000 */  lbu   $v0, ($t0)
/* 00426524 2F190020 */  sltiu $t9, $t8, 0x20
/* 00426528 00196823 */  negu  $t5, $t9
/* 0042652C 01A17024 */  and   $t6, $t5, $at
/* 00426530 030E7804 */  sllv  $t7, $t6, $t8
/* 00426534 05E10009 */  bgez  $t7, .L0042655C
/* 00426538 8FAE004C */   lw    $t6, 0x4c($sp)
/* 0042653C 8FB9004C */  lw    $t9, 0x4c($sp)
/* 00426540 8FA30050 */  lw    $v1, 0x50($sp)
/* 00426544 0079082A */  slt   $at, $v1, $t9
/* 00426548 502000A6 */  beql  $at, $zero, .L004267E4
/* 0042654C 24040002 */   li    $a0, 2
/* 00426550 03201825 */  move  $v1, $t9
/* 00426554 100000A3 */  b     .L004267E4
/* 00426558 24040002 */   li    $a0, 2
.L0042655C:
/* 0042655C 8FA30050 */  lw    $v1, 0x50($sp)
/* 00426560 006E082B */  sltu  $at, $v1, $t6
/* 00426564 5020009F */  beql  $at, $zero, .L004267E4
/* 00426568 24040002 */   li    $a0, 2
/* 0042656C 01C01825 */  move  $v1, $t6
/* 00426570 1000009C */  b     .L004267E4
/* 00426574 24040002 */   li    $a0, 2
.L00426578:
/* 00426578 10000099 */  b     .L004267E0
/* 0042657C 91020000 */   lbu   $v0, ($t0)
.L00426580:
/* 00426580 8FB9004C */  lw    $t9, 0x4c($sp)
/* 00426584 91020000 */  lbu   $v0, ($t0)
/* 00426588 10000095 */  b     .L004267E0
/* 0042658C 01F91821 */   addu  $v1, $t7, $t9
.L00426590:
/* 00426590 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00426594 8F868044 */  lw    $a2, %got(RO_1000B092)($gp)
/* 00426598 24040001 */  li    $a0, 1
/* 0042659C 2405084C */  li    $a1, 2124
/* 004265A0 2407000A */  li    $a3, 10
/* 004265A4 AFA30058 */  sw    $v1, 0x58($sp)
/* 004265A8 AFA8002C */  sw    $t0, 0x2c($sp)
/* 004265AC AFAA0024 */  sw    $t2, 0x24($sp)
/* 004265B0 A3AC0043 */  sb    $t4, 0x43($sp)
/* 004265B4 0320F809 */  jalr  $t9
/* 004265B8 24C6B092 */   addiu $a2, %lo(RO_1000B092) # addiu $a2, $a2, -0x4f6e
/* 004265BC 8FA8002C */  lw    $t0, 0x2c($sp)
/* 004265C0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004265C4 8FA30058 */  lw    $v1, 0x58($sp)
/* 004265C8 8FAA0024 */  lw    $t2, 0x24($sp)
/* 004265CC 93AC0043 */  lbu   $t4, 0x43($sp)
/* 004265D0 10000083 */  b     .L004267E0
/* 004265D4 91020000 */   lbu   $v0, ($t0)
.L004265D8:
/* 004265D8 2C410042 */  sltiu $at, $v0, 0x42
/* 004265DC 1420002C */  bnez  $at, .L00426690
/* 004265E0 2C41006A */   sltiu $at, $v0, 0x6a
/* 004265E4 1420001A */  bnez  $at, .L00426650
/* 004265E8 2C41007E */   sltiu $at, $v0, 0x7e
/* 004265EC 1420000C */  bnez  $at, .L00426620
/* 004265F0 244EFF8D */   addiu $t6, $v0, -0x73
/* 004265F4 244DFF76 */  addiu $t5, $v0, -0x8a
/* 004265F8 2DA10004 */  sltiu $at, $t5, 4
/* 004265FC 1020FFE4 */  beqz  $at, .L00426590
/* 00426600 00000000 */   nop   
/* 00426604 8F818044 */  lw    $at, %got(jtbl_1000B170)($gp)
/* 00426608 000D6880 */  sll   $t5, $t5, 2
/* 0042660C 002D0821 */  addu  $at, $at, $t5
/* 00426610 8C2DB170 */  lw    $t5, %lo(jtbl_1000B170)($at)
/* 00426614 01BC6821 */  addu  $t5, $t5, $gp
/* 00426618 01A00008 */  jr    $t5
/* 0042661C 00000000 */   nop   
.L00426620:
/* 00426620 2C410076 */  sltiu $at, $v0, 0x76
/* 00426624 10200069 */  beqz  $at, .L004267CC
/* 00426628 2DC10003 */   sltiu $at, $t6, 3
/* 0042662C 1020FFD8 */  beqz  $at, .L00426590
/* 00426630 00000000 */   nop   
/* 00426634 8F818044 */  lw    $at, %got(jtbl_1000B164)($gp)
/* 00426638 000E7080 */  sll   $t6, $t6, 2
/* 0042663C 002E0821 */  addu  $at, $at, $t6
/* 00426640 8C2EB164 */  lw    $t6, %lo(jtbl_1000B164)($at)
/* 00426644 01DC7021 */  addu  $t6, $t6, $gp
/* 00426648 01C00008 */  jr    $t6
/* 0042664C 00000000 */   nop   
.L00426650:
/* 00426650 2C41004F */  sltiu $at, $v0, 0x4f
/* 00426654 1420004E */  bnez  $at, .L00426790
/* 00426658 2458FFB3 */   addiu $t8, $v0, -0x4d
/* 0042665C 2C410060 */  sltiu $at, $v0, 0x60
/* 00426660 10200055 */  beqz  $at, .L004267B8
/* 00426664 2458FFAB */   addiu $t8, $v0, -0x55
/* 00426668 2F01000B */  sltiu $at, $t8, 0xb
/* 0042666C 1020FFC8 */  beqz  $at, .L00426590
/* 00426670 00000000 */   nop   
/* 00426674 8F818044 */  lw    $at, %got(jtbl_1000B138)($gp)
/* 00426678 0018C080 */  sll   $t8, $t8, 2
/* 0042667C 00380821 */  addu  $at, $at, $t8
/* 00426680 8C38B138 */  lw    $t8, %lo(jtbl_1000B138)($at)
/* 00426684 031CC021 */  addu  $t8, $t8, $gp
/* 00426688 03000008 */  jr    $t8
/* 0042668C 00000000 */   nop   
.L00426690:
/* 00426690 2C410024 */  sltiu $at, $v0, 0x24
/* 00426694 14200010 */  bnez  $at, .L004266D8
/* 00426698 2C41002A */   sltiu $at, $v0, 0x2a
/* 0042669C 1420002D */  bnez  $at, .L00426754
/* 004266A0 244EFFD8 */   addiu $t6, $v0, -0x28
/* 004266A4 2C41003D */  sltiu $at, $v0, 0x3d
/* 004266A8 10200034 */  beqz  $at, .L0042677C
/* 004266AC 244FFFC6 */   addiu $t7, $v0, -0x3a
/* 004266B0 2DE10003 */  sltiu $at, $t7, 3
/* 004266B4 1020FFB6 */  beqz  $at, .L00426590
/* 004266B8 00000000 */   nop   
/* 004266BC 8F818044 */  lw    $at, %got(jtbl_1000B124)($gp)
/* 004266C0 000F7880 */  sll   $t7, $t7, 2
/* 004266C4 002F0821 */  addu  $at, $at, $t7
/* 004266C8 8C2FB124 */  lw    $t7, %lo(jtbl_1000B124)($at)
/* 004266CC 01FC7821 */  addu  $t7, $t7, $gp
/* 004266D0 01E00008 */  jr    $t7
/* 004266D4 00000000 */   nop   
.L004266D8:
/* 004266D8 2C410005 */  sltiu $at, $v0, 5
/* 004266DC 1420000D */  bnez  $at, .L00426714
/* 004266E0 2C41001E */   sltiu $at, $v0, 0x1e
/* 004266E4 10200016 */  beqz  $at, .L00426740
/* 004266E8 2459FFE4 */   addiu $t9, $v0, -0x1c
/* 004266EC 2F210002 */  sltiu $at, $t9, 2
/* 004266F0 1020FFA7 */  beqz  $at, .L00426590
/* 004266F4 00000000 */   nop   
/* 004266F8 8F818044 */  lw    $at, %got(jtbl_1000B114)($gp)
/* 004266FC 0019C880 */  sll   $t9, $t9, 2
/* 00426700 00390821 */  addu  $at, $at, $t9
/* 00426704 8C39B114 */  lw    $t9, %lo(jtbl_1000B114)($at)
/* 00426708 033CC821 */  addu  $t9, $t9, $gp
/* 0042670C 03200008 */  jr    $t9
/* 00426710 00000000 */   nop   
.L00426714:
/* 00426714 244DFFFF */  addiu $t5, $v0, -1
/* 00426718 2DA10004 */  sltiu $at, $t5, 4
/* 0042671C 1020FF9C */  beqz  $at, .L00426590
/* 00426720 00000000 */   nop   
/* 00426724 8F818044 */  lw    $at, %got(jtbl_1000B104)($gp)
/* 00426728 000D6880 */  sll   $t5, $t5, 2
/* 0042672C 002D0821 */  addu  $at, $at, $t5
/* 00426730 8C2DB104 */  lw    $t5, %lo(jtbl_1000B104)($at)
/* 00426734 01BC6821 */  addu  $t5, $t5, $gp
/* 00426738 01A00008 */  jr    $t5
/* 0042673C 00000000 */   nop   
.L00426740:
/* 00426740 24010023 */  li    $at, 35
/* 00426744 1041FEDA */  beq   $v0, $at, .L004262B0
/* 00426748 00000000 */   nop   
/* 0042674C 1000FF90 */  b     .L00426590
/* 00426750 00000000 */   nop   
.L00426754:
/* 00426754 2DC10002 */  sltiu $at, $t6, 2
/* 00426758 1020FF8D */  beqz  $at, .L00426590
/* 0042675C 00000000 */   nop   
/* 00426760 8F818044 */  lw    $at, %got(jtbl_1000B11C)($gp)
/* 00426764 000E7080 */  sll   $t6, $t6, 2
/* 00426768 002E0821 */  addu  $at, $at, $t6
/* 0042676C 8C2EB11C */  lw    $t6, %lo(jtbl_1000B11C)($at)
/* 00426770 01DC7021 */  addu  $t6, $t6, $gp
/* 00426774 01C00008 */  jr    $t6
/* 00426778 00000000 */   nop   
.L0042677C:
/* 0042677C 24010041 */  li    $at, 65
/* 00426780 1041FF7F */  beq   $v0, $at, .L00426580
/* 00426784 8FAF0050 */   lw    $t7, 0x50($sp)
/* 00426788 1000FF81 */  b     .L00426590
/* 0042678C 00000000 */   nop   
.L00426790:
/* 00426790 2F010002 */  sltiu $at, $t8, 2
/* 00426794 1020FF7E */  beqz  $at, .L00426590
/* 00426798 00000000 */   nop   
/* 0042679C 8F818044 */  lw    $at, %got(jtbl_1000B130)($gp)
/* 004267A0 0018C080 */  sll   $t8, $t8, 2
/* 004267A4 00380821 */  addu  $at, $at, $t8
/* 004267A8 8C38B130 */  lw    $t8, %lo(jtbl_1000B130)($at)
/* 004267AC 031CC021 */  addu  $t8, $t8, $gp
/* 004267B0 03000008 */  jr    $t8
/* 004267B4 00000000 */   nop   
.L004267B8:
/* 004267B8 24010069 */  li    $at, 105
/* 004267BC 5041FE62 */  beql  $v0, $at, .L00426148
/* 004267C0 920D0001 */   lbu   $t5, 1($s0)
/* 004267C4 1000FF72 */  b     .L00426590
/* 004267C8 00000000 */   nop   
.L004267CC:
/* 004267CC 2401007D */  li    $at, 125
/* 004267D0 1041FE1D */  beq   $v0, $at, .L00426048
/* 004267D4 8FAF0050 */   lw    $t7, 0x50($sp)
/* 004267D8 1000FF6D */  b     .L00426590
/* 004267DC 00000000 */   nop   
.L004267E0:
/* 004267E0 24040002 */  li    $a0, 2
.L004267E4:
/* 004267E4 00827826 */  xor   $t7, $a0, $v0
/* 004267E8 2DEF0001 */  sltiu $t7, $t7, 1
/* 004267EC 2D990001 */  sltiu $t9, $t4, 1
/* 004267F0 15F90007 */  bne   $t7, $t9, .L00426810
/* 004267F4 00000000 */   nop   
/* 004267F8 11800003 */  beqz  $t4, .L00426808
/* 004267FC 00000000 */   nop   
/* 00426800 1000001A */  b     .L0042686C
/* 00426804 AD030010 */   sw    $v1, 0x10($t0)
.L00426808:
/* 00426808 10000018 */  b     .L0042686C
/* 0042680C AD030010 */   sw    $v1, 0x10($t0)
.L00426810:
/* 00426810 11800011 */  beqz  $t4, .L00426858
/* 00426814 24190008 */   li    $t9, 8
/* 00426818 8D4D0028 */  lw    $t5, 0x28($t2)
/* 0042681C 01407825 */  move  $t7, $t2
/* 00426820 25590024 */  addiu $t9, $t2, 0x24
.L00426824:
/* 00426824 8DF80000 */  lw    $t8, ($t7)
/* 00426828 25EF000C */  addiu $t7, $t7, 0xc
/* 0042682C 25AD000C */  addiu $t5, $t5, 0xc
/* 00426830 ADB8FFF4 */  sw    $t8, -0xc($t5)
/* 00426834 8DEEFFF8 */  lw    $t6, -8($t7)
/* 00426838 ADAEFFF8 */  sw    $t6, -8($t5)
/* 0042683C 8DF8FFFC */  lw    $t8, -4($t7)
/* 00426840 15F9FFF8 */  bne   $t7, $t9, .L00426824
/* 00426844 ADB8FFFC */   sw    $t8, -4($t5)
/* 00426848 8DF80000 */  lw    $t8, ($t7)
/* 0042684C ADB80000 */  sw    $t8, ($t5)
/* 00426850 10000006 */  b     .L0042686C
/* 00426854 AD030010 */   sw    $v1, 0x10($t0)
.L00426858:
/* 00426858 240F0004 */  li    $t7, 4
/* 0042685C A1040000 */  sb    $a0, ($t0)
/* 00426860 A1190001 */  sb    $t9, 1($t0)
/* 00426864 AD030010 */  sw    $v1, 0x10($t0)
/* 00426868 AD0F0018 */  sw    $t7, 0x18($t0)
.L0042686C:
/* 0042686C 8D4D0028 */  lw    $t5, 0x28($t2)
/* 00426870 8FAE0064 */  lw    $t6, 0x64($sp)
/* 00426874 10000157 */  b     .L00426DD4
/* 00426878 ADCDFFF8 */   sw    $t5, -8($t6)
.L0042687C:
/* 0042687C 8FB80064 */  lw    $t8, 0x64($sp)
/* 00426880 240B0001 */  li    $t3, 1
/* 00426884 00004825 */  move  $t1, $zero
/* 00426888 8F0AFFF8 */  lw    $t2, -8($t8)
/* 0042688C 91590000 */  lbu   $t9, ($t2)
/* 00426890 55790006 */  bnel  $t3, $t9, .L004268AC
/* 00426894 8D4D0010 */   lw    $t5, 0x10($t2)
/* 00426898 8D4F0010 */  lw    $t7, 0x10($t2)
/* 0042689C 30A200FF */  andi  $v0, $a1, 0xff
/* 004268A0 10000034 */  b     .L00426974
/* 004268A4 AFAF0050 */   sw    $t7, 0x50($sp)
/* 004268A8 8D4D0010 */  lw    $t5, 0x10($t2)
.L004268AC:
/* 004268AC AFAD0050 */  sw    $t5, 0x50($sp)
/* 004268B0 10000030 */  b     .L00426974
/* 004268B4 30A200FF */   andi  $v0, $a1, 0xff
.L004268B8:
/* 004268B8 8FA90050 */  lw    $t1, 0x50($sp)
/* 004268BC 3C018000 */  lui   $at, 0x8000
/* 004268C0 01214826 */  xor   $t1, $t1, $at
/* 004268C4 2D290001 */  sltiu $t1, $t1, 1
/* 004268C8 1000005D */  b     .L00426A40
/* 004268CC 312900FF */   andi  $t1, $t1, 0xff
.L004268D0:
/* 004268D0 8F99868C */  lw    $t9, %call16(subovfw)($gp)
/* 004268D4 8E06001C */  lw    $a2, 0x1c($s0)
/* 004268D8 92040001 */  lbu   $a0, 1($s0)
/* 004268DC 8FA50050 */  lw    $a1, 0x50($sp)
/* 004268E0 AFAA0024 */  sw    $t2, 0x24($sp)
/* 004268E4 0320F809 */  jalr  $t9
/* 004268E8 AFA6004C */   sw    $a2, 0x4c($sp)
/* 004268EC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004268F0 8FAA0024 */  lw    $t2, 0x24($sp)
/* 004268F4 240B0001 */  li    $t3, 1
/* 004268F8 304900FF */  andi  $t1, $v0, 0xff
/* 004268FC 10000050 */  b     .L00426A40
/* 00426900 92050010 */   lbu   $a1, 0x10($s0)
.L00426904:
/* 00426904 8F998688 */  lw    $t9, %call16(addovfw)($gp)
/* 00426908 8E06001C */  lw    $a2, 0x1c($s0)
/* 0042690C 92040001 */  lbu   $a0, 1($s0)
/* 00426910 8FA50050 */  lw    $a1, 0x50($sp)
/* 00426914 AFAA0024 */  sw    $t2, 0x24($sp)
/* 00426918 0320F809 */  jalr  $t9
/* 0042691C AFA6004C */   sw    $a2, 0x4c($sp)
/* 00426920 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00426924 8FAA0024 */  lw    $t2, 0x24($sp)
/* 00426928 240B0001 */  li    $t3, 1
/* 0042692C 304900FF */  andi  $t1, $v0, 0xff
/* 00426930 10000043 */  b     .L00426A40
/* 00426934 92050010 */   lbu   $a1, 0x10($s0)
.L00426938:
/* 00426938 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0042693C 8F868044 */  lw    $a2, %got(RO_1000B088)($gp)
/* 00426940 01602025 */  move  $a0, $t3
/* 00426944 240508D1 */  li    $a1, 2257
/* 00426948 2407000A */  li    $a3, 10
/* 0042694C A3A9005E */  sb    $t1, 0x5e($sp)
/* 00426950 AFAA0024 */  sw    $t2, 0x24($sp)
/* 00426954 0320F809 */  jalr  $t9
/* 00426958 24C6B088 */   addiu $a2, %lo(RO_1000B088) # addiu $a2, $a2, -0x4f78
/* 0042695C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00426960 93A9005E */  lbu   $t1, 0x5e($sp)
/* 00426964 8FAA0024 */  lw    $t2, 0x24($sp)
/* 00426968 240B0001 */  li    $t3, 1
/* 0042696C 10000034 */  b     .L00426A40
/* 00426970 92050010 */   lbu   $a1, 0x10($s0)
.L00426974:
/* 00426974 2C410038 */  sltiu $at, $v0, 0x38
/* 00426978 14200018 */  bnez  $at, .L004269DC
/* 0042697C 244FFFE8 */   addiu $t7, $v0, -0x18
/* 00426980 2C410063 */  sltiu $at, $v0, 0x63
/* 00426984 14200007 */  bnez  $at, .L004269A4
/* 00426988 24010072 */   li    $at, 114
/* 0042698C 1041002C */  beq   $v0, $at, .L00426A40
/* 00426990 24010076 */   li    $at, 118
/* 00426994 1041002A */  beq   $v0, $at, .L00426A40
/* 00426998 00000000 */   nop   
/* 0042699C 1000FFE6 */  b     .L00426938
/* 004269A0 00000000 */   nop   
.L004269A4:
/* 004269A4 24010050 */  li    $at, 80
/* 004269A8 10410025 */  beq   $v0, $at, .L00426A40
/* 004269AC 00000000 */   nop   
/* 004269B0 2459FFA2 */  addiu $t9, $v0, -0x5e
/* 004269B4 2F210005 */  sltiu $at, $t9, 5
/* 004269B8 1020FFDF */  beqz  $at, .L00426938
/* 004269BC 00000000 */   nop   
/* 004269C0 8F818044 */  lw    $at, %got(jtbl_1000B18C)($gp)
/* 004269C4 0019C880 */  sll   $t9, $t9, 2
/* 004269C8 00390821 */  addu  $at, $at, $t9
/* 004269CC 8C39B18C */  lw    $t9, %lo(jtbl_1000B18C)($at)
/* 004269D0 033CC821 */  addu  $t9, $t9, $gp
/* 004269D4 03200008 */  jr    $t9
/* 004269D8 00000000 */   nop   
.L004269DC:
/* 004269DC 2C41000E */  sltiu $at, $v0, 0xe
/* 004269E0 1420000C */  bnez  $at, .L00426A14
/* 004269E4 2C41001B */   sltiu $at, $v0, 0x1b
/* 004269E8 10200010 */  beqz  $at, .L00426A2C
/* 004269EC 2DE10003 */   sltiu $at, $t7, 3
/* 004269F0 1020FFD1 */  beqz  $at, .L00426938
/* 004269F4 00000000 */   nop   
/* 004269F8 8F818044 */  lw    $at, %got(jtbl_1000B180)($gp)
/* 004269FC 000F7880 */  sll   $t7, $t7, 2
/* 00426A00 002F0821 */  addu  $at, $at, $t7
/* 00426A04 8C2FB180 */  lw    $t7, %lo(jtbl_1000B180)($at)
/* 00426A08 01FC7821 */  addu  $t7, $t7, $gp
/* 00426A0C 01E00008 */  jr    $t7
/* 00426A10 00000000 */   nop   
.L00426A14:
/* 00426A14 1040FFA8 */  beqz  $v0, .L004268B8
/* 00426A18 2C41000C */   sltiu $at, $v0, 0xc
/* 00426A1C 10200008 */  beqz  $at, .L00426A40
/* 00426A20 00000000 */   nop   
/* 00426A24 1000FFC4 */  b     .L00426938
/* 00426A28 00000000 */   nop   
.L00426A2C:
/* 00426A2C 24010037 */  li    $at, 55
/* 00426A30 1041FFB4 */  beq   $v0, $at, .L00426904
/* 00426A34 00000000 */   nop   
/* 00426A38 1000FFBF */  b     .L00426938
/* 00426A3C 00000000 */   nop   
.L00426A40:
/* 00426A40 51200010 */  beql  $t1, $zero, .L00426A84
/* 00426A44 8FA30058 */   lw    $v1, 0x58($sp)
/* 00426A48 920D0011 */  lbu   $t5, 0x11($s0)
/* 00426A4C 51A0000D */  beql  $t5, $zero, .L00426A84
/* 00426A50 8FA30058 */   lw    $v1, 0x58($sp)
/* 00426A54 8F998618 */  lw    $t9, %call16(ovfwwarning)($gp)
/* 00426A58 00A02025 */  move  $a0, $a1
/* 00426A5C AFAA0024 */  sw    $t2, 0x24($sp)
/* 00426A60 0320F809 */  jalr  $t9
/* 00426A64 00000000 */   nop   
/* 00426A68 24030001 */  li    $v1, 1
/* 00426A6C AFA30058 */  sw    $v1, 0x58($sp)
/* 00426A70 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00426A74 8FAA0024 */  lw    $t2, 0x24($sp)
/* 00426A78 240B0001 */  li    $t3, 1
/* 00426A7C 92050010 */  lbu   $a1, 0x10($s0)
/* 00426A80 8FA30058 */  lw    $v1, 0x58($sp)
.L00426A84:
/* 00426A84 1000007E */  b     .L00426C80
/* 00426A88 30A200FF */   andi  $v0, $a1, 0xff
.L00426A8C:
/* 00426A8C 920E0001 */  lbu   $t6, 1($s0)
/* 00426A90 3C010600 */  lui   $at, 0x600
/* 00426A94 8FA30050 */  lw    $v1, 0x50($sp)
/* 00426A98 2DD80020 */  sltiu $t8, $t6, 0x20
/* 00426A9C 0018C823 */  negu  $t9, $t8
/* 00426AA0 03217824 */  and   $t7, $t9, $at
/* 00426AA4 01CF6804 */  sllv  $t5, $t7, $t6
/* 00426AA8 05A10006 */  bgez  $t5, .L00426AC4
/* 00426AAC 00000000 */   nop   
/* 00426AB0 046300AD */  bgezl $v1, .L00426D68
/* 00426AB4 24010018 */   li    $at, 24
/* 00426AB8 00031823 */  negu  $v1, $v1
/* 00426ABC 100000AA */  b     .L00426D68
/* 00426AC0 24010018 */   li    $at, 24
.L00426AC4:
/* 00426AC4 100000A7 */  b     .L00426D64
/* 00426AC8 8FA30050 */   lw    $v1, 0x50($sp)
.L00426ACC:
/* 00426ACC 8FB80050 */  lw    $t8, 0x50($sp)
/* 00426AD0 33190001 */  andi  $t9, $t8, 1
/* 00426AD4 13200003 */  beqz  $t9, .L00426AE4
/* 00426AD8 00000000 */   nop   
/* 00426ADC 100000A1 */  b     .L00426D64
/* 00426AE0 24030001 */   li    $v1, 1
.L00426AE4:
/* 00426AE4 1000009F */  b     .L00426D64
/* 00426AE8 00001825 */   move  $v1, $zero
.L00426AEC:
/* 00426AEC 01EF0019 */  multu $t7, $t7
/* 00426AF0 00001812 */  mflo  $v1
/* 00426AF4 1000009C */  b     .L00426D68
/* 00426AF8 24010018 */   li    $at, 24
.L00426AFC:
/* 00426AFC 8FA30050 */  lw    $v1, 0x50($sp)
/* 00426B00 10000098 */  b     .L00426D64
/* 00426B04 00031823 */   negu  $v1, $v1
/* 00426B08 914E0000 */  lbu   $t6, ($t2)
.L00426B0C:
/* 00426B0C 8FAD0050 */  lw    $t5, 0x50($sp)
/* 00426B10 156E0003 */  bne   $t3, $t6, .L00426B20
/* 00426B14 00000000 */   nop   
/* 00426B18 10000092 */  b     .L00426D64
/* 00426B1C 00001825 */   move  $v1, $zero
.L00426B20:
/* 00426B20 11A00003 */  beqz  $t5, .L00426B30
/* 00426B24 00000000 */   nop   
/* 00426B28 1000008E */  b     .L00426D64
/* 00426B2C 00001825 */   move  $v1, $zero
.L00426B30:
/* 00426B30 1000008C */  b     .L00426D64
/* 00426B34 24030001 */   li    $v1, 1
.L00426B38:
/* 00426B38 8FA30050 */  lw    $v1, 0x50($sp)
/* 00426B3C 10000089 */  b     .L00426D64
/* 00426B40 00601827 */   not   $v1, $v1
.L00426B44:
/* 00426B44 8FB80050 */  lw    $t8, 0x50($sp)
/* 00426B48 8FB9004C */  lw    $t9, 0x4c($sp)
/* 00426B4C 10000085 */  b     .L00426D64
/* 00426B50 03191823 */   subu  $v1, $t8, $t9
.L00426B54:
/* 00426B54 8FAE004C */  lw    $t6, 0x4c($sp)
/* 00426B58 10000082 */  b     .L00426D64
/* 00426B5C 01EE1821 */   addu  $v1, $t7, $t6
.L00426B60:
/* 00426B60 8FAD0050 */  lw    $t5, 0x50($sp)
/* 00426B64 8E18001C */  lw    $t8, 0x1c($s0)
/* 00426B68 01A01825 */  move  $v1, $t5
/* 00426B6C 030D082A */  slt   $at, $t8, $t5
/* 00426B70 5020007D */  beql  $at, $zero, .L00426D68
/* 00426B74 24010018 */   li    $at, 24
/* 00426B78 8F998614 */  lw    $t9, %call16(boundswarning)($gp)
/* 00426B7C AFAD0058 */  sw    $t5, 0x58($sp)
/* 00426B80 AFAA0024 */  sw    $t2, 0x24($sp)
/* 00426B84 0320F809 */  jalr  $t9
/* 00426B88 00000000 */   nop   
/* 00426B8C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00426B90 8FA30058 */  lw    $v1, 0x58($sp)
/* 00426B94 8FAA0024 */  lw    $t2, 0x24($sp)
/* 00426B98 240B0001 */  li    $t3, 1
/* 00426B9C 10000071 */  b     .L00426D64
/* 00426BA0 92050010 */   lbu   $a1, 0x10($s0)
.L00426BA4:
/* 00426BA4 8FB90050 */  lw    $t9, 0x50($sp)
/* 00426BA8 8E0F001C */  lw    $t7, 0x1c($s0)
/* 00426BAC 03201825 */  move  $v1, $t9
/* 00426BB0 032F082A */  slt   $at, $t9, $t7
/* 00426BB4 5020006C */  beql  $at, $zero, .L00426D68
/* 00426BB8 24010018 */   li    $at, 24
/* 00426BBC 8F998614 */  lw    $t9, %call16(boundswarning)($gp)
/* 00426BC0 AFA30058 */  sw    $v1, 0x58($sp)
/* 00426BC4 AFAA0024 */  sw    $t2, 0x24($sp)
/* 00426BC8 0320F809 */  jalr  $t9
/* 00426BCC 00000000 */   nop   
/* 00426BD0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00426BD4 8FA30058 */  lw    $v1, 0x58($sp)
/* 00426BD8 8FAA0024 */  lw    $t2, 0x24($sp)
/* 00426BDC 240B0001 */  li    $t3, 1
/* 00426BE0 10000060 */  b     .L00426D64
/* 00426BE4 92050010 */   lbu   $a1, 0x10($s0)
.L00426BE8:
/* 00426BE8 8E04001C */  lw    $a0, 0x1c($s0)
/* 00426BEC 914D0001 */  lbu   $t5, 1($t2)
/* 00426BF0 8FB80050 */  lw    $t8, 0x50($sp)
/* 00426BF4 240E0001 */  li    $t6, 1
/* 00426BF8 008E1804 */  sllv  $v1, $t6, $a0
/* 00426BFC 2DB90020 */  sltiu $t9, $t5, 0x20
/* 00426C00 2463FFFF */  addiu $v1, $v1, -1
/* 00426C04 00197823 */  negu  $t7, $t9
/* 00426C08 3C010600 */  lui   $at, 0x600
/* 00426C0C 01E17024 */  and   $t6, $t7, $at
/* 00426C10 03031824 */  and   $v1, $t8, $v1
/* 00426C14 01AEC004 */  sllv  $t8, $t6, $t5
/* 00426C18 07010052 */  bgez  $t8, .L00426D64
/* 00426C1C 240F0001 */   li    $t7, 1
/* 00426C20 2499001F */  addiu $t9, $a0, 0x1f
/* 00426C24 032F1004 */  sllv  $v0, $t7, $t9
/* 00426C28 00627026 */  xor   $t6, $v1, $v0
/* 00426C2C 1000004D */  b     .L00426D64
/* 00426C30 01C21823 */   subu  $v1, $t6, $v0
.L00426C34:
/* 00426C34 920D0001 */  lbu   $t5, 1($s0)
/* 00426C38 A14D0001 */  sb    $t5, 1($t2)
/* 00426C3C 10000049 */  b     .L00426D64
/* 00426C40 92050010 */   lbu   $a1, 0x10($s0)
.L00426C44:
/* 00426C44 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00426C48 8F868044 */  lw    $a2, %got(RO_1000B07E)($gp)
/* 00426C4C 01602025 */  move  $a0, $t3
/* 00426C50 240508DF */  li    $a1, 2271
/* 00426C54 2407000A */  li    $a3, 10
/* 00426C58 AFA30058 */  sw    $v1, 0x58($sp)
/* 00426C5C AFAA0024 */  sw    $t2, 0x24($sp)
/* 00426C60 0320F809 */  jalr  $t9
/* 00426C64 24C6B07E */   addiu $a2, %lo(RO_1000B07E) # addiu $a2, $a2, -0x4f82
/* 00426C68 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00426C6C 8FA30058 */  lw    $v1, 0x58($sp)
/* 00426C70 8FAA0024 */  lw    $t2, 0x24($sp)
/* 00426C74 240B0001 */  li    $t3, 1
/* 00426C78 1000003A */  b     .L00426D64
/* 00426C7C 92050010 */   lbu   $a1, 0x10($s0)
.L00426C80:
/* 00426C80 2C410038 */  sltiu $at, $v0, 0x38
/* 00426C84 14200017 */  bnez  $at, .L00426CE4
/* 00426C88 2C410063 */   sltiu $at, $v0, 0x63
/* 00426C8C 14200008 */  bnez  $at, .L00426CB0
/* 00426C90 2458FFA2 */   addiu $t8, $v0, -0x5e
/* 00426C94 24010072 */  li    $at, 114
/* 00426C98 10410032 */  beq   $v0, $at, .L00426D64
/* 00426C9C 24010076 */   li    $at, 118
/* 00426CA0 1041FF92 */  beq   $v0, $at, .L00426AEC
/* 00426CA4 8FAF0050 */   lw    $t7, 0x50($sp)
/* 00426CA8 1000FFE6 */  b     .L00426C44
/* 00426CAC 00000000 */   nop   
.L00426CB0:
/* 00426CB0 24010050 */  li    $at, 80
/* 00426CB4 5041FF95 */  beql  $v0, $at, .L00426B0C
/* 00426CB8 914E0000 */   lbu   $t6, ($t2)
/* 00426CBC 2F010005 */  sltiu $at, $t8, 5
/* 00426CC0 1020FFE0 */  beqz  $at, .L00426C44
/* 00426CC4 00000000 */   nop   
/* 00426CC8 8F818044 */  lw    $at, %got(jtbl_1000B1B4)($gp)
/* 00426CCC 0018C080 */  sll   $t8, $t8, 2
/* 00426CD0 00380821 */  addu  $at, $at, $t8
/* 00426CD4 8C38B1B4 */  lw    $t8, %lo(jtbl_1000B1B4)($at)
/* 00426CD8 031CC021 */  addu  $t8, $t8, $gp
/* 00426CDC 03000008 */  jr    $t8
/* 00426CE0 00000000 */   nop   
.L00426CE4:
/* 00426CE4 2C41000E */  sltiu $at, $v0, 0xe
/* 00426CE8 1420000D */  bnez  $at, .L00426D20
/* 00426CEC 244FFFE8 */   addiu $t7, $v0, -0x18
/* 00426CF0 2C41001B */  sltiu $at, $v0, 0x1b
/* 00426CF4 10200016 */  beqz  $at, .L00426D50
/* 00426CF8 2DE10003 */   sltiu $at, $t7, 3
/* 00426CFC 1020FFD1 */  beqz  $at, .L00426C44
/* 00426D00 00000000 */   nop   
/* 00426D04 8F818044 */  lw    $at, %got(jtbl_1000B1A8)($gp)
/* 00426D08 000F7880 */  sll   $t7, $t7, 2
/* 00426D0C 002F0821 */  addu  $at, $at, $t7
/* 00426D10 8C2FB1A8 */  lw    $t7, %lo(jtbl_1000B1A8)($at)
/* 00426D14 01FC7821 */  addu  $t7, $t7, $gp
/* 00426D18 01E00008 */  jr    $t7
/* 00426D1C 00000000 */   nop   
.L00426D20:
/* 00426D20 1040FF5A */  beqz  $v0, .L00426A8C
/* 00426D24 2459FFF4 */   addiu $t9, $v0, -0xc
/* 00426D28 2F210002 */  sltiu $at, $t9, 2
/* 00426D2C 1020FFC5 */  beqz  $at, .L00426C44
/* 00426D30 00000000 */   nop   
/* 00426D34 8F818044 */  lw    $at, %got(jtbl_1000B1A0)($gp)
/* 00426D38 0019C880 */  sll   $t9, $t9, 2
/* 00426D3C 00390821 */  addu  $at, $at, $t9
/* 00426D40 8C39B1A0 */  lw    $t9, %lo(jtbl_1000B1A0)($at)
/* 00426D44 033CC821 */  addu  $t9, $t9, $gp
/* 00426D48 03200008 */  jr    $t9
/* 00426D4C 00000000 */   nop   
.L00426D50:
/* 00426D50 24010037 */  li    $at, 55
/* 00426D54 1041FF7F */  beq   $v0, $at, .L00426B54
/* 00426D58 8FAF0050 */   lw    $t7, 0x50($sp)
/* 00426D5C 1000FFB9 */  b     .L00426C44
/* 00426D60 00000000 */   nop   
.L00426D64:
/* 00426D64 24010018 */  li    $at, 24
.L00426D68:
/* 00426D68 50A1001B */  beql  $a1, $at, .L00426DD8
/* 00426D6C 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00426D70 914E0000 */  lbu   $t6, ($t2)
/* 00426D74 24010050 */  li    $at, 80
/* 00426D78 156E000C */  bne   $t3, $t6, .L00426DAC
/* 00426D7C 00000000 */   nop   
/* 00426D80 14A10008 */  bne   $a1, $at, .L00426DA4
/* 00426D84 24040002 */   li    $a0, 2
/* 00426D88 240D0006 */  li    $t5, 6
/* 00426D8C 24180004 */  li    $t8, 4
/* 00426D90 A1440000 */  sb    $a0, ($t2)
/* 00426D94 A14D0001 */  sb    $t5, 1($t2)
/* 00426D98 AD430010 */  sw    $v1, 0x10($t2)
/* 00426D9C 1000000D */  b     .L00426DD4
/* 00426DA0 AD580018 */   sw    $t8, 0x18($t2)
.L00426DA4:
/* 00426DA4 1000000B */  b     .L00426DD4
/* 00426DA8 AD430010 */   sw    $v1, 0x10($t2)
.L00426DAC:
/* 00426DAC 10000009 */  b     .L00426DD4
/* 00426DB0 AD430010 */   sw    $v1, 0x10($t2)
.L00426DB4:
/* 00426DB4 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00426DB8 8F868044 */  lw    $a2, %got(RO_1000B074)($gp)
/* 00426DBC 24040001 */  li    $a0, 1
/* 00426DC0 240507B4 */  li    $a1, 1972
/* 00426DC4 2407000A */  li    $a3, 10
/* 00426DC8 0320F809 */  jalr  $t9
/* 00426DCC 24C6B074 */   addiu $a2, %lo(RO_1000B074) # addiu $a2, $a2, -0x4f8c
/* 00426DD0 8FBC0018 */  lw    $gp, 0x18($sp)
.L00426DD4:
/* 00426DD4 8FBF001C */  lw    $ra, 0x1c($sp)
.L00426DD8:
/* 00426DD8 8FB00014 */  lw    $s0, 0x14($sp)
/* 00426DDC 27BD0068 */  addiu $sp, $sp, 0x68
/* 00426DE0 03E00008 */  jr    $ra
/* 00426DE4 00000000 */   nop   

    .type func_00426DE8, @function
func_00426DE8:
    # 00426FA4 func_00426FA4
/* 00426DE8 3C1C0FBF */  .cpload $t9
/* 00426DEC 279C34A8 */  
/* 00426DF0 0399E021 */  
/* 00426DF4 8F9988C8 */  lw    $t9, %call16(alloc_mark)($gp)
/* 00426DF8 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 00426DFC AFBF0024 */  sw    $ra, 0x24($sp)
/* 00426E00 AFA40040 */  sw    $a0, 0x40($sp)
/* 00426E04 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00426E08 AFA2003C */  sw    $v0, 0x3c($sp)
/* 00426E0C 0320F809 */  jalr  $t9
/* 00426E10 8F848954 */   lw     $a0, %got(perm_heap)($gp)
/* 00426E14 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00426E18 AFA20034 */  sw    $v0, 0x34($sp)
/* 00426E1C 27A20040 */  addiu $v0, $sp, 0x40
/* 00426E20 8F99801C */  lw    $t9, %got(func_00425618)($gp)
/* 00426E24 8FA40040 */  lw    $a0, 0x40($sp)
/* 00426E28 AFA00038 */  sw    $zero, 0x38($sp)
/* 00426E2C 27395618 */  addiu $t9, %lo(func_00425618) # addiu $t9, $t9, 0x5618
/* 00426E30 0320F809 */  jalr  $t9
/* 00426E34 00000000 */   nop   
/* 00426E38 8FA30038 */  lw    $v1, 0x38($sp)
/* 00426E3C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00426E40 24040001 */  li    $a0, 1
/* 00426E44 90620000 */  lbu   $v0, ($v1)
/* 00426E48 2405091D */  li    $a1, 2333
/* 00426E4C 244EFFFF */  addiu $t6, $v0, -1
/* 00426E50 2DC10004 */  sltiu $at, $t6, 4
/* 00426E54 10200043 */  beqz  $at, .L00426F64
/* 00426E58 00000000 */   nop   
/* 00426E5C 8F818044 */  lw    $at, %got(jtbl_1000B1F4)($gp)
/* 00426E60 000E7080 */  sll   $t6, $t6, 2
/* 00426E64 002E0821 */  addu  $at, $at, $t6
/* 00426E68 8C2EB1F4 */  lw    $t6, %lo(jtbl_1000B1F4)($at)
/* 00426E6C 01DC7021 */  addu  $t6, $t6, $gp
/* 00426E70 01C00008 */  jr    $t6
/* 00426E74 00000000 */   nop   
.L00426E78:
/* 00426E78 8F998294 */  lw    $t9, %call16(genloadaddr)($gp)
/* 00426E7C 9065001E */  lbu   $a1, 0x1e($v1)
/* 00426E80 8C66001C */  lw    $a2, 0x1c($v1)
/* 00426E84 8C6F0018 */  lw    $t7, 0x18($v1)
/* 00426E88 8C780014 */  lw    $t8, 0x14($v1)
/* 00426E8C 24040047 */  li    $a0, 71
/* 00426E90 8C670010 */  lw    $a3, 0x10($v1)
/* 00426E94 30A50007 */  andi  $a1, $a1, 7
/* 00426E98 000632C2 */  srl   $a2, $a2, 0xb
/* 00426E9C AFAF0010 */  sw    $t7, 0x10($sp)
/* 00426EA0 0320F809 */  jalr  $t9
/* 00426EA4 AFB80014 */   sw    $t8, 0x14($sp)
/* 00426EA8 10000034 */  b     .L00426F7C
/* 00426EAC 8FBC0020 */   lw    $gp, 0x20($sp)
.L00426EB0:
/* 00426EB0 8FB90040 */  lw    $t9, 0x40($sp)
/* 00426EB4 3C01000C */  lui   $at, 0xc
/* 00426EB8 240F0001 */  li    $t7, 1
/* 00426EBC 93240001 */  lbu   $a0, 1($t9)
/* 00426EC0 2C880020 */  sltiu $t0, $a0, 0x20
/* 00426EC4 00084823 */  negu  $t1, $t0
/* 00426EC8 01215024 */  and   $t2, $t1, $at
/* 00426ECC 008A5804 */  sllv  $t3, $t2, $a0
/* 00426ED0 0561000D */  bgez  $t3, .L00426F08
/* 00426ED4 24090001 */   li    $t1, 1
/* 00426ED8 8F998298 */  lw    $t9, %call16(genloadnum)($gp)
/* 00426EDC 8C660010 */  lw    $a2, 0x10($v1)
/* 00426EE0 8C670014 */  lw    $a3, 0x14($v1)
/* 00426EE4 8C6E0018 */  lw    $t6, 0x18($v1)
/* 00426EE8 90640001 */  lbu   $a0, 1($v1)
/* 00426EEC AFAF0014 */  sw    $t7, 0x14($sp)
/* 00426EF0 AFA60008 */  sw    $a2, 8($sp)
/* 00426EF4 AFA7000C */  sw    $a3, 0xc($sp)
/* 00426EF8 0320F809 */  jalr  $t9
/* 00426EFC AFAE0010 */   sw    $t6, 0x10($sp)
/* 00426F00 1000001E */  b     .L00426F7C
/* 00426F04 8FBC0020 */   lw    $gp, 0x20($sp)
.L00426F08:
/* 00426F08 8C660010 */  lw    $a2, 0x10($v1)
/* 00426F0C 8F998298 */  lw    $t9, %call16(genloadnum)($gp)
/* 00426F10 8C680018 */  lw    $t0, 0x18($v1)
/* 00426F14 AFA60008 */  sw    $a2, 8($sp)
/* 00426F18 8C670014 */  lw    $a3, 0x14($v1)
/* 00426F1C AFA90014 */  sw    $t1, 0x14($sp)
/* 00426F20 AFA80010 */  sw    $t0, 0x10($sp)
/* 00426F24 0320F809 */  jalr  $t9
/* 00426F28 AFA7000C */   sw    $a3, 0xc($sp)
/* 00426F2C 10000013 */  b     .L00426F7C
/* 00426F30 8FBC0020 */   lw    $gp, 0x20($sp)
.L00426F34:
/* 00426F34 8F99861C */  lw    $t9, %call16(dbgerror)($gp)
/* 00426F38 24040210 */  li    $a0, 528
/* 00426F3C 0320F809 */  jalr  $t9
/* 00426F40 00000000 */   nop   
/* 00426F44 1000000D */  b     .L00426F7C
/* 00426F48 8FBC0020 */   lw    $gp, 0x20($sp)
.L00426F4C:
/* 00426F4C 8F99861C */  lw    $t9, %call16(dbgerror)($gp)
/* 00426F50 24040211 */  li    $a0, 529
/* 00426F54 0320F809 */  jalr  $t9
/* 00426F58 00000000 */   nop   
/* 00426F5C 10000007 */  b     .L00426F7C
/* 00426F60 8FBC0020 */   lw    $gp, 0x20($sp)
.L00426F64:
/* 00426F64 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00426F68 8F868044 */  lw    $a2, %got(RO_1000B1E8)($gp)
/* 00426F6C 2407000A */  li    $a3, 10
/* 00426F70 0320F809 */  jalr  $t9
/* 00426F74 24C6B1E8 */   addiu $a2, %lo(RO_1000B1E8) # addiu $a2, $a2, -0x4e18
/* 00426F78 8FBC0020 */  lw    $gp, 0x20($sp)
.L00426F7C:
/* 00426F7C 8F9988CC */  lw    $t9, %call16(alloc_release)($gp)
/* 00426F80 8F848954 */  lw     $a0, %got(perm_heap)($gp)
/* 00426F84 8FA50034 */  lw    $a1, 0x34($sp)
/* 00426F88 0320F809 */  jalr  $t9
/* 00426F8C 00000000 */   nop   
/* 00426F90 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00426F94 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00426F98 27BD0040 */  addiu $sp, $sp, 0x40
/* 00426F9C 03E00008 */  jr    $ra
/* 00426FA0 00000000 */   nop   

    .type func_00426FA4, @function
func_00426FA4:
    # 00426FA4 func_00426FA4
    # 0042933C func_0042933C
    # 0042AADC func_0042AADC
/* 00426FA4 3C1C0FBF */  .cpload $t9
/* 00426FA8 279C32EC */  
/* 00426FAC 0399E021 */  
/* 00426FB0 27BDFF80 */  addiu $sp, $sp, -0x80
/* 00426FB4 AFBF002C */  sw    $ra, 0x2c($sp)
/* 00426FB8 AFBC0028 */  sw    $gp, 0x28($sp)
/* 00426FBC AFB10024 */  sw    $s1, 0x24($sp)
/* 00426FC0 AFB00020 */  sw    $s0, 0x20($sp)
/* 00426FC4 AFA50084 */  sw    $a1, 0x84($sp)
/* 00426FC8 AFA7008C */  sw    $a3, 0x8c($sp)
/* 00426FCC AFA2007C */  sw    $v0, 0x7c($sp)
/* 00426FD0 90830000 */  lbu   $v1, ($a0)
/* 00426FD4 00C08025 */  move  $s0, $a2
/* 00426FD8 00808825 */  move  $s1, $a0
/* 00426FDC 246EFFFF */  addiu $t6, $v1, -1
/* 00426FE0 2DC10008 */  sltiu $at, $t6, 8
/* 00426FE4 1020076F */  beqz  $at, .L00428DA4
/* 00426FE8 00000000 */   nop   
/* 00426FEC 8F818044 */  lw    $at, %got(jtbl_1000B210)($gp)
/* 00426FF0 000E7080 */  sll   $t6, $t6, 2
/* 00426FF4 002E0821 */  addu  $at, $at, $t6
/* 00426FF8 8C2EB210 */  lw    $t6, %lo(jtbl_1000B210)($at)
/* 00426FFC 01DC7021 */  addu  $t6, $t6, $gp
/* 00427000 01C00008 */  jr    $t6
/* 00427004 00000000 */   nop   
.L00427008:
/* 00427008 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 0042700C 8FAF007C */  lw    $t7, 0x7c($sp)
/* 00427010 02202025 */  move  $a0, $s1
/* 00427014 27A60078 */  addiu $a2, $sp, 0x78
/* 00427018 24070001 */  li    $a3, 1
/* 0042701C 0320F809 */  jalr  $t9
/* 00427020 8DE5FFF4 */   lw    $a1, -0xc($t7)
/* 00427024 10400017 */  beqz  $v0, .L00427084
/* 00427028 8FBC0028 */   lw    $gp, 0x28($sp)
/* 0042702C 12000007 */  beqz  $s0, .L0042704C
/* 00427030 00000000 */   nop   
/* 00427034 8F998288 */  lw    $t9, %call16(base_in_reg)($gp)
/* 00427038 8FA40078 */  lw    $a0, 0x78($sp)
/* 0042703C 02202825 */  move  $a1, $s1
/* 00427040 0320F809 */  jalr  $t9
/* 00427044 02003025 */   move  $a2, $s0
/* 00427048 8FBC0028 */  lw    $gp, 0x28($sp)
.L0042704C:
/* 0042704C 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 00427050 00002025 */  move  $a0, $zero
/* 00427054 0320F809 */  jalr  $t9
/* 00427058 00000000 */   nop   
/* 0042705C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00427060 24040052 */  li    $a0, 82
/* 00427064 8FA50078 */  lw    $a1, 0x78($sp)
/* 00427068 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 0042706C 00003025 */  move  $a2, $zero
/* 00427070 00403825 */  move  $a3, $v0
/* 00427074 0320F809 */  jalr  $t9
/* 00427078 00000000 */   nop   
/* 0042707C 10000751 */  b     .L00428DC4
/* 00427080 8FBC0028 */   lw    $gp, 0x28($sp)
.L00427084:
/* 00427084 8E390014 */  lw    $t9, 0x14($s1)
/* 00427088 9225001E */  lbu   $a1, 0x1e($s1)
/* 0042708C 8E26001C */  lw    $a2, 0x1c($s1)
/* 00427090 AFB90014 */  sw    $t9, 0x14($sp)
/* 00427094 8F998294 */  lw    $t9, %call16(genloadaddr)($gp)
/* 00427098 8E380018 */  lw    $t8, 0x18($s1)
/* 0042709C 24040047 */  li    $a0, 71
/* 004270A0 8E270010 */  lw    $a3, 0x10($s1)
/* 004270A4 30A50007 */  andi  $a1, $a1, 7
/* 004270A8 000632C2 */  srl   $a2, $a2, 0xb
/* 004270AC 0320F809 */  jalr  $t9
/* 004270B0 AFB80010 */   sw    $t8, 0x10($sp)
/* 004270B4 10000743 */  b     .L00428DC4
/* 004270B8 8FBC0028 */   lw    $gp, 0x28($sp)
.L004270BC:
/* 004270BC 26300010 */  addiu $s0, $s1, 0x10
/* 004270C0 8E060000 */  lw    $a2, ($s0)
/* 004270C4 8F9986C0 */  lw    $t9, %call16(constinreg)($gp)
/* 004270C8 92240001 */  lbu   $a0, 1($s1)
/* 004270CC AFA60008 */  sw    $a2, 8($sp)
/* 004270D0 8E070004 */  lw    $a3, 4($s0)
/* 004270D4 AFA00010 */  sw    $zero, 0x10($sp)
/* 004270D8 0320F809 */  jalr  $t9
/* 004270DC AFA7000C */   sw    $a3, 0xc($sp)
/* 004270E0 10400018 */  beqz  $v0, .L00427144
/* 004270E4 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004270E8 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 004270EC 8FAA007C */  lw    $t2, 0x7c($sp)
/* 004270F0 02202025 */  move  $a0, $s1
/* 004270F4 27A60078 */  addiu $a2, $sp, 0x78
/* 004270F8 24070001 */  li    $a3, 1
/* 004270FC 0320F809 */  jalr  $t9
/* 00427100 8D45FFF4 */   lw    $a1, -0xc($t2)
/* 00427104 1040000F */  beqz  $v0, .L00427144
/* 00427108 8FBC0028 */   lw    $gp, 0x28($sp)
/* 0042710C 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 00427110 92240001 */  lbu   $a0, 1($s1)
/* 00427114 0320F809 */  jalr  $t9
/* 00427118 00000000 */   nop   
/* 0042711C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00427120 24040052 */  li    $a0, 82
/* 00427124 8FA50078 */  lw    $a1, 0x78($sp)
/* 00427128 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 0042712C 92260001 */  lbu   $a2, 1($s1)
/* 00427130 00403825 */  move  $a3, $v0
/* 00427134 0320F809 */  jalr  $t9
/* 00427138 00000000 */   nop   
/* 0042713C 10000721 */  b     .L00428DC4
/* 00427140 8FBC0028 */   lw    $gp, 0x28($sp)
.L00427144:
/* 00427144 8E060000 */  lw    $a2, ($s0)
/* 00427148 8F998298 */  lw    $t9, %call16(genloadnum)($gp)
/* 0042714C 8E2D0018 */  lw    $t5, 0x18($s1)
/* 00427150 AFA60008 */  sw    $a2, 8($sp)
/* 00427154 8E070004 */  lw    $a3, 4($s0)
/* 00427158 240E0001 */  li    $t6, 1
/* 0042715C AFAE0014 */  sw    $t6, 0x14($sp)
/* 00427160 92240001 */  lbu   $a0, 1($s1)
/* 00427164 AFAD0010 */  sw    $t5, 0x10($sp)
/* 00427168 0320F809 */  jalr  $t9
/* 0042716C AFA7000C */   sw    $a3, 0xc($sp)
/* 00427170 10000714 */  b     .L00428DC4
/* 00427174 8FBC0028 */   lw    $gp, 0x28($sp)
.L00427178:
/* 00427178 8F99829C */  lw    $t9, %call16(genloadrnum)($gp)
/* 0042717C 92240001 */  lbu   $a0, 1($s1)
/* 00427180 96250010 */  lhu   $a1, 0x10($s1)
/* 00427184 8E260018 */  lw    $a2, 0x18($s1)
/* 00427188 0320F809 */  jalr  $t9
/* 0042718C 24070001 */   li    $a3, 1
/* 00427190 1000070C */  b     .L00428DC4
/* 00427194 8FBC0028 */   lw    $gp, 0x28($sp)
.L00427198:
/* 00427198 8FAF007C */  lw    $t7, 0x7c($sp)
/* 0042719C 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004271A0 96240002 */  lhu   $a0, 2($s1)
/* 004271A4 8DE2FFF4 */  lw    $v0, -0xc($t7)
/* 004271A8 2445016C */  addiu $a1, $v0, 0x16c
/* 004271AC 0320F809 */  jalr  $t9
/* 004271B0 AFA2003C */   sw    $v0, 0x3c($sp)
/* 004271B4 14400010 */  bnez  $v0, .L004271F8
/* 004271B8 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004271BC 8F99828C */  lw    $t9, %call16(varlodstr)($gp)
/* 004271C0 24040052 */  li    $a0, 82
/* 004271C4 02202825 */  move  $a1, $s1
/* 004271C8 8FA6003C */  lw    $a2, 0x3c($sp)
/* 004271CC 0320F809 */  jalr  $t9
/* 004271D0 02003825 */   move  $a3, $s0
/* 004271D4 104006FB */  beqz  $v0, .L00428DC4
/* 004271D8 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004271DC 8F998264 */  lw    $t9, %call16(igen3)($gp)
/* 004271E0 24040052 */  li    $a0, 82
/* 004271E4 02202825 */  move  $a1, $s1
/* 004271E8 0320F809 */  jalr  $t9
/* 004271EC 00003025 */   move  $a2, $zero
/* 004271F0 100006F4 */  b     .L00428DC4
/* 004271F4 8FBC0028 */   lw    $gp, 0x28($sp)
.L004271F8:
/* 004271F8 8F99801C */  lw    $t9, %got(func_00426DE8)($gp)
/* 004271FC 02202025 */  move  $a0, $s1
/* 00427200 8FA2007C */  lw    $v0, 0x7c($sp)
/* 00427204 27396DE8 */  addiu $t9, %lo(func_00426DE8) # addiu $t9, $t9, 0x6de8
/* 00427208 0320F809 */  jalr  $t9
/* 0042720C 00000000 */   nop   
/* 00427210 100006EC */  b     .L00428DC4
/* 00427214 8FBC0028 */   lw    $gp, 0x28($sp)
.L00427218:
/* 00427218 8FB8007C */  lw    $t8, 0x7c($sp)
/* 0042721C 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00427220 96240002 */  lhu   $a0, 2($s1)
/* 00427224 8F02FFF4 */  lw    $v0, -0xc($t8)
/* 00427228 24450164 */  addiu $a1, $v0, 0x164
/* 0042722C 0320F809 */  jalr  $t9
/* 00427230 AFA2003C */   sw    $v0, 0x3c($sp)
/* 00427234 14400024 */  bnez  $v0, .L004272C8
/* 00427238 8FBC0028 */   lw    $gp, 0x28($sp)
/* 0042723C 93B90087 */  lbu   $t9, 0x87($sp)
/* 00427240 02202025 */  move  $a0, $s1
/* 00427244 13200004 */  beqz  $t9, .L00427258
/* 00427248 00000000 */   nop   
/* 0042724C 8F818A3C */  lw     $at, %got(noop)($gp)
/* 00427250 100006DC */  b     .L00428DC4
/* 00427254 AC200000 */   sw    $zero, ($at)
.L00427258:
/* 00427258 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 0042725C 8FA5003C */  lw    $a1, 0x3c($sp)
/* 00427260 27A60078 */  addiu $a2, $sp, 0x78
/* 00427264 0320F809 */  jalr  $t9
/* 00427268 24070001 */   li    $a3, 1
/* 0042726C 1040000F */  beqz  $v0, .L004272AC
/* 00427270 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00427274 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 00427278 92240001 */  lbu   $a0, 1($s1)
/* 0042727C 0320F809 */  jalr  $t9
/* 00427280 00000000 */   nop   
/* 00427284 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00427288 24040052 */  li    $a0, 82
/* 0042728C 8FA50078 */  lw    $a1, 0x78($sp)
/* 00427290 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00427294 92260001 */  lbu   $a2, 1($s1)
/* 00427298 00403825 */  move  $a3, $v0
/* 0042729C 0320F809 */  jalr  $t9
/* 004272A0 00000000 */   nop   
/* 004272A4 100006C7 */  b     .L00428DC4
/* 004272A8 8FBC0028 */   lw    $gp, 0x28($sp)
.L004272AC:
/* 004272AC 8F998290 */  lw    $t9, %call16(spilltemplodstr)($gp)
/* 004272B0 24040052 */  li    $a0, 82
/* 004272B4 92250001 */  lbu   $a1, 1($s1)
/* 004272B8 0320F809 */  jalr  $t9
/* 004272BC 8E260024 */   lw    $a2, 0x24($s1)
/* 004272C0 100006C0 */  b     .L00428DC4
/* 004272C4 8FBC0028 */   lw    $gp, 0x28($sp)
.L004272C8:
/* 004272C8 93A80087 */  lbu   $t0, 0x87($sp)
/* 004272CC 15000025 */  bnez  $t0, .L00427364
/* 004272D0 00000000 */   nop   
/* 004272D4 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004272D8 8FA5003C */  lw    $a1, 0x3c($sp)
/* 004272DC 96240002 */  lhu   $a0, 2($s1)
/* 004272E0 0320F809 */  jalr  $t9
/* 004272E4 24A50154 */   addiu $a1, $a1, 0x154
/* 004272E8 1040001E */  beqz  $v0, .L00427364
/* 004272EC 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004272F0 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 004272F4 02202025 */  move  $a0, $s1
/* 004272F8 8FA5003C */  lw    $a1, 0x3c($sp)
/* 004272FC 27A60078 */  addiu $a2, $sp, 0x78
/* 00427300 0320F809 */  jalr  $t9
/* 00427304 24070001 */   li    $a3, 1
/* 00427308 1040000F */  beqz  $v0, .L00427348
/* 0042730C 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00427310 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 00427314 92240001 */  lbu   $a0, 1($s1)
/* 00427318 0320F809 */  jalr  $t9
/* 0042731C 00000000 */   nop   
/* 00427320 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00427324 24040052 */  li    $a0, 82
/* 00427328 8FA50078 */  lw    $a1, 0x78($sp)
/* 0042732C 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00427330 92260001 */  lbu   $a2, 1($s1)
/* 00427334 00403825 */  move  $a3, $v0
/* 00427338 0320F809 */  jalr  $t9
/* 0042733C 00000000 */   nop   
/* 00427340 100006A0 */  b     .L00428DC4
/* 00427344 8FBC0028 */   lw    $gp, 0x28($sp)
.L00427348:
/* 00427348 8F998290 */  lw    $t9, %call16(spilltemplodstr)($gp)
/* 0042734C 24040052 */  li    $a0, 82
/* 00427350 92250001 */  lbu   $a1, 1($s1)
/* 00427354 0320F809 */  jalr  $t9
/* 00427358 8E260024 */   lw    $a2, 0x24($s1)
/* 0042735C 10000699 */  b     .L00428DC4
/* 00427360 8FBC0028 */   lw    $gp, 0x28($sp)
.L00427364:
/* 00427364 8F99801C */  lw    $t9, %got(func_00426FA4)($gp)
/* 00427368 8E240020 */  lw    $a0, 0x20($s1)
/* 0042736C 00002825 */  move  $a1, $zero
/* 00427370 27396FA4 */  addiu $t9, %lo(func_00426FA4) # addiu $t9, $t9, 0x6fa4
/* 00427374 00003025 */  move  $a2, $zero
/* 00427378 00003825 */  move  $a3, $zero
/* 0042737C 0320F809 */  jalr  $t9
/* 00427380 8FA2007C */   lw    $v0, 0x7c($sp)
/* 00427384 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00427388 9225001E */  lbu   $a1, 0x1e($s1)
/* 0042738C 8E26001C */  lw    $a2, 0x1c($s1)
/* 00427390 8F998294 */  lw    $t9, %call16(genloadaddr)($gp)
/* 00427394 8E290018 */  lw    $t1, 0x18($s1)
/* 00427398 8E2A0014 */  lw    $t2, 0x14($s1)
/* 0042739C 24040032 */  li    $a0, 50
/* 004273A0 8E270010 */  lw    $a3, 0x10($s1)
/* 004273A4 30A50007 */  andi  $a1, $a1, 7
/* 004273A8 000632C2 */  srl   $a2, $a2, 0xb
/* 004273AC AFA90010 */  sw    $t1, 0x10($sp)
/* 004273B0 0320F809 */  jalr  $t9
/* 004273B4 AFAA0014 */   sw    $t2, 0x14($sp)
/* 004273B8 93AB0087 */  lbu   $t3, 0x87($sp)
/* 004273BC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004273C0 02202025 */  move  $a0, $s1
/* 004273C4 1160067F */  beqz  $t3, .L00428DC4
/* 004273C8 8FAC007C */   lw    $t4, 0x7c($sp)
/* 004273CC 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 004273D0 8D85FFF4 */  lw    $a1, -0xc($t4)
/* 004273D4 27A60078 */  addiu $a2, $sp, 0x78
/* 004273D8 0320F809 */  jalr  $t9
/* 004273DC 00003825 */   move  $a3, $zero
/* 004273E0 1040000F */  beqz  $v0, .L00427420
/* 004273E4 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004273E8 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 004273EC 92240001 */  lbu   $a0, 1($s1)
/* 004273F0 0320F809 */  jalr  $t9
/* 004273F4 00000000 */   nop   
/* 004273F8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004273FC 2404007B */  li    $a0, 123
/* 00427400 8FA50078 */  lw    $a1, 0x78($sp)
/* 00427404 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00427408 92260001 */  lbu   $a2, 1($s1)
/* 0042740C 00403825 */  move  $a3, $v0
/* 00427410 0320F809 */  jalr  $t9
/* 00427414 00000000 */   nop   
/* 00427418 1000066A */  b     .L00428DC4
/* 0042741C 8FBC0028 */   lw    $gp, 0x28($sp)
.L00427420:
/* 00427420 8F998290 */  lw    $t9, %call16(spilltemplodstr)($gp)
/* 00427424 2404007B */  li    $a0, 123
/* 00427428 92250001 */  lbu   $a1, 1($s1)
/* 0042742C 0320F809 */  jalr  $t9
/* 00427430 8E260024 */   lw    $a2, 0x24($s1)
/* 00427434 10000663 */  b     .L00428DC4
/* 00427438 8FBC0028 */   lw    $gp, 0x28($sp)
.L0042743C:
/* 0042743C 8FAD007C */  lw    $t5, 0x7c($sp)
/* 00427440 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00427444 96240002 */  lhu   $a0, 2($s1)
/* 00427448 8DA2FFF4 */  lw    $v0, -0xc($t5)
/* 0042744C 24450164 */  addiu $a1, $v0, 0x164
/* 00427450 0320F809 */  jalr  $t9
/* 00427454 AFA2003C */   sw    $v0, 0x3c($sp)
/* 00427458 14400024 */  bnez  $v0, .L004274EC
/* 0042745C 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00427460 93AE0087 */  lbu   $t6, 0x87($sp)
/* 00427464 02202025 */  move  $a0, $s1
/* 00427468 11C00004 */  beqz  $t6, .L0042747C
/* 0042746C 00000000 */   nop   
/* 00427470 8F818A3C */  lw     $at, %got(noop)($gp)
/* 00427474 10000653 */  b     .L00428DC4
/* 00427478 AC200000 */   sw    $zero, ($at)
.L0042747C:
/* 0042747C 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 00427480 8FA5003C */  lw    $a1, 0x3c($sp)
/* 00427484 27A60078 */  addiu $a2, $sp, 0x78
/* 00427488 0320F809 */  jalr  $t9
/* 0042748C 24070001 */   li    $a3, 1
/* 00427490 1040000F */  beqz  $v0, .L004274D0
/* 00427494 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00427498 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 0042749C 92240001 */  lbu   $a0, 1($s1)
/* 004274A0 0320F809 */  jalr  $t9
/* 004274A4 00000000 */   nop   
/* 004274A8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004274AC 24040052 */  li    $a0, 82
/* 004274B0 8FA50078 */  lw    $a1, 0x78($sp)
/* 004274B4 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 004274B8 92260001 */  lbu   $a2, 1($s1)
/* 004274BC 00403825 */  move  $a3, $v0
/* 004274C0 0320F809 */  jalr  $t9
/* 004274C4 00000000 */   nop   
/* 004274C8 1000063E */  b     .L00428DC4
/* 004274CC 8FBC0028 */   lw    $gp, 0x28($sp)
.L004274D0:
/* 004274D0 8F998290 */  lw    $t9, %call16(spilltemplodstr)($gp)
/* 004274D4 24040052 */  li    $a0, 82
/* 004274D8 92250001 */  lbu   $a1, 1($s1)
/* 004274DC 0320F809 */  jalr  $t9
/* 004274E0 8E260020 */   lw    $a2, 0x20($s1)
/* 004274E4 10000637 */  b     .L00428DC4
/* 004274E8 8FBC0028 */   lw    $gp, 0x28($sp)
.L004274EC:
/* 004274EC 93AF0087 */  lbu   $t7, 0x87($sp)
/* 004274F0 15E00025 */  bnez  $t7, .L00427588
/* 004274F4 00000000 */   nop   
/* 004274F8 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004274FC 8FA5003C */  lw    $a1, 0x3c($sp)
/* 00427500 96240002 */  lhu   $a0, 2($s1)
/* 00427504 0320F809 */  jalr  $t9
/* 00427508 24A50154 */   addiu $a1, $a1, 0x154
/* 0042750C 1040001E */  beqz  $v0, .L00427588
/* 00427510 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00427514 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 00427518 02202025 */  move  $a0, $s1
/* 0042751C 8FA5003C */  lw    $a1, 0x3c($sp)
/* 00427520 27A60078 */  addiu $a2, $sp, 0x78
/* 00427524 0320F809 */  jalr  $t9
/* 00427528 24070001 */   li    $a3, 1
/* 0042752C 1040000F */  beqz  $v0, .L0042756C
/* 00427530 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00427534 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 00427538 92240001 */  lbu   $a0, 1($s1)
/* 0042753C 0320F809 */  jalr  $t9
/* 00427540 00000000 */   nop   
/* 00427544 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00427548 24040052 */  li    $a0, 82
/* 0042754C 8FA50078 */  lw    $a1, 0x78($sp)
/* 00427550 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00427554 92260001 */  lbu   $a2, 1($s1)
/* 00427558 00403825 */  move  $a3, $v0
/* 0042755C 0320F809 */  jalr  $t9
/* 00427560 00000000 */   nop   
/* 00427564 10000617 */  b     .L00428DC4
/* 00427568 8FBC0028 */   lw    $gp, 0x28($sp)
.L0042756C:
/* 0042756C 8F998290 */  lw    $t9, %call16(spilltemplodstr)($gp)
/* 00427570 24040052 */  li    $a0, 82
/* 00427574 92250001 */  lbu   $a1, 1($s1)
/* 00427578 0320F809 */  jalr  $t9
/* 0042757C 8E260020 */   lw    $a2, 0x20($s1)
/* 00427580 10000610 */  b     .L00428DC4
/* 00427584 8FBC0028 */   lw    $gp, 0x28($sp)
.L00427588:
/* 00427588 8F99801C */  lw    $t9, %got(func_00426FA4)($gp)
/* 0042758C 8E24001C */  lw    $a0, 0x1c($s1)
/* 00427590 00002825 */  move  $a1, $zero
/* 00427594 27396FA4 */  addiu $t9, %lo(func_00426FA4) # addiu $t9, $t9, 0x6fa4
/* 00427598 00003025 */  move  $a2, $zero
/* 0042759C 00003825 */  move  $a3, $zero
/* 004275A0 0320F809 */  jalr  $t9
/* 004275A4 8FA2007C */   lw    $v0, 0x7c($sp)
/* 004275A8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004275AC 2404003D */  li    $a0, 61
/* 004275B0 02202825 */  move  $a1, $s1
/* 004275B4 8F998264 */  lw    $t9, %call16(igen3)($gp)
/* 004275B8 00003025 */  move  $a2, $zero
/* 004275BC 0320F809 */  jalr  $t9
/* 004275C0 00000000 */   nop   
/* 004275C4 93B80087 */  lbu   $t8, 0x87($sp)
/* 004275C8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004275CC 530005FE */  beql  $t8, $zero, .L00428DC8
/* 004275D0 8FBF002C */   lw    $ra, 0x2c($sp)
/* 004275D4 8FB9007C */  lw    $t9, 0x7c($sp)
/* 004275D8 02202025 */  move  $a0, $s1
/* 004275DC 27A60078 */  addiu $a2, $sp, 0x78
/* 004275E0 8F25FFF4 */  lw    $a1, -0xc($t9)
/* 004275E4 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 004275E8 00003825 */  move  $a3, $zero
/* 004275EC 0320F809 */  jalr  $t9
/* 004275F0 00000000 */   nop   
/* 004275F4 1040000F */  beqz  $v0, .L00427634
/* 004275F8 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004275FC 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 00427600 92240001 */  lbu   $a0, 1($s1)
/* 00427604 0320F809 */  jalr  $t9
/* 00427608 00000000 */   nop   
/* 0042760C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00427610 2404007B */  li    $a0, 123
/* 00427614 8FA50078 */  lw    $a1, 0x78($sp)
/* 00427618 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 0042761C 92260001 */  lbu   $a2, 1($s1)
/* 00427620 00403825 */  move  $a3, $v0
/* 00427624 0320F809 */  jalr  $t9
/* 00427628 00000000 */   nop   
/* 0042762C 100005E5 */  b     .L00428DC4
/* 00427630 8FBC0028 */   lw    $gp, 0x28($sp)
.L00427634:
/* 00427634 8F998290 */  lw    $t9, %call16(spilltemplodstr)($gp)
/* 00427638 2404007B */  li    $a0, 123
/* 0042763C 92250001 */  lbu   $a1, 1($s1)
/* 00427640 0320F809 */  jalr  $t9
/* 00427644 8E260020 */   lw    $a2, 0x20($s1)
/* 00427648 100005DE */  b     .L00428DC4
/* 0042764C 8FBC0028 */   lw    $gp, 0x28($sp)
.L00427650:
/* 00427650 92220010 */  lbu   $v0, 0x10($s1)
/* 00427654 2443FFE0 */  addiu $v1, $v0, -0x20
/* 00427658 2C680060 */  sltiu $t0, $v1, 0x60
/* 0042765C 11000009 */  beqz  $t0, .L00427684
/* 00427660 00000000 */   nop   
/* 00427664 8F8B8044 */  lw    $t3, %got(D_10010634)($gp)
/* 00427668 00034943 */  sra   $t1, $v1, 5
/* 0042766C 00095080 */  sll   $t2, $t1, 2
/* 00427670 256B0634 */  addiu $t3, %lo(D_10010634) # addiu $t3, $t3, 0x634
/* 00427674 016A6021 */  addu  $t4, $t3, $t2
/* 00427678 8D8D0000 */  lw    $t5, ($t4)
/* 0042767C 006D7004 */  sllv  $t6, $t5, $v1
/* 00427680 29C80000 */  slti  $t0, $t6, 0
.L00427684:
/* 00427684 5100003E */  beql  $t0, $zero, .L00427780
/* 00427688 2C680040 */   sltiu $t0, $v1, 0x40
/* 0042768C 8E240018 */  lw    $a0, 0x18($s1)
/* 00427690 24010004 */  li    $at, 4
/* 00427694 00002825 */  move  $a1, $zero
/* 00427698 90980000 */  lbu   $t8, ($a0)
/* 0042769C 00003025 */  move  $a2, $zero
/* 004276A0 00003825 */  move  $a3, $zero
/* 004276A4 53010006 */  beql  $t8, $at, .L004276C0
/* 004276A8 908B0012 */   lbu   $t3, 0x12($a0)
/* 004276AC 90990001 */  lbu   $t9, 1($a0)
/* 004276B0 8E290014 */  lw    $t1, 0x14($s1)
/* 004276B4 10000004 */  b     .L004276C8
/* 004276B8 A1390001 */   sb    $t9, 1($t1)
/* 004276BC 908B0012 */  lbu   $t3, 0x12($a0)
.L004276C0:
/* 004276C0 8E2A0014 */  lw    $t2, 0x14($s1)
/* 004276C4 A14B0001 */  sb    $t3, 1($t2)
.L004276C8:
/* 004276C8 922C0010 */  lbu   $t4, 0x10($s1)
/* 004276CC 2410003E */  li    $s0, 62
/* 004276D0 160C0008 */  bne   $s0, $t4, .L004276F4
/* 004276D4 00000000 */   nop   
/* 004276D8 8F99801C */  lw    $t9, %got(func_00426FA4)($gp)
/* 004276DC 8E2D0014 */  lw    $t5, 0x14($s1)
/* 004276E0 8FA2007C */  lw    $v0, 0x7c($sp)
/* 004276E4 27396FA4 */  addiu $t9, %lo(func_00426FA4) # addiu $t9, $t9, 0x6fa4
/* 004276E8 0320F809 */  jalr  $t9
/* 004276EC 8DA4001C */   lw    $a0, 0x1c($t5)
/* 004276F0 8FBC0028 */  lw    $gp, 0x28($sp)
.L004276F4:
/* 004276F4 8F99801C */  lw    $t9, %got(func_00426FA4)($gp)
/* 004276F8 8E240018 */  lw    $a0, 0x18($s1)
/* 004276FC 00002825 */  move  $a1, $zero
/* 00427700 27396FA4 */  addiu $t9, %lo(func_00426FA4) # addiu $t9, $t9, 0x6fa4
/* 00427704 00003025 */  move  $a2, $zero
/* 00427708 00003825 */  move  $a3, $zero
/* 0042770C 0320F809 */  jalr  $t9
/* 00427710 8FA2007C */   lw    $v0, 0x7c($sp)
/* 00427714 922E0010 */  lbu   $t6, 0x10($s1)
/* 00427718 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0042771C 2404007B */  li    $a0, 123
/* 00427720 160E0008 */  bne   $s0, $t6, .L00427744
/* 00427724 8FAF007C */   lw    $t7, 0x7c($sp)
/* 00427728 8F998264 */  lw    $t9, %call16(igen3)($gp)
/* 0042772C 2404003E */  li    $a0, 62
/* 00427730 8E250014 */  lw    $a1, 0x14($s1)
/* 00427734 0320F809 */  jalr  $t9
/* 00427738 00003025 */   move  $a2, $zero
/* 0042773C 100005A1 */  b     .L00428DC4
/* 00427740 8FBC0028 */   lw    $gp, 0x28($sp)
.L00427744:
/* 00427744 8F99828C */  lw    $t9, %call16(varlodstr)($gp)
/* 00427748 8E250014 */  lw    $a1, 0x14($s1)
/* 0042774C 8DE6FFF4 */  lw    $a2, -0xc($t7)
/* 00427750 0320F809 */  jalr  $t9
/* 00427754 00003825 */   move  $a3, $zero
/* 00427758 1040059A */  beqz  $v0, .L00428DC4
/* 0042775C 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00427760 8F998264 */  lw    $t9, %call16(igen3)($gp)
/* 00427764 2404007B */  li    $a0, 123
/* 00427768 8E250014 */  lw    $a1, 0x14($s1)
/* 0042776C 0320F809 */  jalr  $t9
/* 00427770 00003025 */   move  $a2, $zero
/* 00427774 10000593 */  b     .L00428DC4
/* 00427778 8FBC0028 */   lw    $gp, 0x28($sp)
/* 0042777C 2C680040 */  sltiu $t0, $v1, 0x40
.L00427780:
/* 00427780 11000009 */  beqz  $t0, .L004277A8
/* 00427784 00000000 */   nop   
/* 00427788 8F898044 */  lw    $t1, %got(D_1001062C)($gp)
/* 0042778C 0003C143 */  sra   $t8, $v1, 5
/* 00427790 0018C880 */  sll   $t9, $t8, 2
/* 00427794 2529062C */  addiu $t1, %lo(D_1001062C) # addiu $t1, $t1, 0x62c
/* 00427798 01395821 */  addu  $t3, $t1, $t9
/* 0042779C 8D6A0000 */  lw    $t2, ($t3)
/* 004277A0 006A6004 */  sllv  $t4, $t2, $v1
/* 004277A4 29880000 */  slti  $t0, $t4, 0
.L004277A8:
/* 004277A8 11000078 */  beqz  $t0, .L0042798C
/* 004277AC 2443FF80 */   addiu $v1, $v0, -0x80
/* 004277B0 8E240014 */  lw    $a0, 0x14($s1)
/* 004277B4 24010001 */  li    $at, 1
/* 004277B8 908E0000 */  lbu   $t6, ($a0)
/* 004277BC 15C1003C */  bne   $t6, $at, .L004278B0
/* 004277C0 2401003F */   li    $at, 63
/* 004277C4 1441003A */  bne   $v0, $at, .L004278B0
/* 004277C8 8FAF007C */   lw    $t7, 0x7c($sp)
/* 004277CC 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 004277D0 8DE5FFF4 */  lw    $a1, -0xc($t7)
/* 004277D4 27A60078 */  addiu $a2, $sp, 0x78
/* 004277D8 0320F809 */  jalr  $t9
/* 004277DC 24070001 */   li    $a3, 1
/* 004277E0 14400033 */  bnez  $v0, .L004278B0
/* 004277E4 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004277E8 8F99801C */  lw    $t9, %got(func_00426FA4)($gp)
/* 004277EC 8E240018 */  lw    $a0, 0x18($s1)
/* 004277F0 00002825 */  move  $a1, $zero
/* 004277F4 27396FA4 */  addiu $t9, %lo(func_00426FA4) # addiu $t9, $t9, 0x6fa4
/* 004277F8 00003025 */  move  $a2, $zero
/* 004277FC 00003825 */  move  $a3, $zero
/* 00427800 0320F809 */  jalr  $t9
/* 00427804 8FA2007C */   lw    $v0, 0x7c($sp)
/* 00427808 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0042780C 2418007B */  li    $t8, 123
/* 00427810 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00427814 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00427818 A0980000 */  sb    $t8, ($a0)
/* 0042781C 8E290018 */  lw    $t1, 0x18($s1)
/* 00427820 90820001 */  lbu   $v0, 1($a0)
/* 00427824 91390001 */  lbu   $t9, 1($t1)
/* 00427828 00025EC0 */  sll   $t3, $v0, 0x1b
/* 0042782C 000B56C2 */  srl   $t2, $t3, 0x1b
/* 00427830 032A6026 */  xor   $t4, $t9, $t2
/* 00427834 318D001F */  andi  $t5, $t4, 0x1f
/* 00427838 01A24026 */  xor   $t0, $t5, $v0
/* 0042783C A0280001 */  sb    $t0, 1($at)
/* 00427840 8E230014 */  lw    $v1, 0x14($s1)
/* 00427844 90820001 */  lbu   $v0, 1($a0)
/* 00427848 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042784C 906F001E */  lbu   $t7, 0x1e($v1)
/* 00427850 0002C600 */  sll   $t8, $v0, 0x18
/* 00427854 00184F42 */  srl   $t1, $t8, 0x1d
/* 00427858 01E95826 */  xor   $t3, $t7, $t1
/* 0042785C 000BCF40 */  sll   $t9, $t3, 0x1d
/* 00427860 00195602 */  srl   $t2, $t9, 0x18
/* 00427864 01426026 */  xor   $t4, $t2, $v0
/* 00427868 A02C0001 */  sb    $t4, 1($at)
/* 0042786C 8C6D001C */  lw    $t5, 0x1c($v1)
/* 00427870 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00427874 000D42C2 */  srl   $t0, $t5, 0xb
/* 00427878 AC280004 */  sw    $t0, 4($at)
/* 0042787C 8E380024 */  lw    $t8, 0x24($s1)
/* 00427880 8C6E0010 */  lw    $t6, 0x10($v1)
/* 00427884 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00427888 01D87821 */  addu  $t7, $t6, $t8
/* 0042788C AC2F000C */  sw    $t7, 0xc($at)
/* 00427890 8E29001C */  lw    $t1, 0x1c($s1)
/* 00427894 A4800002 */  sh    $zero, 2($a0)
/* 00427898 AC890008 */  sw    $t1, 8($a0)
/* 0042789C 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 004278A0 0320F809 */  jalr  $t9
/* 004278A4 00000000 */   nop   
/* 004278A8 10000546 */  b     .L00428DC4
/* 004278AC 8FBC0028 */   lw    $gp, 0x28($sp)
.L004278B0:
/* 004278B0 8F99801C */  lw    $t9, %got(func_00426FA4)($gp)
/* 004278B4 8E2B0020 */  lw    $t3, 0x20($s1)
/* 004278B8 8E240014 */  lw    $a0, 0x14($s1)
/* 004278BC 27396FA4 */  addiu $t9, %lo(func_00426FA4) # addiu $t9, $t9, 0x6fa4
/* 004278C0 00002825 */  move  $a1, $zero
/* 004278C4 00003825 */  move  $a3, $zero
/* 004278C8 8FA2007C */  lw    $v0, 0x7c($sp)
/* 004278CC 0320F809 */  jalr  $t9
/* 004278D0 8D660024 */   lw    $a2, 0x24($t3)
/* 004278D4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004278D8 8E240018 */  lw    $a0, 0x18($s1)
/* 004278DC 00002825 */  move  $a1, $zero
/* 004278E0 8F99801C */  lw    $t9, %got(func_00426FA4)($gp)
/* 004278E4 00003025 */  move  $a2, $zero
/* 004278E8 00003825 */  move  $a3, $zero
/* 004278EC 27396FA4 */  addiu $t9, %lo(func_00426FA4) # addiu $t9, $t9, 0x6fa4
/* 004278F0 0320F809 */  jalr  $t9
/* 004278F4 8FA2007C */   lw    $v0, 0x7c($sp)
/* 004278F8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004278FC 8E2A0018 */  lw    $t2, 0x18($s1)
/* 00427900 2419003F */  li    $t9, 63
/* 00427904 8F908DA4 */  lw     $s0, %got(u)($gp)
/* 00427908 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042790C 92020001 */  lbu   $v0, 1($s0)
/* 00427910 A2190000 */  sb    $t9, ($s0)
/* 00427914 914C0001 */  lbu   $t4, 1($t2)
/* 00427918 00026EC0 */  sll   $t5, $v0, 0x1b
/* 0042791C 000D46C2 */  srl   $t0, $t5, 0x1b
/* 00427920 01887026 */  xor   $t6, $t4, $t0
/* 00427924 31D8001F */  andi  $t8, $t6, 0x1f
/* 00427928 03027826 */  xor   $t7, $t8, $v0
/* 0042792C A02F0001 */  sb    $t7, 1($at)
/* 00427930 8E290024 */  lw    $t1, 0x24($s1)
/* 00427934 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00427938 AC290004 */  sw    $t1, 4($at)
/* 0042793C 8E2B001C */  lw    $t3, 0x1c($s1)
/* 00427940 92390013 */  lbu   $t9, 0x13($s1)
/* 00427944 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00427948 AE0B0008 */  sw    $t3, 8($s0)
/* 0042794C A4390002 */  sh    $t9, 2($at)
/* 00427950 920A0001 */  lbu   $t2, 1($s0)
/* 00427954 922C0010 */  lbu   $t4, 0x10($s1)
/* 00427958 24010040 */  li    $at, 64
/* 0042795C 314DFF1F */  andi  $t5, $t2, 0xff1f
/* 00427960 15810004 */  bne   $t4, $at, .L00427974
/* 00427964 A20D0001 */   sb    $t5, 1($s0)
/* 00427968 96080002 */  lhu   $t0, 2($s0)
/* 0042796C 350E0001 */  ori   $t6, $t0, 1
/* 00427970 A60E0002 */  sh    $t6, 2($s0)
.L00427974:
/* 00427974 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00427978 02002025 */  move  $a0, $s0
/* 0042797C 0320F809 */  jalr  $t9
/* 00427980 00000000 */   nop   
/* 00427984 1000050F */  b     .L00428DC4
/* 00427988 8FBC0028 */   lw    $gp, 0x28($sp)
.L0042798C:
/* 0042798C 2C780020 */  sltiu $t8, $v1, 0x20
/* 00427990 00187823 */  negu  $t7, $t8
/* 00427994 31E90810 */  andi  $t1, $t7, 0x810
/* 00427998 00695804 */  sllv  $t3, $t1, $v1
/* 0042799C 05610039 */  bgez  $t3, .L00427A84
/* 004279A0 244FFFC0 */   addiu $t7, $v0, -0x40
/* 004279A4 8E390020 */  lw    $t9, 0x20($s1)
/* 004279A8 8E240014 */  lw    $a0, 0x14($s1)
/* 004279AC 00002825 */  move  $a1, $zero
/* 004279B0 8F260024 */  lw    $a2, 0x24($t9)
/* 004279B4 8F99801C */  lw    $t9, %got(func_00426FA4)($gp)
/* 004279B8 00003825 */  move  $a3, $zero
/* 004279BC 8FA2007C */  lw    $v0, 0x7c($sp)
/* 004279C0 27396FA4 */  addiu $t9, %lo(func_00426FA4) # addiu $t9, $t9, 0x6fa4
/* 004279C4 0320F809 */  jalr  $t9
/* 004279C8 00000000 */   nop   
/* 004279CC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004279D0 8E240018 */  lw    $a0, 0x18($s1)
/* 004279D4 00002825 */  move  $a1, $zero
/* 004279D8 8F99801C */  lw    $t9, %got(func_00426FA4)($gp)
/* 004279DC 00003025 */  move  $a2, $zero
/* 004279E0 00003825 */  move  $a3, $zero
/* 004279E4 27396FA4 */  addiu $t9, %lo(func_00426FA4) # addiu $t9, $t9, 0x6fa4
/* 004279E8 0320F809 */  jalr  $t9
/* 004279EC 8FA2007C */   lw    $v0, 0x7c($sp)
/* 004279F0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004279F4 8E2D0018 */  lw    $t5, 0x18($s1)
/* 004279F8 240A003F */  li    $t2, 63
/* 004279FC 8F908DA4 */  lw     $s0, %got(u)($gp)
/* 00427A00 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00427A04 92020001 */  lbu   $v0, 1($s0)
/* 00427A08 A20A0000 */  sb    $t2, ($s0)
/* 00427A0C 91AC0001 */  lbu   $t4, 1($t5)
/* 00427A10 000246C0 */  sll   $t0, $v0, 0x1b
/* 00427A14 000876C2 */  srl   $t6, $t0, 0x1b
/* 00427A18 018EC026 */  xor   $t8, $t4, $t6
/* 00427A1C 330F001F */  andi  $t7, $t8, 0x1f
/* 00427A20 01E24826 */  xor   $t1, $t7, $v0
/* 00427A24 A0290001 */  sb    $t1, 1($at)
/* 00427A28 8E2B0024 */  lw    $t3, 0x24($s1)
/* 00427A2C 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00427A30 AC2B0004 */  sw    $t3, 4($at)
/* 00427A34 8E39001C */  lw    $t9, 0x1c($s1)
/* 00427A38 922A0013 */  lbu   $t2, 0x13($s1)
/* 00427A3C 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00427A40 AE190008 */  sw    $t9, 8($s0)
/* 00427A44 A42A0002 */  sh    $t2, 2($at)
/* 00427A48 920D0001 */  lbu   $t5, 1($s0)
/* 00427A4C 922C0010 */  lbu   $t4, 0x10($s1)
/* 00427A50 24010040 */  li    $at, 64
/* 00427A54 31A8FF1F */  andi  $t0, $t5, 0xff1f
/* 00427A58 15810004 */  bne   $t4, $at, .L00427A6C
/* 00427A5C A2080001 */   sb    $t0, 1($s0)
/* 00427A60 960E0002 */  lhu   $t6, 2($s0)
/* 00427A64 35D80001 */  ori   $t8, $t6, 1
/* 00427A68 A6180002 */  sh    $t8, 2($s0)
.L00427A6C:
/* 00427A6C 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00427A70 02002025 */  move  $a0, $s0
/* 00427A74 0320F809 */  jalr  $t9
/* 00427A78 00000000 */   nop   
/* 00427A7C 100004D1 */  b     .L00428DC4
/* 00427A80 8FBC0028 */   lw    $gp, 0x28($sp)
.L00427A84:
/* 00427A84 2DE90020 */  sltiu $t1, $t7, 0x20
/* 00427A88 00095823 */  negu  $t3, $t1
/* 00427A8C 317900C0 */  andi  $t9, $t3, 0xc0
/* 00427A90 01F95004 */  sllv  $t2, $t9, $t7
/* 00427A94 05410056 */  bgez  $t2, .L00427BF0
/* 00427A98 2C6D0020 */   sltiu $t5, $v1, 0x20
/* 00427A9C 8E220014 */  lw    $v0, 0x14($s1)
/* 00427AA0 3C011200 */  lui   $at, 0x1200
/* 00427AA4 00002825 */  move  $a1, $zero
/* 00427AA8 904D0000 */  lbu   $t5, ($v0)
/* 00427AAC 00003825 */  move  $a3, $zero
/* 00427AB0 2DA80020 */  sltiu $t0, $t5, 0x20
/* 00427AB4 00086023 */  negu  $t4, $t0
/* 00427AB8 01817024 */  and   $t6, $t4, $at
/* 00427ABC 01AEC004 */  sllv  $t8, $t6, $t5
/* 00427AC0 0703000B */  bgezl $t8, .L00427AF0
/* 00427AC4 8E240018 */   lw    $a0, 0x18($s1)
/* 00427AC8 90490001 */  lbu   $t1, 1($v0)
/* 00427ACC 3C018800 */  lui   $at, 0x8800
/* 00427AD0 2D2B0020 */  sltiu $t3, $t1, 0x20
/* 00427AD4 000BC823 */  negu  $t9, $t3
/* 00427AD8 03217824 */  and   $t7, $t9, $at
/* 00427ADC 012F5004 */  sllv  $t2, $t7, $t1
/* 00427AE0 05420003 */  bltzl $t2, .L00427AF0
/* 00427AE4 8E240018 */   lw    $a0, 0x18($s1)
/* 00427AE8 A0400001 */  sb    $zero, 1($v0)
/* 00427AEC 8E240018 */  lw    $a0, 0x18($s1)
.L00427AF0:
/* 00427AF0 3C011200 */  lui   $at, 0x1200
/* 00427AF4 90880000 */  lbu   $t0, ($a0)
/* 00427AF8 2D0C0020 */  sltiu $t4, $t0, 0x20
/* 00427AFC 000C7023 */  negu  $t6, $t4
/* 00427B00 01C16824 */  and   $t5, $t6, $at
/* 00427B04 010DC004 */  sllv  $t8, $t5, $t0
/* 00427B08 0701000A */  bgez  $t8, .L00427B34
/* 00427B0C 00000000 */   nop   
/* 00427B10 908B0001 */  lbu   $t3, 1($a0)
/* 00427B14 3C018800 */  lui   $at, 0x8800
/* 00427B18 2D790020 */  sltiu $t9, $t3, 0x20
/* 00427B1C 00197823 */  negu  $t7, $t9
/* 00427B20 01E14824 */  and   $t1, $t7, $at
/* 00427B24 01695004 */  sllv  $t2, $t1, $t3
/* 00427B28 05400002 */  bltz  $t2, .L00427B34
/* 00427B2C 00000000 */   nop   
/* 00427B30 A0800001 */  sb    $zero, 1($a0)
.L00427B34:
/* 00427B34 8F99801C */  lw    $t9, %got(func_00426FA4)($gp)
/* 00427B38 8E2C0020 */  lw    $t4, 0x20($s1)
/* 00427B3C 8E240014 */  lw    $a0, 0x14($s1)
/* 00427B40 27396FA4 */  addiu $t9, %lo(func_00426FA4) # addiu $t9, $t9, 0x6fa4
/* 00427B44 8FA2007C */  lw    $v0, 0x7c($sp)
/* 00427B48 0320F809 */  jalr  $t9
/* 00427B4C 8D860024 */   lw    $a2, 0x24($t4)
/* 00427B50 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00427B54 8E2E0020 */  lw    $t6, 0x20($s1)
/* 00427B58 8E240018 */  lw    $a0, 0x18($s1)
/* 00427B5C 8F99801C */  lw    $t9, %got(func_00426FA4)($gp)
/* 00427B60 00002825 */  move  $a1, $zero
/* 00427B64 00003825 */  move  $a3, $zero
/* 00427B68 27396FA4 */  addiu $t9, %lo(func_00426FA4) # addiu $t9, $t9, 0x6fa4
/* 00427B6C 8FA2007C */  lw    $v0, 0x7c($sp)
/* 00427B70 0320F809 */  jalr  $t9
/* 00427B74 8DC6002C */   lw    $a2, 0x2c($t6)
/* 00427B78 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00427B7C 8E2F001C */  lw    $t7, 0x1c($s1)
/* 00427B80 96220024 */  lhu   $v0, 0x24($s1)
/* 00427B84 8F908DA4 */  lw     $s0, %got(u)($gp)
/* 00427B88 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00427B8C 240D0058 */  li    $t5, 88
/* 00427B90 92080001 */  lbu   $t0, 1($s0)
/* 00427B94 304900FF */  andi  $t1, $v0, 0xff
/* 00427B98 A20D0000 */  sb    $t5, ($s0)
/* 00427B9C 3118FFE0 */  andi  $t8, $t0, 0xffe0
/* 00427BA0 37190009 */  ori   $t9, $t8, 9
/* 00427BA4 A2190001 */  sb    $t9, 1($s0)
/* 00427BA8 AE0F0008 */  sw    $t7, 8($s0)
/* 00427BAC AC290004 */  sw    $t1, 4($at)
/* 00427BB0 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00427BB4 00025A02 */  srl   $t3, $v0, 8
/* 00427BB8 A42B0002 */  sh    $t3, 2($at)
/* 00427BBC 922A0010 */  lbu   $t2, 0x10($s1)
/* 00427BC0 24010059 */  li    $at, 89
/* 00427BC4 15410004 */  bne   $t2, $at, .L00427BD8
/* 00427BC8 00000000 */   nop   
/* 00427BCC 960C0002 */  lhu   $t4, 2($s0)
/* 00427BD0 358E0001 */  ori   $t6, $t4, 1
/* 00427BD4 A60E0002 */  sh    $t6, 2($s0)
.L00427BD8:
/* 00427BD8 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00427BDC 02002025 */  move  $a0, $s0
/* 00427BE0 0320F809 */  jalr  $t9
/* 00427BE4 00000000 */   nop   
/* 00427BE8 10000476 */  b     .L00428DC4
/* 00427BEC 8FBC0028 */   lw    $gp, 0x28($sp)
.L00427BF0:
/* 00427BF0 000D4023 */  negu  $t0, $t5
/* 00427BF4 3C01FC00 */  lui   $at, 0xfc00
/* 00427BF8 0101C024 */  and   $t8, $t0, $at
/* 00427BFC 0078C804 */  sllv  $t9, $t8, $v1
/* 00427C00 0721003C */  bgez  $t9, .L00427CF4
/* 00427C04 2401000F */   li    $at, 15
/* 00427C08 8E220014 */  lw    $v0, 0x14($s1)
/* 00427C0C 3C011200 */  lui   $at, 0x1200
/* 00427C10 00002825 */  move  $a1, $zero
/* 00427C14 904F0000 */  lbu   $t7, ($v0)
/* 00427C18 00003025 */  move  $a2, $zero
/* 00427C1C 2DE90020 */  sltiu $t1, $t7, 0x20
/* 00427C20 00095823 */  negu  $t3, $t1
/* 00427C24 01615024 */  and   $t2, $t3, $at
/* 00427C28 01EA6004 */  sllv  $t4, $t2, $t7
/* 00427C2C 05830004 */  bgezl $t4, .L00427C40
/* 00427C30 8E240018 */   lw    $a0, 0x18($s1)
/* 00427C34 922E0001 */  lbu   $t6, 1($s1)
/* 00427C38 A04E0001 */  sb    $t6, 1($v0)
/* 00427C3C 8E240018 */  lw    $a0, 0x18($s1)
.L00427C40:
/* 00427C40 3C011200 */  lui   $at, 0x1200
/* 00427C44 908D0000 */  lbu   $t5, ($a0)
/* 00427C48 2DA80020 */  sltiu $t0, $t5, 0x20
/* 00427C4C 0008C023 */  negu  $t8, $t0
/* 00427C50 0301C824 */  and   $t9, $t8, $at
/* 00427C54 01B94804 */  sllv  $t1, $t9, $t5
/* 00427C58 05210003 */  bgez  $t1, .L00427C68
/* 00427C5C 00000000 */   nop   
/* 00427C60 922B0001 */  lbu   $t3, 1($s1)
/* 00427C64 A08B0001 */  sb    $t3, 1($a0)
.L00427C68:
/* 00427C68 8F99801C */  lw    $t9, %got(func_00426FA4)($gp)
/* 00427C6C 8E240014 */  lw    $a0, 0x14($s1)
/* 00427C70 00003825 */  move  $a3, $zero
/* 00427C74 27396FA4 */  addiu $t9, %lo(func_00426FA4) # addiu $t9, $t9, 0x6fa4
/* 00427C78 0320F809 */  jalr  $t9
/* 00427C7C 8FA2007C */   lw    $v0, 0x7c($sp)
/* 00427C80 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00427C84 8E240018 */  lw    $a0, 0x18($s1)
/* 00427C88 00002825 */  move  $a1, $zero
/* 00427C8C 8F99801C */  lw    $t9, %got(func_00426FA4)($gp)
/* 00427C90 00003025 */  move  $a2, $zero
/* 00427C94 00003825 */  move  $a3, $zero
/* 00427C98 27396FA4 */  addiu $t9, %lo(func_00426FA4) # addiu $t9, $t9, 0x6fa4
/* 00427C9C 0320F809 */  jalr  $t9
/* 00427CA0 8FA2007C */   lw    $v0, 0x7c($sp)
/* 00427CA4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00427CA8 922A0010 */  lbu   $t2, 0x10($s1)
/* 00427CAC 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00427CB0 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00427CB4 A08A0000 */  sb    $t2, ($a0)
/* 00427CB8 90820001 */  lbu   $v0, 1($a0)
/* 00427CBC 922F0001 */  lbu   $t7, 1($s1)
/* 00427CC0 000266C0 */  sll   $t4, $v0, 0x1b
/* 00427CC4 000C76C2 */  srl   $t6, $t4, 0x1b
/* 00427CC8 01EE4026 */  xor   $t0, $t7, $t6
/* 00427CCC 3118001F */  andi  $t8, $t0, 0x1f
/* 00427CD0 0302C826 */  xor   $t9, $t8, $v0
/* 00427CD4 A0390001 */  sb    $t9, 1($at)
/* 00427CD8 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00427CDC 8E2D001C */  lw    $t5, 0x1c($s1)
/* 00427CE0 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00427CE4 0320F809 */  jalr  $t9
/* 00427CE8 AC2D0004 */   sw    $t5, 4($at)
/* 00427CEC 10000435 */  b     .L00428DC4
/* 00427CF0 8FBC0028 */   lw    $gp, 0x28($sp)
.L00427CF4:
/* 00427CF4 1441001D */  bne   $v0, $at, .L00427D6C
/* 00427CF8 8FB8007C */   lw    $t8, 0x7c($sp)
/* 00427CFC 8E240014 */  lw    $a0, 0x14($s1)
/* 00427D00 3C011200 */  lui   $at, 0x1200
/* 00427D04 00002825 */  move  $a1, $zero
/* 00427D08 90890000 */  lbu   $t1, ($a0)
/* 00427D0C 2D2B0020 */  sltiu $t3, $t1, 0x20
/* 00427D10 000B5023 */  negu  $t2, $t3
/* 00427D14 01416024 */  and   $t4, $t2, $at
/* 00427D18 012C7804 */  sllv  $t7, $t4, $t1
/* 00427D1C 05E10004 */  bgez  $t7, .L00427D30
/* 00427D20 00000000 */   nop   
/* 00427D24 922E0001 */  lbu   $t6, 1($s1)
/* 00427D28 A08E0001 */  sb    $t6, 1($a0)
/* 00427D2C 8E240014 */  lw    $a0, 0x14($s1)
.L00427D30:
/* 00427D30 8F99801C */  lw    $t9, %got(func_00426FA4)($gp)
/* 00427D34 00003025 */  move  $a2, $zero
/* 00427D38 00003825 */  move  $a3, $zero
/* 00427D3C 27396FA4 */  addiu $t9, %lo(func_00426FA4) # addiu $t9, $t9, 0x6fa4
/* 00427D40 0320F809 */  jalr  $t9
/* 00427D44 8FA2007C */   lw    $v0, 0x7c($sp)
/* 00427D48 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00427D4C 2408000F */  li    $t0, 15
/* 00427D50 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00427D54 A0880000 */  sb    $t0, ($a0)
/* 00427D58 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00427D5C 0320F809 */  jalr  $t9
/* 00427D60 00000000 */   nop   
/* 00427D64 10000417 */  b     .L00428DC4
/* 00427D68 8FBC0028 */   lw    $gp, 0x28($sp)
.L00427D6C:
/* 00427D6C 8F02FFF4 */  lw    $v0, -0xc($t8)
/* 00427D70 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00427D74 96240002 */  lhu   $a0, 2($s1)
/* 00427D78 24450164 */  addiu $a1, $v0, 0x164
/* 00427D7C 0320F809 */  jalr  $t9
/* 00427D80 AFA2003C */   sw    $v0, 0x3c($sp)
/* 00427D84 1440002C */  bnez  $v0, .L00427E38
/* 00427D88 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00427D8C 93B90087 */  lbu   $t9, 0x87($sp)
/* 00427D90 02202025 */  move  $a0, $s1
/* 00427D94 13200004 */  beqz  $t9, .L00427DA8
/* 00427D98 00000000 */   nop   
/* 00427D9C 8F818A3C */  lw     $at, %got(noop)($gp)
/* 00427DA0 10000408 */  b     .L00428DC4
/* 00427DA4 AC200000 */   sw    $zero, ($at)
.L00427DA8:
/* 00427DA8 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 00427DAC 8FA5003C */  lw    $a1, 0x3c($sp)
/* 00427DB0 27A60078 */  addiu $a2, $sp, 0x78
/* 00427DB4 0320F809 */  jalr  $t9
/* 00427DB8 24070001 */   li    $a3, 1
/* 00427DBC 10400017 */  beqz  $v0, .L00427E1C
/* 00427DC0 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00427DC4 12000007 */  beqz  $s0, .L00427DE4
/* 00427DC8 00000000 */   nop   
/* 00427DCC 8F998288 */  lw    $t9, %call16(base_in_reg)($gp)
/* 00427DD0 8FA40078 */  lw    $a0, 0x78($sp)
/* 00427DD4 02202825 */  move  $a1, $s1
/* 00427DD8 0320F809 */  jalr  $t9
/* 00427DDC 02003025 */   move  $a2, $s0
/* 00427DE0 8FBC0028 */  lw    $gp, 0x28($sp)
.L00427DE4:
/* 00427DE4 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 00427DE8 92240012 */  lbu   $a0, 0x12($s1)
/* 00427DEC 0320F809 */  jalr  $t9
/* 00427DF0 00000000 */   nop   
/* 00427DF4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00427DF8 24040052 */  li    $a0, 82
/* 00427DFC 8FA50078 */  lw    $a1, 0x78($sp)
/* 00427E00 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00427E04 92260012 */  lbu   $a2, 0x12($s1)
/* 00427E08 00403825 */  move  $a3, $v0
/* 00427E0C 0320F809 */  jalr  $t9
/* 00427E10 00000000 */   nop   
/* 00427E14 100003EB */  b     .L00428DC4
/* 00427E18 8FBC0028 */   lw    $gp, 0x28($sp)
.L00427E1C:
/* 00427E1C 8F998290 */  lw    $t9, %call16(spilltemplodstr)($gp)
/* 00427E20 24040052 */  li    $a0, 82
/* 00427E24 92250012 */  lbu   $a1, 0x12($s1)
/* 00427E28 0320F809 */  jalr  $t9
/* 00427E2C 8E260020 */   lw    $a2, 0x20($s1)
/* 00427E30 100003E4 */  b     .L00428DC4
/* 00427E34 8FBC0028 */   lw    $gp, 0x28($sp)
.L00427E38:
/* 00427E38 93AD0087 */  lbu   $t5, 0x87($sp)
/* 00427E3C 15A0003C */  bnez  $t5, .L00427F30
/* 00427E40 00000000 */   nop   
/* 00427E44 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00427E48 8FA5003C */  lw    $a1, 0x3c($sp)
/* 00427E4C 96240002 */  lhu   $a0, 2($s1)
/* 00427E50 0320F809 */  jalr  $t9
/* 00427E54 24A50154 */   addiu $a1, $a1, 0x154
/* 00427E58 10400035 */  beqz  $v0, .L00427F30
/* 00427E5C 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00427E60 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00427E64 8FA5003C */  lw    $a1, 0x3c($sp)
/* 00427E68 96240002 */  lhu   $a0, 2($s1)
/* 00427E6C 0320F809 */  jalr  $t9
/* 00427E70 24A5016C */   addiu $a1, $a1, 0x16c
/* 00427E74 14400026 */  bnez  $v0, .L00427F10
/* 00427E78 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00427E7C 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 00427E80 02202025 */  move  $a0, $s1
/* 00427E84 8FA5003C */  lw    $a1, 0x3c($sp)
/* 00427E88 27A60078 */  addiu $a2, $sp, 0x78
/* 00427E8C 0320F809 */  jalr  $t9
/* 00427E90 24070001 */   li    $a3, 1
/* 00427E94 10400017 */  beqz  $v0, .L00427EF4
/* 00427E98 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00427E9C 12000007 */  beqz  $s0, .L00427EBC
/* 00427EA0 00000000 */   nop   
/* 00427EA4 8F998288 */  lw    $t9, %call16(base_in_reg)($gp)
/* 00427EA8 8FA40078 */  lw    $a0, 0x78($sp)
/* 00427EAC 02202825 */  move  $a1, $s1
/* 00427EB0 0320F809 */  jalr  $t9
/* 00427EB4 02003025 */   move  $a2, $s0
/* 00427EB8 8FBC0028 */  lw    $gp, 0x28($sp)
.L00427EBC:
/* 00427EBC 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 00427EC0 92240012 */  lbu   $a0, 0x12($s1)
/* 00427EC4 0320F809 */  jalr  $t9
/* 00427EC8 00000000 */   nop   
/* 00427ECC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00427ED0 24040052 */  li    $a0, 82
/* 00427ED4 8FA50078 */  lw    $a1, 0x78($sp)
/* 00427ED8 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00427EDC 92260012 */  lbu   $a2, 0x12($s1)
/* 00427EE0 00403825 */  move  $a3, $v0
/* 00427EE4 0320F809 */  jalr  $t9
/* 00427EE8 00000000 */   nop   
/* 00427EEC 100003B5 */  b     .L00428DC4
/* 00427EF0 8FBC0028 */   lw    $gp, 0x28($sp)
.L00427EF4:
/* 00427EF4 8F998290 */  lw    $t9, %call16(spilltemplodstr)($gp)
/* 00427EF8 24040052 */  li    $a0, 82
/* 00427EFC 92250012 */  lbu   $a1, 0x12($s1)
/* 00427F00 0320F809 */  jalr  $t9
/* 00427F04 8E260020 */   lw    $a2, 0x20($s1)
/* 00427F08 100003AE */  b     .L00428DC4
/* 00427F0C 8FBC0028 */   lw    $gp, 0x28($sp)
.L00427F10:
/* 00427F10 8F99801C */  lw    $t9, %got(func_00426DE8)($gp)
/* 00427F14 02202025 */  move  $a0, $s1
/* 00427F18 8FA2007C */  lw    $v0, 0x7c($sp)
/* 00427F1C 27396DE8 */  addiu $t9, %lo(func_00426DE8) # addiu $t9, $t9, 0x6de8
/* 00427F20 0320F809 */  jalr  $t9
/* 00427F24 00000000 */   nop   
/* 00427F28 100003A6 */  b     .L00428DC4
/* 00427F2C 8FBC0028 */   lw    $gp, 0x28($sp)
.L00427F30:
/* 00427F30 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00427F34 8FA5003C */  lw    $a1, 0x3c($sp)
/* 00427F38 96240002 */  lhu   $a0, 2($s1)
/* 00427F3C 0320F809 */  jalr  $t9
/* 00427F40 24A5016C */   addiu $a1, $a1, 0x16c
/* 00427F44 1040000A */  beqz  $v0, .L00427F70
/* 00427F48 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00427F4C 8F99801C */  lw    $t9, %got(func_00426DE8)($gp)
/* 00427F50 02202025 */  move  $a0, $s1
/* 00427F54 8FA2007C */  lw    $v0, 0x7c($sp)
/* 00427F58 27396DE8 */  addiu $t9, %lo(func_00426DE8) # addiu $t9, $t9, 0x6de8
/* 00427F5C 0320F809 */  jalr  $t9
/* 00427F60 00000000 */   nop   
/* 00427F64 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00427F68 10000289 */  b     .L00428990
/* 00427F6C 8F908DA4 */   lw     $s0, %got(u)($gp)
.L00427F70:
/* 00427F70 92220010 */  lbu   $v0, 0x10($s1)
/* 00427F74 8F8A8DBC */  lw     $t2, %got(optab)($gp)
/* 00427F78 00003025 */  move  $a2, $zero
/* 00427F7C 00025880 */  sll   $t3, $v0, 2
/* 00427F80 01625823 */  subu  $t3, $t3, $v0
/* 00427F84 016A6021 */  addu  $t4, $t3, $t2
/* 00427F88 91890002 */  lbu   $t1, 2($t4)
/* 00427F8C 244FFFE0 */  addiu $t7, $v0, -0x20
/* 00427F90 2DEE0040 */  sltiu $t6, $t7, 0x40
/* 00427F94 112000B3 */  beqz  $t1, .L00428264
/* 00427F98 00002825 */   move  $a1, $zero
/* 00427F9C 11C00009 */  beqz  $t6, .L00427FC4
/* 00427FA0 00001825 */   move  $v1, $zero
/* 00427FA4 8F998044 */  lw    $t9, %got(D_10010624)($gp)
/* 00427FA8 000F4143 */  sra   $t0, $t7, 5
/* 00427FAC 0008C080 */  sll   $t8, $t0, 2
/* 00427FB0 27390624 */  addiu $t9, %lo(D_10010624) # addiu $t9, $t9, 0x624
/* 00427FB4 03386821 */  addu  $t5, $t9, $t8
/* 00427FB8 8DAB0000 */  lw    $t3, ($t5)
/* 00427FBC 01EB5004 */  sllv  $t2, $t3, $t7
/* 00427FC0 294E0000 */  slti  $t6, $t2, 0
.L00427FC4:
/* 00427FC4 15C00030 */  bnez  $t6, .L00428088
/* 00427FC8 00003825 */   move  $a3, $zero
/* 00427FCC 8E220014 */  lw    $v0, 0x14($s1)
/* 00427FD0 3C011200 */  lui   $at, 0x1200
/* 00427FD4 90490000 */  lbu   $t1, ($v0)
/* 00427FD8 2D280020 */  sltiu $t0, $t1, 0x20
/* 00427FDC 0008C823 */  negu  $t9, $t0
/* 00427FE0 0321C024 */  and   $t8, $t9, $at
/* 00427FE4 01386804 */  sllv  $t5, $t8, $t1
/* 00427FE8 05A30004 */  bgezl $t5, .L00427FFC
/* 00427FEC 8E240018 */   lw    $a0, 0x18($s1)
/* 00427FF0 922B0001 */  lbu   $t3, 1($s1)
/* 00427FF4 A04B0001 */  sb    $t3, 1($v0)
/* 00427FF8 8E240018 */  lw    $a0, 0x18($s1)
.L00427FFC:
/* 00427FFC 3C011200 */  lui   $at, 0x1200
/* 00428000 908F0000 */  lbu   $t7, ($a0)
/* 00428004 2DEA0020 */  sltiu $t2, $t7, 0x20
/* 00428008 000A6023 */  negu  $t4, $t2
/* 0042800C 01817024 */  and   $t6, $t4, $at
/* 00428010 01EE4004 */  sllv  $t0, $t6, $t7
/* 00428014 05030004 */  bgezl $t0, .L00428028
/* 00428018 92290010 */   lbu   $t1, 0x10($s1)
/* 0042801C 92390001 */  lbu   $t9, 1($s1)
/* 00428020 A0990001 */  sb    $t9, 1($a0)
/* 00428024 92290010 */  lbu   $t1, 0x10($s1)
.L00428028:
/* 00428028 8E380014 */  lw    $t8, 0x14($s1)
/* 0042802C 2D2D0080 */  sltiu $t5, $t1, 0x80
/* 00428030 11A00009 */  beqz  $t5, .L00428058
/* 00428034 AFB80038 */   sw    $t8, 0x38($sp)
/* 00428038 8F8C8044 */  lw    $t4, %got(D_10010614)($gp)
/* 0042803C 00095943 */  sra   $t3, $t1, 5
/* 00428040 000B5080 */  sll   $t2, $t3, 2
/* 00428044 258C0614 */  addiu $t4, %lo(D_10010614) # addiu $t4, $t4, 0x614
/* 00428048 018A7021 */  addu  $t6, $t4, $t2
/* 0042804C 8DCF0000 */  lw    $t7, ($t6)
/* 00428050 012F4004 */  sllv  $t0, $t7, $t1
/* 00428054 290D0000 */  slti  $t5, $t0, 0
.L00428058:
/* 00428058 11A00070 */  beqz  $t5, .L0042821C
/* 0042805C 8FB80038 */   lw    $t8, 0x38($sp)
/* 00428060 930B0001 */  lbu   $t3, 1($t8)
/* 00428064 8E240018 */  lw    $a0, 0x18($s1)
/* 00428068 55600003 */  bnezl $t3, .L00428078
/* 0042806C 908C0001 */   lbu   $t4, 1($a0)
/* 00428070 02003025 */  move  $a2, $s0
/* 00428074 908C0001 */  lbu   $t4, 1($a0)
.L00428078:
/* 00428078 15800068 */  bnez  $t4, .L0042821C
/* 0042807C 00000000 */   nop   
/* 00428080 10000066 */  b     .L0042821C
/* 00428084 02001825 */   move  $v1, $s0
.L00428088:
/* 00428088 2401003A */  li    $at, 58
/* 0042808C 5441001A */  bnel  $v0, $at, .L004280F8
/* 00428090 24010041 */   li    $at, 65
/* 00428094 8E220014 */  lw    $v0, 0x14($s1)
/* 00428098 3C011200 */  lui   $at, 0x1200
/* 0042809C 904A0000 */  lbu   $t2, ($v0)
/* 004280A0 2D4E0020 */  sltiu $t6, $t2, 0x20
/* 004280A4 000E7823 */  negu  $t7, $t6
/* 004280A8 01E14824 */  and   $t1, $t7, $at
/* 004280AC 01494004 */  sllv  $t0, $t1, $t2
/* 004280B0 05010003 */  bgez  $t0, .L004280C0
/* 004280B4 240F000E */   li    $t7, 14
/* 004280B8 92390001 */  lbu   $t9, 1($s1)
/* 004280BC A0590001 */  sb    $t9, 1($v0)
.L004280C0:
/* 004280C0 8E240018 */  lw    $a0, 0x18($s1)
/* 004280C4 3C011200 */  lui   $at, 0x1200
/* 004280C8 908D0000 */  lbu   $t5, ($a0)
/* 004280CC 2DB80020 */  sltiu $t8, $t5, 0x20
/* 004280D0 00185823 */  negu  $t3, $t8
/* 004280D4 01616024 */  and   $t4, $t3, $at
/* 004280D8 01AC7004 */  sllv  $t6, $t4, $t5
/* 004280DC 05C30003 */  bgezl $t6, .L004280EC
/* 004280E0 8E290014 */   lw    $t1, 0x14($s1)
/* 004280E4 A08F0001 */  sb    $t7, 1($a0)
/* 004280E8 8E290014 */  lw    $t1, 0x14($s1)
.L004280EC:
/* 004280EC 1000004B */  b     .L0042821C
/* 004280F0 AFA90038 */   sw    $t1, 0x38($sp)
/* 004280F4 24010041 */  li    $at, 65
.L004280F8:
/* 004280F8 50410029 */  beql  $v0, $at, .L004281A0
/* 004280FC 8E220014 */   lw    $v0, 0x14($s1)
/* 00428100 8E220014 */  lw    $v0, 0x14($s1)
/* 00428104 3C011200 */  lui   $at, 0x1200
/* 00428108 904A0000 */  lbu   $t2, ($v0)
/* 0042810C 2D480020 */  sltiu $t0, $t2, 0x20
/* 00428110 0008C823 */  negu  $t9, $t0
/* 00428114 0321C024 */  and   $t8, $t9, $at
/* 00428118 01585804 */  sllv  $t3, $t8, $t2
/* 0042811C 0563000B */  bgezl $t3, .L0042814C
/* 00428120 8E240018 */   lw    $a0, 0x18($s1)
/* 00428124 904C0001 */  lbu   $t4, 1($v0)
/* 00428128 3C018800 */  lui   $at, 0x8800
/* 0042812C 2D8D0020 */  sltiu $t5, $t4, 0x20
/* 00428130 000D7023 */  negu  $t6, $t5
/* 00428134 01C17824 */  and   $t7, $t6, $at
/* 00428138 018F4804 */  sllv  $t1, $t7, $t4
/* 0042813C 05220003 */  bltzl $t1, .L0042814C
/* 00428140 8E240018 */   lw    $a0, 0x18($s1)
/* 00428144 A0400001 */  sb    $zero, 1($v0)
/* 00428148 8E240018 */  lw    $a0, 0x18($s1)
.L0042814C:
/* 0042814C 3C011200 */  lui   $at, 0x1200
/* 00428150 90880000 */  lbu   $t0, ($a0)
/* 00428154 2D190020 */  sltiu $t9, $t0, 0x20
/* 00428158 0019C023 */  negu  $t8, $t9
/* 0042815C 03015024 */  and   $t2, $t8, $at
/* 00428160 010A5804 */  sllv  $t3, $t2, $t0
/* 00428164 0563000B */  bgezl $t3, .L00428194
/* 00428168 8E390014 */   lw    $t9, 0x14($s1)
/* 0042816C 908D0001 */  lbu   $t5, 1($a0)
/* 00428170 3C018800 */  lui   $at, 0x8800
/* 00428174 2DAE0020 */  sltiu $t6, $t5, 0x20
/* 00428178 000E7823 */  negu  $t7, $t6
/* 0042817C 01E16024 */  and   $t4, $t7, $at
/* 00428180 01AC4804 */  sllv  $t1, $t4, $t5
/* 00428184 05220003 */  bltzl $t1, .L00428194
/* 00428188 8E390014 */   lw    $t9, 0x14($s1)
/* 0042818C A0800001 */  sb    $zero, 1($a0)
/* 00428190 8E390014 */  lw    $t9, 0x14($s1)
.L00428194:
/* 00428194 10000021 */  b     .L0042821C
/* 00428198 AFB90038 */   sw    $t9, 0x38($sp)
/* 0042819C 8E220014 */  lw    $v0, 0x14($s1)
.L004281A0:
/* 004281A0 3C011200 */  lui   $at, 0x1200
/* 004281A4 90580000 */  lbu   $t8, ($v0)
/* 004281A8 2F0A0020 */  sltiu $t2, $t8, 0x20
/* 004281AC 000A4023 */  negu  $t0, $t2
/* 004281B0 01015824 */  and   $t3, $t0, $at
/* 004281B4 030B7004 */  sllv  $t6, $t3, $t8
/* 004281B8 05C3000B */  bgezl $t6, .L004281E8
/* 004281BC 8E240018 */   lw    $a0, 0x18($s1)
/* 004281C0 904F0001 */  lbu   $t7, 1($v0)
/* 004281C4 3C018800 */  lui   $at, 0x8800
/* 004281C8 2DEC0020 */  sltiu $t4, $t7, 0x20
/* 004281CC 000C6823 */  negu  $t5, $t4
/* 004281D0 01A14824 */  and   $t1, $t5, $at
/* 004281D4 01E9C804 */  sllv  $t9, $t1, $t7
/* 004281D8 07220003 */  bltzl $t9, .L004281E8
/* 004281DC 8E240018 */   lw    $a0, 0x18($s1)
/* 004281E0 A0400001 */  sb    $zero, 1($v0)
/* 004281E4 8E240018 */  lw    $a0, 0x18($s1)
.L004281E8:
/* 004281E8 3C011200 */  lui   $at, 0x1200
/* 004281EC 908A0000 */  lbu   $t2, ($a0)
/* 004281F0 2D480020 */  sltiu $t0, $t2, 0x20
/* 004281F4 00085823 */  negu  $t3, $t0
/* 004281F8 0161C024 */  and   $t8, $t3, $at
/* 004281FC 01587004 */  sllv  $t6, $t8, $t2
/* 00428200 05C30004 */  bgezl $t6, .L00428214
/* 00428204 8E2D0014 */   lw    $t5, 0x14($s1)
/* 00428208 922C0001 */  lbu   $t4, 1($s1)
/* 0042820C A08C0001 */  sb    $t4, 1($a0)
/* 00428210 8E2D0014 */  lw    $t5, 0x14($s1)
.L00428214:
/* 00428214 02003025 */  move  $a2, $s0
/* 00428218 AFAD0038 */  sw    $t5, 0x38($sp)
.L0042821C:
/* 0042821C 8F99801C */  lw    $t9, %got(func_00426FA4)($gp)
/* 00428220 8FA40038 */  lw    $a0, 0x38($sp)
/* 00428224 8FA2007C */  lw    $v0, 0x7c($sp)
/* 00428228 27396FA4 */  addiu $t9, %lo(func_00426FA4) # addiu $t9, $t9, 0x6fa4
/* 0042822C 0320F809 */  jalr  $t9
/* 00428230 AFA30060 */   sw    $v1, 0x60($sp)
/* 00428234 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00428238 8E240018 */  lw    $a0, 0x18($s1)
/* 0042823C 00002825 */  move  $a1, $zero
/* 00428240 8F99801C */  lw    $t9, %got(func_00426FA4)($gp)
/* 00428244 8FA60060 */  lw    $a2, 0x60($sp)
/* 00428248 00003825 */  move  $a3, $zero
/* 0042824C 27396FA4 */  addiu $t9, %lo(func_00426FA4) # addiu $t9, $t9, 0x6fa4
/* 00428250 0320F809 */  jalr  $t9
/* 00428254 8FA2007C */   lw    $v0, 0x7c($sp)
/* 00428258 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0042825C 10000108 */  b     .L00428680
/* 00428260 92220010 */   lbu   $v0, 0x10($s1)
.L00428264:
/* 00428264 2449FFE0 */  addiu $t1, $v0, -0x20
/* 00428268 2D2F0080 */  sltiu $t7, $t1, 0x80
/* 0042826C 11E00009 */  beqz  $t7, .L00428294
/* 00428270 00000000 */   nop   
/* 00428274 8F8B8044 */  lw    $t3, %got(D_10010604)($gp)
/* 00428278 0009C943 */  sra   $t9, $t1, 5
/* 0042827C 00194080 */  sll   $t0, $t9, 2
/* 00428280 256B0604 */  addiu $t3, %lo(D_10010604) # addiu $t3, $t3, 0x604
/* 00428284 0168C021 */  addu  $t8, $t3, $t0
/* 00428288 8F0A0000 */  lw    $t2, ($t8)
/* 0042828C 012A7004 */  sllv  $t6, $t2, $t1
/* 00428290 29CF0000 */  slti  $t7, $t6, 0
.L00428294:
/* 00428294 11E00015 */  beqz  $t7, .L004282EC
/* 00428298 2C5900A0 */   sltiu $t9, $v0, 0xa0
/* 0042829C 8E230014 */  lw    $v1, 0x14($s1)
/* 004282A0 3C011200 */  lui   $at, 0x1200
/* 004282A4 906D0000 */  lbu   $t5, ($v1)
/* 004282A8 2DB90020 */  sltiu $t9, $t5, 0x20
/* 004282AC 00195823 */  negu  $t3, $t9
/* 004282B0 01614024 */  and   $t0, $t3, $at
/* 004282B4 01A8C004 */  sllv  $t8, $t0, $t5
/* 004282B8 07030032 */  bgezl $t8, .L00428384
/* 004282BC 24010036 */   li    $at, 54
/* 004282C0 906A0001 */  lbu   $t2, 1($v1)
/* 004282C4 3C018800 */  lui   $at, 0x8800
/* 004282C8 2D490020 */  sltiu $t1, $t2, 0x20
/* 004282CC 00097023 */  negu  $t6, $t1
/* 004282D0 01C16024 */  and   $t4, $t6, $at
/* 004282D4 014C7804 */  sllv  $t7, $t4, $t2
/* 004282D8 05E2002A */  bltzl $t7, .L00428384
/* 004282DC 24010036 */   li    $at, 54
/* 004282E0 A0600001 */  sb    $zero, 1($v1)
/* 004282E4 10000026 */  b     .L00428380
/* 004282E8 92220010 */   lbu   $v0, 0x10($s1)
.L004282EC:
/* 004282EC 13200009 */  beqz  $t9, .L00428314
/* 004282F0 00000000 */   nop   
/* 004282F4 8F8D8044 */  lw    $t5, %got(D_100105F0)($gp)
/* 004282F8 00025943 */  sra   $t3, $v0, 5
/* 004282FC 000B4080 */  sll   $t0, $t3, 2
/* 00428300 25AD05F0 */  addiu $t5, %lo(D_100105F0) # addiu $t5, $t5, 0x5f0
/* 00428304 01A8C021 */  addu  $t8, $t5, $t0
/* 00428308 8F090000 */  lw    $t1, ($t8)
/* 0042830C 00497004 */  sllv  $t6, $t1, $v0
/* 00428310 29D90000 */  slti  $t9, $t6, 0
.L00428314:
/* 00428314 5320000F */  beql  $t9, $zero, .L00428354
/* 00428318 8E230014 */   lw    $v1, 0x14($s1)
/* 0042831C 8E230014 */  lw    $v1, 0x14($s1)
/* 00428320 3C011200 */  lui   $at, 0x1200
/* 00428324 906A0000 */  lbu   $t2, ($v1)
/* 00428328 2D4F0020 */  sltiu $t7, $t2, 0x20
/* 0042832C 000F5823 */  negu  $t3, $t7
/* 00428330 01616824 */  and   $t5, $t3, $at
/* 00428334 014D4004 */  sllv  $t0, $t5, $t2
/* 00428338 05030012 */  bgezl $t0, .L00428384
/* 0042833C 24010036 */   li    $at, 54
/* 00428340 92380024 */  lbu   $t8, 0x24($s1)
/* 00428344 A0780001 */  sb    $t8, 1($v1)
/* 00428348 1000000D */  b     .L00428380
/* 0042834C 92220010 */   lbu   $v0, 0x10($s1)
/* 00428350 8E230014 */  lw    $v1, 0x14($s1)
.L00428354:
/* 00428354 3C011200 */  lui   $at, 0x1200
/* 00428358 90690000 */  lbu   $t1, ($v1)
/* 0042835C 2D2E0020 */  sltiu $t6, $t1, 0x20
/* 00428360 000E6023 */  negu  $t4, $t6
/* 00428364 0181C824 */  and   $t9, $t4, $at
/* 00428368 01397804 */  sllv  $t7, $t9, $t1
/* 0042836C 05E30005 */  bgezl $t7, .L00428384
/* 00428370 24010036 */   li    $at, 54
/* 00428374 922B0001 */  lbu   $t3, 1($s1)
/* 00428378 A06B0001 */  sb    $t3, 1($v1)
/* 0042837C 92220010 */  lbu   $v0, 0x10($s1)
.L00428380:
/* 00428380 24010036 */  li    $at, 54
.L00428384:
/* 00428384 54410037 */  bnel  $v0, $at, .L00428464
/* 00428388 92380010 */   lbu   $t8, 0x10($s1)
/* 0042838C 8E240014 */  lw    $a0, 0x14($s1)
/* 00428390 24010001 */  li    $at, 1
/* 00428394 908D0000 */  lbu   $t5, ($a0)
/* 00428398 55A10032 */  bnel  $t5, $at, .L00428464
/* 0042839C 92380010 */   lbu   $t8, 0x10($s1)
/* 004283A0 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 004283A4 8FA5003C */  lw    $a1, 0x3c($sp)
/* 004283A8 27A60078 */  addiu $a2, $sp, 0x78
/* 004283AC 0320F809 */  jalr  $t9
/* 004283B0 24070001 */   li    $a3, 1
/* 004283B4 1440002A */  bnez  $v0, .L00428460
/* 004283B8 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004283BC 8F908DA4 */  lw     $s0, %got(u)($gp)
/* 004283C0 92280001 */  lbu   $t0, 1($s1)
/* 004283C4 8F818DA4 */  lw     $at, %got(u)($gp)
/* 004283C8 92020001 */  lbu   $v0, 1($s0)
/* 004283CC 240A0052 */  li    $t2, 82
/* 004283D0 A20A0000 */  sb    $t2, ($s0)
/* 004283D4 0002C6C0 */  sll   $t8, $v0, 0x1b
/* 004283D8 001876C2 */  srl   $t6, $t8, 0x1b
/* 004283DC 010E6026 */  xor   $t4, $t0, $t6
/* 004283E0 3199001F */  andi  $t9, $t4, 0x1f
/* 004283E4 03224826 */  xor   $t1, $t9, $v0
/* 004283E8 A0290001 */  sb    $t1, 1($at)
/* 004283EC 8E230014 */  lw    $v1, 0x14($s1)
/* 004283F0 92020001 */  lbu   $v0, 1($s0)
/* 004283F4 8F818DA4 */  lw     $at, %got(u)($gp)
/* 004283F8 906B001E */  lbu   $t3, 0x1e($v1)
/* 004283FC 00026E00 */  sll   $t5, $v0, 0x18
/* 00428400 000D5742 */  srl   $t2, $t5, 0x1d
/* 00428404 016AC026 */  xor   $t8, $t3, $t2
/* 00428408 00184740 */  sll   $t0, $t8, 0x1d
/* 0042840C 00087602 */  srl   $t6, $t0, 0x18
/* 00428410 01C26026 */  xor   $t4, $t6, $v0
/* 00428414 A02C0001 */  sb    $t4, 1($at)
/* 00428418 8C79001C */  lw    $t9, 0x1c($v1)
/* 0042841C 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00428420 02002025 */  move  $a0, $s0
/* 00428424 00194AC2 */  srl   $t1, $t9, 0xb
/* 00428428 AC290004 */  sw    $t1, 4($at)
/* 0042842C 8E2D001C */  lw    $t5, 0x1c($s1)
/* 00428430 8C6F0010 */  lw    $t7, 0x10($v1)
/* 00428434 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00428438 01ED5821 */  addu  $t3, $t7, $t5
/* 0042843C AC2B000C */  sw    $t3, 0xc($at)
/* 00428440 962A0024 */  lhu   $t2, 0x24($s1)
/* 00428444 A6000002 */  sh    $zero, 2($s0)
/* 00428448 AE0A0008 */  sw    $t2, 8($s0)
/* 0042844C 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00428450 0320F809 */  jalr  $t9
/* 00428454 00000000 */   nop   
/* 00428458 1000014D */  b     .L00428990
/* 0042845C 8FBC0028 */   lw    $gp, 0x28($sp)
.L00428460:
/* 00428460 92380010 */  lbu   $t8, 0x10($s1)
.L00428464:
/* 00428464 8E240014 */  lw    $a0, 0x14($s1)
/* 00428468 2708FFE0 */  addiu $t0, $t8, -0x20
/* 0042846C 2D0E0080 */  sltiu $t6, $t0, 0x80
/* 00428470 11C00009 */  beqz  $t6, .L00428498
/* 00428474 00000000 */   nop   
/* 00428478 8F898044 */  lw    $t1, %got(D_10010604)($gp)
/* 0042847C 00086143 */  sra   $t4, $t0, 5
/* 00428480 000CC880 */  sll   $t9, $t4, 2
/* 00428484 25290604 */  addiu $t1, %lo(D_10010604) # addiu $t1, $t1, 0x604
/* 00428488 01397821 */  addu  $t7, $t1, $t9
/* 0042848C 8DED0000 */  lw    $t5, ($t7)
/* 00428490 010D5804 */  sllv  $t3, $t5, $t0
/* 00428494 296E0000 */  slti  $t6, $t3, 0
.L00428498:
/* 00428498 11C0000B */  beqz  $t6, .L004284C8
/* 0042849C 00000000 */   nop   
/* 004284A0 8F99801C */  lw    $t9, %got(func_00426FA4)($gp)
/* 004284A4 8E380008 */  lw    $t8, 8($s1)
/* 004284A8 00002825 */  move  $a1, $zero
/* 004284AC 27396FA4 */  addiu $t9, %lo(func_00426FA4) # addiu $t9, $t9, 0x6fa4
/* 004284B0 00003825 */  move  $a3, $zero
/* 004284B4 8FA2007C */  lw    $v0, 0x7c($sp)
/* 004284B8 0320F809 */  jalr  $t9
/* 004284BC 8F060034 */   lw    $a2, 0x34($t8)
/* 004284C0 10000009 */  b     .L004284E8
/* 004284C4 8FBC0028 */   lw    $gp, 0x28($sp)
.L004284C8:
/* 004284C8 8F99801C */  lw    $t9, %got(func_00426FA4)($gp)
/* 004284CC 00002825 */  move  $a1, $zero
/* 004284D0 00003025 */  move  $a2, $zero
/* 004284D4 27396FA4 */  addiu $t9, %lo(func_00426FA4) # addiu $t9, $t9, 0x6fa4
/* 004284D8 00003825 */  move  $a3, $zero
/* 004284DC 0320F809 */  jalr  $t9
/* 004284E0 8FA2007C */   lw    $v0, 0x7c($sp)
/* 004284E4 8FBC0028 */  lw    $gp, 0x28($sp)
.L004284E8:
/* 004284E8 92220010 */  lbu   $v0, 0x10($s1)
/* 004284EC 2401000B */  li    $at, 11
/* 004284F0 54410064 */  bnel  $v0, $at, .L00428684
/* 004284F4 2C4A0060 */   sltiu $t2, $v0, 0x60
/* 004284F8 8E230008 */  lw    $v1, 8($s1)
/* 004284FC 8C620038 */  lw    $v0, 0x38($v1)
/* 00428500 8C4C0004 */  lw    $t4, 4($v0)
/* 00428504 51800004 */  beql  $t4, $zero, .L00428518
/* 00428508 8C65003C */   lw    $a1, 0x3c($v1)
/* 0042850C 10000002 */  b     .L00428518
/* 00428510 00402825 */   move  $a1, $v0
/* 00428514 8C65003C */  lw    $a1, 0x3c($v1)
.L00428518:
/* 00428518 8CA2002C */  lw    $v0, 0x2c($a1)
/* 0042851C 24010001 */  li    $at, 1
/* 00428520 27A90068 */  addiu $t1, $sp, 0x68
/* 00428524 10410020 */  beq   $v0, $at, .L004285A8
/* 00428528 240D0004 */   li    $t5, 4
/* 0042852C AFA20068 */  sw    $v0, 0x68($sp)
/* 00428530 8D260000 */  lw    $a2, ($t1)
/* 00428534 8F998298 */  lw    $t9, %call16(genloadnum)($gp)
/* 00428538 24080001 */  li    $t0, 1
/* 0042853C AFA60008 */  sw    $a2, 8($sp)
/* 00428540 8D270004 */  lw    $a3, 4($t1)
/* 00428544 AFA50074 */  sw    $a1, 0x74($sp)
/* 00428548 AFA80014 */  sw    $t0, 0x14($sp)
/* 0042854C AFAD0010 */  sw    $t5, 0x10($sp)
/* 00428550 90640001 */  lbu   $a0, 1($v1)
/* 00428554 0320F809 */  jalr  $t9
/* 00428558 AFA7000C */   sw    $a3, 0xc($sp)
/* 0042855C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00428560 240B005B */  li    $t3, 91
/* 00428564 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00428568 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042856C A08B0000 */  sb    $t3, ($a0)
/* 00428570 8E2A0008 */  lw    $t2, 8($s1)
/* 00428574 90820001 */  lbu   $v0, 1($a0)
/* 00428578 914E0001 */  lbu   $t6, 1($t2)
/* 0042857C 0002C6C0 */  sll   $t8, $v0, 0x1b
/* 00428580 001866C2 */  srl   $t4, $t8, 0x1b
/* 00428584 01CC4826 */  xor   $t1, $t6, $t4
/* 00428588 3139001F */  andi  $t9, $t1, 0x1f
/* 0042858C 03227826 */  xor   $t7, $t9, $v0
/* 00428590 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00428594 A02F0001 */  sb    $t7, 1($at)
/* 00428598 0320F809 */  jalr  $t9
/* 0042859C 00000000 */   nop   
/* 004285A0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004285A4 8FA50074 */  lw    $a1, 0x74($sp)
.L004285A8:
/* 004285A8 8CA20028 */  lw    $v0, 0x28($a1)
/* 004285AC 24010001 */  li    $at, 1
/* 004285B0 8F908DA4 */  lw     $s0, %got(u)($gp)
/* 004285B4 904D0000 */  lbu   $t5, ($v0)
/* 004285B8 11A10004 */  beq   $t5, $at, .L004285CC
/* 004285BC 00000000 */   nop   
/* 004285C0 8C480010 */  lw    $t0, 0x10($v0)
/* 004285C4 51000019 */  beql  $t0, $zero, .L0042862C
/* 004285C8 8E240018 */   lw    $a0, 0x18($s1)
.L004285CC:
/* 004285CC 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 004285D0 24A40008 */  addiu $a0, $a1, 8
/* 004285D4 AFA50074 */  sw    $a1, 0x74($sp)
/* 004285D8 0320F809 */  jalr  $t9
/* 004285DC 00000000 */   nop   
/* 004285E0 8FA50074 */  lw    $a1, 0x74($sp)
/* 004285E4 92020001 */  lbu   $v0, 1($s0)
/* 004285E8 240B0001 */  li    $t3, 1
/* 004285EC 8CAA0028 */  lw    $t2, 0x28($a1)
/* 004285F0 A20B0000 */  sb    $t3, ($s0)
/* 004285F4 000276C0 */  sll   $t6, $v0, 0x1b
/* 004285F8 91580001 */  lbu   $t8, 1($t2)
/* 004285FC 000E66C2 */  srl   $t4, $t6, 0x1b
/* 00428600 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00428604 030C4826 */  xor   $t1, $t8, $t4
/* 00428608 3139001F */  andi  $t9, $t1, 0x1f
/* 0042860C 03227826 */  xor   $t7, $t9, $v0
/* 00428610 A20F0001 */  sb    $t7, 1($s0)
/* 00428614 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00428618 02002025 */  move  $a0, $s0
/* 0042861C 0320F809 */  jalr  $t9
/* 00428620 00000000 */   nop   
/* 00428624 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00428628 8E240018 */  lw    $a0, 0x18($s1)
.L0042862C:
/* 0042862C 00002825 */  move  $a1, $zero
/* 00428630 508000D8 */  beql  $a0, $zero, .L00428994
/* 00428634 93A80087 */   lbu   $t0, 0x87($sp)
/* 00428638 8F99801C */  lw    $t9, %got(func_00426FA4)($gp)
/* 0042863C 00003025 */  move  $a2, $zero
/* 00428640 00003825 */  move  $a3, $zero
/* 00428644 27396FA4 */  addiu $t9, %lo(func_00426FA4) # addiu $t9, $t9, 0x6fa4
/* 00428648 0320F809 */  jalr  $t9
/* 0042864C 8FA2007C */   lw    $v0, 0x7c($sp)
/* 00428650 92080001 */  lbu   $t0, 1($s0)
/* 00428654 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00428658 240D0001 */  li    $t5, 1
/* 0042865C 310BFFE0 */  andi  $t3, $t0, 0xffe0
/* 00428660 A20D0000 */  sb    $t5, ($s0)
/* 00428664 A20B0001 */  sb    $t3, 1($s0)
/* 00428668 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042866C 02002025 */  move  $a0, $s0
/* 00428670 0320F809 */  jalr  $t9
/* 00428674 00000000 */   nop   
/* 00428678 100000C5 */  b     .L00428990
/* 0042867C 8FBC0028 */   lw    $gp, 0x28($sp)
.L00428680:
/* 00428680 2C4A0060 */  sltiu $t2, $v0, 0x60
.L00428684:
/* 00428684 11400009 */  beqz  $t2, .L004286AC
/* 00428688 00000000 */   nop   
/* 0042868C 8F8C8044 */  lw    $t4, %got(D_100105E4)($gp)
/* 00428690 00027143 */  sra   $t6, $v0, 5
/* 00428694 000EC080 */  sll   $t8, $t6, 2
/* 00428698 258C05E4 */  addiu $t4, %lo(D_100105E4) # addiu $t4, $t4, 0x5e4
/* 0042869C 01984821 */  addu  $t1, $t4, $t8
/* 004286A0 8D390000 */  lw    $t9, ($t1)
/* 004286A4 00597804 */  sllv  $t7, $t9, $v0
/* 004286A8 29EA0000 */  slti  $t2, $t7, 0
.L004286AC:
/* 004286AC 51400007 */  beql  $t2, $zero, .L004286CC
/* 004286B0 2443FFE0 */   addiu $v1, $v0, -0x20
/* 004286B4 8E28001C */  lw    $t0, 0x1c($s1)
/* 004286B8 8F818DA4 */  lw     $at, %got(u)($gp)
/* 004286BC 2443FFE0 */  addiu $v1, $v0, -0x20
/* 004286C0 1000005D */  b     .L00428838
/* 004286C4 AC280004 */   sw    $t0, 4($at)
/* 004286C8 2443FFE0 */  addiu $v1, $v0, -0x20
.L004286CC:
/* 004286CC 2C6B0080 */  sltiu $t3, $v1, 0x80
/* 004286D0 11600009 */  beqz  $t3, .L004286F8
/* 004286D4 00000000 */   nop   
/* 004286D8 8F988044 */  lw    $t8, %got(D_10010604)($gp)
/* 004286DC 00037143 */  sra   $t6, $v1, 5
/* 004286E0 000E6080 */  sll   $t4, $t6, 2
/* 004286E4 27180604 */  addiu $t8, %lo(D_10010604) # addiu $t8, $t8, 0x604
/* 004286E8 030C4821 */  addu  $t1, $t8, $t4
/* 004286EC 8D390000 */  lw    $t9, ($t1)
/* 004286F0 00797804 */  sllv  $t7, $t9, $v1
/* 004286F4 29EB0000 */  slti  $t3, $t7, 0
.L004286F8:
/* 004286F8 5160000E */  beql  $t3, $zero, .L00428734
/* 004286FC 2C4C00A0 */   sltiu $t4, $v0, 0xa0
/* 00428700 8F908DA4 */  lw     $s0, %got(u)($gp)
/* 00428704 8E2A001C */  lw    $t2, 0x1c($s1)
/* 00428708 96280024 */  lhu   $t0, 0x24($s1)
/* 0042870C 922E0013 */  lbu   $t6, 0x13($s1)
/* 00428710 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00428714 AE0A0004 */  sw    $t2, 4($s0)
/* 00428718 AE080008 */  sw    $t0, 8($s0)
/* 0042871C A42E0002 */  sh    $t6, 2($at)
/* 00428720 96380026 */  lhu   $t8, 0x26($s1)
/* 00428724 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00428728 10000043 */  b     .L00428838
/* 0042872C AC38000C */   sw    $t8, 0xc($at)
/* 00428730 2C4C00A0 */  sltiu $t4, $v0, 0xa0
.L00428734:
/* 00428734 11800009 */  beqz  $t4, .L0042875C
/* 00428738 00000000 */   nop   
/* 0042873C 8F8F8044 */  lw    $t7, %got(D_100105F0)($gp)
/* 00428740 00024943 */  sra   $t1, $v0, 5
/* 00428744 0009C880 */  sll   $t9, $t1, 2
/* 00428748 25EF05F0 */  addiu $t7, %lo(D_100105F0) # addiu $t7, $t7, 0x5f0
/* 0042874C 01F96821 */  addu  $t5, $t7, $t9
/* 00428750 8DAB0000 */  lw    $t3, ($t5)
/* 00428754 004B5004 */  sllv  $t2, $t3, $v0
/* 00428758 294C0000 */  slti  $t4, $t2, 0
.L0042875C:
/* 0042875C 51800006 */  beql  $t4, $zero, .L00428778
/* 00428760 2C780020 */   sltiu $t8, $v1, 0x20
/* 00428764 8F908DA4 */  lw     $s0, %got(u)($gp)
/* 00428768 922E0024 */  lbu   $t6, 0x24($s1)
/* 0042876C 10000032 */  b     .L00428838
/* 00428770 A20E0008 */   sb    $t6, 8($s0)
/* 00428774 2C780020 */  sltiu $t8, $v1, 0x20
.L00428778:
/* 00428778 3C010003 */  lui   $at, 3
/* 0042877C 34218C80 */  ori   $at, $at, 0x8c80
/* 00428780 00184823 */  negu  $t1, $t8
/* 00428784 01217824 */  and   $t7, $t1, $at
/* 00428788 006FC804 */  sllv  $t9, $t7, $v1
/* 0042878C 0723000D */  bgezl $t9, .L004287C4
/* 00428790 24010002 */   li    $at, 2
/* 00428794 8F908DA4 */  lw     $s0, %got(u)($gp)
/* 00428798 8E28001C */  lw    $t0, 0x1c($s1)
/* 0042879C 962C0024 */  lhu   $t4, 0x24($s1)
/* 004287A0 920D0001 */  lbu   $t5, 1($s0)
/* 004287A4 8F818DA4 */  lw     $at, %got(u)($gp)
/* 004287A8 AE080008 */  sw    $t0, 8($s0)
/* 004287AC 31ABFFE0 */  andi  $t3, $t5, 0xffe0
/* 004287B0 356A0009 */  ori   $t2, $t3, 9
/* 004287B4 A20A0001 */  sb    $t2, 1($s0)
/* 004287B8 1000001F */  b     .L00428838
/* 004287BC AC2C0004 */   sw    $t4, 4($at)
/* 004287C0 24010002 */  li    $at, 2
.L004287C4:
/* 004287C4 54410008 */  bnel  $v0, $at, .L004287E8
/* 004287C8 2C4900A0 */   sltiu $t1, $v0, 0xa0
/* 004287CC 8F908DA4 */  lw     $s0, %got(u)($gp)
/* 004287D0 8E2E001C */  lw    $t6, 0x1c($s1)
/* 004287D4 96380024 */  lhu   $t8, 0x24($s1)
/* 004287D8 AE0E000C */  sw    $t6, 0xc($s0)
/* 004287DC 10000016 */  b     .L00428838
/* 004287E0 AE180008 */   sw    $t8, 8($s0)
/* 004287E4 2C4900A0 */  sltiu $t1, $v0, 0xa0
.L004287E8:
/* 004287E8 11200009 */  beqz  $t1, .L00428810
/* 004287EC 00000000 */   nop   
/* 004287F0 8F8D8044 */  lw    $t5, %got(D_100105D0)($gp)
/* 004287F4 00027943 */  sra   $t7, $v0, 5
/* 004287F8 000FC880 */  sll   $t9, $t7, 2
/* 004287FC 25AD05D0 */  addiu $t5, %lo(D_100105D0) # addiu $t5, $t5, 0x5d0
/* 00428800 01B95821 */  addu  $t3, $t5, $t9
/* 00428804 8D6A0000 */  lw    $t2, ($t3)
/* 00428808 004A4004 */  sllv  $t0, $t2, $v0
/* 0042880C 29090000 */  slti  $t1, $t0, 0
.L00428810:
/* 00428810 5120000A */  beql  $t1, $zero, .L0042883C
/* 00428814 2C6F0080 */   sltiu $t7, $v1, 0x80
/* 00428818 8F908DA4 */  lw     $s0, %got(u)($gp)
/* 0042881C 8E2E001C */  lw    $t6, 0x1c($s1)
/* 00428820 2401003A */  li    $at, 58
/* 00428824 14410004 */  bne   $v0, $at, .L00428838
/* 00428828 AE0E0008 */   sw    $t6, 8($s0)
/* 0042882C 96380024 */  lhu   $t8, 0x24($s1)
/* 00428830 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00428834 AC380004 */  sw    $t8, 4($at)
.L00428838:
/* 00428838 2C6F0080 */  sltiu $t7, $v1, 0x80
.L0042883C:
/* 0042883C 11E00009 */  beqz  $t7, .L00428864
/* 00428840 8F908DA4 */   lw     $s0, %got(u)($gp)
/* 00428844 8F8B8044 */  lw    $t3, %got(D_10010604)($gp)
/* 00428848 00036943 */  sra   $t5, $v1, 5
/* 0042884C 000DC880 */  sll   $t9, $t5, 2
/* 00428850 256B0604 */  addiu $t3, %lo(D_10010604) # addiu $t3, $t3, 0x604
/* 00428854 01795021 */  addu  $t2, $t3, $t9
/* 00428858 8D480000 */  lw    $t0, ($t2)
/* 0042885C 00686004 */  sllv  $t4, $t0, $v1
/* 00428860 298F0000 */  slti  $t7, $t4, 0
.L00428864:
/* 00428864 15E00022 */  bnez  $t7, .L004288F0
/* 00428868 24010033 */   li    $at, 51
/* 0042886C 922E0011 */  lbu   $t6, 0x11($s1)
/* 00428870 2C780040 */  sltiu $t8, $v1, 0x40
/* 00428874 51C0001E */  beql  $t6, $zero, .L004288F0
/* 00428878 A6000002 */   sh    $zero, 2($s0)
/* 0042887C 13000009 */  beqz  $t8, .L004288A4
/* 00428880 2C4F0080 */   sltiu $t7, $v0, 0x80
/* 00428884 8F998044 */  lw    $t9, %got(D_100105C8)($gp)
/* 00428888 00036943 */  sra   $t5, $v1, 5
/* 0042888C 000D5880 */  sll   $t3, $t5, 2
/* 00428890 273905C8 */  addiu $t9, %lo(D_100105C8) # addiu $t9, $t9, 0x5c8
/* 00428894 032B5021 */  addu  $t2, $t9, $t3
/* 00428898 8D480000 */  lw    $t0, ($t2)
/* 0042889C 00686004 */  sllv  $t4, $t0, $v1
/* 004288A0 29980000 */  slti  $t8, $t4, 0
.L004288A4:
/* 004288A4 57000012 */  bnezl $t8, .L004288F0
/* 004288A8 A6000002 */   sh    $zero, 2($s0)
/* 004288AC 11E00009 */  beqz  $t7, .L004288D4
/* 004288B0 24090002 */   li    $t1, 2
/* 004288B4 8F998044 */  lw    $t9, %got(D_100105B8)($gp)
/* 004288B8 00027143 */  sra   $t6, $v0, 5
/* 004288BC 000E6880 */  sll   $t5, $t6, 2
/* 004288C0 273905B8 */  addiu $t9, %lo(D_100105B8) # addiu $t9, $t9, 0x5b8
/* 004288C4 032D5821 */  addu  $t3, $t9, $t5
/* 004288C8 8D6A0000 */  lw    $t2, ($t3)
/* 004288CC 004A4004 */  sllv  $t0, $t2, $v0
/* 004288D0 290F0000 */  slti  $t7, $t0, 0
.L004288D4:
/* 004288D4 11E00003 */  beqz  $t7, .L004288E4
/* 004288D8 00000000 */   nop   
/* 004288DC 10000004 */  b     .L004288F0
/* 004288E0 A6090002 */   sh    $t1, 2($s0)
.L004288E4:
/* 004288E4 10000002 */  b     .L004288F0
/* 004288E8 A6000002 */   sh    $zero, 2($s0)
/* 004288EC A6000002 */  sh    $zero, 2($s0)
.L004288F0:
/* 004288F0 14410007 */  bne   $v0, $at, .L00428910
/* 004288F4 2C680020 */   sltiu $t0, $v1, 0x20
/* 004288F8 960E0002 */  lhu   $t6, 2($s0)
/* 004288FC 24180036 */  li    $t8, 54
/* 00428900 A2180000 */  sb    $t8, ($s0)
/* 00428904 35D90001 */  ori   $t9, $t6, 1
/* 00428908 1000000C */  b     .L0042893C
/* 0042890C A6190002 */   sh    $t9, 2($s0)
.L00428910:
/* 00428910 2401009A */  li    $at, 154
/* 00428914 14410007 */  bne   $v0, $at, .L00428934
/* 00428918 00000000 */   nop   
/* 0042891C 960B0002 */  lhu   $t3, 2($s0)
/* 00428920 240D0093 */  li    $t5, 147
/* 00428924 A20D0000 */  sb    $t5, ($s0)
/* 00428928 356A0001 */  ori   $t2, $t3, 1
/* 0042892C 10000003 */  b     .L0042893C
/* 00428930 A60A0002 */   sh    $t2, 2($s0)
.L00428934:
/* 00428934 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00428938 A0220000 */  sb    $v0, ($at)
.L0042893C:
/* 0042893C 3C010003 */  lui   $at, 3
/* 00428940 34218C80 */  ori   $at, $at, 0x8c80
/* 00428944 00086023 */  negu  $t4, $t0
/* 00428948 01817824 */  and   $t7, $t4, $at
/* 0042894C 006F4804 */  sllv  $t1, $t7, $v1
/* 00428950 0520000A */  bltz  $t1, .L0042897C
/* 00428954 00000000 */   nop   
/* 00428958 92020001 */  lbu   $v0, 1($s0)
/* 0042895C 92380001 */  lbu   $t8, 1($s1)
/* 00428960 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00428964 000276C0 */  sll   $t6, $v0, 0x1b
/* 00428968 000ECEC2 */  srl   $t9, $t6, 0x1b
/* 0042896C 03196826 */  xor   $t5, $t8, $t9
/* 00428970 31AB001F */  andi  $t3, $t5, 0x1f
/* 00428974 01625026 */  xor   $t2, $t3, $v0
/* 00428978 A02A0001 */  sb    $t2, 1($at)
.L0042897C:
/* 0042897C 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00428980 02002025 */  move  $a0, $s0
/* 00428984 0320F809 */  jalr  $t9
/* 00428988 00000000 */   nop   
/* 0042898C 8FBC0028 */  lw    $gp, 0x28($sp)
.L00428990:
/* 00428990 93A80087 */  lbu   $t0, 0x87($sp)
.L00428994:
/* 00428994 5100010C */  beql  $t0, $zero, .L00428DC8
/* 00428998 8FBF002C */   lw    $ra, 0x2c($sp)
/* 0042899C 8FAC007C */  lw    $t4, 0x7c($sp)
/* 004289A0 93A9008F */  lbu   $t1, 0x8f($sp)
/* 004289A4 240E007E */  li    $t6, 126
/* 004289A8 8D8FFFF4 */  lw    $t7, -0xc($t4)
/* 004289AC 11200021 */  beqz  $t1, .L00428A34
/* 004289B0 AFAF003C */   sw    $t7, 0x3c($sp)
/* 004289B4 92180001 */  lbu   $t8, 1($s0)
/* 004289B8 A20E0000 */  sb    $t6, ($s0)
/* 004289BC A2000008 */  sb    $zero, 8($s0)
/* 004289C0 3319FFE0 */  andi  $t9, $t8, 0xffe0
/* 004289C4 A2190001 */  sb    $t9, 1($s0)
/* 004289C8 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 004289CC 02002025 */  move  $a0, $s0
/* 004289D0 0320F809 */  jalr  $t9
/* 004289D4 00000000 */   nop   
/* 004289D8 920B0001 */  lbu   $t3, 1($s0)
/* 004289DC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004289E0 240D007D */  li    $t5, 125
/* 004289E4 316AFFE0 */  andi  $t2, $t3, 0xffe0
/* 004289E8 A20D0000 */  sb    $t5, ($s0)
/* 004289EC A20A0001 */  sb    $t2, 1($s0)
/* 004289F0 A6000002 */  sh    $zero, 2($s0)
/* 004289F4 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 004289F8 02002025 */  move  $a0, $s0
/* 004289FC 0320F809 */  jalr  $t9
/* 00428A00 00000000 */   nop   
/* 00428A04 920C0001 */  lbu   $t4, 1($s0)
/* 00428A08 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00428A0C 24080001 */  li    $t0, 1
/* 00428A10 318FFFE0 */  andi  $t7, $t4, 0xffe0
/* 00428A14 A2080000 */  sb    $t0, ($s0)
/* 00428A18 A20F0001 */  sb    $t7, 1($s0)
/* 00428A1C A6000002 */  sh    $zero, 2($s0)
/* 00428A20 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00428A24 02002025 */  move  $a0, $s0
/* 00428A28 0320F809 */  jalr  $t9
/* 00428A2C 00000000 */   nop   
/* 00428A30 8FBC0028 */  lw    $gp, 0x28($sp)
.L00428A34:
/* 00428A34 92290010 */  lbu   $t1, 0x10($s1)
/* 00428A38 2401000B */  li    $at, 11
/* 00428A3C 5521000E */  bnel  $t1, $at, .L00428A78
/* 00428A40 922D0012 */   lbu   $t5, 0x12($s1)
/* 00428A44 8E230008 */  lw    $v1, 8($s1)
/* 00428A48 8C620038 */  lw    $v0, 0x38($v1)
/* 00428A4C 8C4E0004 */  lw    $t6, 4($v0)
/* 00428A50 51C00004 */  beql  $t6, $zero, .L00428A64
/* 00428A54 8C65003C */   lw    $a1, 0x3c($v1)
/* 00428A58 10000002 */  b     .L00428A64
/* 00428A5C 00402825 */   move  $a1, $v0
/* 00428A60 8C65003C */  lw    $a1, 0x3c($v1)
.L00428A64:
/* 00428A64 8CB80004 */  lw    $t8, 4($a1)
/* 00428A68 93190012 */  lbu   $t9, 0x12($t8)
/* 00428A6C 10000003 */  b     .L00428A7C
/* 00428A70 A3B9005F */   sb    $t9, 0x5f($sp)
/* 00428A74 922D0012 */  lbu   $t5, 0x12($s1)
.L00428A78:
/* 00428A78 A3AD005F */  sb    $t5, 0x5f($sp)
.L00428A7C:
/* 00428A7C 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 00428A80 02202025 */  move  $a0, $s1
/* 00428A84 8FA5003C */  lw    $a1, 0x3c($sp)
/* 00428A88 27A60078 */  addiu $a2, $sp, 0x78
/* 00428A8C 0320F809 */  jalr  $t9
/* 00428A90 00003825 */   move  $a3, $zero
/* 00428A94 1040000F */  beqz  $v0, .L00428AD4
/* 00428A98 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00428A9C 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 00428AA0 93A4005F */  lbu   $a0, 0x5f($sp)
/* 00428AA4 0320F809 */  jalr  $t9
/* 00428AA8 00000000 */   nop   
/* 00428AAC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00428AB0 2404007B */  li    $a0, 123
/* 00428AB4 8FA50078 */  lw    $a1, 0x78($sp)
/* 00428AB8 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00428ABC 93A6005F */  lbu   $a2, 0x5f($sp)
/* 00428AC0 00403825 */  move  $a3, $v0
/* 00428AC4 0320F809 */  jalr  $t9
/* 00428AC8 00000000 */   nop   
/* 00428ACC 10000007 */  b     .L00428AEC
/* 00428AD0 8FBC0028 */   lw    $gp, 0x28($sp)
.L00428AD4:
/* 00428AD4 8F998290 */  lw    $t9, %call16(spilltemplodstr)($gp)
/* 00428AD8 2404007B */  li    $a0, 123
/* 00428ADC 93A5005F */  lbu   $a1, 0x5f($sp)
/* 00428AE0 0320F809 */  jalr  $t9
/* 00428AE4 8E260020 */   lw    $a2, 0x20($s1)
/* 00428AE8 8FBC0028 */  lw    $gp, 0x28($sp)
.L00428AEC:
/* 00428AEC 922B0010 */  lbu   $t3, 0x10($s1)
/* 00428AF0 2D6A00A0 */  sltiu $t2, $t3, 0xa0
/* 00428AF4 1140000A */  beqz  $t2, .L00428B20
/* 00428AF8 00000000 */   nop   
/* 00428AFC 8F8F8044 */  lw    $t7, %got(D_100105A4)($gp)
/* 00428B00 000B4143 */  sra   $t0, $t3, 5
/* 00428B04 00086080 */  sll   $t4, $t0, 2
/* 00428B08 25EF05A4 */  addiu $t7, %lo(D_100105A4) # addiu $t7, $t7, 0x5a4
/* 00428B0C 01EC4821 */  addu  $t1, $t7, $t4
/* 00428B10 8D2E0000 */  lw    $t6, ($t1)
/* 00428B14 016EC004 */  sllv  $t8, $t6, $t3
/* 00428B18 2B190000 */  slti  $t9, $t8, 0
/* 00428B1C 03205025 */  move  $t2, $t9
.L00428B20:
/* 00428B20 554000A9 */  bnezl $t2, .L00428DC8
/* 00428B24 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00428B28 8E230024 */  lw    $v1, 0x24($s1)
/* 00428B2C 506000A6 */  beql  $v1, $zero, .L00428DC8
/* 00428B30 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00428B34 8F8D89D0 */  lw     $t5, %got(nota_candof)($gp)
/* 00428B38 93A8008F */  lbu   $t0, 0x8f($sp)
/* 00428B3C 8DAD0000 */  lw    $t5, ($t5)
/* 00428B40 51A300A1 */  beql  $t5, $v1, .L00428DC8
/* 00428B44 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00428B48 5500009F */  bnezl $t0, .L00428DC8
/* 00428B4C 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00428B50 8F99801C */  lw    $t9, %got(func_00422D04)($gp)
/* 00428B54 8C640010 */  lw    $a0, 0x10($v1)
/* 00428B58 8FA2007C */  lw    $v0, 0x7c($sp)
                            lw $a1, -0xc($v0)
/* 00428B5C 27392D04 */  addiu $t9, %lo(func_00422D04) # addiu $t9, $t9, 0x2d04
/* 00428B60 0320F809 */  jalr  $t9
/* 00428B64 00000000 */   nop   
/* 00428B68 8E230024 */  lw    $v1, 0x24($s1)
/* 00428B6C 2401FFFF */  li    $at, -1
/* 00428B70 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00428B74 8C6F0008 */  lw    $t7, 8($v1)
/* 00428B78 8C6C0014 */  lw    $t4, 0x14($v1)
/* 00428B7C 2409005E */  li    $t1, 94
/* 00428B80 01EC0019 */  multu $t7, $t4
/* 00428B84 00001012 */  mflo  $v0
/* 00428B88 54410013 */  bnel  $v0, $at, .L00428BD8
/* 00428B8C 24010001 */   li    $at, 1
/* 00428B90 92020001 */  lbu   $v0, 1($s0)
/* 00428B94 93AE005F */  lbu   $t6, 0x5f($sp)
/* 00428B98 A2090000 */  sb    $t1, ($s0)
/* 00428B9C 00025EC0 */  sll   $t3, $v0, 0x1b
/* 00428BA0 000BC6C2 */  srl   $t8, $t3, 0x1b
/* 00428BA4 01D8C826 */  xor   $t9, $t6, $t8
/* 00428BA8 332A001F */  andi  $t2, $t9, 0x1f
/* 00428BAC 01426826 */  xor   $t5, $t2, $v0
/* 00428BB0 A6000002 */  sh    $zero, 2($s0)
/* 00428BB4 A20D0001 */  sb    $t5, 1($s0)
/* 00428BB8 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00428BBC 02002025 */  move  $a0, $s0
/* 00428BC0 0320F809 */  jalr  $t9
/* 00428BC4 00000000 */   nop   
/* 00428BC8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00428BCC 10000022 */  b     .L00428C58
/* 00428BD0 8E230024 */   lw    $v1, 0x24($s1)
/* 00428BD4 24010001 */  li    $at, 1
.L00428BD8:
/* 00428BD8 1041001F */  beq   $v0, $at, .L00428C58
/* 00428BDC 27A80068 */   addiu $t0, $sp, 0x68
/* 00428BE0 AFA20068 */  sw    $v0, 0x68($sp)
/* 00428BE4 8D060000 */  lw    $a2, ($t0)
/* 00428BE8 8F998298 */  lw    $t9, %call16(genloadnum)($gp)
/* 00428BEC 24090004 */  li    $t1, 4
/* 00428BF0 AFA60008 */  sw    $a2, 8($sp)
/* 00428BF4 8D070004 */  lw    $a3, 4($t0)
/* 00428BF8 240B0001 */  li    $t3, 1
/* 00428BFC AFAB0014 */  sw    $t3, 0x14($sp)
/* 00428C00 AFA90010 */  sw    $t1, 0x10($sp)
/* 00428C04 93A4005F */  lbu   $a0, 0x5f($sp)
/* 00428C08 0320F809 */  jalr  $t9
/* 00428C0C AFA7000C */   sw    $a3, 0xc($sp)
/* 00428C10 92020001 */  lbu   $v0, 1($s0)
/* 00428C14 93B8005F */  lbu   $t8, 0x5f($sp)
/* 00428C18 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00428C1C 0002CEC0 */  sll   $t9, $v0, 0x1b
/* 00428C20 001956C2 */  srl   $t2, $t9, 0x1b
/* 00428C24 030A6826 */  xor   $t5, $t8, $t2
/* 00428C28 31A8001F */  andi  $t0, $t5, 0x1f
/* 00428C2C 240E005B */  li    $t6, 91
/* 00428C30 01027826 */  xor   $t7, $t0, $v0
/* 00428C34 A20E0000 */  sb    $t6, ($s0)
/* 00428C38 A6000002 */  sh    $zero, 2($s0)
/* 00428C3C A20F0001 */  sb    $t7, 1($s0)
/* 00428C40 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00428C44 02002025 */  move  $a0, $s0
/* 00428C48 0320F809 */  jalr  $t9
/* 00428C4C 00000000 */   nop   
/* 00428C50 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00428C54 8E230024 */  lw    $v1, 0x24($s1)
.L00428C58:
/* 00428C58 8F8C89EC */  lw     $t4, %got(bittab)($gp)
/* 00428C5C 8C690018 */  lw    $t1, 0x18($v1)
/* 00428C60 8FB9007C */  lw    $t9, 0x7c($sp)
/* 00428C64 8D8C0000 */  lw    $t4, ($t4)
/* 00428C68 000958C0 */  sll   $t3, $t1, 3
/* 00428C6C 8F25FFF4 */  lw    $a1, -0xc($t9)
/* 00428C70 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 00428C74 018B7021 */  addu  $t6, $t4, $t3
/* 00428C78 8DC40000 */  lw    $a0, ($t6)
/* 00428C7C 27A60078 */  addiu $a2, $sp, 0x78
/* 00428C80 00003825 */  move  $a3, $zero
/* 00428C84 0320F809 */  jalr  $t9
/* 00428C88 AFA40058 */   sw    $a0, 0x58($sp)
/* 00428C8C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00428C90 1040000F */  beqz  $v0, .L00428CD0
/* 00428C94 8FA40058 */   lw    $a0, 0x58($sp)
/* 00428C98 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 00428C9C 93A4005F */  lbu   $a0, 0x5f($sp)
/* 00428CA0 0320F809 */  jalr  $t9
/* 00428CA4 00000000 */   nop   
/* 00428CA8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00428CAC 2404007B */  li    $a0, 123
/* 00428CB0 8FA50078 */  lw    $a1, 0x78($sp)
/* 00428CB4 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00428CB8 93A6005F */  lbu   $a2, 0x5f($sp)
/* 00428CBC 00403825 */  move  $a3, $v0
/* 00428CC0 0320F809 */  jalr  $t9
/* 00428CC4 00000000 */   nop   
/* 00428CC8 1000003E */  b     .L00428DC4
/* 00428CCC 8FBC0028 */   lw    $gp, 0x28($sp)
.L00428CD0:
/* 00428CD0 92020001 */  lbu   $v0, 1($s0)
/* 00428CD4 93B8005F */  lbu   $t8, 0x5f($sp)
/* 00428CD8 8F998980 */  lw     $t9, %got(curblk)($gp)
/* 00428CDC 000256C0 */  sll   $t2, $v0, 0x1b
/* 00428CE0 000A6EC2 */  srl   $t5, $t2, 0x1b
/* 00428CE4 030D4026 */  xor   $t0, $t8, $t5
/* 00428CE8 310F001F */  andi  $t7, $t0, 0x1f
/* 00428CEC 01E26026 */  xor   $t4, $t7, $v0
/* 00428CF0 318BFF1F */  andi  $t3, $t4, 0xff1f
/* 00428CF4 A20C0001 */  sb    $t4, 1($s0)
/* 00428CF8 356E0020 */  ori   $t6, $t3, 0x20
/* 00428CFC A20E0001 */  sb    $t6, 1($s0)
/* 00428D00 8F390000 */  lw    $t9, ($t9)
/* 00428D04 8C8A0020 */  lw    $t2, 0x20($a0)
/* 00428D08 8F8D8B48 */  lw     $t5, %got(stack_reversed)($gp)
/* 00428D0C AE190004 */  sw    $t9, 4($s0)
/* 00428D10 8D580004 */  lw    $t8, 4($t2)
/* 00428D14 AE18000C */  sw    $t8, 0xc($s0)
/* 00428D18 91AD0000 */  lbu   $t5, ($t5)
/* 00428D1C 15A0000A */  bnez  $t5, .L00428D48
/* 00428D20 00000000 */   nop   
/* 00428D24 8F8289FC */  lw     $v0, %got(highestmdef)($gp)
/* 00428D28 00187823 */  negu  $t7, $t8
/* 00428D2C 8C490000 */  lw    $t1, ($v0)
/* 00428D30 012F082A */  slt   $at, $t1, $t7
/* 00428D34 10200002 */  beqz  $at, .L00428D40
/* 00428D38 00000000 */   nop   
/* 00428D3C 01E04825 */  move  $t1, $t7
.L00428D40:
/* 00428D40 10000009 */  b     .L00428D68
/* 00428D44 AC490000 */   sw    $t1, ($v0)
.L00428D48:
/* 00428D48 8F8289FC */  lw     $v0, %got(highestmdef)($gp)
/* 00428D4C 8E0C000C */  lw    $t4, 0xc($s0)
/* 00428D50 8C4B0000 */  lw    $t3, ($v0)
/* 00428D54 016C082A */  slt   $at, $t3, $t4
/* 00428D58 50200003 */  beql  $at, $zero, .L00428D68
/* 00428D5C AC4B0000 */   sw    $t3, ($v0)
/* 00428D60 01805825 */  move  $t3, $t4
/* 00428D64 AC4B0000 */  sw    $t3, ($v0)
.L00428D68:
/* 00428D68 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 00428D6C 92040001 */  lbu   $a0, 1($s0)
/* 00428D70 0320F809 */  jalr  $t9
/* 00428D74 3084001F */   andi  $a0, $a0, 0x1f
/* 00428D78 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00428D7C 240E007B */  li    $t6, 123
/* 00428D80 AE020008 */  sw    $v0, 8($s0)
/* 00428D84 A6000002 */  sh    $zero, 2($s0)
/* 00428D88 A20E0000 */  sb    $t6, ($s0)
/* 00428D8C 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00428D90 02002025 */  move  $a0, $s0
/* 00428D94 0320F809 */  jalr  $t9
/* 00428D98 00000000 */   nop   
/* 00428D9C 10000009 */  b     .L00428DC4
/* 00428DA0 8FBC0028 */   lw    $gp, 0x28($sp)
.L00428DA4:
/* 00428DA4 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00428DA8 8F868044 */  lw    $a2, %got(RO_1000B204)($gp)
/* 00428DAC 24040001 */  li    $a0, 1
/* 00428DB0 2405093A */  li    $a1, 2362
/* 00428DB4 2407000A */  li    $a3, 10
/* 00428DB8 0320F809 */  jalr  $t9
/* 00428DBC 24C6B204 */   addiu $a2, %lo(RO_1000B204) # addiu $a2, $a2, -0x4dfc
/* 00428DC0 8FBC0028 */  lw    $gp, 0x28($sp)
.L00428DC4:
/* 00428DC4 8FBF002C */  lw    $ra, 0x2c($sp)
.L00428DC8:
/* 00428DC8 8FB00020 */  lw    $s0, 0x20($sp)
/* 00428DCC 8FB10024 */  lw    $s1, 0x24($sp)
/* 00428DD0 03E00008 */  jr    $ra
/* 00428DD4 27BD0080 */   addiu $sp, $sp, 0x80

    .type func_00428DD8, @function
func_00428DD8:
    # 00428DD8 func_00428DD8
    # 0042933C func_0042933C
    # 0042AADC func_0042AADC
/* 00428DD8 3C1C0FBF */  .cpload $t9
/* 00428DDC 279C14B8 */  
/* 00428DE0 0399E021 */  
/* 00428DE4 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00428DE8 AFB30024 */  sw    $s3, 0x24($sp)
/* 00428DEC AFB20020 */  sw    $s2, 0x20($sp)
/* 00428DF0 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00428DF4 AFB00018 */  sw    $s0, 0x18($sp)
/* 00428DF8 00A08025 */  move  $s0, $a1
/* 00428DFC 00808825 */  move  $s1, $a0
/* 00428E00 24120004 */  li    $s2, 4
/* 00428E04 00409825 */  move  $s3, $v0
/* 00428E08 AFBF002C */  sw    $ra, 0x2c($sp)
/* 00428E0C AFBC0028 */  sw    $gp, 0x28($sp)
.L00428E10:
/* 00428E10 56300004 */  bnel  $s1, $s0, .L00428E24
/* 00428E14 92220000 */   lbu   $v0, ($s1)
/* 00428E18 10000141 */  b     .L00429320
/* 00428E1C 24020001 */   li    $v0, 1
/* 00428E20 92220000 */  lbu   $v0, ($s1)
.L00428E24:
/* 00428E24 1242000E */  beq   $s2, $v0, .L00428E60
/* 00428E28 00000000 */   nop   
/* 00428E2C 92040000 */  lbu   $a0, ($s0)
/* 00428E30 1244000B */  beq   $s2, $a0, .L00428E60
/* 00428E34 00821826 */   xor   $v1, $a0, $v0
/* 00428E38 2C630001 */  sltiu $v1, $v1, 1
/* 00428E3C 10600006 */  beqz  $v1, .L00428E58
/* 00428E40 2C4E0020 */   sltiu $t6, $v0, 0x20
/* 00428E44 000E7823 */  negu  $t7, $t6
/* 00428E48 3C017000 */  lui   $at, 0x7000
/* 00428E4C 01E1C024 */  and   $t8, $t7, $at
/* 00428E50 00581804 */  sllv  $v1, $t8, $v0
/* 00428E54 28630000 */  slti  $v1, $v1, 0
.L00428E58:
/* 00428E58 10000131 */  b     .L00429320
/* 00428E5C 00601025 */   move  $v0, $v1
.L00428E60:
/* 00428E60 16420088 */  bne   $s2, $v0, .L00429084
/* 00428E64 2401005B */   li    $at, 91
/* 00428E68 92190000 */  lbu   $t9, ($s0)
/* 00428E6C 56590086 */  bnel  $s2, $t9, .L00429088
/* 00428E70 920F0000 */   lbu   $t7, ($s0)
/* 00428E74 92220010 */  lbu   $v0, 0x10($s1)
/* 00428E78 92080010 */  lbu   $t0, 0x10($s0)
/* 00428E7C 55020082 */  bnel  $t0, $v0, .L00429088
/* 00428E80 920F0000 */   lbu   $t7, ($s0)
/* 00428E84 54410041 */  bnel  $v0, $at, .L00428F8C
/* 00428E88 2C490060 */   sltiu $t1, $v0, 0x60
/* 00428E8C 8E220014 */  lw    $v0, 0x14($s1)
/* 00428E90 8E090014 */  lw    $t1, 0x14($s0)
/* 00428E94 01221826 */  xor   $v1, $t1, $v0
/* 00428E98 2C630001 */  sltiu $v1, $v1, 1
/* 00428E9C 1060001B */  beqz  $v1, .L00428F0C
/* 00428EA0 00000000 */   nop   
/* 00428EA4 904A0000 */  lbu   $t2, ($v0)
/* 00428EA8 3C017000 */  lui   $at, 0x7000
/* 00428EAC 2D4B0020 */  sltiu $t3, $t2, 0x20
/* 00428EB0 000B6023 */  negu  $t4, $t3
/* 00428EB4 01816824 */  and   $t5, $t4, $at
/* 00428EB8 014D1804 */  sllv  $v1, $t5, $t2
/* 00428EBC 28630000 */  slti  $v1, $v1, 0
/* 00428EC0 14600008 */  bnez  $v1, .L00428EE4
/* 00428EC4 00000000 */   nop   
/* 00428EC8 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00428ECC 8E65FFF4 */  lw    $a1, -0xc($s3)
/* 00428ED0 94440002 */  lhu   $a0, 2($v0)
/* 00428ED4 0320F809 */  jalr  $t9
/* 00428ED8 24A50164 */   addiu $a1, $a1, 0x164
/* 00428EDC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00428EE0 00401825 */  move  $v1, $v0
.L00428EE4:
/* 00428EE4 10600009 */  beqz  $v1, .L00428F0C
/* 00428EE8 00000000 */   nop   
/* 00428EEC 8F998020 */  lw    $t9, %got(func_00428DD8)($gp)
/* 00428EF0 8E240018 */  lw    $a0, 0x18($s1)
/* 00428EF4 8E050018 */  lw    $a1, 0x18($s0)
/* 00428EF8 27398DD8 */  addiu $t9, %lo(func_00428DD8) # addiu $t9, $t9, -0x7228
/* 00428EFC 0320F809 */  jalr  $t9
/* 00428F00 02601025 */   move  $v0, $s3
/* 00428F04 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00428F08 00401825 */  move  $v1, $v0
.L00428F0C:
/* 00428F0C 1460001C */  bnez  $v1, .L00428F80
/* 00428F10 00000000 */   nop   
/* 00428F14 8E220018 */  lw    $v0, 0x18($s1)
/* 00428F18 8E0E0018 */  lw    $t6, 0x18($s0)
/* 00428F1C 01C21826 */  xor   $v1, $t6, $v0
/* 00428F20 2C630001 */  sltiu $v1, $v1, 1
/* 00428F24 10600016 */  beqz  $v1, .L00428F80
/* 00428F28 00000000 */   nop   
/* 00428F2C 904F0000 */  lbu   $t7, ($v0)
/* 00428F30 3C017000 */  lui   $at, 0x7000
/* 00428F34 2DF80020 */  sltiu $t8, $t7, 0x20
/* 00428F38 0018C823 */  negu  $t9, $t8
/* 00428F3C 03214024 */  and   $t0, $t9, $at
/* 00428F40 01E81804 */  sllv  $v1, $t0, $t7
/* 00428F44 28630000 */  slti  $v1, $v1, 0
/* 00428F48 14600008 */  bnez  $v1, .L00428F6C
/* 00428F4C 00000000 */   nop   
/* 00428F50 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00428F54 8E65FFF4 */  lw    $a1, -0xc($s3)
/* 00428F58 94440002 */  lhu   $a0, 2($v0)
/* 00428F5C 0320F809 */  jalr  $t9
/* 00428F60 24A50164 */   addiu $a1, $a1, 0x164
/* 00428F64 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00428F68 00401825 */  move  $v1, $v0
.L00428F6C:
/* 00428F6C 10600004 */  beqz  $v1, .L00428F80
/* 00428F70 00000000 */   nop   
/* 00428F74 8E310014 */  lw    $s1, 0x14($s1)
/* 00428F78 1000FFA5 */  b     .L00428E10
/* 00428F7C 8E100014 */   lw    $s0, 0x14($s0)
.L00428F80:
/* 00428F80 100000E7 */  b     .L00429320
/* 00428F84 00601025 */   move  $v0, $v1
/* 00428F88 2C490060 */  sltiu $t1, $v0, 0x60
.L00428F8C:
/* 00428F8C 1120000A */  beqz  $t1, .L00428FB8
/* 00428F90 00000000 */   nop   
/* 00428F94 8F8D8044 */  lw    $t5, %got(D_10010658)($gp)
/* 00428F98 00025943 */  sra   $t3, $v0, 5
/* 00428F9C 000B6080 */  sll   $t4, $t3, 2
/* 00428FA0 25AD0658 */  addiu $t5, %lo(D_10010658) # addiu $t5, $t5, 0x658
/* 00428FA4 01AC5021 */  addu  $t2, $t5, $t4
/* 00428FA8 8D4E0000 */  lw    $t6, ($t2)
/* 00428FAC 004EC004 */  sllv  $t8, $t6, $v0
/* 00428FB0 2B190000 */  slti  $t9, $t8, 0
/* 00428FB4 03204825 */  move  $t1, $t9
.L00428FB8:
/* 00428FB8 5120000C */  beql  $t1, $zero, .L00428FEC
/* 00428FBC 92220010 */   lbu   $v0, 0x10($s1)
/* 00428FC0 8F998020 */  lw    $t9, %got(func_00428DD8)($gp)
/* 00428FC4 8E240014 */  lw    $a0, 0x14($s1)
/* 00428FC8 8E050014 */  lw    $a1, 0x14($s0)
/* 00428FCC 27398DD8 */  addiu $t9, %lo(func_00428DD8) # addiu $t9, $t9, -0x7228
/* 00428FD0 0320F809 */  jalr  $t9
/* 00428FD4 02601025 */   move  $v0, $s3
/* 00428FD8 10400003 */  beqz  $v0, .L00428FE8
/* 00428FDC 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00428FE0 100000CF */  b     .L00429320
/* 00428FE4 24020001 */   li    $v0, 1
.L00428FE8:
/* 00428FE8 92220010 */  lbu   $v0, 0x10($s1)
.L00428FEC:
/* 00428FEC 24010041 */  li    $at, 65
/* 00428FF0 2C480080 */  sltiu $t0, $v0, 0x80
/* 00428FF4 11000009 */  beqz  $t0, .L0042901C
/* 00428FF8 00000000 */   nop   
/* 00428FFC 8F8D8044 */  lw    $t5, %got(D_10010648)($gp)
/* 00429000 00027943 */  sra   $t7, $v0, 5
/* 00429004 000F5880 */  sll   $t3, $t7, 2
/* 00429008 25AD0648 */  addiu $t5, %lo(D_10010648) # addiu $t5, $t5, 0x648
/* 0042900C 01AB6021 */  addu  $t4, $t5, $t3
/* 00429010 8D8A0000 */  lw    $t2, ($t4)
/* 00429014 004A7004 */  sllv  $t6, $t2, $v0
/* 00429018 29C80000 */  slti  $t0, $t6, 0
.L0042901C:
/* 0042901C 15000007 */  bnez  $t0, .L0042903C
/* 00429020 00000000 */   nop   
/* 00429024 54410018 */  bnel  $v0, $at, .L00429088
/* 00429028 920F0000 */   lbu   $t7, ($s0)
/* 0042902C 8E19001C */  lw    $t9, 0x1c($s0)
/* 00429030 8E29001C */  lw    $t1, 0x1c($s1)
/* 00429034 57290014 */  bnel  $t9, $t1, .L00429088
/* 00429038 920F0000 */   lbu   $t7, ($s0)
.L0042903C:
/* 0042903C 8F998020 */  lw    $t9, %got(func_00428DD8)($gp)
/* 00429040 8E240014 */  lw    $a0, 0x14($s1)
/* 00429044 8E050014 */  lw    $a1, 0x14($s0)
/* 00429048 27398DD8 */  addiu $t9, %lo(func_00428DD8) # addiu $t9, $t9, -0x7228
/* 0042904C 0320F809 */  jalr  $t9
/* 00429050 02601025 */   move  $v0, $s3
/* 00429054 1040000B */  beqz  $v0, .L00429084
/* 00429058 8FBC0028 */   lw    $gp, 0x28($sp)
/* 0042905C 8F998020 */  lw    $t9, %got(func_00428DD8)($gp)
/* 00429060 8E240018 */  lw    $a0, 0x18($s1)
/* 00429064 8E050018 */  lw    $a1, 0x18($s0)
/* 00429068 27398DD8 */  addiu $t9, %lo(func_00428DD8) # addiu $t9, $t9, -0x7228
/* 0042906C 0320F809 */  jalr  $t9
/* 00429070 02601025 */   move  $v0, $s3
/* 00429074 10400003 */  beqz  $v0, .L00429084
/* 00429078 8FBC0028 */   lw    $gp, 0x28($sp)
/* 0042907C 100000A8 */  b     .L00429320
/* 00429080 24020001 */   li    $v0, 1
.L00429084:
/* 00429084 920F0000 */  lbu   $t7, ($s0)
.L00429088:
/* 00429088 564F0052 */  bnel  $s2, $t7, .L004291D4
/* 0042908C 92280000 */   lbu   $t0, ($s1)
/* 00429090 920D0010 */  lbu   $t5, 0x10($s0)
/* 00429094 2DAB0040 */  sltiu $t3, $t5, 0x40
/* 00429098 11600009 */  beqz  $t3, .L004290C0
/* 0042909C 00000000 */   nop   
/* 004290A0 8F8E8044 */  lw    $t6, %got(D_10010640)($gp)
/* 004290A4 000D6143 */  sra   $t4, $t5, 5
/* 004290A8 000C5080 */  sll   $t2, $t4, 2
/* 004290AC 25CE0640 */  addiu $t6, %lo(D_10010640) # addiu $t6, $t6, 0x640
/* 004290B0 01CAC021 */  addu  $t8, $t6, $t2
/* 004290B4 8F080000 */  lw    $t0, ($t8)
/* 004290B8 01A8C804 */  sllv  $t9, $t0, $t5
/* 004290BC 2B2B0000 */  slti  $t3, $t9, 0
.L004290C0:
/* 004290C0 5160000C */  beql  $t3, $zero, .L004290F4
/* 004290C4 920F0010 */   lbu   $t7, 0x10($s0)
/* 004290C8 8F998020 */  lw    $t9, %got(func_00428DD8)($gp)
/* 004290CC 02202025 */  move  $a0, $s1
/* 004290D0 8E050014 */  lw    $a1, 0x14($s0)
/* 004290D4 27398DD8 */  addiu $t9, %lo(func_00428DD8) # addiu $t9, $t9, -0x7228
/* 004290D8 0320F809 */  jalr  $t9
/* 004290DC 02601025 */   move  $v0, $s3
/* 004290E0 10400003 */  beqz  $v0, .L004290F0
/* 004290E4 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004290E8 1000008D */  b     .L00429320
/* 004290EC 24020001 */   li    $v0, 1
.L004290F0:
/* 004290F0 920F0010 */  lbu   $t7, 0x10($s0)
.L004290F4:
/* 004290F4 2DEC0080 */  sltiu $t4, $t7, 0x80
/* 004290F8 11800009 */  beqz  $t4, .L00429120
/* 004290FC 00000000 */   nop   
/* 00429100 8F988044 */  lw    $t8, %got(D_10010648)($gp)
/* 00429104 000F7143 */  sra   $t6, $t7, 5
/* 00429108 000E5080 */  sll   $t2, $t6, 2
/* 0042910C 27180648 */  addiu $t8, %lo(D_10010648) # addiu $t8, $t8, 0x648
/* 00429110 030A4021 */  addu  $t0, $t8, $t2
/* 00429114 8D0D0000 */  lw    $t5, ($t0)
/* 00429118 01EDC804 */  sllv  $t9, $t5, $t7
/* 0042911C 2B2C0000 */  slti  $t4, $t9, 0
.L00429120:
/* 00429120 51800015 */  beql  $t4, $zero, .L00429178
/* 00429124 920F0010 */   lbu   $t7, 0x10($s0)
/* 00429128 8F998020 */  lw    $t9, %got(func_00428DD8)($gp)
/* 0042912C 02202025 */  move  $a0, $s1
/* 00429130 8E050014 */  lw    $a1, 0x14($s0)
/* 00429134 27398DD8 */  addiu $t9, %lo(func_00428DD8) # addiu $t9, $t9, -0x7228
/* 00429138 0320F809 */  jalr  $t9
/* 0042913C 02601025 */   move  $v0, $s3
/* 00429140 1040000C */  beqz  $v0, .L00429174
/* 00429144 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00429148 8E0B0018 */  lw    $t3, 0x18($s0)
/* 0042914C 3C017000 */  lui   $at, 0x7000
/* 00429150 916E0000 */  lbu   $t6, ($t3)
/* 00429154 2DD80020 */  sltiu $t8, $t6, 0x20
/* 00429158 00185023 */  negu  $t2, $t8
/* 0042915C 01414024 */  and   $t0, $t2, $at
/* 00429160 01C86804 */  sllv  $t5, $t0, $t6
/* 00429164 05A30004 */  bgezl $t5, .L00429178
/* 00429168 920F0010 */   lbu   $t7, 0x10($s0)
/* 0042916C 1000006C */  b     .L00429320
/* 00429170 24020001 */   li    $v0, 1
.L00429174:
/* 00429174 920F0010 */  lbu   $t7, 0x10($s0)
.L00429178:
/* 00429178 24010001 */  li    $at, 1
/* 0042917C 55E10015 */  bnel  $t7, $at, .L004291D4
/* 00429180 92280000 */   lbu   $t0, ($s1)
/* 00429184 8F998020 */  lw    $t9, %got(func_00428DD8)($gp)
/* 00429188 02202025 */  move  $a0, $s1
/* 0042918C 8E050018 */  lw    $a1, 0x18($s0)
/* 00429190 27398DD8 */  addiu $t9, %lo(func_00428DD8) # addiu $t9, $t9, -0x7228
/* 00429194 0320F809 */  jalr  $t9
/* 00429198 02601025 */   move  $v0, $s3
/* 0042919C 1040000C */  beqz  $v0, .L004291D0
/* 004291A0 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004291A4 8E190014 */  lw    $t9, 0x14($s0)
/* 004291A8 3C017000 */  lui   $at, 0x7000
/* 004291AC 93290000 */  lbu   $t1, ($t9)
/* 004291B0 2D2C0020 */  sltiu $t4, $t1, 0x20
/* 004291B4 000C5823 */  negu  $t3, $t4
/* 004291B8 0161C024 */  and   $t8, $t3, $at
/* 004291BC 01385004 */  sllv  $t2, $t8, $t1
/* 004291C0 05430004 */  bgezl $t2, .L004291D4
/* 004291C4 92280000 */   lbu   $t0, ($s1)
/* 004291C8 10000055 */  b     .L00429320
/* 004291CC 24020001 */   li    $v0, 1
.L004291D0:
/* 004291D0 92280000 */  lbu   $t0, ($s1)
.L004291D4:
/* 004291D4 56480052 */  bnel  $s2, $t0, .L00429320
/* 004291D8 00001025 */   move  $v0, $zero
/* 004291DC 922E0010 */  lbu   $t6, 0x10($s1)
/* 004291E0 2DCD0040 */  sltiu $t5, $t6, 0x40
/* 004291E4 11A00009 */  beqz  $t5, .L0042920C
/* 004291E8 00000000 */   nop   
/* 004291EC 8F8C8044 */  lw    $t4, %got(D_10010640)($gp)
/* 004291F0 000E7943 */  sra   $t7, $t6, 5
/* 004291F4 000FC880 */  sll   $t9, $t7, 2
/* 004291F8 258C0640 */  addiu $t4, %lo(D_10010640) # addiu $t4, $t4, 0x640
/* 004291FC 01995821 */  addu  $t3, $t4, $t9
/* 00429200 8D780000 */  lw    $t8, ($t3)
/* 00429204 01D84804 */  sllv  $t1, $t8, $t6
/* 00429208 292D0000 */  slti  $t5, $t1, 0
.L0042920C:
/* 0042920C 51A0000C */  beql  $t5, $zero, .L00429240
/* 00429210 92280010 */   lbu   $t0, 0x10($s1)
/* 00429214 8F998020 */  lw    $t9, %got(func_00428DD8)($gp)
/* 00429218 8E240014 */  lw    $a0, 0x14($s1)
/* 0042921C 02002825 */  move  $a1, $s0
/* 00429220 27398DD8 */  addiu $t9, %lo(func_00428DD8) # addiu $t9, $t9, -0x7228
/* 00429224 0320F809 */  jalr  $t9
/* 00429228 02601025 */   move  $v0, $s3
/* 0042922C 10400003 */  beqz  $v0, .L0042923C
/* 00429230 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00429234 1000003A */  b     .L00429320
/* 00429238 24020001 */   li    $v0, 1
.L0042923C:
/* 0042923C 92280010 */  lbu   $t0, 0x10($s1)
.L00429240:
/* 00429240 2D0F0080 */  sltiu $t7, $t0, 0x80
/* 00429244 11E00009 */  beqz  $t7, .L0042926C
/* 00429248 00000000 */   nop   
/* 0042924C 8F8B8044 */  lw    $t3, %got(D_10010648)($gp)
/* 00429250 00086143 */  sra   $t4, $t0, 5
/* 00429254 000CC880 */  sll   $t9, $t4, 2
/* 00429258 256B0648 */  addiu $t3, %lo(D_10010648) # addiu $t3, $t3, 0x648
/* 0042925C 0179C021 */  addu  $t8, $t3, $t9
/* 00429260 8F0E0000 */  lw    $t6, ($t8)
/* 00429264 010E4804 */  sllv  $t1, $t6, $t0
/* 00429268 292F0000 */  slti  $t7, $t1, 0
.L0042926C:
/* 0042926C 51E00015 */  beql  $t7, $zero, .L004292C4
/* 00429270 92280010 */   lbu   $t0, 0x10($s1)
/* 00429274 8F998020 */  lw    $t9, %got(func_00428DD8)($gp)
/* 00429278 8E240014 */  lw    $a0, 0x14($s1)
/* 0042927C 02002825 */  move  $a1, $s0
/* 00429280 27398DD8 */  addiu $t9, %lo(func_00428DD8) # addiu $t9, $t9, -0x7228
/* 00429284 0320F809 */  jalr  $t9
/* 00429288 02601025 */   move  $v0, $s3
/* 0042928C 1040000C */  beqz  $v0, .L004292C0
/* 00429290 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00429294 8E2D0018 */  lw    $t5, 0x18($s1)
/* 00429298 3C017000 */  lui   $at, 0x7000
/* 0042929C 91AC0000 */  lbu   $t4, ($t5)
/* 004292A0 2D8B0020 */  sltiu $t3, $t4, 0x20
/* 004292A4 000BC823 */  negu  $t9, $t3
/* 004292A8 0321C024 */  and   $t8, $t9, $at
/* 004292AC 01987004 */  sllv  $t6, $t8, $t4
/* 004292B0 05C30004 */  bgezl $t6, .L004292C4
/* 004292B4 92280010 */   lbu   $t0, 0x10($s1)
/* 004292B8 10000019 */  b     .L00429320
/* 004292BC 24020001 */   li    $v0, 1
.L004292C0:
/* 004292C0 92280010 */  lbu   $t0, 0x10($s1)
.L004292C4:
/* 004292C4 24010001 */  li    $at, 1
/* 004292C8 55010015 */  bnel  $t0, $at, .L00429320
/* 004292CC 00001025 */   move  $v0, $zero
/* 004292D0 8F998020 */  lw    $t9, %got(func_00428DD8)($gp)
/* 004292D4 8E240018 */  lw    $a0, 0x18($s1)
/* 004292D8 02002825 */  move  $a1, $s0
/* 004292DC 27398DD8 */  addiu $t9, %lo(func_00428DD8) # addiu $t9, $t9, -0x7228
/* 004292E0 0320F809 */  jalr  $t9
/* 004292E4 02601025 */   move  $v0, $s3
/* 004292E8 1040000C */  beqz  $v0, .L0042931C
/* 004292EC 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004292F0 8E290014 */  lw    $t1, 0x14($s1)
/* 004292F4 3C017000 */  lui   $at, 0x7000
/* 004292F8 912A0000 */  lbu   $t2, ($t1)
/* 004292FC 2D4F0020 */  sltiu $t7, $t2, 0x20
/* 00429300 000F6823 */  negu  $t5, $t7
/* 00429304 01A15824 */  and   $t3, $t5, $at
/* 00429308 014BC804 */  sllv  $t9, $t3, $t2
/* 0042930C 07230004 */  bgezl $t9, .L00429320
/* 00429310 00001025 */   move  $v0, $zero
/* 00429314 10000002 */  b     .L00429320
/* 00429318 24020001 */   li    $v0, 1
.L0042931C:
/* 0042931C 00001025 */  move  $v0, $zero
.L00429320:
/* 00429320 8FBF002C */  lw    $ra, 0x2c($sp)
/* 00429324 8FB00018 */  lw    $s0, 0x18($sp)
/* 00429328 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0042932C 8FB20020 */  lw    $s2, 0x20($sp)
/* 00429330 8FB30024 */  lw    $s3, 0x24($sp)
/* 00429334 03E00008 */  jr    $ra
/* 00429338 27BD0030 */   addiu $sp, $sp, 0x30

    .type func_0042933C, @function
func_0042933C:
    # 0042933C func_0042933C
    # 0042AADC func_0042AADC
/* 0042933C 3C1C0FBF */  .cpload $t9
/* 00429340 279C0F54 */  
/* 00429344 0399E021 */  
/* 00429348 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0042934C AFB1001C */  sw    $s1, 0x1c($sp)
/* 00429350 AFB00018 */  sw    $s0, 0x18($sp)
/* 00429354 00808025 */  move  $s0, $a0
/* 00429358 00A08825 */  move  $s1, $a1
/* 0042935C AFBF0024 */  sw    $ra, 0x24($sp)
/* 00429360 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00429364 14850003 */  bne   $a0, $a1, .L00429374
/* 00429368 AFA2002C */   sw    $v0, 0x2c($sp)
/* 0042936C 10000391 */  b     .L0042A1B4
/* 00429370 00001025 */   move  $v0, $zero
.L00429374:
/* 00429374 92020000 */  lbu   $v0, ($s0)
/* 00429378 24010004 */  li    $at, 4
/* 0042937C 50410024 */  beql  $v0, $at, .L00429410
/* 00429380 24010004 */   li    $at, 4
/* 00429384 922E0000 */  lbu   $t6, ($s1)
/* 00429388 24010004 */  li    $at, 4
/* 0042938C 02002025 */  move  $a0, $s0
/* 00429390 11C1001E */  beq   $t6, $at, .L0042940C
/* 00429394 00002825 */   move  $a1, $zero
/* 00429398 8F99801C */  lw    $t9, %got(func_00426FA4)($gp)
/* 0042939C 00003025 */  move  $a2, $zero
/* 004293A0 00003825 */  move  $a3, $zero
/* 004293A4 27396FA4 */  addiu $t9, %lo(func_00426FA4) # addiu $t9, $t9, 0x6fa4
/* 004293A8 0320F809 */  jalr  $t9
/* 004293AC 8FA2002C */   lw    $v0, 0x2c($sp)
/* 004293B0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004293B4 02202025 */  move  $a0, $s1
/* 004293B8 00002825 */  move  $a1, $zero
/* 004293BC 8F99801C */  lw    $t9, %got(func_00426FA4)($gp)
/* 004293C0 00003025 */  move  $a2, $zero
/* 004293C4 00003825 */  move  $a3, $zero
/* 004293C8 27396FA4 */  addiu $t9, %lo(func_00426FA4) # addiu $t9, $t9, 0x6fa4
/* 004293CC 0320F809 */  jalr  $t9
/* 004293D0 8FA2002C */   lw    $v0, 0x2c($sp)
/* 004293D4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004293D8 240F007D */  li    $t7, 125
/* 004293DC 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 004293E0 90980001 */  lbu   $t8, 1($a0)
/* 004293E4 A08F0000 */  sb    $t7, ($a0)
/* 004293E8 A4800002 */  sh    $zero, 2($a0)
/* 004293EC 3319FFE0 */  andi  $t9, $t8, 0xffe0
/* 004293F0 A0990001 */  sb    $t9, 1($a0)
/* 004293F4 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 004293F8 0320F809 */  jalr  $t9
/* 004293FC 00000000 */   nop   
/* 00429400 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00429404 1000036B */  b     .L0042A1B4
/* 00429408 24020001 */   li    $v0, 1
.L0042940C:
/* 0042940C 24010004 */  li    $at, 4
.L00429410:
/* 00429410 5441018F */  bnel  $v0, $at, .L00429A50
/* 00429414 922E0000 */   lbu   $t6, ($s1)
/* 00429418 92280000 */  lbu   $t0, ($s1)
/* 0042941C 24010004 */  li    $at, 4
/* 00429420 5501018B */  bnel  $t0, $at, .L00429A50
/* 00429424 922E0000 */   lbu   $t6, ($s1)
/* 00429428 92050010 */  lbu   $a1, 0x10($s0)
/* 0042942C 92290010 */  lbu   $t1, 0x10($s1)
/* 00429430 2401005B */  li    $at, 91
/* 00429434 55250186 */  bnel  $t1, $a1, .L00429A50
/* 00429438 922E0000 */   lbu   $t6, ($s1)
/* 0042943C 54A10057 */  bnel  $a1, $at, .L0042959C
/* 00429440 2CA80060 */   sltiu $t0, $a1, 0x60
/* 00429444 8E260014 */  lw    $a2, 0x14($s1)
/* 00429448 8E040014 */  lw    $a0, 0x14($s0)
/* 0042944C 54C40028 */  bnel  $a2, $a0, .L004294F0
/* 00429450 8E280018 */   lw    $t0, 0x18($s1)
/* 00429454 8F998020 */  lw    $t9, %got(func_0042933C)($gp)
/* 00429458 8E040018 */  lw    $a0, 0x18($s0)
/* 0042945C 8E250018 */  lw    $a1, 0x18($s1)
/* 00429460 2739933C */  addiu $t9, %lo(func_0042933C) # addiu $t9, $t9, -0x6cc4
/* 00429464 0320F809 */  jalr  $t9
/* 00429468 8FA2002C */   lw    $v0, 0x2c($sp)
/* 0042946C 304A00FF */  andi  $t2, $v0, 0xff
/* 00429470 1140001C */  beqz  $t2, .L004294E4
/* 00429474 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00429478 8F99801C */  lw    $t9, %got(func_00426FA4)($gp)
/* 0042947C 8E040014 */  lw    $a0, 0x14($s0)
/* 00429480 00002825 */  move  $a1, $zero
/* 00429484 27396FA4 */  addiu $t9, %lo(func_00426FA4) # addiu $t9, $t9, 0x6fa4
/* 00429488 00003025 */  move  $a2, $zero
/* 0042948C 00003825 */  move  $a3, $zero
/* 00429490 0320F809 */  jalr  $t9
/* 00429494 8FA2002C */   lw    $v0, 0x2c($sp)
/* 00429498 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042949C 920C0001 */  lbu   $t4, 1($s0)
/* 004294A0 240B005B */  li    $t3, 91
/* 004294A4 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 004294A8 90820001 */  lbu   $v0, 1($a0)
/* 004294AC A08B0000 */  sb    $t3, ($a0)
/* 004294B0 A4800002 */  sh    $zero, 2($a0)
/* 004294B4 00026EC0 */  sll   $t5, $v0, 0x1b
/* 004294B8 000D76C2 */  srl   $t6, $t5, 0x1b
/* 004294BC 018E7826 */  xor   $t7, $t4, $t6
/* 004294C0 31F8001F */  andi  $t8, $t7, 0x1f
/* 004294C4 0302C826 */  xor   $t9, $t8, $v0
/* 004294C8 A0990001 */  sb    $t9, 1($a0)
/* 004294CC 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 004294D0 0320F809 */  jalr  $t9
/* 004294D4 00000000 */   nop   
/* 004294D8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004294DC 10000335 */  b     .L0042A1B4
/* 004294E0 24020001 */   li    $v0, 1
.L004294E4:
/* 004294E4 10000333 */  b     .L0042A1B4
/* 004294E8 00001025 */   move  $v0, $zero
/* 004294EC 8E280018 */  lw    $t0, 0x18($s1)
.L004294F0:
/* 004294F0 8E090018 */  lw    $t1, 0x18($s0)
/* 004294F4 55090028 */  bnel  $t0, $t1, .L00429598
/* 004294F8 000002B4 */   teq   $zero, $zero, 0xa
/* 004294FC 8F998020 */  lw    $t9, %got(func_0042933C)($gp)
/* 00429500 00C02825 */  move  $a1, $a2
/* 00429504 8FA2002C */  lw    $v0, 0x2c($sp)
/* 00429508 2739933C */  addiu $t9, %lo(func_0042933C) # addiu $t9, $t9, -0x6cc4
/* 0042950C 0320F809 */  jalr  $t9
/* 00429510 00000000 */   nop   
/* 00429514 304A00FF */  andi  $t2, $v0, 0xff
/* 00429518 1140001C */  beqz  $t2, .L0042958C
/* 0042951C 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00429520 8F99801C */  lw    $t9, %got(func_00426FA4)($gp)
/* 00429524 8E040018 */  lw    $a0, 0x18($s0)
/* 00429528 00002825 */  move  $a1, $zero
/* 0042952C 27396FA4 */  addiu $t9, %lo(func_00426FA4) # addiu $t9, $t9, 0x6fa4
/* 00429530 00003025 */  move  $a2, $zero
/* 00429534 00003825 */  move  $a3, $zero
/* 00429538 0320F809 */  jalr  $t9
/* 0042953C 8FA2002C */   lw    $v0, 0x2c($sp)
/* 00429540 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00429544 920D0001 */  lbu   $t5, 1($s0)
/* 00429548 240B005B */  li    $t3, 91
/* 0042954C 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00429550 90820001 */  lbu   $v0, 1($a0)
/* 00429554 A08B0000 */  sb    $t3, ($a0)
/* 00429558 A4800002 */  sh    $zero, 2($a0)
/* 0042955C 000266C0 */  sll   $t4, $v0, 0x1b
/* 00429560 000C76C2 */  srl   $t6, $t4, 0x1b
/* 00429564 01AE7826 */  xor   $t7, $t5, $t6
/* 00429568 31F8001F */  andi  $t8, $t7, 0x1f
/* 0042956C 0302C826 */  xor   $t9, $t8, $v0
/* 00429570 A0990001 */  sb    $t9, 1($a0)
/* 00429574 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00429578 0320F809 */  jalr  $t9
/* 0042957C 00000000 */   nop   
/* 00429580 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00429584 1000030B */  b     .L0042A1B4
/* 00429588 24020001 */   li    $v0, 1
.L0042958C:
/* 0042958C 10000309 */  b     .L0042A1B4
/* 00429590 00001025 */   move  $v0, $zero
/* 00429594 000002B4 */  teq   $zero, $zero, 0xa
.L00429598:
/* 00429598 2CA80060 */  sltiu $t0, $a1, 0x60
.L0042959C:
/* 0042959C 11000009 */  beqz  $t0, .L004295C4
/* 004295A0 00000000 */   nop   
/* 004295A4 8F8B8044 */  lw    $t3, %got(D_1001067C)($gp)
/* 004295A8 00054943 */  sra   $t1, $a1, 5
/* 004295AC 00095080 */  sll   $t2, $t1, 2
/* 004295B0 256B067C */  addiu $t3, %lo(D_1001067C) # addiu $t3, $t3, 0x67c
/* 004295B4 016A6021 */  addu  $t4, $t3, $t2
/* 004295B8 8D8D0000 */  lw    $t5, ($t4)
/* 004295BC 00AD7004 */  sllv  $t6, $t5, $a1
/* 004295C0 29C80000 */  slti  $t0, $t6, 0
.L004295C4:
/* 004295C4 5100005A */  beql  $t0, $zero, .L00429730
/* 004295C8 92190010 */   lbu   $t9, 0x10($s0)
/* 004295CC 8F998020 */  lw    $t9, %got(func_00428DD8)($gp)
/* 004295D0 8E040014 */  lw    $a0, 0x14($s0)
/* 004295D4 8E250014 */  lw    $a1, 0x14($s1)
/* 004295D8 27398DD8 */  addiu $t9, %lo(func_00428DD8) # addiu $t9, $t9, -0x7228
/* 004295DC 0320F809 */  jalr  $t9
/* 004295E0 8FA2002C */   lw    $v0, 0x2c($sp)
/* 004295E4 10400051 */  beqz  $v0, .L0042972C
/* 004295E8 8FBC0020 */   lw    $gp, 0x20($sp)
/* 004295EC 8F998020 */  lw    $t9, %got(func_0042933C)($gp)
/* 004295F0 8E040014 */  lw    $a0, 0x14($s0)
/* 004295F4 8E250014 */  lw    $a1, 0x14($s1)
/* 004295F8 2739933C */  addiu $t9, %lo(func_0042933C) # addiu $t9, $t9, -0x6cc4
/* 004295FC 0320F809 */  jalr  $t9
/* 00429600 8FA2002C */   lw    $v0, 0x2c($sp)
/* 00429604 92050010 */  lbu   $a1, 0x10($s0)
/* 00429608 2403005E */  li    $v1, 94
/* 0042960C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00429610 14650016 */  bne   $v1, $a1, .L0042966C
/* 00429614 304700FF */   andi  $a3, $v0, 0xff
/* 00429618 10400012 */  beqz  $v0, .L00429664
/* 0042961C 00000000 */   nop   
/* 00429620 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00429624 92180001 */  lbu   $t8, 1($s0)
/* 00429628 A3A70029 */  sb    $a3, 0x29($sp)
/* 0042962C 90820001 */  lbu   $v0, 1($a0)
/* 00429630 A0830000 */  sb    $v1, ($a0)
/* 00429634 A4800002 */  sh    $zero, 2($a0)
/* 00429638 0002CEC0 */  sll   $t9, $v0, 0x1b
/* 0042963C 00194EC2 */  srl   $t1, $t9, 0x1b
/* 00429640 03095826 */  xor   $t3, $t8, $t1
/* 00429644 316A001F */  andi  $t2, $t3, 0x1f
/* 00429648 01426026 */  xor   $t4, $t2, $v0
/* 0042964C A08C0001 */  sb    $t4, 1($a0)
/* 00429650 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00429654 0320F809 */  jalr  $t9
/* 00429658 00000000 */   nop   
/* 0042965C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00429660 93A70029 */  lbu   $a3, 0x29($sp)
.L00429664:
/* 00429664 100002D3 */  b     .L0042A1B4
/* 00429668 00E01025 */   move  $v0, $a3
.L0042966C:
/* 0042966C 8E26001C */  lw    $a2, 0x1c($s1)
/* 00429670 8E03001C */  lw    $v1, 0x1c($s0)
/* 00429674 14C30003 */  bne   $a2, $v1, .L00429684
/* 00429678 00000000 */   nop   
/* 0042967C 100002CD */  b     .L0042A1B4
/* 00429680 00E01025 */   move  $v0, $a3
.L00429684:
/* 00429684 10400014 */  beqz  $v0, .L004296D8
/* 00429688 240B0049 */   li    $t3, 73
/* 0042968C 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00429690 920D0001 */  lbu   $t5, 1($s0)
/* 00429694 00664823 */  subu  $t1, $v1, $a2
/* 00429698 90820001 */  lbu   $v0, 1($a0)
/* 0042969C A0850000 */  sb    $a1, ($a0)
/* 004296A0 A4800002 */  sh    $zero, 2($a0)
/* 004296A4 000276C0 */  sll   $t6, $v0, 0x1b
/* 004296A8 000E7EC2 */  srl   $t7, $t6, 0x1b
/* 004296AC 01AF4026 */  xor   $t0, $t5, $t7
/* 004296B0 3119001F */  andi  $t9, $t0, 0x1f
/* 004296B4 0322C026 */  xor   $t8, $t9, $v0
/* 004296B8 A0980001 */  sb    $t8, 1($a0)
/* 004296BC AC890004 */  sw    $t1, 4($a0)
/* 004296C0 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 004296C4 0320F809 */  jalr  $t9
/* 004296C8 00000000 */   nop   
/* 004296CC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004296D0 100002B8 */  b     .L0042A1B4
/* 004296D4 24020001 */   li    $v0, 1
.L004296D8:
/* 004296D8 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 004296DC 24020037 */  li    $v0, 55
/* 004296E0 240D0004 */  li    $t5, 4
/* 004296E4 908A0001 */  lbu   $t2, 1($a0)
/* 004296E8 A08B0000 */  sb    $t3, ($a0)
/* 004296EC AC8D0008 */  sw    $t5, 8($a0)
/* 004296F0 314CFFE0 */  andi  $t4, $t2, 0xffe0
/* 004296F4 358E0006 */  ori   $t6, $t4, 6
/* 004296F8 14450004 */  bne   $v0, $a1, .L0042970C
/* 004296FC A08E0001 */   sb    $t6, 1($a0)
/* 00429700 00667823 */  subu  $t7, $v1, $a2
/* 00429704 10000003 */  b     .L00429714
/* 00429708 AC8F0010 */   sw    $t7, 0x10($a0)
.L0042970C:
/* 0042970C 00C34023 */  subu  $t0, $a2, $v1
/* 00429710 AC880010 */  sw    $t0, 0x10($a0)
.L00429714:
/* 00429714 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00429718 0320F809 */  jalr  $t9
/* 0042971C 00000000 */   nop   
/* 00429720 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00429724 100002A3 */  b     .L0042A1B4
/* 00429728 24020001 */   li    $v0, 1
.L0042972C:
/* 0042972C 92190010 */  lbu   $t9, 0x10($s0)
.L00429730:
/* 00429730 2F380080 */  sltiu $t8, $t9, 0x80
/* 00429734 13000009 */  beqz  $t8, .L0042975C
/* 00429738 00000000 */   nop   
/* 0042973C 8F8A8044 */  lw    $t2, %got(D_1001066C)($gp)
/* 00429740 00194943 */  sra   $t1, $t9, 5
/* 00429744 00095880 */  sll   $t3, $t1, 2
/* 00429748 254A066C */  addiu $t2, %lo(D_1001066C) # addiu $t2, $t2, 0x66c
/* 0042974C 014B6021 */  addu  $t4, $t2, $t3
/* 00429750 8D8E0000 */  lw    $t6, ($t4)
/* 00429754 032E6804 */  sllv  $t5, $t6, $t9
/* 00429758 29B80000 */  slti  $t8, $t5, 0
.L0042975C:
/* 0042975C 53000056 */  beql  $t8, $zero, .L004298B8
/* 00429760 920E0010 */   lbu   $t6, 0x10($s0)
/* 00429764 8F998020 */  lw    $t9, %got(func_00428DD8)($gp)
/* 00429768 8E040014 */  lw    $a0, 0x14($s0)
/* 0042976C 8E250014 */  lw    $a1, 0x14($s1)
/* 00429770 27398DD8 */  addiu $t9, %lo(func_00428DD8) # addiu $t9, $t9, -0x7228
/* 00429774 0320F809 */  jalr  $t9
/* 00429778 8FA2002C */   lw    $v0, 0x2c($sp)
/* 0042977C 1040004D */  beqz  $v0, .L004298B4
/* 00429780 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00429784 8F998020 */  lw    $t9, %got(func_00428DD8)($gp)
/* 00429788 8E040018 */  lw    $a0, 0x18($s0)
/* 0042978C 8E250018 */  lw    $a1, 0x18($s1)
/* 00429790 27398DD8 */  addiu $t9, %lo(func_00428DD8) # addiu $t9, $t9, -0x7228
/* 00429794 0320F809 */  jalr  $t9
/* 00429798 8FA2002C */   lw    $v0, 0x2c($sp)
/* 0042979C 10400045 */  beqz  $v0, .L004298B4
/* 004297A0 8FBC0020 */   lw    $gp, 0x20($sp)
/* 004297A4 8F998020 */  lw    $t9, %got(func_0042933C)($gp)
/* 004297A8 8E040014 */  lw    $a0, 0x14($s0)
/* 004297AC 8E250014 */  lw    $a1, 0x14($s1)
/* 004297B0 2739933C */  addiu $t9, %lo(func_0042933C) # addiu $t9, $t9, -0x6cc4
/* 004297B4 0320F809 */  jalr  $t9
/* 004297B8 8FA2002C */   lw    $v0, 0x2c($sp)
/* 004297BC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004297C0 A3A2002A */  sb    $v0, 0x2a($sp)
/* 004297C4 8FA2002C */  lw    $v0, 0x2c($sp)
/* 004297C8 8F998020 */  lw    $t9, %got(func_0042933C)($gp)
/* 004297CC 8E040018 */  lw    $a0, 0x18($s0)
/* 004297D0 8E250018 */  lw    $a1, 0x18($s1)
/* 004297D4 2739933C */  addiu $t9, %lo(func_0042933C) # addiu $t9, $t9, -0x6cc4
/* 004297D8 0320F809 */  jalr  $t9
/* 004297DC 00000000 */   nop   
/* 004297E0 304800FF */  andi  $t0, $v0, 0xff
/* 004297E4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004297E8 11000017 */  beqz  $t0, .L00429848
/* 004297EC 304700FF */   andi  $a3, $v0, 0xff
/* 004297F0 92090010 */  lbu   $t1, 0x10($s0)
/* 004297F4 2401007D */  li    $at, 125
/* 004297F8 55210014 */  bnel  $t1, $at, .L0042984C
/* 004297FC 93A2002A */   lbu   $v0, 0x2a($sp)
/* 00429800 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00429804 920A0001 */  lbu   $t2, 1($s0)
/* 00429808 2403005E */  li    $v1, 94
/* 0042980C 90820001 */  lbu   $v0, 1($a0)
/* 00429810 A0830000 */  sb    $v1, ($a0)
/* 00429814 A4800002 */  sh    $zero, 2($a0)
/* 00429818 00025EC0 */  sll   $t3, $v0, 0x1b
/* 0042981C 000B66C2 */  srl   $t4, $t3, 0x1b
/* 00429820 014C7026 */  xor   $t6, $t2, $t4
/* 00429824 31D9001F */  andi  $t9, $t6, 0x1f
/* 00429828 03226826 */  xor   $t5, $t9, $v0
/* 0042982C A08D0001 */  sb    $t5, 1($a0)
/* 00429830 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00429834 A3A70029 */  sb    $a3, 0x29($sp)
/* 00429838 0320F809 */  jalr  $t9
/* 0042983C 00000000 */   nop   
/* 00429840 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00429844 93A70029 */  lbu   $a3, 0x29($sp)
.L00429848:
/* 00429848 93A2002A */  lbu   $v0, 0x2a($sp)
.L0042984C:
/* 0042984C 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00429850 10400013 */  beqz  $v0, .L004298A0
/* 00429854 00000000 */   nop   
/* 00429858 10E00011 */  beqz  $a3, .L004298A0
/* 0042985C 240F0001 */   li    $t7, 1
/* 00429860 90820001 */  lbu   $v0, 1($a0)
/* 00429864 92180001 */  lbu   $t8, 1($s0)
/* 00429868 A08F0000 */  sb    $t7, ($a0)
/* 0042986C 000246C0 */  sll   $t0, $v0, 0x1b
/* 00429870 00084EC2 */  srl   $t1, $t0, 0x1b
/* 00429874 03095826 */  xor   $t3, $t8, $t1
/* 00429878 316A001F */  andi  $t2, $t3, 0x1f
/* 0042987C 01426026 */  xor   $t4, $t2, $v0
/* 00429880 A08C0001 */  sb    $t4, 1($a0)
/* 00429884 A4800002 */  sh    $zero, 2($a0)
/* 00429888 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042988C 0320F809 */  jalr  $t9
/* 00429890 00000000 */   nop   
/* 00429894 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00429898 10000246 */  b     .L0042A1B4
/* 0042989C 24020001 */   li    $v0, 1
.L004298A0:
/* 004298A0 14400002 */  bnez  $v0, .L004298AC
/* 004298A4 00401825 */   move  $v1, $v0
/* 004298A8 00E01825 */  move  $v1, $a3
.L004298AC:
/* 004298AC 10000241 */  b     .L0042A1B4
/* 004298B0 00601025 */   move  $v0, $v1
.L004298B4:
/* 004298B4 920E0010 */  lbu   $t6, 0x10($s0)
.L004298B8:
/* 004298B8 24010041 */  li    $at, 65
/* 004298BC 55C10064 */  bnel  $t6, $at, .L00429A50
/* 004298C0 922E0000 */   lbu   $t6, ($s1)
/* 004298C4 8E39001C */  lw    $t9, 0x1c($s1)
/* 004298C8 8E0D001C */  lw    $t5, 0x1c($s0)
/* 004298CC 572D0060 */  bnel  $t9, $t5, .L00429A50
/* 004298D0 922E0000 */   lbu   $t6, ($s1)
/* 004298D4 8F998020 */  lw    $t9, %got(func_00428DD8)($gp)
/* 004298D8 8E040014 */  lw    $a0, 0x14($s0)
/* 004298DC 8E250014 */  lw    $a1, 0x14($s1)
/* 004298E0 27398DD8 */  addiu $t9, %lo(func_00428DD8) # addiu $t9, $t9, -0x7228
/* 004298E4 0320F809 */  jalr  $t9
/* 004298E8 8FA2002C */   lw    $v0, 0x2c($sp)
/* 004298EC 10400057 */  beqz  $v0, .L00429A4C
/* 004298F0 8FBC0020 */   lw    $gp, 0x20($sp)
/* 004298F4 8F998020 */  lw    $t9, %got(func_00428DD8)($gp)
/* 004298F8 8E040018 */  lw    $a0, 0x18($s0)
/* 004298FC 8E250018 */  lw    $a1, 0x18($s1)
/* 00429900 27398DD8 */  addiu $t9, %lo(func_00428DD8) # addiu $t9, $t9, -0x7228
/* 00429904 0320F809 */  jalr  $t9
/* 00429908 8FA2002C */   lw    $v0, 0x2c($sp)
/* 0042990C 1040004F */  beqz  $v0, .L00429A4C
/* 00429910 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00429914 8F998020 */  lw    $t9, %got(func_0042933C)($gp)
/* 00429918 8E040014 */  lw    $a0, 0x14($s0)
/* 0042991C 8E250014 */  lw    $a1, 0x14($s1)
/* 00429920 2739933C */  addiu $t9, %lo(func_0042933C) # addiu $t9, $t9, -0x6cc4
/* 00429924 0320F809 */  jalr  $t9
/* 00429928 8FA2002C */   lw    $v0, 0x2c($sp)
/* 0042992C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00429930 A3A2002A */  sb    $v0, 0x2a($sp)
/* 00429934 8FA2002C */  lw    $v0, 0x2c($sp)
/* 00429938 8F998020 */  lw    $t9, %got(func_0042933C)($gp)
/* 0042993C 8E040018 */  lw    $a0, 0x18($s0)
/* 00429940 8E250018 */  lw    $a1, 0x18($s1)
/* 00429944 2739933C */  addiu $t9, %lo(func_0042933C) # addiu $t9, $t9, -0x6cc4
/* 00429948 0320F809 */  jalr  $t9
/* 0042994C 00000000 */   nop   
/* 00429950 304F00FF */  andi  $t7, $v0, 0xff
/* 00429954 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00429958 11E00021 */  beqz  $t7, .L004299E0
/* 0042995C 304700FF */   andi  $a3, $v0, 0xff
/* 00429960 8E03001C */  lw    $v1, 0x1c($s0)
/* 00429964 24010001 */  li    $at, 1
/* 00429968 5061001E */  beql  $v1, $at, .L004299E4
/* 0042996C 93A2002A */   lbu   $v0, 0x2a($sp)
/* 00429970 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00429974 24080049 */  li    $t0, 73
/* 00429978 240A0004 */  li    $t2, 4
/* 0042997C 90980001 */  lbu   $t8, 1($a0)
/* 00429980 A0880000 */  sb    $t0, ($a0)
/* 00429984 AC8A0008 */  sw    $t2, 8($a0)
/* 00429988 3309FFE0 */  andi  $t1, $t8, 0xffe0
/* 0042998C 352B0006 */  ori   $t3, $t1, 6
/* 00429990 A08B0001 */  sb    $t3, 1($a0)
/* 00429994 AC830010 */  sw    $v1, 0x10($a0)
/* 00429998 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042999C A3A70029 */  sb    $a3, 0x29($sp)
/* 004299A0 0320F809 */  jalr  $t9
/* 004299A4 00000000 */   nop   
/* 004299A8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004299AC 240C005B */  li    $t4, 91
/* 004299B0 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 004299B4 908E0001 */  lbu   $t6, 1($a0)
/* 004299B8 A08C0000 */  sb    $t4, ($a0)
/* 004299BC A4800002 */  sh    $zero, 2($a0)
/* 004299C0 31D9FFE0 */  andi  $t9, $t6, 0xffe0
/* 004299C4 372D0006 */  ori   $t5, $t9, 6
/* 004299C8 A08D0001 */  sb    $t5, 1($a0)
/* 004299CC 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 004299D0 0320F809 */  jalr  $t9
/* 004299D4 00000000 */   nop   
/* 004299D8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004299DC 93A70029 */  lbu   $a3, 0x29($sp)
.L004299E0:
/* 004299E0 93A2002A */  lbu   $v0, 0x2a($sp)
.L004299E4:
/* 004299E4 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 004299E8 10400013 */  beqz  $v0, .L00429A38
/* 004299EC 00000000 */   nop   
/* 004299F0 10E00011 */  beqz  $a3, .L00429A38
/* 004299F4 240F0001 */   li    $t7, 1
/* 004299F8 90820001 */  lbu   $v0, 1($a0)
/* 004299FC 92080001 */  lbu   $t0, 1($s0)
/* 00429A00 A08F0000 */  sb    $t7, ($a0)
/* 00429A04 0002C6C0 */  sll   $t8, $v0, 0x1b
/* 00429A08 00184EC2 */  srl   $t1, $t8, 0x1b
/* 00429A0C 01095826 */  xor   $t3, $t0, $t1
/* 00429A10 316A001F */  andi  $t2, $t3, 0x1f
/* 00429A14 01426026 */  xor   $t4, $t2, $v0
/* 00429A18 A08C0001 */  sb    $t4, 1($a0)
/* 00429A1C A4800002 */  sh    $zero, 2($a0)
/* 00429A20 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00429A24 0320F809 */  jalr  $t9
/* 00429A28 00000000 */   nop   
/* 00429A2C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00429A30 100001E0 */  b     .L0042A1B4
/* 00429A34 24020001 */   li    $v0, 1
.L00429A38:
/* 00429A38 14400002 */  bnez  $v0, .L00429A44
/* 00429A3C 00401825 */   move  $v1, $v0
/* 00429A40 00E01825 */  move  $v1, $a3
.L00429A44:
/* 00429A44 100001DB */  b     .L0042A1B4
/* 00429A48 00601025 */   move  $v0, $v1
.L00429A4C:
/* 00429A4C 922E0000 */  lbu   $t6, ($s1)
.L00429A50:
/* 00429A50 24010004 */  li    $at, 4
/* 00429A54 55C100F8 */  bnel  $t6, $at, .L00429E38
/* 00429A58 92190000 */   lbu   $t9, ($s0)
/* 00429A5C 92390010 */  lbu   $t9, 0x10($s1)
/* 00429A60 2F2D0040 */  sltiu $t5, $t9, 0x40
/* 00429A64 11A00009 */  beqz  $t5, .L00429A8C
/* 00429A68 00000000 */   nop   
/* 00429A6C 8F888044 */  lw    $t0, %got(D_10010664)($gp)
/* 00429A70 00197943 */  sra   $t7, $t9, 5
/* 00429A74 000FC080 */  sll   $t8, $t7, 2
/* 00429A78 25080664 */  addiu $t0, %lo(D_10010664) # addiu $t0, $t0, 0x664
/* 00429A7C 01184821 */  addu  $t1, $t0, $t8
/* 00429A80 8D2B0000 */  lw    $t3, ($t1)
/* 00429A84 032B5004 */  sllv  $t2, $t3, $t9
/* 00429A88 294D0000 */  slti  $t5, $t2, 0
.L00429A8C:
/* 00429A8C 51A00046 */  beql  $t5, $zero, .L00429BA8
/* 00429A90 922D0010 */   lbu   $t5, 0x10($s1)
/* 00429A94 8F998020 */  lw    $t9, %got(func_00428DD8)($gp)
/* 00429A98 02002025 */  move  $a0, $s0
/* 00429A9C 8E250014 */  lw    $a1, 0x14($s1)
/* 00429AA0 27398DD8 */  addiu $t9, %lo(func_00428DD8) # addiu $t9, $t9, -0x7228
/* 00429AA4 0320F809 */  jalr  $t9
/* 00429AA8 8FA2002C */   lw    $v0, 0x2c($sp)
/* 00429AAC 1040003D */  beqz  $v0, .L00429BA4
/* 00429AB0 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00429AB4 8F998020 */  lw    $t9, %got(func_0042933C)($gp)
/* 00429AB8 02002025 */  move  $a0, $s0
/* 00429ABC 8E250014 */  lw    $a1, 0x14($s1)
/* 00429AC0 2739933C */  addiu $t9, %lo(func_0042933C) # addiu $t9, $t9, -0x6cc4
/* 00429AC4 0320F809 */  jalr  $t9
/* 00429AC8 8FA2002C */   lw    $v0, 0x2c($sp)
/* 00429ACC 304E00FF */  andi  $t6, $v0, 0xff
/* 00429AD0 11C0001C */  beqz  $t6, .L00429B44
/* 00429AD4 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00429AD8 922F0010 */  lbu   $t7, 0x10($s1)
/* 00429ADC 24020037 */  li    $v0, 55
/* 00429AE0 144F0005 */  bne   $v0, $t7, .L00429AF8
/* 00429AE4 00000000 */   nop   
/* 00429AE8 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00429AEC 2408001A */  li    $t0, 26
/* 00429AF0 10000003 */  b     .L00429B00
/* 00429AF4 A0880000 */   sb    $t0, ($a0)
.L00429AF8:
/* 00429AF8 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00429AFC A0820000 */  sb    $v0, ($a0)
.L00429B00:
/* 00429B00 90820001 */  lbu   $v0, 1($a0)
/* 00429B04 92380001 */  lbu   $t8, 1($s1)
/* 00429B08 8E2D001C */  lw    $t5, 0x1c($s1)
/* 00429B0C 00024EC0 */  sll   $t1, $v0, 0x1b
/* 00429B10 00095EC2 */  srl   $t3, $t1, 0x1b
/* 00429B14 030BC826 */  xor   $t9, $t8, $t3
/* 00429B18 332A001F */  andi  $t2, $t9, 0x1f
/* 00429B1C 01426026 */  xor   $t4, $t2, $v0
/* 00429B20 A08C0001 */  sb    $t4, 1($a0)
/* 00429B24 A4800002 */  sh    $zero, 2($a0)
/* 00429B28 AC8D0004 */  sw    $t5, 4($a0)
/* 00429B2C 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00429B30 0320F809 */  jalr  $t9
/* 00429B34 00000000 */   nop   
/* 00429B38 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00429B3C 1000019D */  b     .L0042A1B4
/* 00429B40 24020001 */   li    $v0, 1
.L00429B44:
/* 00429B44 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00429B48 922B0010 */  lbu   $t3, 0x10($s1)
/* 00429B4C 24020037 */  li    $v0, 55
/* 00429B50 908F0001 */  lbu   $t7, 1($a0)
/* 00429B54 240E0049 */  li    $t6, 73
/* 00429B58 24180004 */  li    $t8, 4
/* 00429B5C 31E8FFE0 */  andi  $t0, $t7, 0xffe0
/* 00429B60 35090006 */  ori   $t1, $t0, 6
/* 00429B64 A08E0000 */  sb    $t6, ($a0)
/* 00429B68 A0890001 */  sb    $t1, 1($a0)
/* 00429B6C 144B0005 */  bne   $v0, $t3, .L00429B84
/* 00429B70 AC980008 */   sw    $t8, 8($a0)
/* 00429B74 8E39001C */  lw    $t9, 0x1c($s1)
/* 00429B78 00195023 */  negu  $t2, $t9
/* 00429B7C 10000003 */  b     .L00429B8C
/* 00429B80 AC8A0010 */   sw    $t2, 0x10($a0)
.L00429B84:
/* 00429B84 8E2C001C */  lw    $t4, 0x1c($s1)
/* 00429B88 AC8C0010 */  sw    $t4, 0x10($a0)
.L00429B8C:
/* 00429B8C 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00429B90 0320F809 */  jalr  $t9
/* 00429B94 00000000 */   nop   
/* 00429B98 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00429B9C 10000185 */  b     .L0042A1B4
/* 00429BA0 24020001 */   li    $v0, 1
.L00429BA4:
/* 00429BA4 922D0010 */  lbu   $t5, 0x10($s1)
.L00429BA8:
/* 00429BA8 2DAE0080 */  sltiu $t6, $t5, 0x80
/* 00429BAC 11C00009 */  beqz  $t6, .L00429BD4
/* 00429BB0 00000000 */   nop   
/* 00429BB4 8F898044 */  lw    $t1, %got(D_1001066C)($gp)
/* 00429BB8 000D7943 */  sra   $t7, $t5, 5
/* 00429BBC 000F4080 */  sll   $t0, $t7, 2
/* 00429BC0 2529066C */  addiu $t1, %lo(D_1001066C) # addiu $t1, $t1, 0x66c
/* 00429BC4 0128C021 */  addu  $t8, $t1, $t0
/* 00429BC8 8F0B0000 */  lw    $t3, ($t8)
/* 00429BCC 01ABC804 */  sllv  $t9, $t3, $t5
/* 00429BD0 2B2E0000 */  slti  $t6, $t9, 0
.L00429BD4:
/* 00429BD4 51C00052 */  beql  $t6, $zero, .L00429D20
/* 00429BD8 922C0010 */   lbu   $t4, 0x10($s1)
/* 00429BDC 8F998020 */  lw    $t9, %got(func_00428DD8)($gp)
/* 00429BE0 02002025 */  move  $a0, $s0
/* 00429BE4 8E250014 */  lw    $a1, 0x14($s1)
/* 00429BE8 27398DD8 */  addiu $t9, %lo(func_00428DD8) # addiu $t9, $t9, -0x7228
/* 00429BEC 0320F809 */  jalr  $t9
/* 00429BF0 8FA2002C */   lw    $v0, 0x2c($sp)
/* 00429BF4 10400049 */  beqz  $v0, .L00429D1C
/* 00429BF8 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00429BFC 8E2C0018 */  lw    $t4, 0x18($s1)
/* 00429C00 3C017000 */  lui   $at, 0x7000
/* 00429C04 918F0000 */  lbu   $t7, ($t4)
/* 00429C08 2DE90020 */  sltiu $t1, $t7, 0x20
/* 00429C0C 00094023 */  negu  $t0, $t1
/* 00429C10 0101C024 */  and   $t8, $t0, $at
/* 00429C14 01F85804 */  sllv  $t3, $t8, $t7
/* 00429C18 05630041 */  bgezl $t3, .L00429D20
/* 00429C1C 922C0010 */   lbu   $t4, 0x10($s1)
/* 00429C20 8F998020 */  lw    $t9, %got(func_0042933C)($gp)
/* 00429C24 02002025 */  move  $a0, $s0
/* 00429C28 8E250014 */  lw    $a1, 0x14($s1)
/* 00429C2C 2739933C */  addiu $t9, %lo(func_0042933C) # addiu $t9, $t9, -0x6cc4
/* 00429C30 0320F809 */  jalr  $t9
/* 00429C34 8FA2002C */   lw    $v0, 0x2c($sp)
/* 00429C38 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00429C3C A3A2002A */  sb    $v0, 0x2a($sp)
/* 00429C40 8FA2002C */  lw    $v0, 0x2c($sp)
/* 00429C44 8F99801C */  lw    $t9, %got(func_00426FA4)($gp)
/* 00429C48 8E240018 */  lw    $a0, 0x18($s1)
/* 00429C4C 00002825 */  move  $a1, $zero
/* 00429C50 27396FA4 */  addiu $t9, %lo(func_00426FA4) # addiu $t9, $t9, 0x6fa4
/* 00429C54 00003025 */  move  $a2, $zero
/* 00429C58 0320F809 */  jalr  $t9
/* 00429C5C 00003825 */   move  $a3, $zero
/* 00429C60 93AD002A */  lbu   $t5, 0x2a($sp)
/* 00429C64 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00429C68 51A0001B */  beql  $t5, $zero, .L00429CD8
/* 00429C6C 922B0010 */   lbu   $t3, 0x10($s1)
/* 00429C70 92390010 */  lbu   $t9, 0x10($s1)
/* 00429C74 24020001 */  li    $v0, 1
/* 00429C78 14590005 */  bne   $v0, $t9, .L00429C90
/* 00429C7C 00000000 */   nop   
/* 00429C80 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00429C84 240A007D */  li    $t2, 125
/* 00429C88 10000003 */  b     .L00429C98
/* 00429C8C A08A0000 */   sb    $t2, ($a0)
.L00429C90:
/* 00429C90 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00429C94 A0820000 */  sb    $v0, ($a0)
.L00429C98:
/* 00429C98 90820001 */  lbu   $v0, 1($a0)
/* 00429C9C 922E0001 */  lbu   $t6, 1($s1)
/* 00429CA0 A4800002 */  sh    $zero, 2($a0)
/* 00429CA4 000266C0 */  sll   $t4, $v0, 0x1b
/* 00429CA8 000C4EC2 */  srl   $t1, $t4, 0x1b
/* 00429CAC 01C94026 */  xor   $t0, $t6, $t1
/* 00429CB0 3118001F */  andi  $t8, $t0, 0x1f
/* 00429CB4 03027826 */  xor   $t7, $t8, $v0
/* 00429CB8 A08F0001 */  sb    $t7, 1($a0)
/* 00429CBC 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00429CC0 0320F809 */  jalr  $t9
/* 00429CC4 00000000 */   nop   
/* 00429CC8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00429CCC 10000139 */  b     .L0042A1B4
/* 00429CD0 24020001 */   li    $v0, 1
/* 00429CD4 922B0010 */  lbu   $t3, 0x10($s1)
.L00429CD8:
/* 00429CD8 24010001 */  li    $at, 1
/* 00429CDC 1561000D */  bne   $t3, $at, .L00429D14
/* 00429CE0 00000000 */   nop   
/* 00429CE4 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00429CE8 2403005E */  li    $v1, 94
/* 00429CEC 908D0001 */  lbu   $t5, 1($a0)
/* 00429CF0 A0830000 */  sb    $v1, ($a0)
/* 00429CF4 A4800002 */  sh    $zero, 2($a0)
/* 00429CF8 31B9FFE0 */  andi  $t9, $t5, 0xffe0
/* 00429CFC 372A0006 */  ori   $t2, $t9, 6
/* 00429D00 A08A0001 */  sb    $t2, 1($a0)
/* 00429D04 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00429D08 0320F809 */  jalr  $t9
/* 00429D0C 00000000 */   nop   
/* 00429D10 8FBC0020 */  lw    $gp, 0x20($sp)
.L00429D14:
/* 00429D14 10000127 */  b     .L0042A1B4
/* 00429D18 24020001 */   li    $v0, 1
.L00429D1C:
/* 00429D1C 922C0010 */  lbu   $t4, 0x10($s1)
.L00429D20:
/* 00429D20 24010001 */  li    $at, 1
/* 00429D24 55810044 */  bnel  $t4, $at, .L00429E38
/* 00429D28 92190000 */   lbu   $t9, ($s0)
/* 00429D2C 8F998020 */  lw    $t9, %got(func_00428DD8)($gp)
/* 00429D30 02002025 */  move  $a0, $s0
/* 00429D34 8E250018 */  lw    $a1, 0x18($s1)
/* 00429D38 27398DD8 */  addiu $t9, %lo(func_00428DD8) # addiu $t9, $t9, -0x7228
/* 00429D3C 0320F809 */  jalr  $t9
/* 00429D40 8FA2002C */   lw    $v0, 0x2c($sp)
/* 00429D44 1040003B */  beqz  $v0, .L00429E34
/* 00429D48 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00429D4C 8E2E0014 */  lw    $t6, 0x14($s1)
/* 00429D50 3C017000 */  lui   $at, 0x7000
/* 00429D54 91C90000 */  lbu   $t1, ($t6)
/* 00429D58 2D280020 */  sltiu $t0, $t1, 0x20
/* 00429D5C 0008C023 */  negu  $t8, $t0
/* 00429D60 03017824 */  and   $t7, $t8, $at
/* 00429D64 012F5804 */  sllv  $t3, $t7, $t1
/* 00429D68 05630033 */  bgezl $t3, .L00429E38
/* 00429D6C 92190000 */   lbu   $t9, ($s0)
/* 00429D70 8F998020 */  lw    $t9, %got(func_0042933C)($gp)
/* 00429D74 02002025 */  move  $a0, $s0
/* 00429D78 8E250018 */  lw    $a1, 0x18($s1)
/* 00429D7C 2739933C */  addiu $t9, %lo(func_0042933C) # addiu $t9, $t9, -0x6cc4
/* 00429D80 0320F809 */  jalr  $t9
/* 00429D84 8FA2002C */   lw    $v0, 0x2c($sp)
/* 00429D88 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00429D8C A3A2002A */  sb    $v0, 0x2a($sp)
/* 00429D90 8FA2002C */  lw    $v0, 0x2c($sp)
/* 00429D94 8F99801C */  lw    $t9, %got(func_00426FA4)($gp)
/* 00429D98 8E240014 */  lw    $a0, 0x14($s1)
/* 00429D9C 00002825 */  move  $a1, $zero
/* 00429DA0 27396FA4 */  addiu $t9, %lo(func_00426FA4) # addiu $t9, $t9, 0x6fa4
/* 00429DA4 00003025 */  move  $a2, $zero
/* 00429DA8 0320F809 */  jalr  $t9
/* 00429DAC 00003825 */   move  $a3, $zero
/* 00429DB0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00429DB4 2403005E */  li    $v1, 94
/* 00429DB8 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00429DBC 908D0001 */  lbu   $t5, 1($a0)
/* 00429DC0 A0830000 */  sb    $v1, ($a0)
/* 00429DC4 A4800002 */  sh    $zero, 2($a0)
/* 00429DC8 31B9FFE0 */  andi  $t9, $t5, 0xffe0
/* 00429DCC 372A0006 */  ori   $t2, $t9, 6
/* 00429DD0 A08A0001 */  sb    $t2, 1($a0)
/* 00429DD4 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00429DD8 0320F809 */  jalr  $t9
/* 00429DDC 00000000 */   nop   
/* 00429DE0 93AC002A */  lbu   $t4, 0x2a($sp)
/* 00429DE4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00429DE8 240E0001 */  li    $t6, 1
/* 00429DEC 1180000F */  beqz  $t4, .L00429E2C
/* 00429DF0 8F848DA4 */   lw     $a0, %got(u)($gp)
/* 00429DF4 90820001 */  lbu   $v0, 1($a0)
/* 00429DF8 92280001 */  lbu   $t0, 1($s1)
/* 00429DFC A08E0000 */  sb    $t6, ($a0)
/* 00429E00 0002C6C0 */  sll   $t8, $v0, 0x1b
/* 00429E04 00187EC2 */  srl   $t7, $t8, 0x1b
/* 00429E08 010F4826 */  xor   $t1, $t0, $t7
/* 00429E0C 312B001F */  andi  $t3, $t1, 0x1f
/* 00429E10 01626826 */  xor   $t5, $t3, $v0
/* 00429E14 A08D0001 */  sb    $t5, 1($a0)
/* 00429E18 A4800002 */  sh    $zero, 2($a0)
/* 00429E1C 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00429E20 0320F809 */  jalr  $t9
/* 00429E24 00000000 */   nop   
/* 00429E28 8FBC0020 */  lw    $gp, 0x20($sp)
.L00429E2C:
/* 00429E2C 100000E1 */  b     .L0042A1B4
/* 00429E30 24020001 */   li    $v0, 1
.L00429E34:
/* 00429E34 92190000 */  lbu   $t9, ($s0)
.L00429E38:
/* 00429E38 24010004 */  li    $at, 4
/* 00429E3C 572100DD */  bnel  $t9, $at, .L0042A1B4
/* 00429E40 93A2002B */   lbu   $v0, 0x2b($sp)
/* 00429E44 920A0010 */  lbu   $t2, 0x10($s0)
/* 00429E48 2D4C0040 */  sltiu $t4, $t2, 0x40
/* 00429E4C 11800009 */  beqz  $t4, .L00429E74
/* 00429E50 00000000 */   nop   
/* 00429E54 8F888044 */  lw    $t0, %got(D_10010664)($gp)
/* 00429E58 000A7143 */  sra   $t6, $t2, 5
/* 00429E5C 000EC080 */  sll   $t8, $t6, 2
/* 00429E60 25080664 */  addiu $t0, %lo(D_10010664) # addiu $t0, $t0, 0x664
/* 00429E64 01187821 */  addu  $t7, $t0, $t8
/* 00429E68 8DE90000 */  lw    $t1, ($t7)
/* 00429E6C 01495804 */  sllv  $t3, $t1, $t2
/* 00429E70 296C0000 */  slti  $t4, $t3, 0
.L00429E74:
/* 00429E74 5180003F */  beql  $t4, $zero, .L00429F74
/* 00429E78 920D0010 */   lbu   $t5, 0x10($s0)
/* 00429E7C 8F998020 */  lw    $t9, %got(func_00428DD8)($gp)
/* 00429E80 8E040014 */  lw    $a0, 0x14($s0)
/* 00429E84 02202825 */  move  $a1, $s1
/* 00429E88 27398DD8 */  addiu $t9, %lo(func_00428DD8) # addiu $t9, $t9, -0x7228
/* 00429E8C 0320F809 */  jalr  $t9
/* 00429E90 8FA2002C */   lw    $v0, 0x2c($sp)
/* 00429E94 10400036 */  beqz  $v0, .L00429F70
/* 00429E98 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00429E9C 8F998020 */  lw    $t9, %got(func_0042933C)($gp)
/* 00429EA0 8E040014 */  lw    $a0, 0x14($s0)
/* 00429EA4 02202825 */  move  $a1, $s1
/* 00429EA8 2739933C */  addiu $t9, %lo(func_0042933C) # addiu $t9, $t9, -0x6cc4
/* 00429EAC 0320F809 */  jalr  $t9
/* 00429EB0 8FA2002C */   lw    $v0, 0x2c($sp)
/* 00429EB4 305900FF */  andi  $t9, $v0, 0xff
/* 00429EB8 13200015 */  beqz  $t9, .L00429F10
/* 00429EBC 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00429EC0 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00429EC4 92080001 */  lbu   $t0, 1($s0)
/* 00429EC8 920E0010 */  lbu   $t6, 0x10($s0)
/* 00429ECC 90820001 */  lbu   $v0, 1($a0)
/* 00429ED0 8E0D001C */  lw    $t5, 0x1c($s0)
/* 00429ED4 A4800002 */  sh    $zero, 2($a0)
/* 00429ED8 0002C6C0 */  sll   $t8, $v0, 0x1b
/* 00429EDC 00187EC2 */  srl   $t7, $t8, 0x1b
/* 00429EE0 010F4826 */  xor   $t1, $t0, $t7
/* 00429EE4 312A001F */  andi  $t2, $t1, 0x1f
/* 00429EE8 01425826 */  xor   $t3, $t2, $v0
/* 00429EEC A08B0001 */  sb    $t3, 1($a0)
/* 00429EF0 A08E0000 */  sb    $t6, ($a0)
/* 00429EF4 AC8D0004 */  sw    $t5, 4($a0)
/* 00429EF8 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00429EFC 0320F809 */  jalr  $t9
/* 00429F00 00000000 */   nop   
/* 00429F04 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00429F08 100000AA */  b     .L0042A1B4
/* 00429F0C 24020001 */   li    $v0, 1
.L00429F10:
/* 00429F10 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00429F14 920F0010 */  lbu   $t7, 0x10($s0)
/* 00429F18 24020037 */  li    $v0, 55
/* 00429F1C 90990001 */  lbu   $t9, 1($a0)
/* 00429F20 240C0049 */  li    $t4, 73
/* 00429F24 24080004 */  li    $t0, 4
/* 00429F28 332EFFE0 */  andi  $t6, $t9, 0xffe0
/* 00429F2C 35D80006 */  ori   $t8, $t6, 6
/* 00429F30 A08C0000 */  sb    $t4, ($a0)
/* 00429F34 A0980001 */  sb    $t8, 1($a0)
/* 00429F38 144F0004 */  bne   $v0, $t7, .L00429F4C
/* 00429F3C AC880008 */   sw    $t0, 8($a0)
/* 00429F40 8E09001C */  lw    $t1, 0x1c($s0)
/* 00429F44 10000004 */  b     .L00429F58
/* 00429F48 AC890010 */   sw    $t1, 0x10($a0)
.L00429F4C:
/* 00429F4C 8E0A001C */  lw    $t2, 0x1c($s0)
/* 00429F50 000A5823 */  negu  $t3, $t2
/* 00429F54 AC8B0010 */  sw    $t3, 0x10($a0)
.L00429F58:
/* 00429F58 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00429F5C 0320F809 */  jalr  $t9
/* 00429F60 00000000 */   nop   
/* 00429F64 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00429F68 10000092 */  b     .L0042A1B4
/* 00429F6C 24020001 */   li    $v0, 1
.L00429F70:
/* 00429F70 920D0010 */  lbu   $t5, 0x10($s0)
.L00429F74:
/* 00429F74 2DAC0080 */  sltiu $t4, $t5, 0x80
/* 00429F78 11800009 */  beqz  $t4, .L00429FA0
/* 00429F7C 00000000 */   nop   
/* 00429F80 8F988044 */  lw    $t8, %got(D_1001066C)($gp)
/* 00429F84 000DC943 */  sra   $t9, $t5, 5
/* 00429F88 00197080 */  sll   $t6, $t9, 2
/* 00429F8C 2718066C */  addiu $t8, %lo(D_1001066C) # addiu $t8, $t8, 0x66c
/* 00429F90 030E4021 */  addu  $t0, $t8, $t6
/* 00429F94 8D0F0000 */  lw    $t7, ($t0)
/* 00429F98 01AF4804 */  sllv  $t1, $t7, $t5
/* 00429F9C 292C0000 */  slti  $t4, $t1, 0
.L00429FA0:
/* 00429FA0 5180004B */  beql  $t4, $zero, .L0042A0D0
/* 00429FA4 920C0010 */   lbu   $t4, 0x10($s0)
/* 00429FA8 8F998020 */  lw    $t9, %got(func_00428DD8)($gp)
/* 00429FAC 8E040014 */  lw    $a0, 0x14($s0)
/* 00429FB0 02202825 */  move  $a1, $s1
/* 00429FB4 27398DD8 */  addiu $t9, %lo(func_00428DD8) # addiu $t9, $t9, -0x7228
/* 00429FB8 0320F809 */  jalr  $t9
/* 00429FBC 8FA2002C */   lw    $v0, 0x2c($sp)
/* 00429FC0 10400042 */  beqz  $v0, .L0042A0CC
/* 00429FC4 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00429FC8 8E0B0018 */  lw    $t3, 0x18($s0)
/* 00429FCC 3C017000 */  lui   $at, 0x7000
/* 00429FD0 91790000 */  lbu   $t9, ($t3)
/* 00429FD4 2F380020 */  sltiu $t8, $t9, 0x20
/* 00429FD8 00187023 */  negu  $t6, $t8
/* 00429FDC 01C14024 */  and   $t0, $t6, $at
/* 00429FE0 03287804 */  sllv  $t7, $t0, $t9
/* 00429FE4 05E3003A */  bgezl $t7, .L0042A0D0
/* 00429FE8 920C0010 */   lbu   $t4, 0x10($s0)
/* 00429FEC 8F998020 */  lw    $t9, %got(func_0042933C)($gp)
/* 00429FF0 8E040014 */  lw    $a0, 0x14($s0)
/* 00429FF4 02202825 */  move  $a1, $s1
/* 00429FF8 2739933C */  addiu $t9, %lo(func_0042933C) # addiu $t9, $t9, -0x6cc4
/* 00429FFC 0320F809 */  jalr  $t9
/* 0042A000 8FA2002C */   lw    $v0, 0x2c($sp)
/* 0042A004 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A008 A3A2002A */  sb    $v0, 0x2a($sp)
/* 0042A00C 8FA2002C */  lw    $v0, 0x2c($sp)
/* 0042A010 8F99801C */  lw    $t9, %got(func_00426FA4)($gp)
/* 0042A014 8E040018 */  lw    $a0, 0x18($s0)
/* 0042A018 00002825 */  move  $a1, $zero
/* 0042A01C 27396FA4 */  addiu $t9, %lo(func_00426FA4) # addiu $t9, $t9, 0x6fa4
/* 0042A020 00003025 */  move  $a2, $zero
/* 0042A024 0320F809 */  jalr  $t9
/* 0042A028 00003825 */   move  $a3, $zero
/* 0042A02C 93AD002A */  lbu   $t5, 0x2a($sp)
/* 0042A030 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A034 51A00014 */  beql  $t5, $zero, .L0042A088
/* 0042A038 92390010 */   lbu   $t9, 0x10($s1)
/* 0042A03C 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 0042A040 922A0001 */  lbu   $t2, 1($s1)
/* 0042A044 92090010 */  lbu   $t1, 0x10($s0)
/* 0042A048 90820001 */  lbu   $v0, 1($a0)
/* 0042A04C A4800002 */  sh    $zero, 2($a0)
/* 0042A050 A0890000 */  sb    $t1, ($a0)
/* 0042A054 000266C0 */  sll   $t4, $v0, 0x1b
/* 0042A058 000C5EC2 */  srl   $t3, $t4, 0x1b
/* 0042A05C 014BC026 */  xor   $t8, $t2, $t3
/* 0042A060 330E001F */  andi  $t6, $t8, 0x1f
/* 0042A064 01C24026 */  xor   $t0, $t6, $v0
/* 0042A068 A0880001 */  sb    $t0, 1($a0)
/* 0042A06C 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042A070 0320F809 */  jalr  $t9
/* 0042A074 00000000 */   nop   
/* 0042A078 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A07C 1000004D */  b     .L0042A1B4
/* 0042A080 24020001 */   li    $v0, 1
/* 0042A084 92390010 */  lbu   $t9, 0x10($s1)
.L0042A088:
/* 0042A088 2401007D */  li    $at, 125
/* 0042A08C 1721000D */  bne   $t9, $at, .L0042A0C4
/* 0042A090 00000000 */   nop   
/* 0042A094 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 0042A098 2403005E */  li    $v1, 94
/* 0042A09C 908F0001 */  lbu   $t7, 1($a0)
/* 0042A0A0 A0830000 */  sb    $v1, ($a0)
/* 0042A0A4 A4800002 */  sh    $zero, 2($a0)
/* 0042A0A8 31EDFFE0 */  andi  $t5, $t7, 0xffe0
/* 0042A0AC 35A90006 */  ori   $t1, $t5, 6
/* 0042A0B0 A0890001 */  sb    $t1, 1($a0)
/* 0042A0B4 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042A0B8 0320F809 */  jalr  $t9
/* 0042A0BC 00000000 */   nop   
/* 0042A0C0 8FBC0020 */  lw    $gp, 0x20($sp)
.L0042A0C4:
/* 0042A0C4 1000003B */  b     .L0042A1B4
/* 0042A0C8 24020001 */   li    $v0, 1
.L0042A0CC:
/* 0042A0CC 920C0010 */  lbu   $t4, 0x10($s0)
.L0042A0D0:
/* 0042A0D0 24010001 */  li    $at, 1
/* 0042A0D4 55810037 */  bnel  $t4, $at, .L0042A1B4
/* 0042A0D8 93A2002B */   lbu   $v0, 0x2b($sp)
/* 0042A0DC 8F998020 */  lw    $t9, %got(func_00428DD8)($gp)
/* 0042A0E0 8E040018 */  lw    $a0, 0x18($s0)
/* 0042A0E4 02202825 */  move  $a1, $s1
/* 0042A0E8 27398DD8 */  addiu $t9, %lo(func_00428DD8) # addiu $t9, $t9, -0x7228
/* 0042A0EC 0320F809 */  jalr  $t9
/* 0042A0F0 8FA2002C */   lw    $v0, 0x2c($sp)
/* 0042A0F4 1040002E */  beqz  $v0, .L0042A1B0
/* 0042A0F8 8FBC0020 */   lw    $gp, 0x20($sp)
/* 0042A0FC 8E040014 */  lw    $a0, 0x14($s0)
/* 0042A100 3C017000 */  lui   $at, 0x7000
/* 0042A104 00002825 */  move  $a1, $zero
/* 0042A108 908A0000 */  lbu   $t2, ($a0)
/* 0042A10C 2D4B0020 */  sltiu $t3, $t2, 0x20
/* 0042A110 000BC023 */  negu  $t8, $t3
/* 0042A114 03017024 */  and   $t6, $t8, $at
/* 0042A118 014E4004 */  sllv  $t0, $t6, $t2
/* 0042A11C 05030025 */  bgezl $t0, .L0042A1B4
/* 0042A120 93A2002B */   lbu   $v0, 0x2b($sp)
/* 0042A124 8F99801C */  lw    $t9, %got(func_00426FA4)($gp)
/* 0042A128 00003025 */  move  $a2, $zero
/* 0042A12C 00003825 */  move  $a3, $zero
/* 0042A130 27396FA4 */  addiu $t9, %lo(func_00426FA4) # addiu $t9, $t9, 0x6fa4
/* 0042A134 0320F809 */  jalr  $t9
/* 0042A138 8FA2002C */   lw    $v0, 0x2c($sp)
/* 0042A13C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A140 8E040018 */  lw    $a0, 0x18($s0)
/* 0042A144 02202825 */  move  $a1, $s1
/* 0042A148 8F998020 */  lw    $t9, %got(func_0042933C)($gp)
/* 0042A14C 8FA2002C */  lw    $v0, 0x2c($sp)
/* 0042A150 2739933C */  addiu $t9, %lo(func_0042933C) # addiu $t9, $t9, -0x6cc4
/* 0042A154 0320F809 */  jalr  $t9
/* 0042A158 00000000 */   nop   
/* 0042A15C 305900FF */  andi  $t9, $v0, 0xff
/* 0042A160 13200011 */  beqz  $t9, .L0042A1A8
/* 0042A164 8FBC0020 */   lw    $gp, 0x20($sp)
/* 0042A168 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 0042A16C 920D0001 */  lbu   $t5, 1($s0)
/* 0042A170 240F0001 */  li    $t7, 1
/* 0042A174 90820001 */  lbu   $v0, 1($a0)
/* 0042A178 A08F0000 */  sb    $t7, ($a0)
/* 0042A17C A4800002 */  sh    $zero, 2($a0)
/* 0042A180 00024EC0 */  sll   $t1, $v0, 0x1b
/* 0042A184 000966C2 */  srl   $t4, $t1, 0x1b
/* 0042A188 01AC5826 */  xor   $t3, $t5, $t4
/* 0042A18C 3178001F */  andi  $t8, $t3, 0x1f
/* 0042A190 03027026 */  xor   $t6, $t8, $v0
/* 0042A194 A08E0001 */  sb    $t6, 1($a0)
/* 0042A198 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042A19C 0320F809 */  jalr  $t9
/* 0042A1A0 00000000 */   nop   
/* 0042A1A4 8FBC0020 */  lw    $gp, 0x20($sp)
.L0042A1A8:
/* 0042A1A8 10000002 */  b     .L0042A1B4
/* 0042A1AC 24020001 */   li    $v0, 1
.L0042A1B0:
/* 0042A1B0 93A2002B */  lbu   $v0, 0x2b($sp)
.L0042A1B4:
/* 0042A1B4 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0042A1B8 8FB00018 */  lw    $s0, 0x18($sp)
/* 0042A1BC 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0042A1C0 03E00008 */  jr    $ra
/* 0042A1C4 27BD0030 */   addiu $sp, $sp, 0x30

    .type func_0042A1C8, @function
func_0042A1C8:
    # 0042BF08 reemit
/* 0042A1C8 3C1C0FBF */  .cpload $t9
/* 0042A1CC 279C00C8 */  
/* 0042A1D0 0399E021 */  
/* 0042A1D4 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 0042A1D8 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0042A1DC 8F918DA4 */  lw     $s1, %got(u)($gp)
/* 0042A1E0 AFBF003C */  sw    $ra, 0x3c($sp)
/* 0042A1E4 AFBC0038 */  sw    $gp, 0x38($sp)
/* 0042A1E8 92380001 */  lbu   $t8, 1($s1)
/* 0042A1EC AFB70034 */  sw    $s7, 0x34($sp)
/* 0042A1F0 AFB60030 */  sw    $s6, 0x30($sp)
/* 0042A1F4 AFB5002C */  sw    $s5, 0x2c($sp)
/* 0042A1F8 AFB40028 */  sw    $s4, 0x28($sp)
/* 0042A1FC AFB30024 */  sw    $s3, 0x24($sp)
/* 0042A200 AFB20020 */  sw    $s2, 0x20($sp)
/* 0042A204 AFB00018 */  sw    $s0, 0x18($sp)
/* 0042A208 2401FFE0 */  li    $at, -32
/* 0042A20C 8C4EFFF4 */  lw    $t6, -0xc($v0)
/* 0042A210 0301C824 */  and   $t9, $t8, $at
/* 0042A214 37280008 */  ori   $t0, $t9, 8
/* 0042A218 310900FF */  andi  $t1, $t0, 0xff
/* 0042A21C 2401FF1F */  li    $at, -225
/* 0042A220 8F8C8980 */  lw     $t4, %got(curblk)($gp)
/* 0042A224 01215024 */  and   $t2, $t1, $at
/* 0042A228 8DD70120 */  lw    $s7, 0x120($t6)
/* 0042A22C 240F006D */  li    $t7, 109
/* 0042A230 354B0020 */  ori   $t3, $t2, 0x20
/* 0042A234 A2280001 */  sb    $t0, 1($s1)
/* 0042A238 A22F0000 */  sb    $t7, ($s1)
/* 0042A23C A22B0001 */  sb    $t3, 1($s1)
/* 0042A240 8D8C0000 */  lw    $t4, ($t4)
/* 0042A244 8F858B34 */  lw     $a1, %got(int_reg_size)($gp)
/* 0042A248 8F928970 */  lw     $s2, %got(tempdisp)($gp)
/* 0042A24C AE2C0004 */  sw    $t4, 4($s1)
/* 0042A250 8CA50000 */  lw    $a1, ($a1)
/* 0042A254 8E430000 */  lw    $v1, ($s2)
/* 0042A258 AE250008 */  sw    $a1, 8($s1)
/* 0042A25C 0065001A */  div   $zero, $v1, $a1
/* 0042A260 00002010 */  mfhi  $a0
/* 0042A264 00856826 */  xor   $t5, $a0, $a1
/* 0042A268 14A00002 */  bnez  $a1, .L0042A274
/* 0042A26C 00000000 */   nop   
/* 0042A270 0007000D */  break 7
.L0042A274:
/* 0042A274 2401FFFF */  li    $at, -1
/* 0042A278 14A10004 */  bne   $a1, $at, .L0042A28C
/* 0042A27C 3C018000 */   lui   $at, 0x8000
/* 0042A280 14610002 */  bne   $v1, $at, .L0042A28C
/* 0042A284 00000000 */   nop   
/* 0042A288 0006000D */  break 6
.L0042A28C:
/* 0042A28C 00657021 */  addu  $t6, $v1, $a1
/* 0042A290 05A10002 */  bgez  $t5, .L0042A29C
/* 0042A294 00000000 */   nop   
/* 0042A298 00852021 */  addu  $a0, $a0, $a1
.L0042A29C:
/* 0042A29C 10800002 */  beqz  $a0, .L0042A2A8
/* 0042A2A0 01C47823 */   subu  $t7, $t6, $a0
/* 0042A2A4 AE4F0000 */  sw    $t7, ($s2)
.L0042A2A8:
/* 0042A2A8 8F828D38 */  lw     $v0, %got(firsteereg)($gp)
/* 0042A2AC 8F938D40 */  lw     $s3, %got(lasteereg)($gp)
/* 0042A2B0 90420003 */  lbu   $v0, 3($v0)
/* 0042A2B4 92730003 */  lbu   $s3, 3($s3)
/* 0042A2B8 305000FF */  andi  $s0, $v0, 0xff
/* 0042A2BC 0262082B */  sltu  $at, $s3, $v0
/* 0042A2C0 14200033 */  bnez  $at, .L0042A390
/* 0042A2C4 26730001 */   addiu $s3, $s3, 1
/* 0042A2C8 8F948DAC */  lw     $s4, %got(eereg_saved_locs)($gp)
/* 0042A2CC 327300FF */  andi  $s3, $s3, 0xff
/* 0042A2D0 8F9689FC */  lw     $s6, %got(highestmdef)($gp)
/* 0042A2D4 8F958B48 */  lw     $s5, %got(stack_reversed)($gp)
/* 0042A2D8 2694FFC8 */  addiu $s4, $s4, -0x38
/* 0042A2DC 2618FFF3 */  addiu $t8, $s0, -0xd
.L0042A2E0:
/* 0042A2E0 2F190020 */  sltiu $t9, $t8, 0x20
/* 0042A2E4 00194023 */  negu  $t0, $t9
/* 0042A2E8 02E84824 */  and   $t1, $s7, $t0
/* 0042A2EC 03095004 */  sllv  $t2, $t1, $t8
/* 0042A2F0 05410023 */  bgez  $t2, .L0042A380
/* 0042A2F4 02003025 */   move  $a2, $s0
/* 0042A2F8 00105880 */  sll   $t3, $s0, 2
/* 0042A2FC 028B2021 */  addu  $a0, $s4, $t3
/* 0042A300 8C820000 */  lw    $v0, ($a0)
/* 0042A304 54400013 */  bnezl $v0, .L0042A354
/* 0042A308 AE22000C */   sw    $v0, 0xc($s1)
/* 0042A30C 92AC0000 */  lbu   $t4, ($s5)
/* 0042A310 8F858B34 */  lw     $a1, %got(int_reg_size)($gp)
/* 0042A314 8E430000 */  lw    $v1, ($s2)
/* 0042A318 15800007 */  bnez  $t4, .L0042A338
/* 0042A31C 8CA50000 */   lw    $a1, ($a1)
/* 0042A320 00656821 */  addu  $t5, $v1, $a1
/* 0042A324 000D7023 */  negu  $t6, $t5
/* 0042A328 AE4D0000 */  sw    $t5, ($s2)
/* 0042A32C AC8E0000 */  sw    $t6, ($a0)
/* 0042A330 10000005 */  b     .L0042A348
/* 0042A334 01A01825 */   move  $v1, $t5
.L0042A338:
/* 0042A338 00657821 */  addu  $t7, $v1, $a1
/* 0042A33C AC830000 */  sw    $v1, ($a0)
/* 0042A340 01E01825 */  move  $v1, $t7
/* 0042A344 AE4F0000 */  sw    $t7, ($s2)
.L0042A348:
/* 0042A348 AEC30000 */  sw    $v1, ($s6)
/* 0042A34C 8C820000 */  lw    $v0, ($a0)
/* 0042A350 AE22000C */  sw    $v0, 0xc($s1)
.L0042A354:
/* 0042A354 8F998708 */  lw    $t9, %call16(coloroffset)($gp)
/* 0042A358 00C02025 */  move  $a0, $a2
/* 0042A35C 0320F809 */  jalr  $t9
/* 0042A360 00000000 */   nop   
/* 0042A364 8FBC0038 */  lw    $gp, 0x38($sp)
/* 0042A368 A6220002 */  sh    $v0, 2($s1)
/* 0042A36C 02202025 */  move  $a0, $s1
/* 0042A370 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042A374 0320F809 */  jalr  $t9
/* 0042A378 00000000 */   nop   
/* 0042A37C 8FBC0038 */  lw    $gp, 0x38($sp)
.L0042A380:
/* 0042A380 26100001 */  addiu $s0, $s0, 1
/* 0042A384 321000FF */  andi  $s0, $s0, 0xff
/* 0042A388 5613FFD5 */  bnel  $s0, $s3, .L0042A2E0
/* 0042A38C 2618FFF3 */   addiu $t8, $s0, -0xd
.L0042A390:
/* 0042A390 92280001 */  lbu   $t0, 1($s1)
/* 0042A394 8E430000 */  lw    $v1, ($s2)
/* 0042A398 8F948DAC */  lw     $s4, %got(eereg_saved_locs)($gp)
/* 0042A39C 3109FFE0 */  andi  $t1, $t0, 0xffe0
/* 0042A3A0 24190008 */  li    $t9, 8
/* 0042A3A4 3538000C */  ori   $t8, $t1, 0xc
/* 0042A3A8 30620007 */  andi  $v0, $v1, 7
/* 0042A3AC 8F958B48 */  lw     $s5, %got(stack_reversed)($gp)
/* 0042A3B0 8F9689FC */  lw     $s6, %got(highestmdef)($gp)
/* 0042A3B4 AE390008 */  sw    $t9, 8($s1)
/* 0042A3B8 A2380001 */  sb    $t8, 1($s1)
/* 0042A3BC 10400004 */  beqz  $v0, .L0042A3D0
/* 0042A3C0 2694FFC8 */   addiu $s4, $s4, -0x38
/* 0042A3C4 00625023 */  subu  $t2, $v1, $v0
/* 0042A3C8 254B0008 */  addiu $t3, $t2, 8
/* 0042A3CC AE4B0000 */  sw    $t3, ($s2)
.L0042A3D0:
/* 0042A3D0 8F828D38 */  lw     $v0, %got(firsteereg)($gp)
/* 0042A3D4 8F938D40 */  lw     $s3, %got(lasteereg)($gp)
/* 0042A3D8 90420007 */  lbu   $v0, 7($v0)
/* 0042A3DC 92730007 */  lbu   $s3, 7($s3)
/* 0042A3E0 305000FF */  andi  $s0, $v0, 0xff
/* 0042A3E4 0262082B */  sltu  $at, $s3, $v0
/* 0042A3E8 1420002D */  bnez  $at, .L0042A4A0
/* 0042A3EC 26730001 */   addiu $s3, $s3, 1
/* 0042A3F0 327300FF */  andi  $s3, $s3, 0xff
/* 0042A3F4 260CFFF3 */  addiu $t4, $s0, -0xd
.L0042A3F8:
/* 0042A3F8 2D8D0020 */  sltiu $t5, $t4, 0x20
/* 0042A3FC 000D7023 */  negu  $t6, $t5
/* 0042A400 02EE7824 */  and   $t7, $s7, $t6
/* 0042A404 018FC804 */  sllv  $t9, $t7, $t4
/* 0042A408 07210021 */  bgez  $t9, .L0042A490
/* 0042A40C 02003025 */   move  $a2, $s0
/* 0042A410 00104080 */  sll   $t0, $s0, 2
/* 0042A414 02882021 */  addu  $a0, $s4, $t0
/* 0042A418 8C820000 */  lw    $v0, ($a0)
/* 0042A41C 54400011 */  bnezl $v0, .L0042A464
/* 0042A420 AE22000C */   sw    $v0, 0xc($s1)
/* 0042A424 92A90000 */  lbu   $t1, ($s5)
/* 0042A428 8E430000 */  lw    $v1, ($s2)
/* 0042A42C 15200007 */  bnez  $t1, .L0042A44C
/* 0042A430 246B0008 */   addiu $t3, $v1, 8
/* 0042A434 24780008 */  addiu $t8, $v1, 8
/* 0042A438 00185023 */  negu  $t2, $t8
/* 0042A43C AE580000 */  sw    $t8, ($s2)
/* 0042A440 AC8A0000 */  sw    $t2, ($a0)
/* 0042A444 10000004 */  b     .L0042A458
/* 0042A448 03001825 */   move  $v1, $t8
.L0042A44C:
/* 0042A44C AC830000 */  sw    $v1, ($a0)
/* 0042A450 01601825 */  move  $v1, $t3
/* 0042A454 AE4B0000 */  sw    $t3, ($s2)
.L0042A458:
/* 0042A458 AEC30000 */  sw    $v1, ($s6)
/* 0042A45C 8C820000 */  lw    $v0, ($a0)
/* 0042A460 AE22000C */  sw    $v0, 0xc($s1)
.L0042A464:
/* 0042A464 8F998708 */  lw    $t9, %call16(coloroffset)($gp)
/* 0042A468 00C02025 */  move  $a0, $a2
/* 0042A46C 0320F809 */  jalr  $t9
/* 0042A470 00000000 */   nop   
/* 0042A474 8FBC0038 */  lw    $gp, 0x38($sp)
/* 0042A478 A6220002 */  sh    $v0, 2($s1)
/* 0042A47C 02202025 */  move  $a0, $s1
/* 0042A480 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042A484 0320F809 */  jalr  $t9
/* 0042A488 00000000 */   nop   
/* 0042A48C 8FBC0038 */  lw    $gp, 0x38($sp)
.L0042A490:
/* 0042A490 26100001 */  addiu $s0, $s0, 1
/* 0042A494 321000FF */  andi  $s0, $s0, 0xff
/* 0042A498 5613FFD7 */  bnel  $s0, $s3, .L0042A3F8
/* 0042A49C 260CFFF3 */   addiu $t4, $s0, -0xd
.L0042A4A0:
/* 0042A4A0 8FBF003C */  lw    $ra, 0x3c($sp)
/* 0042A4A4 8FB00018 */  lw    $s0, 0x18($sp)
/* 0042A4A8 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0042A4AC 8FB20020 */  lw    $s2, 0x20($sp)
/* 0042A4B0 8FB30024 */  lw    $s3, 0x24($sp)
/* 0042A4B4 8FB40028 */  lw    $s4, 0x28($sp)
/* 0042A4B8 8FB5002C */  lw    $s5, 0x2c($sp)
/* 0042A4BC 8FB60030 */  lw    $s6, 0x30($sp)
/* 0042A4C0 8FB70034 */  lw    $s7, 0x34($sp)
/* 0042A4C4 03E00008 */  jr    $ra
/* 0042A4C8 27BD0040 */   addiu $sp, $sp, 0x40
)"");

/*
0042B1A8 func_0042B1A8
*/
static void func_0042A4CC(struct Graphnode *node) {
    RegisterColor reg;
    int align;

    OPC = Urstr;
    DTYPE = Ldt;
    MTYPE = Mmt;
    IONE = curblk;
    LENGTH = int_reg_size;
    align = tempdisp % int_reg_size;
    if ((align ^ int_reg_size) < 0) {
        align += int_reg_size;
    }
    if (align != 0) {
        tempdisp = tempdisp + int_reg_size - align;
    }

    for (reg = firsteereg[0]; reg <= lasteereg[0]; reg++) {
        if (SET32_IN(node->bvs.stage3.strinsertin, reg - 13)) {
            if (eereg_saved_locs[reg - 13 - 1] == 0) {
                if (!stack_reversed) {
                    tempdisp += int_reg_size;
                    eereg_saved_locs[reg - 13 - 1] = -tempdisp;
                } else {
                    eereg_saved_locs[reg - 13 - 1] = tempdisp;
                    tempdisp += int_reg_size;
                }
                highestmdef = tempdisp;
            }
            OFFSET = eereg_saved_locs[reg - 13 - 1];
            LEXLEV = coloroffset(reg);
            uwrite(&u);
        }
    }

    LENGTH = 8;
    DTYPE = Qdt;
    if ((tempdisp & 7) != 0) {
        tempdisp = (tempdisp - (tempdisp & 7)) + 8;
    }

    for (reg = firsteereg[1]; reg <= lasteereg[1]; reg++) {
        if (SET32_IN(node->bvs.stage3.strinsertin, reg - 13)) {
            if (eereg_saved_locs[reg - 13 - 1] == 0) {
                if (!stack_reversed) {
                    tempdisp += 8;
                    eereg_saved_locs[reg - 13 - 1] = -tempdisp;
                } else {
                    eereg_saved_locs[reg - 13 - 1] = tempdisp;
                    tempdisp += 8;
                }
                highestmdef = tempdisp;
            }

            OFFSET = eereg_saved_locs[reg - 13 - 1];
            LEXLEV = coloroffset(reg);
            uwrite(&u);
        }
    }
}

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches


    .type func_0042A7D0, @function
func_0042A7D0:
    # 0042BF08 reemit
/* 0042A7D0 3C1C0FBF */  .cpload $t9
/* 0042A7D4 279CFAC0 */  
/* 0042A7D8 0399E021 */  
/* 0042A7DC 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 0042A7E0 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0042A7E4 8F918DA4 */  lw     $s1, %got(u)($gp)
/* 0042A7E8 2401FFE0 */  li    $at, -32
/* 0042A7EC 8F8B8980 */  lw     $t3, %got(curblk)($gp)
/* 0042A7F0 922F0001 */  lbu   $t7, 1($s1)
/* 0042A7F4 240E0070 */  li    $t6, 112
/* 0042A7F8 A22E0000 */  sb    $t6, ($s1)
/* 0042A7FC 01E1C024 */  and   $t8, $t7, $at
/* 0042A800 37190008 */  ori   $t9, $t8, 8
/* 0042A804 332800FF */  andi  $t0, $t9, 0xff
/* 0042A808 2401FF1F */  li    $at, -225
/* 0042A80C 01014824 */  and   $t1, $t0, $at
/* 0042A810 352A0020 */  ori   $t2, $t1, 0x20
/* 0042A814 A2390001 */  sb    $t9, 1($s1)
/* 0042A818 A22A0001 */  sb    $t2, 1($s1)
/* 0042A81C 8D6B0000 */  lw    $t3, ($t3)
/* 0042A820 8F838B34 */  lw     $v1, %got(int_reg_size)($gp)
/* 0042A824 AFB20020 */  sw    $s2, 0x20($sp)
/* 0042A828 8F928970 */  lw     $s2, %got(tempdisp)($gp)
/* 0042A82C AE2B0004 */  sw    $t3, 4($s1)
/* 0042A830 8C630000 */  lw    $v1, ($v1)
/* 0042A834 8E420000 */  lw    $v0, ($s2)
/* 0042A838 AFBF003C */  sw    $ra, 0x3c($sp)
/* 0042A83C AFBC0038 */  sw    $gp, 0x38($sp)
/* 0042A840 0043001A */  div   $zero, $v0, $v1
/* 0042A844 00002010 */  mfhi  $a0
/* 0042A848 00836026 */  xor   $t4, $a0, $v1
/* 0042A84C AFB70034 */  sw    $s7, 0x34($sp)
/* 0042A850 AFB60030 */  sw    $s6, 0x30($sp)
/* 0042A854 AFB5002C */  sw    $s5, 0x2c($sp)
/* 0042A858 AFB40028 */  sw    $s4, 0x28($sp)
/* 0042A85C AFB30024 */  sw    $s3, 0x24($sp)
/* 0042A860 AFB00018 */  sw    $s0, 0x18($sp)
/* 0042A864 AE230008 */  sw    $v1, 8($s1)
/* 0042A868 14600002 */  bnez  $v1, .L0042A874
/* 0042A86C 00000000 */   nop   
/* 0042A870 0007000D */  break 7
.L0042A874:
/* 0042A874 2401FFFF */  li    $at, -1
/* 0042A878 14610004 */  bne   $v1, $at, .L0042A88C
/* 0042A87C 3C018000 */   lui   $at, 0x8000
/* 0042A880 14410002 */  bne   $v0, $at, .L0042A88C
/* 0042A884 00000000 */   nop   
/* 0042A888 0006000D */  break 6
.L0042A88C:
/* 0042A88C 00436821 */  addu  $t5, $v0, $v1
/* 0042A890 05810002 */  bgez  $t4, .L0042A89C
/* 0042A894 00000000 */   nop   
/* 0042A898 00832021 */  addu  $a0, $a0, $v1
.L0042A89C:
/* 0042A89C 10800002 */  beqz  $a0, .L0042A8A8
/* 0042A8A0 01A47023 */   subu  $t6, $t5, $a0
/* 0042A8A4 AE4E0000 */  sw    $t6, ($s2)
.L0042A8A8:
/* 0042A8A8 8F828D38 */  lw     $v0, %got(firsteereg)($gp)
/* 0042A8AC 8F938D54 */  lw     $s3, %got(highesteereg)($gp)
/* 0042A8B0 90420003 */  lbu   $v0, 3($v0)
/* 0042A8B4 92730003 */  lbu   $s3, 3($s3)
/* 0042A8B8 305000FF */  andi  $s0, $v0, 0xff
/* 0042A8BC 0262082B */  sltu  $at, $s3, $v0
/* 0042A8C0 14200035 */  bnez  $at, .L0042A998
/* 0042A8C4 26730001 */   addiu $s3, $s3, 1
/* 0042A8C8 8F958DAC */  lw     $s5, %got(eereg_saved_locs)($gp)
/* 0042A8CC 327300FF */  andi  $s3, $s3, 0xff
/* 0042A8D0 8F9789FC */  lw     $s7, %got(highestmdef)($gp)
/* 0042A8D4 8F968B48 */  lw     $s6, %got(stack_reversed)($gp)
/* 0042A8D8 8F948A1C */  lw     $s4, %got(ugen_saved_eeregs)($gp)
/* 0042A8DC 26B5FFC8 */  addiu $s5, $s5, -0x38
/* 0042A8E0 8E8F0000 */  lw    $t7, ($s4)
.L0042A8E4:
/* 0042A8E4 2618FFF3 */  addiu $t8, $s0, -0xd
/* 0042A8E8 2F190020 */  sltiu $t9, $t8, 0x20
/* 0042A8EC 00194023 */  negu  $t0, $t9
/* 0042A8F0 01E84824 */  and   $t1, $t7, $t0
/* 0042A8F4 03095004 */  sllv  $t2, $t1, $t8
/* 0042A8F8 05400023 */  bltz  $t2, .L0042A988
/* 0042A8FC 02002825 */   move  $a1, $s0
/* 0042A900 00105880 */  sll   $t3, $s0, 2
/* 0042A904 02AB2021 */  addu  $a0, $s5, $t3
/* 0042A908 8C830000 */  lw    $v1, ($a0)
/* 0042A90C 54600013 */  bnezl $v1, .L0042A95C
/* 0042A910 AE23000C */   sw    $v1, 0xc($s1)
/* 0042A914 92CC0000 */  lbu   $t4, ($s6)
/* 0042A918 8F838B34 */  lw     $v1, %got(int_reg_size)($gp)
/* 0042A91C 8E420000 */  lw    $v0, ($s2)
/* 0042A920 15800007 */  bnez  $t4, .L0042A940
/* 0042A924 8C630000 */   lw    $v1, ($v1)
/* 0042A928 00436821 */  addu  $t5, $v0, $v1
/* 0042A92C 000D7023 */  negu  $t6, $t5
/* 0042A930 AE4D0000 */  sw    $t5, ($s2)
/* 0042A934 AC8E0000 */  sw    $t6, ($a0)
/* 0042A938 10000005 */  b     .L0042A950
/* 0042A93C 01A01025 */   move  $v0, $t5
.L0042A940:
/* 0042A940 0043C821 */  addu  $t9, $v0, $v1
/* 0042A944 AC820000 */  sw    $v0, ($a0)
/* 0042A948 03201025 */  move  $v0, $t9
/* 0042A94C AE590000 */  sw    $t9, ($s2)
.L0042A950:
/* 0042A950 AEE20000 */  sw    $v0, ($s7)
/* 0042A954 8C830000 */  lw    $v1, ($a0)
/* 0042A958 AE23000C */  sw    $v1, 0xc($s1)
.L0042A95C:
/* 0042A95C 8F998708 */  lw    $t9, %call16(coloroffset)($gp)
/* 0042A960 00A02025 */  move  $a0, $a1
/* 0042A964 0320F809 */  jalr  $t9
/* 0042A968 00000000 */   nop   
/* 0042A96C 8FBC0038 */  lw    $gp, 0x38($sp)
/* 0042A970 A6220002 */  sh    $v0, 2($s1)
/* 0042A974 02202025 */  move  $a0, $s1
/* 0042A978 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042A97C 0320F809 */  jalr  $t9
/* 0042A980 00000000 */   nop   
/* 0042A984 8FBC0038 */  lw    $gp, 0x38($sp)
.L0042A988:
/* 0042A988 26100001 */  addiu $s0, $s0, 1
/* 0042A98C 321000FF */  andi  $s0, $s0, 0xff
/* 0042A990 5613FFD4 */  bnel  $s0, $s3, .L0042A8E4
/* 0042A994 8E8F0000 */   lw    $t7, ($s4)
.L0042A998:
/* 0042A998 92280001 */  lbu   $t0, 1($s1)
/* 0042A99C 8E420000 */  lw    $v0, ($s2)
/* 0042A9A0 8F958DAC */  lw     $s5, %got(eereg_saved_locs)($gp)
/* 0042A9A4 3109FFE0 */  andi  $t1, $t0, 0xffe0
/* 0042A9A8 240F0008 */  li    $t7, 8
/* 0042A9AC 3538000C */  ori   $t8, $t1, 0xc
/* 0042A9B0 30430007 */  andi  $v1, $v0, 7
/* 0042A9B4 8F948A1C */  lw     $s4, %got(ugen_saved_eeregs)($gp)
/* 0042A9B8 8F968B48 */  lw     $s6, %got(stack_reversed)($gp)
/* 0042A9BC 8F9789FC */  lw     $s7, %got(highestmdef)($gp)
/* 0042A9C0 AE2F0008 */  sw    $t7, 8($s1)
/* 0042A9C4 A2380001 */  sb    $t8, 1($s1)
/* 0042A9C8 10600004 */  beqz  $v1, .L0042A9DC
/* 0042A9CC 26B5FFC8 */   addiu $s5, $s5, -0x38
/* 0042A9D0 00435023 */  subu  $t2, $v0, $v1
/* 0042A9D4 254B0008 */  addiu $t3, $t2, 8
/* 0042A9D8 AE4B0000 */  sw    $t3, ($s2)
.L0042A9DC:
/* 0042A9DC 8F828D38 */  lw     $v0, %got(firsteereg)($gp)
/* 0042A9E0 8F938D54 */  lw     $s3, %got(highesteereg)($gp)
/* 0042A9E4 90420007 */  lbu   $v0, 7($v0)
/* 0042A9E8 92730007 */  lbu   $s3, 7($s3)
/* 0042A9EC 305000FF */  andi  $s0, $v0, 0xff
/* 0042A9F0 0262082B */  sltu  $at, $s3, $v0
/* 0042A9F4 1420002E */  bnez  $at, .L0042AAB0
/* 0042A9F8 26730001 */   addiu $s3, $s3, 1
/* 0042A9FC 327300FF */  andi  $s3, $s3, 0xff
/* 0042AA00 8E8C0000 */  lw    $t4, ($s4)
.L0042AA04:
/* 0042AA04 260DFFF3 */  addiu $t5, $s0, -0xd
/* 0042AA08 2DAE0020 */  sltiu $t6, $t5, 0x20
/* 0042AA0C 000EC823 */  negu  $t9, $t6
/* 0042AA10 01997824 */  and   $t7, $t4, $t9
/* 0042AA14 01AF4004 */  sllv  $t0, $t7, $t5
/* 0042AA18 05000021 */  bltz  $t0, .L0042AAA0
/* 0042AA1C 02002825 */   move  $a1, $s0
/* 0042AA20 00104880 */  sll   $t1, $s0, 2
/* 0042AA24 02A92021 */  addu  $a0, $s5, $t1
/* 0042AA28 8C830000 */  lw    $v1, ($a0)
/* 0042AA2C 54600011 */  bnezl $v1, .L0042AA74
/* 0042AA30 AE23000C */   sw    $v1, 0xc($s1)
/* 0042AA34 92D80000 */  lbu   $t8, ($s6)
/* 0042AA38 8E420000 */  lw    $v0, ($s2)
/* 0042AA3C 17000007 */  bnez  $t8, .L0042AA5C
/* 0042AA40 244E0008 */   addiu $t6, $v0, 8
/* 0042AA44 244A0008 */  addiu $t2, $v0, 8
/* 0042AA48 000A5823 */  negu  $t3, $t2
/* 0042AA4C AE4A0000 */  sw    $t2, ($s2)
/* 0042AA50 AC8B0000 */  sw    $t3, ($a0)
/* 0042AA54 10000004 */  b     .L0042AA68
/* 0042AA58 01401025 */   move  $v0, $t2
.L0042AA5C:
/* 0042AA5C AC820000 */  sw    $v0, ($a0)
/* 0042AA60 01C01025 */  move  $v0, $t6
/* 0042AA64 AE4E0000 */  sw    $t6, ($s2)
.L0042AA68:
/* 0042AA68 AEE20000 */  sw    $v0, ($s7)
/* 0042AA6C 8C830000 */  lw    $v1, ($a0)
/* 0042AA70 AE23000C */  sw    $v1, 0xc($s1)
.L0042AA74:
/* 0042AA74 8F998708 */  lw    $t9, %call16(coloroffset)($gp)
/* 0042AA78 00A02025 */  move  $a0, $a1
/* 0042AA7C 0320F809 */  jalr  $t9
/* 0042AA80 00000000 */   nop   
/* 0042AA84 8FBC0038 */  lw    $gp, 0x38($sp)
/* 0042AA88 A6220002 */  sh    $v0, 2($s1)
/* 0042AA8C 02202025 */  move  $a0, $s1
/* 0042AA90 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042AA94 0320F809 */  jalr  $t9
/* 0042AA98 00000000 */   nop   
/* 0042AA9C 8FBC0038 */  lw    $gp, 0x38($sp)
.L0042AAA0:
/* 0042AAA0 26100001 */  addiu $s0, $s0, 1
/* 0042AAA4 321000FF */  andi  $s0, $s0, 0xff
/* 0042AAA8 5613FFD6 */  bnel  $s0, $s3, .L0042AA04
/* 0042AAAC 8E8C0000 */   lw    $t4, ($s4)
.L0042AAB0:
/* 0042AAB0 8FBF003C */  lw    $ra, 0x3c($sp)
/* 0042AAB4 8FB00018 */  lw    $s0, 0x18($sp)
/* 0042AAB8 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0042AABC 8FB20020 */  lw    $s2, 0x20($sp)
/* 0042AAC0 8FB30024 */  lw    $s3, 0x24($sp)
/* 0042AAC4 8FB40028 */  lw    $s4, 0x28($sp)
/* 0042AAC8 8FB5002C */  lw    $s5, 0x2c($sp)
/* 0042AACC 8FB60030 */  lw    $s6, 0x30($sp)
/* 0042AAD0 8FB70034 */  lw    $s7, 0x34($sp)
/* 0042AAD4 03E00008 */  jr    $ra
/* 0042AAD8 27BD0040 */   addiu $sp, $sp, 0x40

    .type func_0042AADC, @function
func_0042AADC:
    # 0042BF08 reemit
/* 0042AADC 3C1C0FBF */  .cpload $t9
/* 0042AAE0 279CF7B4 */  
/* 0042AAE4 0399E021 */  
/* 0042AAE8 27BDFF78 */  addiu $sp, $sp, -0x88
/* 0042AAEC 8F8E8B24 */  lw     $t6, %got(mipsflag)($gp)
/* 0042AAF0 AFB6002C */  sw    $s6, 0x2c($sp)
/* 0042AAF4 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0042AAF8 91CE0000 */  lbu   $t6, ($t6)
/* 0042AAFC 24040003 */  li    $a0, 3
/* 0042AB00 0040B025 */  move  $s6, $v0
/* 0042AB04 AFBF003C */  sw    $ra, 0x3c($sp)
/* 0042AB08 AFBE0038 */  sw    $fp, 0x38($sp)
/* 0042AB0C AFBC0034 */  sw    $gp, 0x34($sp)
/* 0042AB10 AFB70030 */  sw    $s7, 0x30($sp)
/* 0042AB14 AFB50028 */  sw    $s5, 0x28($sp)
/* 0042AB18 AFB40024 */  sw    $s4, 0x24($sp)
/* 0042AB1C AFB30020 */  sw    $s3, 0x20($sp)
/* 0042AB20 AFB10018 */  sw    $s1, 0x18($sp)
/* 0042AB24 AFB00014 */  sw    $s0, 0x14($sp)
/* 0042AB28 148E0030 */  bne   $a0, $t6, .L0042ABEC
/* 0042AB2C 00009025 */   move  $s2, $zero
/* 0042AB30 8C42FFF4 */  lw    $v0, -0xc($v0)
/* 0042AB34 8C450018 */  lw    $a1, 0x18($v0)
/* 0042AB38 10A0002C */  beqz  $a1, .L0042ABEC
/* 0042AB3C 00000000 */   nop   
/* 0042AB40 8CAF0004 */  lw    $t7, 4($a1)
/* 0042AB44 15E00029 */  bnez  $t7, .L0042ABEC
/* 0042AB48 00000000 */   nop   
/* 0042AB4C 8CA60000 */  lw    $a2, ($a1)
/* 0042AB50 8C4700E8 */  lw    $a3, 0xe8($v0)
/* 0042AB54 8CC300E8 */  lw    $v1, 0xe8($a2)
/* 0042AB58 10670024 */  beq   $v1, $a3, .L0042ABEC
/* 0042AB5C 00000000 */   nop   
/* 0042AB60 10600022 */  beqz  $v1, .L0042ABEC
/* 0042AB64 00000000 */   nop   
/* 0042AB68 8C780010 */  lw    $t8, 0x10($v1)
/* 0042AB6C 1707001F */  bne   $t8, $a3, .L0042ABEC
/* 0042AB70 00000000 */   nop   
/* 0042AB74 8C770000 */  lw    $s7, ($v1)
/* 0042AB78 8F998A0C */  lw     $t9, %got(looptab)($gp)
/* 0042AB7C 00174080 */  sll   $t0, $s7, 2
/* 0042AB80 8F390000 */  lw    $t9, ($t9)
/* 0042AB84 01174023 */  subu  $t0, $t0, $s7
/* 0042AB88 00084080 */  sll   $t0, $t0, 2
/* 0042AB8C 03281021 */  addu  $v0, $t9, $t0
/* 0042AB90 90490009 */  lbu   $t1, 9($v0)
/* 0042AB94 AFB70064 */  sw    $s7, 0x64($sp)
/* 0042AB98 11200014 */  beqz  $t1, .L0042ABEC
/* 0042AB9C 00000000 */   nop   
/* 0042ABA0 8C430004 */  lw    $v1, 4($v0)
/* 0042ABA4 AFB70064 */  sw    $s7, 0x64($sp)
/* 0042ABA8 10600010 */  beqz  $v1, .L0042ABEC
/* 0042ABAC 00608025 */   move  $s0, $v1
/* 0042ABB0 92030010 */  lbu   $v1, 0x10($s0)
.L0042ABB4:
/* 0042ABB4 00831026 */  xor   $v0, $a0, $v1
/* 0042ABB8 2C420001 */  sltiu $v0, $v0, 1
/* 0042ABBC 54400004 */  bnezl $v0, .L0042ABD0
/* 0042ABC0 304A00FF */   andi  $t2, $v0, 0xff
/* 0042ABC4 38620001 */  xori  $v0, $v1, 1
/* 0042ABC8 2C420001 */  sltiu $v0, $v0, 1
/* 0042ABCC 304A00FF */  andi  $t2, $v0, 0xff
.L0042ABD0:
/* 0042ABD0 305200FF */  andi  $s2, $v0, 0xff
/* 0042ABD4 8E100008 */  lw    $s0, 8($s0)
/* 0042ABD8 15400004 */  bnez  $t2, .L0042ABEC
/* 0042ABDC AFB70064 */   sw    $s7, 0x64($sp)
/* 0042ABE0 5600FFF4 */  bnezl $s0, .L0042ABB4
/* 0042ABE4 92030010 */   lbu   $v1, 0x10($s0)
/* 0042ABE8 AFB70064 */  sw    $s7, 0x64($sp)
.L0042ABEC:
/* 0042ABEC 8F8289E8 */  lw     $v0, %got(firstconstbit)($gp)
/* 0042ABF0 8FB70064 */  lw    $s7, 0x64($sp)
/* 0042ABF4 00009825 */  move  $s3, $zero
/* 0042ABF8 8C420000 */  lw    $v0, ($v0)
/* 0042ABFC 1840005B */  blez  $v0, .L0042AD6C
/* 0042AC00 00000000 */   nop   
/* 0042AC04 AFA0004C */  sw    $zero, 0x4c($sp)
.L0042AC08:
/* 0042AC08 8ECBFFF4 */  lw    $t3, -0xc($s6)
/* 0042AC0C 8FAD004C */  lw    $t5, 0x4c($sp)
/* 0042AC10 0262082A */  slt   $at, $s3, $v0
/* 0042AC14 8D6C0168 */  lw    $t4, 0x168($t3)
/* 0042AC18 018D7021 */  addu  $t6, $t4, $t5
/* 0042AC1C 8DCF000C */  lw    $t7, 0xc($t6)
/* 0042AC20 8DD80008 */  lw    $t8, 8($t6)
/* 0042AC24 8DC80004 */  lw    $t0, 4($t6)
/* 0042AC28 8DCA0000 */  lw    $t2, ($t6)
/* 0042AC2C 01F8C825 */  or    $t9, $t7, $t8
/* 0042AC30 03284825 */  or    $t1, $t9, $t0
/* 0042AC34 012A5825 */  or    $t3, $t1, $t2
/* 0042AC38 15600003 */  bnez  $t3, .L0042AC48
/* 0042AC3C 00000000 */   nop   
/* 0042AC40 10000045 */  b     .L0042AD58
/* 0042AC44 26730080 */   addiu $s3, $s3, 0x80
.L0042AC48:
/* 0042AC48 10200043 */  beqz  $at, .L0042AD58
/* 0042AC4C 0000A825 */   move  $s5, $zero
/* 0042AC50 2EAC0080 */  sltiu $t4, $s5, 0x80
.L0042AC54:
/* 0042AC54 1180000A */  beqz  $t4, .L0042AC80
/* 0042AC58 8EC2FFF4 */   lw    $v0, -0xc($s6)
/* 0042AC5C 8C4D0168 */  lw    $t5, 0x168($v0)
/* 0042AC60 8FAF004C */  lw    $t7, 0x4c($sp)
/* 0042AC64 0015C943 */  sra   $t9, $s5, 5
/* 0042AC68 00194080 */  sll   $t0, $t9, 2
/* 0042AC6C 01AFC021 */  addu  $t8, $t5, $t7
/* 0042AC70 03087021 */  addu  $t6, $t8, $t0
/* 0042AC74 8DC90000 */  lw    $t1, ($t6)
/* 0042AC78 02A95004 */  sllv  $t2, $t1, $s5
/* 0042AC7C 294C0000 */  slti  $t4, $t2, 0
.L0042AC80:
/* 0042AC80 1180002C */  beqz  $t4, .L0042AD34
/* 0042AC84 00000000 */   nop   
/* 0042AC88 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0042AC8C 02602025 */  move  $a0, $s3
/* 0042AC90 24450154 */  addiu $a1, $v0, 0x154
/* 0042AC94 0320F809 */  jalr  $t9
/* 0042AC98 00000000 */   nop   
/* 0042AC9C 1440000F */  bnez  $v0, .L0042ACDC
/* 0042ACA0 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0042ACA4 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0042ACA8 02602025 */  move  $a0, $s3
/* 0042ACAC 8F858CEC */  lw     $a1, %got(storeop)($gp)
/* 0042ACB0 0320F809 */  jalr  $t9
/* 0042ACB4 00000000 */   nop   
/* 0042ACB8 14400008 */  bnez  $v0, .L0042ACDC
/* 0042ACBC 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0042ACC0 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0042ACC4 02602025 */  move  $a0, $s3
/* 0042ACC8 8F858CF0 */  lw     $a1, %got(trapop)($gp)
/* 0042ACCC 0320F809 */  jalr  $t9
/* 0042ACD0 00000000 */   nop   
/* 0042ACD4 10400017 */  beqz  $v0, .L0042AD34
/* 0042ACD8 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042ACDC:
/* 0042ACDC 8F8D89EC */  lw     $t5, %got(bittab)($gp)
/* 0042ACE0 001378C0 */  sll   $t7, $s3, 3
/* 0042ACE4 8DAD0000 */  lw    $t5, ($t5)
/* 0042ACE8 01AFC821 */  addu  $t9, $t5, $t7
/* 0042ACEC 12400008 */  beqz  $s2, .L0042AD10
/* 0042ACF0 8F310000 */   lw    $s1, ($t9)
/* 0042ACF4 8F998718 */  lw    $t9, %call16(check_ix_candidate)($gp)
/* 0042ACF8 02202025 */  move  $a0, $s1
/* 0042ACFC 02E02825 */  move  $a1, $s7
/* 0042AD00 0320F809 */  jalr  $t9
/* 0042AD04 00000000 */   nop   
/* 0042AD08 1440000A */  bnez  $v0, .L0042AD34
/* 0042AD0C 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042AD10:
/* 0042AD10 8F99801C */  lw    $t9, %got(func_00426FA4)($gp)
/* 0042AD14 02202025 */  move  $a0, $s1
/* 0042AD18 24050001 */  li    $a1, 1
/* 0042AD1C 27396FA4 */  addiu $t9, %lo(func_00426FA4) # addiu $t9, $t9, 0x6fa4
/* 0042AD20 00003025 */  move  $a2, $zero
/* 0042AD24 00003825 */  move  $a3, $zero
/* 0042AD28 0320F809 */  jalr  $t9
/* 0042AD2C 02C01025 */   move  $v0, $s6
/* 0042AD30 8FBC0034 */  lw    $gp, 0x34($sp)
.L0042AD34:
/* 0042AD34 8F8289E8 */  lw     $v0, %got(firstconstbit)($gp)
/* 0042AD38 26730001 */  addiu $s3, $s3, 1
/* 0042AD3C 26B50001 */  addiu $s5, $s5, 1
/* 0042AD40 8C420000 */  lw    $v0, ($v0)
/* 0042AD44 0262082A */  slt   $at, $s3, $v0
/* 0042AD48 10200003 */  beqz  $at, .L0042AD58
/* 0042AD4C 24010080 */   li    $at, 128
/* 0042AD50 56A1FFC0 */  bnel  $s5, $at, .L0042AC54
/* 0042AD54 2EAC0080 */   sltiu $t4, $s5, 0x80
.L0042AD58:
/* 0042AD58 8FB8004C */  lw    $t8, 0x4c($sp)
/* 0042AD5C 0262082A */  slt   $at, $s3, $v0
/* 0042AD60 27080010 */  addiu $t0, $t8, 0x10
/* 0042AD64 1420FFA8 */  bnez  $at, .L0042AC08
/* 0042AD68 AFA8004C */   sw    $t0, 0x4c($sp)
.L0042AD6C:
/* 0042AD6C 524000C0 */  beql  $s2, $zero, .L0042B070
/* 0042AD70 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0042AD74 184000BD */  blez  $v0, .L0042B06C
/* 0042AD78 00009825 */   move  $s3, $zero
/* 0042AD7C AFA0004C */  sw    $zero, 0x4c($sp)
/* 0042AD80 241EFFE0 */  li    $fp, -32
/* 0042AD84 8F928DA4 */  lw     $s2, %got(u)($gp)
.L0042AD88:
/* 0042AD88 8ECEFFF4 */  lw    $t6, -0xc($s6)
/* 0042AD8C 8FAA004C */  lw    $t2, 0x4c($sp)
/* 0042AD90 0262082A */  slt   $at, $s3, $v0
/* 0042AD94 8DC90168 */  lw    $t1, 0x168($t6)
/* 0042AD98 012A5821 */  addu  $t3, $t1, $t2
/* 0042AD9C 8D6C000C */  lw    $t4, 0xc($t3)
/* 0042ADA0 8D6D0008 */  lw    $t5, 8($t3)
/* 0042ADA4 8D790004 */  lw    $t9, 4($t3)
/* 0042ADA8 8D680000 */  lw    $t0, ($t3)
/* 0042ADAC 018D7825 */  or    $t7, $t4, $t5
/* 0042ADB0 01F9C025 */  or    $t8, $t7, $t9
/* 0042ADB4 03087025 */  or    $t6, $t8, $t0
/* 0042ADB8 15C00003 */  bnez  $t6, .L0042ADC8
/* 0042ADBC 00000000 */   nop   
/* 0042ADC0 100000A5 */  b     .L0042B058
/* 0042ADC4 26730080 */   addiu $s3, $s3, 0x80
.L0042ADC8:
/* 0042ADC8 102000A3 */  beqz  $at, .L0042B058
/* 0042ADCC 0000A825 */   move  $s5, $zero
/* 0042ADD0 2EA90080 */  sltiu $t1, $s5, 0x80
.L0042ADD4:
/* 0042ADD4 1120000A */  beqz  $t1, .L0042AE00
/* 0042ADD8 8EC2FFF4 */   lw    $v0, -0xc($s6)
/* 0042ADDC 8C4A0168 */  lw    $t2, 0x168($v0)
/* 0042ADE0 8FAC004C */  lw    $t4, 0x4c($sp)
/* 0042ADE4 00157943 */  sra   $t7, $s5, 5
/* 0042ADE8 000FC880 */  sll   $t9, $t7, 2
/* 0042ADEC 014C6821 */  addu  $t5, $t2, $t4
/* 0042ADF0 01B95821 */  addu  $t3, $t5, $t9
/* 0042ADF4 8D780000 */  lw    $t8, ($t3)
/* 0042ADF8 02B84004 */  sllv  $t0, $t8, $s5
/* 0042ADFC 29090000 */  slti  $t1, $t0, 0
.L0042AE00:
/* 0042AE00 1120008C */  beqz  $t1, .L0042B034
/* 0042AE04 00000000 */   nop   
/* 0042AE08 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0042AE0C 02602025 */  move  $a0, $s3
/* 0042AE10 24450154 */  addiu $a1, $v0, 0x154
/* 0042AE14 0320F809 */  jalr  $t9
/* 0042AE18 00000000 */   nop   
/* 0042AE1C 1440000F */  bnez  $v0, .L0042AE5C
/* 0042AE20 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0042AE24 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0042AE28 02602025 */  move  $a0, $s3
/* 0042AE2C 8F858CEC */  lw     $a1, %got(storeop)($gp)
/* 0042AE30 0320F809 */  jalr  $t9
/* 0042AE34 00000000 */   nop   
/* 0042AE38 14400008 */  bnez  $v0, .L0042AE5C
/* 0042AE3C 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0042AE40 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0042AE44 02602025 */  move  $a0, $s3
/* 0042AE48 8F858CF0 */  lw     $a1, %got(trapop)($gp)
/* 0042AE4C 0320F809 */  jalr  $t9
/* 0042AE50 00000000 */   nop   
/* 0042AE54 10400077 */  beqz  $v0, .L0042B034
/* 0042AE58 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042AE5C:
/* 0042AE5C 8F8A89EC */  lw     $t2, %got(bittab)($gp)
/* 0042AE60 001360C0 */  sll   $t4, $s3, 3
/* 0042AE64 8F998718 */  lw    $t9, %call16(check_ix_candidate)($gp)
/* 0042AE68 8D4A0000 */  lw    $t2, ($t2)
/* 0042AE6C 02E02825 */  move  $a1, $s7
/* 0042AE70 014C7821 */  addu  $t7, $t2, $t4
/* 0042AE74 8DF10000 */  lw    $s1, ($t7)
/* 0042AE78 0320F809 */  jalr  $t9
/* 0042AE7C 02202025 */   move  $a0, $s1
/* 0042AE80 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042AE84 1040006B */  beqz  $v0, .L0042B034
/* 0042AE88 0040A025 */   move  $s4, $v0
/* 0042AE8C 8F8D8A0C */  lw     $t5, %got(looptab)($gp)
/* 0042AE90 0017C880 */  sll   $t9, $s7, 2
/* 0042AE94 0337C823 */  subu  $t9, $t9, $s7
/* 0042AE98 8DAD0000 */  lw    $t5, ($t5)
/* 0042AE9C 0019C880 */  sll   $t9, $t9, 2
/* 0042AEA0 240E0049 */  li    $t6, 73
/* 0042AEA4 01B95821 */  addu  $t3, $t5, $t9
/* 0042AEA8 8D700004 */  lw    $s0, 4($t3)
/* 0042AEAC 240F0004 */  li    $t7, 4
/* 0042AEB0 8E180000 */  lw    $t8, ($s0)
/* 0042AEB4 52380006 */  beql  $s1, $t8, .L0042AED0
/* 0042AEB8 92490001 */   lbu   $t1, 1($s2)
/* 0042AEBC 8E100008 */  lw    $s0, 8($s0)
.L0042AEC0:
/* 0042AEC0 8E080000 */  lw    $t0, ($s0)
/* 0042AEC4 5628FFFE */  bnel  $s1, $t0, .L0042AEC0
/* 0042AEC8 8E100008 */   lw    $s0, 8($s0)
/* 0042AECC 92490001 */  lbu   $t1, 1($s2)
.L0042AED0:
/* 0042AED0 8E0D000C */  lw    $t5, 0xc($s0)
/* 0042AED4 A24E0000 */  sb    $t6, ($s2)
/* 0042AED8 013E5024 */  and   $t2, $t1, $fp
/* 0042AEDC 354C0006 */  ori   $t4, $t2, 6
/* 0042AEE0 A24C0001 */  sb    $t4, 1($s2)
/* 0042AEE4 AE4F0008 */  sw    $t7, 8($s2)
/* 0042AEE8 AE4D0010 */  sw    $t5, 0x10($s2)
/* 0042AEEC 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042AEF0 02402025 */  move  $a0, $s2
/* 0042AEF4 0320F809 */  jalr  $t9
/* 0042AEF8 00000000 */   nop   
/* 0042AEFC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042AF00 02802025 */  move  $a0, $s4
/* 0042AF04 02E02825 */  move  $a1, $s7
/* 0042AF08 8F998724 */  lw    $t9, %call16(get_ix_source)($gp)
/* 0042AF0C 0320F809 */  jalr  $t9
/* 0042AF10 00000000 */   nop   
/* 0042AF14 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042AF18 00408025 */  move  $s0, $v0
/* 0042AF1C 8C450000 */  lw    $a1, ($v0)
/* 0042AF20 8F998020 */  lw    $t9, %got(func_00428DD8)($gp)
/* 0042AF24 02C01025 */  move  $v0, $s6
/* 0042AF28 02202025 */  move  $a0, $s1
/* 0042AF2C 27398DD8 */  addiu $t9, %lo(func_00428DD8) # addiu $t9, $t9, -0x7228
/* 0042AF30 0320F809 */  jalr  $t9
/* 0042AF34 00000000 */   nop   
/* 0042AF38 1040002C */  beqz  $v0, .L0042AFEC
/* 0042AF3C 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0042AF40 8F998020 */  lw    $t9, %got(func_0042933C)($gp)
/* 0042AF44 02202025 */  move  $a0, $s1
/* 0042AF48 8E050000 */  lw    $a1, ($s0)
/* 0042AF4C 2739933C */  addiu $t9, %lo(func_0042933C) # addiu $t9, $t9, -0x6cc4
/* 0042AF50 0320F809 */  jalr  $t9
/* 0042AF54 02C01025 */   move  $v0, $s6
/* 0042AF58 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042AF5C 004002B4 */  teq   $v0, $zero, 0xa
/* 0042AF60 924B0001 */  lbu   $t3, 1($s2)
/* 0042AF64 24190001 */  li    $t9, 1
/* 0042AF68 A2590000 */  sb    $t9, ($s2)
/* 0042AF6C 017EC024 */  and   $t8, $t3, $fp
/* 0042AF70 A2580001 */  sb    $t8, 1($s2)
/* 0042AF74 A6400002 */  sh    $zero, 2($s2)
/* 0042AF78 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042AF7C 02402025 */  move  $a0, $s2
/* 0042AF80 0320F809 */  jalr  $t9
/* 0042AF84 00000000 */   nop   
/* 0042AF88 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042AF8C 02202025 */  move  $a0, $s1
/* 0042AF90 8EC5FFF4 */  lw    $a1, -0xc($s6)
/* 0042AF94 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 0042AF98 27A6005C */  addiu $a2, $sp, 0x5c
/* 0042AF9C 00003825 */  move  $a3, $zero
/* 0042AFA0 0320F809 */  jalr  $t9
/* 0042AFA4 00000000 */   nop   
/* 0042AFA8 10400009 */  beqz  $v0, .L0042AFD0
/* 0042AFAC 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0042AFB0 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 0042AFB4 2404007B */  li    $a0, 123
/* 0042AFB8 8FA5005C */  lw    $a1, 0x5c($sp)
/* 0042AFBC 24060006 */  li    $a2, 6
/* 0042AFC0 0320F809 */  jalr  $t9
/* 0042AFC4 24070004 */   li    $a3, 4
/* 0042AFC8 1000001A */  b     .L0042B034
/* 0042AFCC 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042AFD0:
/* 0042AFD0 8F998290 */  lw    $t9, %call16(spilltemplodstr)($gp)
/* 0042AFD4 2404007B */  li    $a0, 123
/* 0042AFD8 24050006 */  li    $a1, 6
/* 0042AFDC 0320F809 */  jalr  $t9
/* 0042AFE0 8E260020 */   lw    $a2, 0x20($s1)
/* 0042AFE4 10000013 */  b     .L0042B034
/* 0042AFE8 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042AFEC:
/* 0042AFEC 8F99801C */  lw    $t9, %got(func_00426FA4)($gp)
/* 0042AFF0 8E040000 */  lw    $a0, ($s0)
/* 0042AFF4 00002825 */  move  $a1, $zero
/* 0042AFF8 27396FA4 */  addiu $t9, %lo(func_00426FA4) # addiu $t9, $t9, 0x6fa4
/* 0042AFFC 00003025 */  move  $a2, $zero
/* 0042B000 00003825 */  move  $a3, $zero
/* 0042B004 0320F809 */  jalr  $t9
/* 0042B008 02C01025 */   move  $v0, $s6
/* 0042B00C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042B010 02202025 */  move  $a0, $s1
/* 0042B014 24050001 */  li    $a1, 1
/* 0042B018 8F99801C */  lw    $t9, %got(func_00426FA4)($gp)
/* 0042B01C 00003025 */  move  $a2, $zero
/* 0042B020 24070001 */  li    $a3, 1
/* 0042B024 27396FA4 */  addiu $t9, %lo(func_00426FA4) # addiu $t9, $t9, 0x6fa4
/* 0042B028 0320F809 */  jalr  $t9
/* 0042B02C 02C01025 */   move  $v0, $s6
/* 0042B030 8FBC0034 */  lw    $gp, 0x34($sp)
.L0042B034:
/* 0042B034 8F8289E8 */  lw     $v0, %got(firstconstbit)($gp)
/* 0042B038 26730001 */  addiu $s3, $s3, 1
/* 0042B03C 26B50001 */  addiu $s5, $s5, 1
/* 0042B040 8C420000 */  lw    $v0, ($v0)
/* 0042B044 0262082A */  slt   $at, $s3, $v0
/* 0042B048 10200003 */  beqz  $at, .L0042B058
/* 0042B04C 24010080 */   li    $at, 128
/* 0042B050 56A1FF60 */  bnel  $s5, $at, .L0042ADD4
/* 0042B054 2EA90080 */   sltiu $t1, $s5, 0x80
.L0042B058:
/* 0042B058 8FA8004C */  lw    $t0, 0x4c($sp)
/* 0042B05C 0262082A */  slt   $at, $s3, $v0
/* 0042B060 250E0010 */  addiu $t6, $t0, 0x10
/* 0042B064 1420FF48 */  bnez  $at, .L0042AD88
/* 0042B068 AFAE004C */   sw    $t6, 0x4c($sp)
.L0042B06C:
/* 0042B06C 8FBF003C */  lw    $ra, 0x3c($sp)
.L0042B070:
/* 0042B070 8FB00014 */  lw    $s0, 0x14($sp)
/* 0042B074 8FB10018 */  lw    $s1, 0x18($sp)
/* 0042B078 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0042B07C 8FB30020 */  lw    $s3, 0x20($sp)
/* 0042B080 8FB40024 */  lw    $s4, 0x24($sp)
/* 0042B084 8FB50028 */  lw    $s5, 0x28($sp)
/* 0042B088 8FB6002C */  lw    $s6, 0x2c($sp)
/* 0042B08C 8FB70030 */  lw    $s7, 0x30($sp)
/* 0042B090 8FBE0038 */  lw    $fp, 0x38($sp)
/* 0042B094 03E00008 */  jr    $ra
/* 0042B098 27BD0088 */   addiu $sp, $sp, 0x88

    .type func_0042B09C, @function
func_0042B09C:
    # 0042BF08 reemit
/* 0042B09C 3C1C0FBF */  .cpload $t9
/* 0042B0A0 279CF1F4 */  
/* 0042B0A4 0399E021 */  
/* 0042B0A8 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0042B0AC AFBF002C */  sw    $ra, 0x2c($sp)
/* 0042B0B0 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0042B0B4 AFB30024 */  sw    $s3, 0x24($sp)
/* 0042B0B8 AFB20020 */  sw    $s2, 0x20($sp)
/* 0042B0BC AFB1001C */  sw    $s1, 0x1c($sp)
/* 0042B0C0 AFB00018 */  sw    $s0, 0x18($sp)
/* 0042B0C4 8C53FFF4 */  lw    $s3, -0xc($v0)
/* 0042B0C8 24100001 */  li    $s0, 1
/* 0042B0CC 24120024 */  li    $s2, 36
/* 0042B0D0 26710004 */  addiu $s1, $s3, 4
.L0042B0D4:
/* 0042B0D4 8E260040 */  lw    $a2, 0x40($s1)
/* 0042B0D8 2602FFFF */  addiu $v0, $s0, -1
/* 0042B0DC 000270C3 */  sra   $t6, $v0, 3
/* 0042B0E0 10C0000E */  beqz  $a2, .L0042B11C
/* 0042B0E4 026E7821 */   addu  $t7, $s3, $t6
/* 0042B0E8 91F800D5 */  lbu   $t8, 0xd5($t7)
/* 0042B0EC 30590007 */  andi  $t9, $v0, 7
/* 0042B0F0 27280018 */  addiu $t0, $t9, 0x18
/* 0042B0F4 01184804 */  sllv  $t1, $t8, $t0
/* 0042B0F8 000957C2 */  srl   $t2, $t1, 0x1f
/* 0042B0FC 51400008 */  beql  $t2, $zero, .L0042B120
/* 0042B100 26100001 */   addiu $s0, $s0, 1
/* 0042B104 8F9982A4 */  lw    $t9, %call16(genrlodrstr)($gp)
/* 0042B108 24040070 */  li    $a0, 112
/* 0042B10C 02002825 */  move  $a1, $s0
/* 0042B110 0320F809 */  jalr  $t9
/* 0042B114 00000000 */   nop   
/* 0042B118 8FBC0028 */  lw    $gp, 0x28($sp)
.L0042B11C:
/* 0042B11C 26100001 */  addiu $s0, $s0, 1
.L0042B120:
/* 0042B120 1612FFEC */  bne   $s0, $s2, .L0042B0D4
/* 0042B124 26310004 */   addiu $s1, $s1, 4
/* 0042B128 8FBF002C */  lw    $ra, 0x2c($sp)
/* 0042B12C 8FB00018 */  lw    $s0, 0x18($sp)
/* 0042B130 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0042B134 8FB20020 */  lw    $s2, 0x20($sp)
/* 0042B138 8FB30024 */  lw    $s3, 0x24($sp)
/* 0042B13C 03E00008 */  jr    $ra
/* 0042B140 27BD0030 */   addiu $sp, $sp, 0x30

    .type func_0042B144, @function
func_0042B144:
    # 0042BF08 reemit
/* 0042B144 3C1C0FBF */  .cpload $t9
/* 0042B148 279CF14C */  
/* 0042B14C 0399E021 */  
/* 0042B150 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0042B154 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0042B158 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0042B15C AFB00014 */  sw    $s0, 0x14($sp)
/* 0042B160 8C4EFFF4 */  lw    $t6, -0xc($v0)
/* 0042B164 8DD000E4 */  lw    $s0, 0xe4($t6)
/* 0042B168 5200000B */  beql  $s0, $zero, .L0042B198
/* 0042B16C 8FBF001C */   lw    $ra, 0x1c($sp)
.L0042B170:
/* 0042B170 8F9982A4 */  lw    $t9, %call16(genrlodrstr)($gp)
/* 0042B174 2404006D */  li    $a0, 109
/* 0042B178 92050000 */  lbu   $a1, ($s0)
/* 0042B17C 0320F809 */  jalr  $t9
/* 0042B180 8E060004 */   lw    $a2, 4($s0)
/* 0042B184 8E100008 */  lw    $s0, 8($s0)
/* 0042B188 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0042B18C 1600FFF8 */  bnez  $s0, .L0042B170
/* 0042B190 00000000 */   nop   
/* 0042B194 8FBF001C */  lw    $ra, 0x1c($sp)
.L0042B198:
/* 0042B198 8FB00014 */  lw    $s0, 0x14($sp)
/* 0042B19C 27BD0020 */  addiu $sp, $sp, 0x20
/* 0042B1A0 03E00008 */  jr    $ra
/* 0042B1A4 00000000 */   nop   
)"");

/*
0042BF08 reemit
*/
static void func_0042B1A8(struct Graphnode *node) {
    struct RegisterNode *str;
    RegisterColor reg;

    for (str = node->unkE0; str != NULL; str = str->next) {
        genrlodrstr(Urstr, str->reg, str->ichain);
    }

    if (do_opt_saved_regs && !SET32_EMPTY(node->bvs.stage3.strinsertin)) {
        func_0042A4CC(node);
    }

    for (reg = 1; reg <= 35; reg++) {
        if (node->regdata.unk44[reg - 1] != NULL && BITARR_GET(node->unkD0, reg - 1)) {
            genrlodrstr(Urlod, reg, node->regdata.unk44[reg - 1]);
        }
    }
}

__asm__(R""(
.set noat
.set noreorder

    .type func_0042B2C0, @function
func_0042B2C0:
    # 0042B890 func_0042B890
/* 0042B2C0 3C1C0FBF */  .cpload $t9
/* 0042B2C4 279CEFD0 */  
/* 0042B2C8 0399E021 */  
/* 0042B2CC 27BDFF98 */  addiu $sp, $sp, -0x68
/* 0042B2D0 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0042B2D4 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0042B2D8 AFB10024 */  sw    $s1, 0x24($sp)
/* 0042B2DC AFB00020 */  sw    $s0, 0x20($sp)
/* 0042B2E0 8C49FFFC */  lw    $t1, -4($v0)
/* 0042B2E4 8C48FFF8 */  lw    $t0, -8($v0)
/* 0042B2E8 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 0042B2EC 8D25FFF4 */  lw    $a1, -0xc($t1)
/* 0042B2F0 8D040000 */  lw    $a0, ($t0)
/* 0042B2F4 AFA20064 */  sw    $v0, 0x64($sp)
/* 0042B2F8 27A60060 */  addiu $a2, $sp, 0x60
/* 0042B2FC 24070001 */  li    $a3, 1
/* 0042B300 AFA90044 */  sw    $t1, 0x44($sp)
/* 0042B304 AFA80048 */  sw    $t0, 0x48($sp)
/* 0042B308 0320F809 */  jalr  $t9
/* 0042B30C AFA50040 */   sw    $a1, 0x40($sp)
/* 0042B310 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0042B314 10400010 */  beqz  $v0, .L0042B358
/* 0042B318 8FA30064 */   lw    $v1, 0x64($sp)
/* 0042B31C 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 0042B320 9071FFF7 */  lbu   $s1, -9($v1)
/* 0042B324 0320F809 */  jalr  $t9
/* 0042B328 02202025 */   move  $a0, $s1
/* 0042B32C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0042B330 24040052 */  li    $a0, 82
/* 0042B334 8FA50060 */  lw    $a1, 0x60($sp)
/* 0042B338 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 0042B33C 02203025 */  move  $a2, $s1
/* 0042B340 00403825 */  move  $a3, $v0
/* 0042B344 0320F809 */  jalr  $t9
/* 0042B348 00000000 */   nop   
/* 0042B34C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0042B350 1000004C */  b     .L0042B484
/* 0042B354 8F908DA4 */   lw     $s0, %got(u)($gp)
.L0042B358:
/* 0042B358 8F908DA4 */  lw     $s0, %got(u)($gp)
/* 0042B35C 240E008B */  li    $t6, 139
/* 0042B360 24010006 */  li    $at, 6
/* 0042B364 92020001 */  lbu   $v0, 1($s0)
/* 0042B368 A20E0000 */  sb    $t6, ($s0)
/* 0042B36C 9071FFF7 */  lbu   $s1, -9($v1)
/* 0042B370 00027EC0 */  sll   $t7, $v0, 0x1b
/* 0042B374 000FC6C2 */  srl   $t8, $t7, 0x1b
/* 0042B378 0238C826 */  xor   $t9, $s1, $t8
/* 0042B37C 332A001F */  andi  $t2, $t9, 0x1f
/* 0042B380 01426026 */  xor   $t4, $t2, $v0
/* 0042B384 8F8F8980 */  lw     $t7, %got(curblk)($gp)
/* 0042B388 318DFF1F */  andi  $t5, $t4, 0xff1f
/* 0042B38C 35AE0020 */  ori   $t6, $t5, 0x20
/* 0042B390 A20C0001 */  sb    $t4, 1($s0)
/* 0042B394 A20E0001 */  sb    $t6, 1($s0)
/* 0042B398 8DEF0000 */  lw    $t7, ($t7)
/* 0042B39C 8FB80048 */  lw    $t8, 0x48($sp)
/* 0042B3A0 AE0F0004 */  sw    $t7, 4($s0)
/* 0042B3A4 8F040000 */  lw    $a0, ($t8)
/* 0042B3A8 90990000 */  lbu   $t9, ($a0)
/* 0042B3AC 57210006 */  bnel  $t9, $at, .L0042B3C8
/* 0042B3B0 8C8C0020 */   lw    $t4, 0x20($a0)
/* 0042B3B4 8C8A0020 */  lw    $t2, 0x20($a0)
/* 0042B3B8 8D4B0004 */  lw    $t3, 4($t2)
/* 0042B3BC 10000004 */  b     .L0042B3D0
/* 0042B3C0 AE0B000C */   sw    $t3, 0xc($s0)
/* 0042B3C4 8C8C0020 */  lw    $t4, 0x20($a0)
.L0042B3C8:
/* 0042B3C8 8D8D0004 */  lw    $t5, 4($t4)
/* 0042B3CC AE0D000C */  sw    $t5, 0xc($s0)
.L0042B3D0:
/* 0042B3D0 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 0042B3D4 92040001 */  lbu   $a0, 1($s0)
/* 0042B3D8 0320F809 */  jalr  $t9
/* 0042B3DC 3084001F */   andi  $a0, $a0, 0x1f
/* 0042B3E0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0042B3E4 AE020008 */  sw    $v0, 8($s0)
/* 0042B3E8 A6000002 */  sh    $zero, 2($s0)
/* 0042B3EC 8F8E8AC4 */  lw     $t6, %got(dogenvreg)($gp)
/* 0042B3F0 91CE0000 */  lbu   $t6, ($t6)
/* 0042B3F4 51C00007 */  beql  $t6, $zero, .L0042B414
/* 0042B3F8 240F0052 */   li    $t7, 82
/* 0042B3FC 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042B400 02002025 */  move  $a0, $s0
/* 0042B404 0320F809 */  jalr  $t9
/* 0042B408 00000000 */   nop   
/* 0042B40C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0042B410 240F0052 */  li    $t7, 82
.L0042B414:
/* 0042B414 A20F0000 */  sb    $t7, ($s0)
/* 0042B418 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042B41C 02002025 */  move  $a0, $s0
/* 0042B420 0320F809 */  jalr  $t9
/* 0042B424 00000000 */   nop   
/* 0042B428 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0042B42C 8F988B48 */  lw     $t8, %got(stack_reversed)($gp)
/* 0042B430 93180000 */  lbu   $t8, ($t8)
/* 0042B434 1700000B */  bnez  $t8, .L0042B464
/* 0042B438 00000000 */   nop   
/* 0042B43C 8F8389FC */  lw     $v1, %got(highestmdef)($gp)
/* 0042B440 8E19000C */  lw    $t9, 0xc($s0)
/* 0042B444 8C6B0000 */  lw    $t3, ($v1)
/* 0042B448 00195023 */  negu  $t2, $t9
/* 0042B44C 016A082A */  slt   $at, $t3, $t2
/* 0042B450 10200002 */  beqz  $at, .L0042B45C
/* 0042B454 00000000 */   nop   
/* 0042B458 01405825 */  move  $t3, $t2
.L0042B45C:
/* 0042B45C 10000009 */  b     .L0042B484
/* 0042B460 AC6B0000 */   sw    $t3, ($v1)
.L0042B464:
/* 0042B464 8F8389FC */  lw     $v1, %got(highestmdef)($gp)
/* 0042B468 8E0C000C */  lw    $t4, 0xc($s0)
/* 0042B46C 8C6D0000 */  lw    $t5, ($v1)
/* 0042B470 01AC082A */  slt   $at, $t5, $t4
/* 0042B474 50200003 */  beql  $at, $zero, .L0042B484
/* 0042B478 AC6D0000 */   sw    $t5, ($v1)
/* 0042B47C 01806825 */  move  $t5, $t4
/* 0042B480 AC6D0000 */  sw    $t5, ($v1)
.L0042B484:
/* 0042B484 8FA80048 */  lw    $t0, 0x48($sp)
/* 0042B488 2E2E0020 */  sltiu $t6, $s1, 0x20
/* 0042B48C 000E7823 */  negu  $t7, $t6
/* 0042B490 8D02000C */  lw    $v0, 0xc($t0)
/* 0042B494 3C010501 */  lui   $at, 0x501
/* 0042B498 01E1C024 */  and   $t8, $t7, $at
/* 0042B49C 10400021 */  beqz  $v0, .L0042B524
/* 0042B4A0 0238C804 */   sllv  $t9, $t8, $s1
/* 0042B4A4 07230009 */  bgezl $t9, .L0042B4CC
/* 0042B4A8 8D0E0008 */   lw    $t6, 8($t0)
/* 0042B4AC 8D0A0008 */  lw    $t2, 8($t0)
/* 0042B4B0 01420019 */  multu $t2, $v0
/* 0042B4B4 00005812 */  mflo  $t3
/* 0042B4B8 000B67C3 */  sra   $t4, $t3, 0x1f
/* 0042B4BC AFAC0058 */  sw    $t4, 0x58($sp)
/* 0042B4C0 10000006 */  b     .L0042B4DC
/* 0042B4C4 AFAB005C */   sw    $t3, 0x5c($sp)
/* 0042B4C8 8D0E0008 */  lw    $t6, 8($t0)
.L0042B4CC:
/* 0042B4CC 01C20019 */  multu $t6, $v0
/* 0042B4D0 00007812 */  mflo  $t7
/* 0042B4D4 AFAF0058 */  sw    $t7, 0x58($sp)
/* 0042B4D8 00000000 */  nop   
.L0042B4DC:
/* 0042B4DC 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 0042B4E0 02202025 */  move  $a0, $s1
/* 0042B4E4 0320F809 */  jalr  $t9
/* 0042B4E8 00000000 */   nop   
/* 0042B4EC 27B80058 */  addiu $t8, $sp, 0x58
/* 0042B4F0 8F060000 */  lw    $a2, ($t8)
/* 0042B4F4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0042B4F8 240B0001 */  li    $t3, 1
/* 0042B4FC AFA60008 */  sw    $a2, 8($sp)
/* 0042B500 8F998298 */  lw    $t9, %call16(genloadnum)($gp)
/* 0042B504 8F070004 */  lw    $a3, 4($t8)
/* 0042B508 AFAB0014 */  sw    $t3, 0x14($sp)
/* 0042B50C AFA20010 */  sw    $v0, 0x10($sp)
/* 0042B510 02202025 */  move  $a0, $s1
/* 0042B514 0320F809 */  jalr  $t9
/* 0042B518 AFA7000C */   sw    $a3, 0xc($sp)
/* 0042B51C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0042B520 8FA80048 */  lw    $t0, 0x48($sp)
.L0042B524:
/* 0042B524 8D040010 */  lw    $a0, 0x10($t0)
/* 0042B528 508000B1 */  beql  $a0, $zero, .L0042B7F0
/* 0042B52C 8D0B000C */   lw    $t3, 0xc($t0)
/* 0042B530 8D0C0000 */  lw    $t4, ($t0)
/* 0042B534 8D820024 */  lw    $v0, 0x24($t4)
/* 0042B538 1040000A */  beqz  $v0, .L0042B564
/* 0042B53C 00000000 */   nop   
/* 0042B540 8F8D89D0 */  lw     $t5, %got(nota_candof)($gp)
/* 0042B544 8FA50040 */  lw    $a1, 0x40($sp)
/* 0042B548 8DAD0000 */  lw    $t5, ($t5)
/* 0042B54C 11A20005 */  beq   $t5, $v0, .L0042B564
/* 0042B550 00000000 */   nop   
/* 0042B554 90AE000B */  lbu   $t6, 0xb($a1)
/* 0042B558 000EC600 */  sll   $t8, $t6, 0x18
/* 0042B55C 0701004E */  bgez  $t8, .L0042B698
/* 0042B560 00000000 */   nop   
.L0042B564:
/* 0042B564 8F99801C */  lw    $t9, %got(func_00422D04)($gp)
/* 0042B568 8FA20044 */  lw    $v0, 0x44($sp)
                            lw $a1, -0xc($v0)
/* 0042B56C 27392D04 */  addiu $t9, %lo(func_00422D04) # addiu $t9, $t9, 0x2d04
/* 0042B570 0320F809 */  jalr  $t9
/* 0042B574 00000000 */   nop   
/* 0042B578 8FB90048 */  lw    $t9, 0x48($sp)
/* 0042B57C 2401FFFF */  li    $at, -1
/* 0042B580 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0042B584 8F2A0008 */  lw    $t2, 8($t9)
/* 0042B588 8F2B0014 */  lw    $t3, 0x14($t9)
/* 0042B58C 240C005E */  li    $t4, 94
/* 0042B590 014B0019 */  multu $t2, $t3
/* 0042B594 00001012 */  mflo  $v0
/* 0042B598 54410011 */  bnel  $v0, $at, .L0042B5E0
/* 0042B59C 24010001 */   li    $at, 1
/* 0042B5A0 92020001 */  lbu   $v0, 1($s0)
/* 0042B5A4 A20C0000 */  sb    $t4, ($s0)
/* 0042B5A8 A6000002 */  sh    $zero, 2($s0)
/* 0042B5AC 00026EC0 */  sll   $t5, $v0, 0x1b
/* 0042B5B0 000D76C2 */  srl   $t6, $t5, 0x1b
/* 0042B5B4 022E7826 */  xor   $t7, $s1, $t6
/* 0042B5B8 31F8001F */  andi  $t8, $t7, 0x1f
/* 0042B5BC 0302C826 */  xor   $t9, $t8, $v0
/* 0042B5C0 A2190001 */  sb    $t9, 1($s0)
/* 0042B5C4 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042B5C8 02002025 */  move  $a0, $s0
/* 0042B5CC 0320F809 */  jalr  $t9
/* 0042B5D0 00000000 */   nop   
/* 0042B5D4 1000002E */  b     .L0042B690
/* 0042B5D8 8FBC0028 */   lw    $gp, 0x28($sp)
/* 0042B5DC 24010001 */  li    $at, 1
.L0042B5E0:
/* 0042B5E0 1041002B */  beq   $v0, $at, .L0042B690
/* 0042B5E4 2E2A0020 */   sltiu $t2, $s1, 0x20
/* 0042B5E8 000A5823 */  negu  $t3, $t2
/* 0042B5EC 3C010501 */  lui   $at, 0x501
/* 0042B5F0 01616024 */  and   $t4, $t3, $at
/* 0042B5F4 022C6804 */  sllv  $t5, $t4, $s1
/* 0042B5F8 05A10004 */  bgez  $t5, .L0042B60C
/* 0042B5FC 000277C3 */   sra   $t6, $v0, 0x1f
/* 0042B600 AFAE0058 */  sw    $t6, 0x58($sp)
/* 0042B604 10000002 */  b     .L0042B610
/* 0042B608 AFA2005C */   sw    $v0, 0x5c($sp)
.L0042B60C:
/* 0042B60C AFA20058 */  sw    $v0, 0x58($sp)
.L0042B610:
/* 0042B610 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 0042B614 02202025 */  move  $a0, $s1
/* 0042B618 0320F809 */  jalr  $t9
/* 0042B61C 00000000 */   nop   
/* 0042B620 27B80058 */  addiu $t8, $sp, 0x58
/* 0042B624 8F060000 */  lw    $a2, ($t8)
/* 0042B628 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0042B62C 240B0001 */  li    $t3, 1
/* 0042B630 AFA60008 */  sw    $a2, 8($sp)
/* 0042B634 8F998298 */  lw    $t9, %call16(genloadnum)($gp)
/* 0042B638 8F070004 */  lw    $a3, 4($t8)
/* 0042B63C AFAB0014 */  sw    $t3, 0x14($sp)
/* 0042B640 AFA20010 */  sw    $v0, 0x10($sp)
/* 0042B644 02202025 */  move  $a0, $s1
/* 0042B648 0320F809 */  jalr  $t9
/* 0042B64C AFA7000C */   sw    $a3, 0xc($sp)
/* 0042B650 92020001 */  lbu   $v0, 1($s0)
/* 0042B654 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0042B658 240C005B */  li    $t4, 91
/* 0042B65C 00026EC0 */  sll   $t5, $v0, 0x1b
/* 0042B660 000D76C2 */  srl   $t6, $t5, 0x1b
/* 0042B664 022E7826 */  xor   $t7, $s1, $t6
/* 0042B668 31F8001F */  andi  $t8, $t7, 0x1f
/* 0042B66C 0302C826 */  xor   $t9, $t8, $v0
/* 0042B670 A20C0000 */  sb    $t4, ($s0)
/* 0042B674 A6000002 */  sh    $zero, 2($s0)
/* 0042B678 A2190001 */  sb    $t9, 1($s0)
/* 0042B67C 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042B680 02002025 */  move  $a0, $s0
/* 0042B684 0320F809 */  jalr  $t9
/* 0042B688 00000000 */   nop   
/* 0042B68C 8FBC0028 */  lw    $gp, 0x28($sp)
.L0042B690:
/* 0042B690 10000056 */  b     .L0042B7EC
/* 0042B694 8FA80048 */   lw    $t0, 0x48($sp)
.L0042B698:
/* 0042B698 8F8A89EC */  lw     $t2, %got(bittab)($gp)
/* 0042B69C 8D0B0018 */  lw    $t3, 0x18($t0)
/* 0042B6A0 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 0042B6A4 8D4A0000 */  lw    $t2, ($t2)
/* 0042B6A8 000B60C0 */  sll   $t4, $t3, 3
/* 0042B6AC 27A60060 */  addiu $a2, $sp, 0x60
/* 0042B6B0 014C6821 */  addu  $t5, $t2, $t4
/* 0042B6B4 8DA40000 */  lw    $a0, ($t5)
/* 0042B6B8 24070001 */  li    $a3, 1
/* 0042B6BC 0320F809 */  jalr  $t9
/* 0042B6C0 AFA40054 */   sw    $a0, 0x54($sp)
/* 0042B6C4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0042B6C8 8FA40054 */  lw    $a0, 0x54($sp)
/* 0042B6CC 1040000A */  beqz  $v0, .L0042B6F8
/* 0042B6D0 8F8389FC */   lw     $v1, %got(highestmdef)($gp)
/* 0042B6D4 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 0042B6D8 24040052 */  li    $a0, 82
/* 0042B6DC 8FA50060 */  lw    $a1, 0x60($sp)
/* 0042B6E0 02203025 */  move  $a2, $s1
/* 0042B6E4 0320F809 */  jalr  $t9
/* 0042B6E8 24070004 */   li    $a3, 4
/* 0042B6EC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0042B6F0 1000003E */  b     .L0042B7EC
/* 0042B6F4 8FA80048 */   lw    $t0, 0x48($sp)
.L0042B6F8:
/* 0042B6F8 92020001 */  lbu   $v0, 1($s0)
/* 0042B6FC 240E008B */  li    $t6, 139
/* 0042B700 A20E0000 */  sb    $t6, ($s0)
/* 0042B704 00027EC0 */  sll   $t7, $v0, 0x1b
/* 0042B708 000FC6C2 */  srl   $t8, $t7, 0x1b
/* 0042B70C 0238C826 */  xor   $t9, $s1, $t8
/* 0042B710 332B001F */  andi  $t3, $t9, 0x1f
/* 0042B714 01626026 */  xor   $t4, $t3, $v0
/* 0042B718 8F8F8980 */  lw     $t7, %got(curblk)($gp)
/* 0042B71C 318DFF1F */  andi  $t5, $t4, 0xff1f
/* 0042B720 A20C0001 */  sb    $t4, 1($s0)
/* 0042B724 35AE0020 */  ori   $t6, $t5, 0x20
/* 0042B728 A20E0001 */  sb    $t6, 1($s0)
/* 0042B72C 8DEF0000 */  lw    $t7, ($t7)
/* 0042B730 8C980020 */  lw    $t8, 0x20($a0)
/* 0042B734 8F8B8B48 */  lw     $t3, %got(stack_reversed)($gp)
/* 0042B738 AE0F0004 */  sw    $t7, 4($s0)
/* 0042B73C 8F190004 */  lw    $t9, 4($t8)
/* 0042B740 AE19000C */  sw    $t9, 0xc($s0)
/* 0042B744 916B0000 */  lbu   $t3, ($t3)
/* 0042B748 5560000A */  bnezl $t3, .L0042B774
/* 0042B74C 8E0E000C */   lw    $t6, 0xc($s0)
/* 0042B750 8C6D0000 */  lw    $t5, ($v1)
/* 0042B754 00196023 */  negu  $t4, $t9
/* 0042B758 01AC082A */  slt   $at, $t5, $t4
/* 0042B75C 10200002 */  beqz  $at, .L0042B768
/* 0042B760 00000000 */   nop   
/* 0042B764 01806825 */  move  $t5, $t4
.L0042B768:
/* 0042B768 10000008 */  b     .L0042B78C
/* 0042B76C AC6D0000 */   sw    $t5, ($v1)
/* 0042B770 8E0E000C */  lw    $t6, 0xc($s0)
.L0042B774:
/* 0042B774 8C6F0000 */  lw    $t7, ($v1)
/* 0042B778 01EE082A */  slt   $at, $t7, $t6
/* 0042B77C 50200003 */  beql  $at, $zero, .L0042B78C
/* 0042B780 AC6F0000 */   sw    $t7, ($v1)
/* 0042B784 01C07825 */  move  $t7, $t6
/* 0042B788 AC6F0000 */  sw    $t7, ($v1)
.L0042B78C:
/* 0042B78C 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 0042B790 92040001 */  lbu   $a0, 1($s0)
/* 0042B794 0320F809 */  jalr  $t9
/* 0042B798 3084001F */   andi  $a0, $a0, 0x1f
/* 0042B79C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0042B7A0 AE020008 */  sw    $v0, 8($s0)
/* 0042B7A4 A6000002 */  sh    $zero, 2($s0)
/* 0042B7A8 8F988AC4 */  lw     $t8, %got(dogenvreg)($gp)
/* 0042B7AC 93180000 */  lbu   $t8, ($t8)
/* 0042B7B0 53000007 */  beql  $t8, $zero, .L0042B7D0
/* 0042B7B4 24190052 */   li    $t9, 82
/* 0042B7B8 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042B7BC 02002025 */  move  $a0, $s0
/* 0042B7C0 0320F809 */  jalr  $t9
/* 0042B7C4 00000000 */   nop   
/* 0042B7C8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0042B7CC 24190052 */  li    $t9, 82
.L0042B7D0:
/* 0042B7D0 A2190000 */  sb    $t9, ($s0)
/* 0042B7D4 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042B7D8 02002025 */  move  $a0, $s0
/* 0042B7DC 0320F809 */  jalr  $t9
/* 0042B7E0 00000000 */   nop   
/* 0042B7E4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0042B7E8 8FA80048 */  lw    $t0, 0x48($sp)
.L0042B7EC:
/* 0042B7EC 8D0B000C */  lw    $t3, 0xc($t0)
.L0042B7F0:
/* 0042B7F0 51600014 */  beql  $t3, $zero, .L0042B844
/* 0042B7F4 92020001 */   lbu   $v0, 1($s0)
/* 0042B7F8 8D0A0010 */  lw    $t2, 0x10($t0)
/* 0042B7FC 240C0001 */  li    $t4, 1
/* 0042B800 51400010 */  beql  $t2, $zero, .L0042B844
/* 0042B804 92020001 */   lbu   $v0, 1($s0)
/* 0042B808 92020001 */  lbu   $v0, 1($s0)
/* 0042B80C A20C0000 */  sb    $t4, ($s0)
/* 0042B810 A6000002 */  sh    $zero, 2($s0)
/* 0042B814 00026EC0 */  sll   $t5, $v0, 0x1b
/* 0042B818 000D76C2 */  srl   $t6, $t5, 0x1b
/* 0042B81C 022E7826 */  xor   $t7, $s1, $t6
/* 0042B820 31F8001F */  andi  $t8, $t7, 0x1f
/* 0042B824 0302C826 */  xor   $t9, $t8, $v0
/* 0042B828 A2190001 */  sb    $t9, 1($s0)
/* 0042B82C 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042B830 02002025 */  move  $a0, $s0
/* 0042B834 0320F809 */  jalr  $t9
/* 0042B838 00000000 */   nop   
/* 0042B83C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0042B840 92020001 */  lbu   $v0, 1($s0)
.L0042B844:
/* 0042B844 240B0001 */  li    $t3, 1
/* 0042B848 A20B0000 */  sb    $t3, ($s0)
/* 0042B84C 000256C0 */  sll   $t2, $v0, 0x1b
/* 0042B850 000A66C2 */  srl   $t4, $t2, 0x1b
/* 0042B854 022C6826 */  xor   $t5, $s1, $t4
/* 0042B858 31AE001F */  andi  $t6, $t5, 0x1f
/* 0042B85C 01C27826 */  xor   $t7, $t6, $v0
/* 0042B860 A6000002 */  sh    $zero, 2($s0)
/* 0042B864 A20F0001 */  sb    $t7, 1($s0)
/* 0042B868 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042B86C 02002025 */  move  $a0, $s0
/* 0042B870 0320F809 */  jalr  $t9
/* 0042B874 00000000 */   nop   
/* 0042B878 8FBF002C */  lw    $ra, 0x2c($sp)
/* 0042B87C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0042B880 8FB00020 */  lw    $s0, 0x20($sp)
/* 0042B884 8FB10024 */  lw    $s1, 0x24($sp)
/* 0042B888 03E00008 */  jr    $ra
/* 0042B88C 27BD0068 */   addiu $sp, $sp, 0x68

    .type func_0042B890, @function
func_0042B890:
    # 0042BF08 reemit
/* 0042B890 3C1C0FBF */  .cpload $t9
/* 0042B894 279CEA00 */  
/* 0042B898 0399E021 */  
/* 0042B89C 27BDFF98 */  addiu $sp, $sp, -0x68
/* 0042B8A0 AFB50028 */  sw    $s5, 0x28($sp)
/* 0042B8A4 8F958C30 */  lw     $s5, %got(has_ix)($gp)
/* 0042B8A8 AFBF003C */  sw    $ra, 0x3c($sp)
/* 0042B8AC AFBE0038 */  sw    $fp, 0x38($sp)
/* 0042B8B0 92B50000 */  lbu   $s5, ($s5)
/* 0042B8B4 AFBC0034 */  sw    $gp, 0x34($sp)
/* 0042B8B8 AFB70030 */  sw    $s7, 0x30($sp)
/* 0042B8BC AFB6002C */  sw    $s6, 0x2c($sp)
/* 0042B8C0 AFB40024 */  sw    $s4, 0x24($sp)
/* 0042B8C4 AFB30020 */  sw    $s3, 0x20($sp)
/* 0042B8C8 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0042B8CC AFB10018 */  sw    $s1, 0x18($sp)
/* 0042B8D0 AFB00014 */  sw    $s0, 0x14($sp)
/* 0042B8D4 12A0000F */  beqz  $s5, .L0042B914
/* 0042B8D8 AFA20064 */   sw    $v0, 0x64($sp)
/* 0042B8DC 8F8F8C34 */  lw     $t7, %got(loopno)($gp)
/* 0042B8E0 8F8E8A0C */  lw     $t6, %got(looptab)($gp)
/* 0042B8E4 8DEF0000 */  lw    $t7, ($t7)
/* 0042B8E8 8DCE0000 */  lw    $t6, ($t6)
/* 0042B8EC 000FC080 */  sll   $t8, $t7, 2
/* 0042B8F0 030FC023 */  subu  $t8, $t8, $t7
/* 0042B8F4 0018C080 */  sll   $t8, $t8, 2
/* 0042B8F8 01D81821 */  addu  $v1, $t6, $t8
/* 0042B8FC 90620009 */  lbu   $v0, 9($v1)
/* 0042B900 50400004 */  beql  $v0, $zero, .L0042B914
/* 0042B904 305500FF */   andi  $s5, $v0, 0xff
/* 0042B908 8C620004 */  lw    $v0, 4($v1)
/* 0042B90C 0002102B */  sltu  $v0, $zero, $v0
/* 0042B910 305500FF */  andi  $s5, $v0, 0xff
.L0042B914:
/* 0042B914 8C92002C */  lw    $s2, 0x2c($a0)
/* 0042B918 27BE0058 */  addiu $fp, $sp, 0x58
/* 0042B91C 27B70068 */  addiu $s7, $sp, 0x68
/* 0042B920 1240007E */  beqz  $s2, .L0042BB1C
/* 0042B924 24160041 */   li    $s6, 65
/* 0042B928 8F9489FC */  lw     $s4, %got(highestmdef)($gp)
/* 0042B92C 8F918DA4 */  lw     $s1, %got(u)($gp)
.L0042B930:
/* 0042B930 52A0000B */  beql  $s5, $zero, .L0042B960
/* 0042B934 8E500000 */   lw    $s0, ($s2)
/* 0042B938 8F998718 */  lw    $t9, %call16(check_ix_candidate)($gp)
/* 0042B93C 8F858C34 */  lw     $a1, %got(loopno)($gp)
/* 0042B940 8E440000 */  lw    $a0, ($s2)
/* 0042B944 0320F809 */  jalr  $t9
/* 0042B948 8CA50000 */   lw    $a1, ($a1)
/* 0042B94C 10400003 */  beqz  $v0, .L0042B95C
/* 0042B950 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0042B954 1000006F */  b     .L0042BB14
/* 0042B958 8E520004 */   lw    $s2, 4($s2)
.L0042B95C:
/* 0042B95C 8E500000 */  lw    $s0, ($s2)
.L0042B960:
/* 0042B960 AFB20060 */  sw    $s2, 0x60($sp)
/* 0042B964 92190010 */  lbu   $t9, 0x10($s0)
/* 0042B968 56D90005 */  bnel  $s6, $t9, .L0042B980
/* 0042B96C 92130001 */   lbu   $s3, 1($s0)
/* 0042B970 92130012 */  lbu   $s3, 0x12($s0)
/* 0042B974 10000003 */  b     .L0042B984
/* 0042B978 A3B3005F */   sb    $s3, 0x5f($sp)
/* 0042B97C 92130001 */  lbu   $s3, 1($s0)
.L0042B980:
/* 0042B980 A3B3005F */  sb    $s3, 0x5f($sp)
.L0042B984:
/* 0042B984 8F998020 */  lw    $t9, %got(func_0042B2C0)($gp)
/* 0042B988 02E01025 */  move  $v0, $s7
/* 0042B98C 2739B2C0 */  addiu $t9, %lo(func_0042B2C0) # addiu $t9, $t9, -0x4d40
/* 0042B990 0320F809 */  jalr  $t9
/* 0042B994 00000000 */   nop   
/* 0042B998 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042B99C 8FB20060 */  lw    $s2, 0x60($sp)
/* 0042B9A0 8FA80064 */  lw    $t0, 0x64($sp)
/* 0042B9A4 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 0042B9A8 03C03025 */  move  $a2, $fp
/* 0042B9AC 00003825 */  move  $a3, $zero
/* 0042B9B0 8E440000 */  lw    $a0, ($s2)
/* 0042B9B4 0320F809 */  jalr  $t9
/* 0042B9B8 8D05FFF4 */   lw    $a1, -0xc($t0)
/* 0042B9BC 1040000F */  beqz  $v0, .L0042B9FC
/* 0042B9C0 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0042B9C4 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 0042B9C8 93B3005F */  lbu   $s3, 0x5f($sp)
/* 0042B9CC 0320F809 */  jalr  $t9
/* 0042B9D0 02602025 */   move  $a0, $s3
/* 0042B9D4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042B9D8 2404007B */  li    $a0, 123
/* 0042B9DC 8FA50058 */  lw    $a1, 0x58($sp)
/* 0042B9E0 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 0042B9E4 02603025 */  move  $a2, $s3
/* 0042B9E8 00403825 */  move  $a3, $v0
/* 0042B9EC 0320F809 */  jalr  $t9
/* 0042B9F0 00000000 */   nop   
/* 0042B9F4 10000046 */  b     .L0042BB10
/* 0042B9F8 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042B9FC:
/* 0042B9FC 92220001 */  lbu   $v0, 1($s1)
/* 0042BA00 93B3005F */  lbu   $s3, 0x5f($sp)
/* 0042BA04 8F888980 */  lw     $t0, %got(curblk)($gp)
/* 0042BA08 000256C0 */  sll   $t2, $v0, 0x1b
/* 0042BA0C 000A5EC2 */  srl   $t3, $t2, 0x1b
/* 0042BA10 026B6026 */  xor   $t4, $s3, $t3
/* 0042BA14 318D001F */  andi  $t5, $t4, 0x1f
/* 0042BA18 01A27026 */  xor   $t6, $t5, $v0
/* 0042BA1C 2409008B */  li    $t1, 139
/* 0042BA20 31D8FF1F */  andi  $t8, $t6, 0xff1f
/* 0042BA24 A2290000 */  sb    $t1, ($s1)
/* 0042BA28 A22E0001 */  sb    $t6, 1($s1)
/* 0042BA2C 37190020 */  ori   $t9, $t8, 0x20
/* 0042BA30 92090000 */  lbu   $t1, ($s0)
/* 0042BA34 A2390001 */  sb    $t9, 1($s1)
/* 0042BA38 8D080000 */  lw    $t0, ($t0)
/* 0042BA3C 24010006 */  li    $at, 6
/* 0042BA40 15210005 */  bne   $t1, $at, .L0042BA58
/* 0042BA44 AE280004 */   sw    $t0, 4($s1)
/* 0042BA48 8E0A0020 */  lw    $t2, 0x20($s0)
/* 0042BA4C 8D4B0004 */  lw    $t3, 4($t2)
/* 0042BA50 10000004 */  b     .L0042BA64
/* 0042BA54 AE2B000C */   sw    $t3, 0xc($s1)
.L0042BA58:
/* 0042BA58 8E0C0020 */  lw    $t4, 0x20($s0)
/* 0042BA5C 8D8D0004 */  lw    $t5, 4($t4)
/* 0042BA60 AE2D000C */  sw    $t5, 0xc($s1)
.L0042BA64:
/* 0042BA64 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 0042BA68 02602025 */  move  $a0, $s3
/* 0042BA6C 0320F809 */  jalr  $t9
/* 0042BA70 00000000 */   nop   
/* 0042BA74 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042BA78 AE220008 */  sw    $v0, 8($s1)
/* 0042BA7C A6200002 */  sh    $zero, 2($s1)
/* 0042BA80 8F8F8AC4 */  lw     $t7, %got(dogenvreg)($gp)
/* 0042BA84 91EF0000 */  lbu   $t7, ($t7)
/* 0042BA88 51E00007 */  beql  $t7, $zero, .L0042BAA8
/* 0042BA8C 240E007B */   li    $t6, 123
/* 0042BA90 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042BA94 02202025 */  move  $a0, $s1
/* 0042BA98 0320F809 */  jalr  $t9
/* 0042BA9C 00000000 */   nop   
/* 0042BAA0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042BAA4 240E007B */  li    $t6, 123
.L0042BAA8:
/* 0042BAA8 A22E0000 */  sb    $t6, ($s1)
/* 0042BAAC 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042BAB0 02202025 */  move  $a0, $s1
/* 0042BAB4 0320F809 */  jalr  $t9
/* 0042BAB8 00000000 */   nop   
/* 0042BABC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042BAC0 8F988B48 */  lw     $t8, %got(stack_reversed)($gp)
/* 0042BAC4 93180000 */  lbu   $t8, ($t8)
/* 0042BAC8 5700000B */  bnezl $t8, .L0042BAF8
/* 0042BACC 8E2A000C */   lw    $t2, 0xc($s1)
/* 0042BAD0 8E39000C */  lw    $t9, 0xc($s1)
/* 0042BAD4 8E890000 */  lw    $t1, ($s4)
/* 0042BAD8 00194023 */  negu  $t0, $t9
/* 0042BADC 0128082A */  slt   $at, $t1, $t0
/* 0042BAE0 10200002 */  beqz  $at, .L0042BAEC
/* 0042BAE4 00000000 */   nop   
/* 0042BAE8 01004825 */  move  $t1, $t0
.L0042BAEC:
/* 0042BAEC 10000008 */  b     .L0042BB10
/* 0042BAF0 AE890000 */   sw    $t1, ($s4)
/* 0042BAF4 8E2A000C */  lw    $t2, 0xc($s1)
.L0042BAF8:
/* 0042BAF8 8E8B0000 */  lw    $t3, ($s4)
/* 0042BAFC 016A082A */  slt   $at, $t3, $t2
/* 0042BB00 50200003 */  beql  $at, $zero, .L0042BB10
/* 0042BB04 AE8B0000 */   sw    $t3, ($s4)
/* 0042BB08 01405825 */  move  $t3, $t2
/* 0042BB0C AE8B0000 */  sw    $t3, ($s4)
.L0042BB10:
/* 0042BB10 8E520004 */  lw    $s2, 4($s2)
.L0042BB14:
/* 0042BB14 1640FF86 */  bnez  $s2, .L0042B930
/* 0042BB18 00000000 */   nop   
.L0042BB1C:
/* 0042BB1C 8FBF003C */  lw    $ra, 0x3c($sp)
/* 0042BB20 8FB00014 */  lw    $s0, 0x14($sp)
/* 0042BB24 8FB10018 */  lw    $s1, 0x18($sp)
/* 0042BB28 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0042BB2C 8FB30020 */  lw    $s3, 0x20($sp)
/* 0042BB30 8FB40024 */  lw    $s4, 0x24($sp)
/* 0042BB34 8FB50028 */  lw    $s5, 0x28($sp)
/* 0042BB38 8FB6002C */  lw    $s6, 0x2c($sp)
/* 0042BB3C 8FB70030 */  lw    $s7, 0x30($sp)
/* 0042BB40 8FBE0038 */  lw    $fp, 0x38($sp)
/* 0042BB44 03E00008 */  jr    $ra
/* 0042BB48 27BD0068 */   addiu $sp, $sp, 0x68

    .type func_0042BB4C, @function
func_0042BB4C:
    # 0042BF08 reemit
/* 0042BB4C 3C1C0FBF */  .cpload $t9
/* 0042BB50 279CE744 */  
/* 0042BB54 0399E021 */  
/* 0042BB58 27BDFFA0 */  addiu $sp, $sp, -0x60
/* 0042BB5C 8C830030 */  lw    $v1, 0x30($a0)
/* 0042BB60 AFB50028 */  sw    $s5, 0x28($sp)
/* 0042BB64 0040A825 */  move  $s5, $v0
/* 0042BB68 AFBF003C */  sw    $ra, 0x3c($sp)
/* 0042BB6C AFBE0038 */  sw    $fp, 0x38($sp)
/* 0042BB70 AFBC0034 */  sw    $gp, 0x34($sp)
/* 0042BB74 AFB70030 */  sw    $s7, 0x30($sp)
/* 0042BB78 AFB6002C */  sw    $s6, 0x2c($sp)
/* 0042BB7C AFB40024 */  sw    $s4, 0x24($sp)
/* 0042BB80 AFB30020 */  sw    $s3, 0x20($sp)
/* 0042BB84 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0042BB88 AFB10018 */  sw    $s1, 0x18($sp)
/* 0042BB8C 10600075 */  beqz  $v1, .L0042BD64
/* 0042BB90 AFB00014 */   sw    $s0, 0x14($sp)
/* 0042BB94 00608825 */  move  $s1, $v1
/* 0042BB98 241EFF1F */  li    $fp, -225
/* 0042BB9C 2417008B */  li    $s7, 139
/* 0042BBA0 27B60050 */  addiu $s6, $sp, 0x50
/* 0042BBA4 8F9489FC */  lw     $s4, %got(highestmdef)($gp)
/* 0042BBA8 8F908DA4 */  lw     $s0, %got(u)($gp)
.L0042BBAC:
/* 0042BBAC 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 0042BBB0 8E240000 */  lw    $a0, ($s1)
/* 0042BBB4 8EA5FFF4 */  lw    $a1, -0xc($s5)
/* 0042BBB8 02C03025 */  move  $a2, $s6
/* 0042BBBC 00003825 */  move  $a3, $zero
/* 0042BBC0 0320F809 */  jalr  $t9
/* 0042BBC4 90920001 */   lbu   $s2, 1($a0)
/* 0042BBC8 304E00FF */  andi  $t6, $v0, 0xff
/* 0042BBCC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042BBD0 15C00005 */  bnez  $t6, .L0042BBE8
/* 0042BBD4 305300FF */   andi  $s3, $v0, 0xff
/* 0042BBD8 8E2F0000 */  lw    $t7, ($s1)
/* 0042BBDC 8DF80020 */  lw    $t8, 0x20($t7)
/* 0042BBE0 5300005E */  beql  $t8, $zero, .L0042BD5C
/* 0042BBE4 8E310008 */   lw    $s1, 8($s1)
.L0042BBE8:
/* 0042BBE8 8F99801C */  lw    $t9, %got(func_00424FFC)($gp)
/* 0042BBEC 8E240004 */  lw    $a0, 4($s1)
/* 0042BBF0 00002825 */  move  $a1, $zero
/* 0042BBF4 27394FFC */  addiu $t9, %lo(func_00424FFC) # addiu $t9, $t9, 0x4ffc
/* 0042BBF8 0320F809 */  jalr  $t9
/* 0042BBFC 02A01025 */   move  $v0, $s5
/* 0042BC00 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042BC04 8E240004 */  lw    $a0, 4($s1)
/* 0042BC08 24050003 */  li    $a1, 3
/* 0042BC0C 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 0042BC10 00003025 */  move  $a2, $zero
/* 0042BC14 00003825 */  move  $a3, $zero
/* 0042BC18 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 0042BC1C 0320F809 */  jalr  $t9
/* 0042BC20 02A01025 */   move  $v0, $s5
/* 0042BC24 1260000F */  beqz  $s3, .L0042BC64
/* 0042BC28 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0042BC2C 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 0042BC30 02402025 */  move  $a0, $s2
/* 0042BC34 0320F809 */  jalr  $t9
/* 0042BC38 00000000 */   nop   
/* 0042BC3C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042BC40 2404007B */  li    $a0, 123
/* 0042BC44 8FA50050 */  lw    $a1, 0x50($sp)
/* 0042BC48 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 0042BC4C 02403025 */  move  $a2, $s2
/* 0042BC50 00403825 */  move  $a3, $v0
/* 0042BC54 0320F809 */  jalr  $t9
/* 0042BC58 00000000 */   nop   
/* 0042BC5C 1000003E */  b     .L0042BD58
/* 0042BC60 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042BC64:
/* 0042BC64 92020001 */  lbu   $v0, 1($s0)
/* 0042BC68 8F8F8980 */  lw     $t7, %got(curblk)($gp)
/* 0042BC6C A2170000 */  sb    $s7, ($s0)
/* 0042BC70 0002CEC0 */  sll   $t9, $v0, 0x1b
/* 0042BC74 001946C2 */  srl   $t0, $t9, 0x1b
/* 0042BC78 02484826 */  xor   $t1, $s2, $t0
/* 0042BC7C 312A001F */  andi  $t2, $t1, 0x1f
/* 0042BC80 01426026 */  xor   $t4, $t2, $v0
/* 0042BC84 019E6824 */  and   $t5, $t4, $fp
/* 0042BC88 A20C0001 */  sb    $t4, 1($s0)
/* 0042BC8C 35AE0020 */  ori   $t6, $t5, 0x20
/* 0042BC90 A20E0001 */  sb    $t6, 1($s0)
/* 0042BC94 8DEF0000 */  lw    $t7, ($t7)
/* 0042BC98 8E380000 */  lw    $t8, ($s1)
/* 0042BC9C 02402025 */  move  $a0, $s2
/* 0042BCA0 AE0F0004 */  sw    $t7, 4($s0)
/* 0042BCA4 8F190020 */  lw    $t9, 0x20($t8)
/* 0042BCA8 8F280004 */  lw    $t0, 4($t9)
/* 0042BCAC AE08000C */  sw    $t0, 0xc($s0)
/* 0042BCB0 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 0042BCB4 0320F809 */  jalr  $t9
/* 0042BCB8 00000000 */   nop   
/* 0042BCBC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042BCC0 AE020008 */  sw    $v0, 8($s0)
/* 0042BCC4 A6000002 */  sh    $zero, 2($s0)
/* 0042BCC8 8F898AC4 */  lw     $t1, %got(dogenvreg)($gp)
/* 0042BCCC 91290000 */  lbu   $t1, ($t1)
/* 0042BCD0 51200007 */  beql  $t1, $zero, .L0042BCF0
/* 0042BCD4 240A007B */   li    $t2, 123
/* 0042BCD8 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042BCDC 02002025 */  move  $a0, $s0
/* 0042BCE0 0320F809 */  jalr  $t9
/* 0042BCE4 00000000 */   nop   
/* 0042BCE8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042BCEC 240A007B */  li    $t2, 123
.L0042BCF0:
/* 0042BCF0 A20A0000 */  sb    $t2, ($s0)
/* 0042BCF4 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042BCF8 02002025 */  move  $a0, $s0
/* 0042BCFC 0320F809 */  jalr  $t9
/* 0042BD00 00000000 */   nop   
/* 0042BD04 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042BD08 8F8B8B48 */  lw     $t3, %got(stack_reversed)($gp)
/* 0042BD0C 916B0000 */  lbu   $t3, ($t3)
/* 0042BD10 5560000B */  bnezl $t3, .L0042BD40
/* 0042BD14 8E0F000C */   lw    $t7, 0xc($s0)
/* 0042BD18 8E0C000C */  lw    $t4, 0xc($s0)
/* 0042BD1C 8E8E0000 */  lw    $t6, ($s4)
/* 0042BD20 000C6823 */  negu  $t5, $t4
/* 0042BD24 01CD082A */  slt   $at, $t6, $t5
/* 0042BD28 10200002 */  beqz  $at, .L0042BD34
/* 0042BD2C 00000000 */   nop   
/* 0042BD30 01A07025 */  move  $t6, $t5
.L0042BD34:
/* 0042BD34 10000008 */  b     .L0042BD58
/* 0042BD38 AE8E0000 */   sw    $t6, ($s4)
/* 0042BD3C 8E0F000C */  lw    $t7, 0xc($s0)
.L0042BD40:
/* 0042BD40 8E980000 */  lw    $t8, ($s4)
/* 0042BD44 030F082A */  slt   $at, $t8, $t7
/* 0042BD48 50200003 */  beql  $at, $zero, .L0042BD58
/* 0042BD4C AE980000 */   sw    $t8, ($s4)
/* 0042BD50 01E0C025 */  move  $t8, $t7
/* 0042BD54 AE980000 */  sw    $t8, ($s4)
.L0042BD58:
/* 0042BD58 8E310008 */  lw    $s1, 8($s1)
.L0042BD5C:
/* 0042BD5C 1620FF93 */  bnez  $s1, .L0042BBAC
/* 0042BD60 00000000 */   nop   
.L0042BD64:
/* 0042BD64 8FBF003C */  lw    $ra, 0x3c($sp)
/* 0042BD68 8FB00014 */  lw    $s0, 0x14($sp)
/* 0042BD6C 8FB10018 */  lw    $s1, 0x18($sp)
/* 0042BD70 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0042BD74 8FB30020 */  lw    $s3, 0x20($sp)
/* 0042BD78 8FB40024 */  lw    $s4, 0x24($sp)
/* 0042BD7C 8FB50028 */  lw    $s5, 0x28($sp)
/* 0042BD80 8FB6002C */  lw    $s6, 0x2c($sp)
/* 0042BD84 8FB70030 */  lw    $s7, 0x30($sp)
/* 0042BD88 8FBE0038 */  lw    $fp, 0x38($sp)
/* 0042BD8C 03E00008 */  jr    $ra
/* 0042BD90 27BD0060 */   addiu $sp, $sp, 0x60

    .type func_0042BD94, @function
func_0042BD94:
    # 0042BF08 reemit
/* 0042BD94 3C1C0FBF */  .cpload $t9
/* 0042BD98 279CE4FC */  
/* 0042BD9C 0399E021 */  
/* 0042BDA0 8F858950 */  lw     $a1, %got(ustrptr)($gp)
/* 0042BDA4 24020014 */  li    $v0, 20
/* 0042BDA8 00801825 */  move  $v1, $a0
/* 0042BDAC 8CA50000 */  lw    $a1, ($a1)
/* 0042BDB0 2408000A */  li    $t0, 10
/* 0042BDB4 24A60014 */  addiu $a2, $a1, 0x14
.L0042BDB8:
/* 0042BDB8 0088001B */  divu  $zero, $a0, $t0
/* 0042BDBC 00002012 */  mflo  $a0
/* 0042BDC0 2442FFFF */  addiu $v0, $v0, -1
/* 0042BDC4 15000002 */  bnez  $t0, .L0042BDD0
/* 0042BDC8 00000000 */   nop   
/* 0042BDCC 0007000D */  break 7
.L0042BDD0:
/* 0042BDD0 00880019 */  multu $a0, $t0
/* 0042BDD4 24C6FFFF */  addiu $a2, $a2, -1
/* 0042BDD8 00007012 */  mflo  $t6
/* 0042BDDC 006E7823 */  subu  $t7, $v1, $t6
/* 0042BDE0 25F80030 */  addiu $t8, $t7, 0x30
/* 0042BDE4 A0D80000 */  sb    $t8, ($a2)
/* 0042BDE8 1480FFF3 */  bnez  $a0, .L0042BDB8
/* 0042BDEC 00801825 */   move  $v1, $a0
/* 0042BDF0 2841000B */  slti  $at, $v0, 0xb
/* 0042BDF4 14200016 */  bnez  $at, .L0042BE50
/* 0042BDF8 00401825 */   move  $v1, $v0
/* 0042BDFC 2467FFF6 */  addiu $a3, $v1, -0xa
/* 0042BE00 30E70003 */  andi  $a3, $a3, 3
/* 0042BE04 00073823 */  negu  $a3, $a3
/* 0042BE08 10E00008 */  beqz  $a3, .L0042BE2C
/* 0042BE0C 00E32021 */   addu  $a0, $a3, $v1
/* 0042BE10 00A23021 */  addu  $a2, $a1, $v0
/* 0042BE14 24030020 */  li    $v1, 32
.L0042BE18:
/* 0042BE18 2442FFFF */  addiu $v0, $v0, -1
/* 0042BE1C A0C3FFFF */  sb    $v1, -1($a2)
/* 0042BE20 1482FFFD */  bne   $a0, $v0, .L0042BE18
/* 0042BE24 24C6FFFF */   addiu $a2, $a2, -1
/* 0042BE28 10480009 */  beq   $v0, $t0, .L0042BE50
.L0042BE2C:
/* 0042BE2C 24030020 */   li    $v1, 32
/* 0042BE30 00A23021 */  addu  $a2, $a1, $v0
.L0042BE34:
/* 0042BE34 2442FFFC */  addiu $v0, $v0, -4
/* 0042BE38 A0C3FFFF */  sb    $v1, -1($a2)
/* 0042BE3C A0C3FFFE */  sb    $v1, -2($a2)
/* 0042BE40 A0C3FFFD */  sb    $v1, -3($a2)
/* 0042BE44 A0C3FFFC */  sb    $v1, -4($a2)
/* 0042BE48 1448FFFA */  bne   $v0, $t0, .L0042BE34
/* 0042BE4C 24C6FFFC */   addiu $a2, $a2, -4
.L0042BE50:
/* 0042BE50 03E00008 */  jr    $ra
/* 0042BE54 00000000 */   nop   

    .type func_0042BE58, @function
func_0042BE58:
    # 0042BE58 func_0042BE58
    # 0042BF08 reemit
/* 0042BE58 3C1C0FBF */  .cpload $t9
/* 0042BE5C 279CE438 */  
/* 0042BE60 0399E021 */  
/* 0042BE64 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0042BE68 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0042BE6C AFBC0018 */  sw    $gp, 0x18($sp)
/* 0042BE70 00802825 */  move  $a1, $a0
/* 0042BE74 14800003 */  bnez  $a0, .L0042BE84
/* 0042BE78 00403025 */   move  $a2, $v0
/* 0042BE7C 1000001E */  b     .L0042BEF8
/* 0042BE80 00001025 */   move  $v0, $zero
.L0042BE84:
/* 0042BE84 8CA20000 */  lw    $v0, ($a1)
/* 0042BE88 8F8E8A0C */  lw     $t6, %got(looptab)($gp)
/* 0042BE8C 00027880 */  sll   $t7, $v0, 2
/* 0042BE90 8DCE0000 */  lw    $t6, ($t6)
/* 0042BE94 01E27823 */  subu  $t7, $t7, $v0
/* 0042BE98 000F7880 */  sll   $t7, $t7, 2
/* 0042BE9C 01CF1821 */  addu  $v1, $t6, $t7
/* 0042BEA0 90780009 */  lbu   $t8, 9($v1)
/* 0042BEA4 1300000D */  beqz  $t8, .L0042BEDC
/* 0042BEA8 00000000 */   nop   
/* 0042BEAC 8C640004 */  lw    $a0, 4($v1)
/* 0042BEB0 24030001 */  li    $v1, 1
/* 0042BEB4 10800009 */  beqz  $a0, .L0042BEDC
/* 0042BEB8 00801025 */   move  $v0, $a0
/* 0042BEBC 90590010 */  lbu   $t9, 0x10($v0)
.L0042BEC0:
/* 0042BEC0 54790004 */  bnel  $v1, $t9, .L0042BED4
/* 0042BEC4 8C420008 */   lw    $v0, 8($v0)
/* 0042BEC8 1000000B */  b     .L0042BEF8
/* 0042BECC 24020001 */   li    $v0, 1
/* 0042BED0 8C420008 */  lw    $v0, 8($v0)
.L0042BED4:
/* 0042BED4 5440FFFA */  bnezl $v0, .L0042BEC0
/* 0042BED8 90590010 */   lbu   $t9, 0x10($v0)
.L0042BEDC:
/* 0042BEDC 8F998020 */  lw    $t9, %got(func_0042BE58)($gp)
/* 0042BEE0 8CA40010 */  lw    $a0, 0x10($a1)
/* 0042BEE4 00C01025 */  move  $v0, $a2
/* 0042BEE8 2739BE58 */  addiu $t9, %lo(func_0042BE58) # addiu $t9, $t9, -0x41a8
/* 0042BEEC 0320F809 */  jalr  $t9
/* 0042BEF0 00000000 */   nop   
/* 0042BEF4 8FBC0018 */  lw    $gp, 0x18($sp)
.L0042BEF8:
/* 0042BEF8 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0042BEFC 27BD0020 */  addiu $sp, $sp, 0x20
/* 0042BF00 03E00008 */  jr    $ra
/* 0042BF04 00000000 */   nop   

glabel reemit
    .ent reemit
    # 00456A2C oneproc
/* 0042BF08 3C1C0FBF */  .cpload $t9
/* 0042BF0C 279CE388 */  
/* 0042BF10 0399E021 */  
/* 0042BF14 27BDFF58 */  addiu $sp, $sp, -0xa8
/* 0042BF18 8F828DAC */  lw     $v0, %got(eereg_saved_locs)($gp)
/* 0042BF1C AFBF003C */  sw    $ra, 0x3c($sp)
/* 0042BF20 AFBE0038 */  sw    $fp, 0x38($sp)
/* 0042BF24 AFBC0034 */  sw    $gp, 0x34($sp)
/* 0042BF28 AFB70030 */  sw    $s7, 0x30($sp)
/* 0042BF2C AFB6002C */  sw    $s6, 0x2c($sp)
/* 0042BF30 AFB50028 */  sw    $s5, 0x28($sp)
/* 0042BF34 AFB40024 */  sw    $s4, 0x24($sp)
/* 0042BF38 AFB30020 */  sw    $s3, 0x20($sp)
/* 0042BF3C AFB2001C */  sw    $s2, 0x1c($sp)
/* 0042BF40 AFB10018 */  sw    $s1, 0x18($sp)
/* 0042BF44 AFB00014 */  sw    $s0, 0x14($sp)
/* 0042BF48 A3A00095 */  sb    $zero, 0x95($sp)
/* 0042BF4C 24430058 */  addiu $v1, $v0, 0x58
.L0042BF50:
/* 0042BF50 24420004 */  addiu $v0, $v0, 4
/* 0042BF54 1443FFFE */  bne   $v0, $v1, .L0042BF50
/* 0042BF58 AC40FFFC */   sw    $zero, -4($v0)
/* 0042BF5C 8F99889C */  lw    $t9, %call16(reset)($gp)
/* 0042BF60 8F9E8CD0 */  lw     $fp, %got(strp)($gp)
/* 0042BF64 8F858044 */  lw    $a1, %got(RO_1000B272)($gp)
/* 0042BF68 00003025 */  move  $a2, $zero
/* 0042BF6C 00003825 */  move  $a3, $zero
/* 0042BF70 03C02025 */  move  $a0, $fp
/* 0042BF74 0320F809 */  jalr  $t9
/* 0042BF78 24A5B272 */   addiu $a1, %lo(RO_1000B272) # addiu $a1, $a1, -0x4d8e
/* 0042BF7C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042BF80 8F978998 */  lw     $s7, %got(strpdisplace)($gp)
/* 0042BF84 AEE00000 */  sw    $zero, ($s7)
/* 0042BF88 8F9982A8 */  lw    $t9, %call16(prolog)($gp)
/* 0042BF8C 0320F809 */  jalr  $t9
/* 0042BF90 00000000 */   nop   
/* 0042BF94 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042BF98 8F8489AC */  lw     $a0, %got(graphhead)($gp)
/* 0042BF9C 8F818C30 */  lw     $at, %got(has_ix)($gp)
/* 0042BFA0 8F998600 */  lw    $t9, %call16(findbbtemps)($gp)
/* 0042BFA4 8C840000 */  lw    $a0, ($a0)
/* 0042BFA8 8C94001C */  lw    $s4, 0x1c($a0)
/* 0042BFAC A0200000 */  sb    $zero, ($at)
/* 0042BFB0 8F818A40 */  lw     $at, %got(curlocpg)($gp)
/* 0042BFB4 AFA4009C */  sw    $a0, 0x9c($sp)
/* 0042BFB8 AC200000 */  sw    $zero, ($at)
/* 0042BFBC 8F818A44 */  lw     $at, %got(curlocln)($gp)
/* 0042BFC0 AC200000 */  sw    $zero, ($at)
/* 0042BFC4 8F818C00 */  lw     $at, %got(numcalls)($gp)
/* 0042BFC8 0320F809 */  jalr  $t9
/* 0042BFCC AC200000 */   sw    $zero, ($at)
/* 0042BFD0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042BFD4 24110001 */  li    $s1, 1
/* 0042BFD8 24130018 */  li    $s3, 24
/* 0042BFDC 8F828DB0 */  lw     $v0, %got(baseregexpr)($gp)
/* 0042BFE0 00401825 */  move  $v1, $v0
/* 0042BFE4 2463005C */  addiu $v1, $v1, 0x5c
.L0042BFE8:
/* 0042BFE8 24420004 */  addiu $v0, $v0, 4
/* 0042BFEC 1443FFFE */  bne   $v0, $v1, .L0042BFE8
/* 0042BFF0 AC40FFFC */   sw    $zero, -4($v0)
/* 0042BFF4 8F878DC4 */  lw     $a3, %got(unaltab)($gp)
/* 0042BFF8 8F888D94 */  lw     $t0, %got(gpunaltab)($gp)
/* 0042BFFC 8F898D98 */  lw     $t1, %got(spunaltab)($gp)
.L0042C000:
/* 0042C000 24050018 */  li    $a1, 24
/* 0042C004 24A6FFFF */  addiu $a2, $a1, -1
/* 0042C008 30C60003 */  andi  $a2, $a2, 3
/* 0042C00C 10C00008 */  beqz  $a2, .L0042C030
/* 0042C010 24030001 */   li    $v1, 1
/* 0042C014 24C40001 */  addiu $a0, $a2, 1
/* 0042C018 00E31021 */  addu  $v0, $a3, $v1
.L0042C01C:
/* 0042C01C 24630001 */  addiu $v1, $v1, 1
/* 0042C020 A040FFFF */  sb    $zero, -1($v0)
/* 0042C024 1483FFFD */  bne   $a0, $v1, .L0042C01C
/* 0042C028 24420001 */   addiu $v0, $v0, 1
/* 0042C02C 10650008 */  beq   $v1, $a1, .L0042C050
.L0042C030:
/* 0042C030 00E31021 */   addu  $v0, $a3, $v1
.L0042C034:
/* 0042C034 24630004 */  addiu $v1, $v1, 4
/* 0042C038 A040FFFF */  sb    $zero, -1($v0)
/* 0042C03C A0400000 */  sb    $zero, ($v0)
/* 0042C040 A0400001 */  sb    $zero, 1($v0)
/* 0042C044 A0400002 */  sb    $zero, 2($v0)
/* 0042C048 1465FFFA */  bne   $v1, $a1, .L0042C034
/* 0042C04C 24420004 */   addiu $v0, $v0, 4
.L0042C050:
/* 0042C050 26310001 */  addiu $s1, $s1, 1
/* 0042C054 A1000000 */  sb    $zero, ($t0)
/* 0042C058 A1200000 */  sb    $zero, ($t1)
/* 0042C05C 24E70017 */  addiu $a3, $a3, 0x17
/* 0042C060 25080001 */  addiu $t0, $t0, 1
/* 0042C064 1633FFE6 */  bne   $s1, $s3, .L0042C000
/* 0042C068 25290001 */   addiu $t1, $t1, 1
/* 0042C06C 928E0000 */  lbu   $t6, ($s4)
/* 0042C070 24010042 */  li    $at, 66
/* 0042C074 AFB10090 */  sw    $s1, 0x90($sp)
/* 0042C078 51C10008 */  beql  $t6, $at, .L0042C09C
/* 0042C07C 27B600A8 */   addiu $s6, $sp, 0xa8
/* 0042C080 8F998020 */  lw    $t9, %got(func_0042B1A8)($gp)
/* 0042C084 27A200A8 */  addiu $v0, $sp, 0xa8
                            lw $a0, -0xc($v0)
/* 0042C088 2739B1A8 */  addiu $t9, %lo(func_0042B1A8) # addiu $t9, $t9, -0x4e58
/* 0042C08C 0320F809 */  jalr  $t9
/* 0042C090 00000000 */   nop   
/* 0042C094 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042C098 27B600A8 */  addiu $s6, $sp, 0xa8
.L0042C09C:
/* 0042C09C A3A00097 */  sb    $zero, 0x97($sp)
/* 0042C0A0 8F958DA4 */  lw     $s5, %got(u)($gp)
/* 0042C0A4 92850000 */  lbu   $a1, ($s4)
.L0042C0A8:
/* 0042C0A8 24AFFFA0 */  addiu $t7, $a1, -0x60
/* 0042C0AC 2DF80040 */  sltiu $t8, $t7, 0x40
/* 0042C0B0 1300000A */  beqz  $t8, .L0042C0DC
/* 0042C0B4 00000000 */   nop   
/* 0042C0B8 8F8B8044 */  lw    $t3, %got(D_10010688)($gp)
/* 0042C0BC 000FC943 */  sra   $t9, $t7, 5
/* 0042C0C0 00195080 */  sll   $t2, $t9, 2
/* 0042C0C4 256B0688 */  addiu $t3, %lo(D_10010688) # addiu $t3, $t3, 0x688
/* 0042C0C8 016A6021 */  addu  $t4, $t3, $t2
/* 0042C0CC 8D8D0000 */  lw    $t5, ($t4)
/* 0042C0D0 01ED7004 */  sllv  $t6, $t5, $t7
/* 0042C0D4 29D90000 */  slti  $t9, $t6, 0
/* 0042C0D8 0320C025 */  move  $t8, $t9
.L0042C0DC:
/* 0042C0DC 53000024 */  beql  $t8, $zero, .L0042C170
/* 0042C0E0 30A200FF */   andi  $v0, $a1, 0xff
/* 0042C0E4 8F998020 */  lw    $t9, %got(func_0042AADC)($gp)
/* 0042C0E8 240B0001 */  li    $t3, 1
/* 0042C0EC A3AB0097 */  sb    $t3, 0x97($sp)
/* 0042C0F0 2739AADC */  addiu $t9, %lo(func_0042AADC) # addiu $t9, $t9, -0x5524
/* 0042C0F4 0320F809 */  jalr  $t9
/* 0042C0F8 02C01025 */   move  $v0, $s6
/* 0042C0FC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042C100 02C01025 */  move  $v0, $s6
/* 0042C104 8F998020 */  lw    $t9, %got(func_0042B09C)($gp)
/* 0042C108 2739B09C */  addiu $t9, %lo(func_0042B09C) # addiu $t9, $t9, -0x4f64
/* 0042C10C 0320F809 */  jalr  $t9
/* 0042C110 00000000 */   nop   
/* 0042C114 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042C118 8FAC009C */  lw    $t4, 0x9c($sp)
/* 0042C11C 8F8A8AB4 */  lw     $t2, %got(do_opt_saved_regs)($gp)
/* 0042C120 914A0000 */  lbu   $t2, ($t2)
/* 0042C124 1140000A */  beqz  $t2, .L0042C150
/* 0042C128 00000000 */   nop   
/* 0042C12C 8D8D0120 */  lw    $t5, 0x120($t4)
/* 0042C130 11A00007 */  beqz  $t5, .L0042C150
/* 0042C134 00000000 */   nop   
/* 0042C138 8F998020 */  lw    $t9, %got(func_0042A1C8)($gp)
/* 0042C13C 02C01025 */  move  $v0, $s6
/* 0042C140 2739A1C8 */  addiu $t9, %lo(func_0042A1C8) # addiu $t9, $t9, -0x5e38
/* 0042C144 0320F809 */  jalr  $t9
/* 0042C148 00000000 */   nop   
/* 0042C14C 8FBC0034 */  lw    $gp, 0x34($sp)
.L0042C150:
/* 0042C150 8F998020 */  lw    $t9, %got(func_0042B144)($gp)
/* 0042C154 02C01025 */  move  $v0, $s6
/* 0042C158 2739B144 */  addiu $t9, %lo(func_0042B144) # addiu $t9, $t9, -0x4ebc
/* 0042C15C 0320F809 */  jalr  $t9
/* 0042C160 00000000 */   nop   
/* 0042C164 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042C168 92850000 */  lbu   $a1, ($s4)
/* 0042C16C 30A200FF */  andi  $v0, $a1, 0xff
.L0042C170:
/* 0042C170 2C410032 */  sltiu $at, $v0, 0x32
/* 0042C174 142008C3 */  bnez  $at, .L0042E484
/* 0042C178 02808025 */   move  $s0, $s4
/* 0042C17C 2C41006B */  sltiu $at, $v0, 0x6b
/* 0042C180 142008B0 */  bnez  $at, .L0042E444
/* 0042C184 2C41008F */   sltiu $at, $v0, 0x8f
/* 0042C188 142008F4 */  bnez  $at, .L0042E55C
/* 0042C18C 2458FF87 */   addiu $t8, $v0, -0x79
/* 0042C190 244FFF6C */  addiu $t7, $v0, -0x94
/* 0042C194 2DE10008 */  sltiu $at, $t7, 8
/* 0042C198 102008A4 */  beqz  $at, .Lreemit_error
/* 0042C19C 00000000 */   nop   
/* 0042C1A0 8F818044 */  lw    $at, %got(jtbl_1000B3A0)($gp)
/* 0042C1A4 000F7880 */  sll   $t7, $t7, 2
/* 0042C1A8 002F0821 */  addu  $at, $at, $t7
/* 0042C1AC 8C2FB3A0 */  lw    $t7, %lo(jtbl_1000B3A0)($at)
/* 0042C1B0 01FC7821 */  addu  $t7, $t7, $gp
/* 0042C1B4 01E00008 */  jr    $t7
/* 0042C1B8 00000000 */   nop   
.L0042C1BC:
/* 0042C1BC 8E820014 */  lw    $v0, 0x14($s4)
/* 0042C1C0 3C011200 */  lui   $at, 0x1200
/* 0042C1C4 904E0000 */  lbu   $t6, ($v0)
/* 0042C1C8 2DD90020 */  sltiu $t9, $t6, 0x20
/* 0042C1CC 0019C023 */  negu  $t8, $t9
/* 0042C1D0 03015824 */  and   $t3, $t8, $at
/* 0042C1D4 01CB5004 */  sllv  $t2, $t3, $t6
/* 0042C1D8 05410003 */  bgez  $t2, .L0042C1E8
/* 0042C1DC 00000000 */   nop   
/* 0042C1E0 928C002C */  lbu   $t4, 0x2c($s4)
/* 0042C1E4 A04C0001 */  sb    $t4, 1($v0)
.L0042C1E8:
/* 0042C1E8 8F99801C */  lw    $t9, %got(func_00424FFC)($gp)
/* 0042C1EC 8E840004 */  lw    $a0, 4($s4)
/* 0042C1F0 8E850024 */  lw    $a1, 0x24($s4)
/* 0042C1F4 27394FFC */  addiu $t9, %lo(func_00424FFC) # addiu $t9, $t9, 0x4ffc
/* 0042C1F8 0320F809 */  jalr  $t9
/* 0042C1FC 02C01025 */   move  $v0, $s6
/* 0042C200 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042C204 8E840014 */  lw    $a0, 0x14($s4)
/* 0042C208 00002825 */  move  $a1, $zero
/* 0042C20C 8F99801C */  lw    $t9, %got(func_00424FFC)($gp)
/* 0042C210 02C01025 */  move  $v0, $s6
/* 0042C214 27394FFC */  addiu $t9, %lo(func_00424FFC) # addiu $t9, $t9, 0x4ffc
/* 0042C218 0320F809 */  jalr  $t9
/* 0042C21C 00000000 */   nop   
/* 0042C220 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042C224 24050003 */  li    $a1, 3
/* 0042C228 8F878C30 */  lw     $a3, %got(has_ix)($gp)
/* 0042C22C 90E70000 */  lbu   $a3, ($a3)
/* 0042C230 10E00008 */  beqz  $a3, .L0042C254
/* 0042C234 00000000 */   nop   
/* 0042C238 9282002C */  lbu   $v0, 0x2c($s4)
/* 0042C23C 3847000C */  xori  $a3, $v0, 0xc
/* 0042C240 2CE70001 */  sltiu $a3, $a3, 1
/* 0042C244 14E00003 */  bnez  $a3, .L0042C254
/* 0042C248 00000000 */   nop   
/* 0042C24C 3847000D */  xori  $a3, $v0, 0xd
/* 0042C250 2CE70001 */  sltiu $a3, $a3, 1
.L0042C254:
/* 0042C254 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 0042C258 8E840004 */  lw    $a0, 4($s4)
/* 0042C25C 8E860024 */  lw    $a2, 0x24($s4)
/* 0042C260 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 0042C264 0320F809 */  jalr  $t9
/* 0042C268 02C01025 */   move  $v0, $s6
/* 0042C26C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042C270 24050003 */  li    $a1, 3
/* 0042C274 00003025 */  move  $a2, $zero
/* 0042C278 8F8188E0 */  lw     $at, %got(use_ix)($gp)
/* 0042C27C 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 0042C280 00003825 */  move  $a3, $zero
/* 0042C284 A0200000 */  sb    $zero, ($at)
/* 0042C288 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 0042C28C 8E840014 */  lw    $a0, 0x14($s4)
/* 0042C290 0320F809 */  jalr  $t9
/* 0042C294 02C01025 */   move  $v0, $s6
/* 0042C298 92A30001 */  lbu   $v1, 1($s5)
/* 0042C29C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042C2A0 928F002C */  lbu   $t7, 0x2c($s4)
/* 0042C2A4 0003CEC0 */  sll   $t9, $v1, 0x1b
/* 0042C2A8 0019C6C2 */  srl   $t8, $t9, 0x1b
/* 0042C2AC 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042C2B0 01F85826 */  xor   $t3, $t7, $t8
/* 0042C2B4 240D0094 */  li    $t5, 148
/* 0042C2B8 316E001F */  andi  $t6, $t3, 0x1f
/* 0042C2BC A2AD0000 */  sb    $t5, ($s5)
/* 0042C2C0 01C35026 */  xor   $t2, $t6, $v1
/* 0042C2C4 A02A0001 */  sb    $t2, 1($at)
/* 0042C2C8 8E8C0030 */  lw    $t4, 0x30($s4)
/* 0042C2CC 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042C2D0 AC2C0004 */  sw    $t4, 4($at)
/* 0042C2D4 8E8D0020 */  lw    $t5, 0x20($s4)
/* 0042C2D8 9299002D */  lbu   $t9, 0x2d($s4)
/* 0042C2DC 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042C2E0 AEAD0008 */  sw    $t5, 8($s5)
/* 0042C2E4 A4390002 */  sh    $t9, 2($at)
/* 0042C2E8 968F002E */  lhu   $t7, 0x2e($s4)
/* 0042C2EC 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042C2F0 AC2F000C */  sw    $t7, 0xc($at)
/* 0042C2F4 92980000 */  lbu   $t8, ($s4)
/* 0042C2F8 24010040 */  li    $at, 64
/* 0042C2FC 17010004 */  bne   $t8, $at, .L0042C310
/* 0042C300 00000000 */   nop   
/* 0042C304 96AB0002 */  lhu   $t3, 2($s5)
/* 0042C308 356E0001 */  ori   $t6, $t3, 1
/* 0042C30C A6AE0002 */  sh    $t6, 2($s5)
.L0042C310:
/* 0042C310 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042C314 02A02025 */  move  $a0, $s5
/* 0042C318 0320F809 */  jalr  $t9
/* 0042C31C 00000000 */   nop   
/* 0042C320 10000898 */  b     .L0042E584
/* 0042C324 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042C328:
/* 0042C328 8E820014 */  lw    $v0, 0x14($s4)
/* 0042C32C 3C011200 */  lui   $at, 0x1200
/* 0042C330 904A0000 */  lbu   $t2, ($v0)
/* 0042C334 2D4C0020 */  sltiu $t4, $t2, 0x20
/* 0042C338 000C6823 */  negu  $t5, $t4
/* 0042C33C 01A1C824 */  and   $t9, $t5, $at
/* 0042C340 01597804 */  sllv  $t7, $t9, $t2
/* 0042C344 05E30004 */  bgezl $t7, .L0042C358
/* 0042C348 8E900004 */   lw    $s0, 4($s4)
/* 0042C34C 9298002C */  lbu   $t8, 0x2c($s4)
/* 0042C350 A0580001 */  sb    $t8, 1($v0)
/* 0042C354 8E900004 */  lw    $s0, 4($s4)
.L0042C358:
/* 0042C358 56000004 */  bnezl $s0, .L0042C36C
/* 0042C35C 92070000 */   lbu   $a3, ($s0)
/* 0042C360 10000014 */  b     .L0042C3B4
/* 0042C364 00001025 */   move  $v0, $zero
/* 0042C368 92070000 */  lbu   $a3, ($s0)
.L0042C36C:
/* 0042C36C 38E70001 */  xori  $a3, $a3, 1
/* 0042C370 2CE70001 */  sltiu $a3, $a3, 1
/* 0042C374 50E0000F */  beql  $a3, $zero, .L0042C3B4
/* 0042C378 30E200FF */   andi  $v0, $a3, 0xff
/* 0042C37C 92870000 */  lbu   $a3, ($s4)
/* 0042C380 8FA5009C */  lw    $a1, 0x9c($sp)
/* 0042C384 38E7003F */  xori  $a3, $a3, 0x3f
/* 0042C388 2CE70001 */  sltiu $a3, $a3, 1
/* 0042C38C 50E00009 */  beql  $a3, $zero, .L0042C3B4
/* 0042C390 30E200FF */   andi  $v0, $a3, 0xff
/* 0042C394 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 0042C398 8E040014 */  lw    $a0, 0x14($s0)
/* 0042C39C 27A60090 */  addiu $a2, $sp, 0x90
/* 0042C3A0 0320F809 */  jalr  $t9
/* 0042C3A4 24070001 */   li    $a3, 1
/* 0042C3A8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042C3AC 2C470001 */  sltiu $a3, $v0, 1
/* 0042C3B0 30E200FF */  andi  $v0, $a3, 0xff
.L0042C3B4:
/* 0042C3B4 10400037 */  beqz  $v0, .L0042C494
/* 0042C3B8 00000000 */   nop   
/* 0042C3BC 8F99801C */  lw    $t9, %got(func_00424FFC)($gp)
/* 0042C3C0 8E840014 */  lw    $a0, 0x14($s4)
/* 0042C3C4 00002825 */  move  $a1, $zero
/* 0042C3C8 27394FFC */  addiu $t9, %lo(func_00424FFC) # addiu $t9, $t9, 0x4ffc
/* 0042C3CC 0320F809 */  jalr  $t9
/* 0042C3D0 02C01025 */   move  $v0, $s6
/* 0042C3D4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042C3D8 8E840014 */  lw    $a0, 0x14($s4)
/* 0042C3DC 24050003 */  li    $a1, 3
/* 0042C3E0 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 0042C3E4 00003025 */  move  $a2, $zero
/* 0042C3E8 00003825 */  move  $a3, $zero
/* 0042C3EC 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 0042C3F0 0320F809 */  jalr  $t9
/* 0042C3F4 02C01025 */   move  $v0, $s6
/* 0042C3F8 92A30001 */  lbu   $v1, 1($s5)
/* 0042C3FC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042C400 928E002C */  lbu   $t6, 0x2c($s4)
/* 0042C404 000366C0 */  sll   $t4, $v1, 0x1b
/* 0042C408 000C6EC2 */  srl   $t5, $t4, 0x1b
/* 0042C40C 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042C410 01CDC826 */  xor   $t9, $t6, $t5
/* 0042C414 240B007B */  li    $t3, 123
/* 0042C418 332A001F */  andi  $t2, $t9, 0x1f
/* 0042C41C 8E820004 */  lw    $v0, 4($s4)
/* 0042C420 A2AB0000 */  sb    $t3, ($s5)
/* 0042C424 01437826 */  xor   $t7, $t2, $v1
/* 0042C428 A02F0001 */  sb    $t7, 1($at)
/* 0042C42C 92A30001 */  lbu   $v1, 1($s5)
/* 0042C430 904B0032 */  lbu   $t3, 0x32($v0)
/* 0042C434 8C580030 */  lw    $t8, 0x30($v0)
/* 0042C438 00036600 */  sll   $t4, $v1, 0x18
/* 0042C43C 000C7742 */  srl   $t6, $t4, 0x1d
/* 0042C440 016E6826 */  xor   $t5, $t3, $t6
/* 0042C444 8E8E0030 */  lw    $t6, 0x30($s4)
/* 0042C448 8C4B0020 */  lw    $t3, 0x20($v0)
/* 0042C44C 000DCF40 */  sll   $t9, $t5, 0x1d
/* 0042C450 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042C454 00195602 */  srl   $t2, $t9, 0x18
/* 0042C458 01437826 */  xor   $t7, $t2, $v1
/* 0042C45C 001862C2 */  srl   $t4, $t8, 0xb
/* 0042C460 A2AF0001 */  sb    $t7, 1($s5)
/* 0042C464 AEAC0004 */  sw    $t4, 4($s5)
/* 0042C468 016E6821 */  addu  $t5, $t3, $t6
/* 0042C46C AC2D000C */  sw    $t5, 0xc($at)
/* 0042C470 8E990020 */  lw    $t9, 0x20($s4)
/* 0042C474 A6A00002 */  sh    $zero, 2($s5)
/* 0042C478 02A02025 */  move  $a0, $s5
/* 0042C47C AEB90008 */  sw    $t9, 8($s5)
/* 0042C480 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042C484 0320F809 */  jalr  $t9
/* 0042C488 00000000 */   nop   
/* 0042C48C 1000083D */  b     .L0042E584
/* 0042C490 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042C494:
/* 0042C494 8F99801C */  lw    $t9, %got(func_00424FFC)($gp)
/* 0042C498 8E840004 */  lw    $a0, 4($s4)
/* 0042C49C 8E850024 */  lw    $a1, 0x24($s4)
/* 0042C4A0 27394FFC */  addiu $t9, %lo(func_00424FFC) # addiu $t9, $t9, 0x4ffc
/* 0042C4A4 0320F809 */  jalr  $t9
/* 0042C4A8 02C01025 */   move  $v0, $s6
/* 0042C4AC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042C4B0 8E840014 */  lw    $a0, 0x14($s4)
/* 0042C4B4 00002825 */  move  $a1, $zero
/* 0042C4B8 8F99801C */  lw    $t9, %got(func_00424FFC)($gp)
/* 0042C4BC 02C01025 */  move  $v0, $s6
/* 0042C4C0 27394FFC */  addiu $t9, %lo(func_00424FFC) # addiu $t9, $t9, 0x4ffc
/* 0042C4C4 0320F809 */  jalr  $t9
/* 0042C4C8 00000000 */   nop   
/* 0042C4CC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042C4D0 24050003 */  li    $a1, 3
/* 0042C4D4 8F878C30 */  lw     $a3, %got(has_ix)($gp)
/* 0042C4D8 90E70000 */  lbu   $a3, ($a3)
/* 0042C4DC 10E00008 */  beqz  $a3, .L0042C500
/* 0042C4E0 00000000 */   nop   
/* 0042C4E4 9282002C */  lbu   $v0, 0x2c($s4)
/* 0042C4E8 3847000C */  xori  $a3, $v0, 0xc
/* 0042C4EC 2CE70001 */  sltiu $a3, $a3, 1
/* 0042C4F0 14E00003 */  bnez  $a3, .L0042C500
/* 0042C4F4 00000000 */   nop   
/* 0042C4F8 3847000D */  xori  $a3, $v0, 0xd
/* 0042C4FC 2CE70001 */  sltiu $a3, $a3, 1
.L0042C500:
/* 0042C500 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 0042C504 8E840004 */  lw    $a0, 4($s4)
/* 0042C508 8E860024 */  lw    $a2, 0x24($s4)
/* 0042C50C 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 0042C510 0320F809 */  jalr  $t9
/* 0042C514 02C01025 */   move  $v0, $s6
/* 0042C518 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042C51C 8E840014 */  lw    $a0, 0x14($s4)
/* 0042C520 24050003 */  li    $a1, 3
/* 0042C524 8F8388E0 */  lw     $v1, %got(use_ix)($gp)
/* 0042C528 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 0042C52C 00003025 */  move  $a2, $zero
/* 0042C530 90700000 */  lbu   $s0, ($v1)
/* 0042C534 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 0042C538 00003825 */  move  $a3, $zero
/* 0042C53C 02C01025 */  move  $v0, $s6
/* 0042C540 0320F809 */  jalr  $t9
/* 0042C544 A0600000 */   sb    $zero, ($v1)
/* 0042C548 12000004 */  beqz  $s0, .L0042C55C
/* 0042C54C 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0042C550 240A0092 */  li    $t2, 146
/* 0042C554 10000003 */  b     .L0042C564
/* 0042C558 A2AA0000 */   sb    $t2, ($s5)
.L0042C55C:
/* 0042C55C 240F003F */  li    $t7, 63
/* 0042C560 A2AF0000 */  sb    $t7, ($s5)
.L0042C564:
/* 0042C564 92A30001 */  lbu   $v1, 1($s5)
/* 0042C568 9298002C */  lbu   $t8, 0x2c($s4)
/* 0042C56C 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042C570 000366C0 */  sll   $t4, $v1, 0x1b
/* 0042C574 000C5EC2 */  srl   $t3, $t4, 0x1b
/* 0042C578 030B7026 */  xor   $t6, $t8, $t3
/* 0042C57C 31CD001F */  andi  $t5, $t6, 0x1f
/* 0042C580 01A3C826 */  xor   $t9, $t5, $v1
/* 0042C584 A0390001 */  sb    $t9, 1($at)
/* 0042C588 8E8A0030 */  lw    $t2, 0x30($s4)
/* 0042C58C 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042C590 AC2A0004 */  sw    $t2, 4($at)
/* 0042C594 8E8F0020 */  lw    $t7, 0x20($s4)
/* 0042C598 928C002D */  lbu   $t4, 0x2d($s4)
/* 0042C59C 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042C5A0 AEAF0008 */  sw    $t7, 8($s5)
/* 0042C5A4 A42C0002 */  sh    $t4, 2($at)
/* 0042C5A8 9698002E */  lhu   $t8, 0x2e($s4)
/* 0042C5AC 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042C5B0 AC38000C */  sw    $t8, 0xc($at)
/* 0042C5B4 928B0000 */  lbu   $t3, ($s4)
/* 0042C5B8 24010040 */  li    $at, 64
/* 0042C5BC 15610004 */  bne   $t3, $at, .L0042C5D0
/* 0042C5C0 00000000 */   nop   
/* 0042C5C4 96AE0002 */  lhu   $t6, 2($s5)
/* 0042C5C8 35CD0001 */  ori   $t5, $t6, 1
/* 0042C5CC A6AD0002 */  sh    $t5, 2($s5)
.L0042C5D0:
/* 0042C5D0 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042C5D4 02A02025 */  move  $a0, $s5
/* 0042C5D8 0320F809 */  jalr  $t9
/* 0042C5DC 00000000 */   nop   
/* 0042C5E0 100007E8 */  b     .L0042E584
/* 0042C5E4 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042C5E8:
/* 0042C5E8 8E900004 */  lw    $s0, 4($s4)
/* 0042C5EC 3C011200 */  lui   $at, 0x1200
/* 0042C5F0 92190000 */  lbu   $t9, ($s0)
/* 0042C5F4 2F2A0020 */  sltiu $t2, $t9, 0x20
/* 0042C5F8 000A7823 */  negu  $t7, $t2
/* 0042C5FC 01E16024 */  and   $t4, $t7, $at
/* 0042C600 032CC004 */  sllv  $t8, $t4, $t9
/* 0042C604 0703000B */  bgezl $t8, .L0042C634
/* 0042C608 8E820014 */   lw    $v0, 0x14($s4)
/* 0042C60C 920B0001 */  lbu   $t3, 1($s0)
/* 0042C610 3C018800 */  lui   $at, 0x8800
/* 0042C614 2D6E0020 */  sltiu $t6, $t3, 0x20
/* 0042C618 000E6823 */  negu  $t5, $t6
/* 0042C61C 01A15024 */  and   $t2, $t5, $at
/* 0042C620 016A7804 */  sllv  $t7, $t2, $t3
/* 0042C624 05E20003 */  bltzl $t7, .L0042C634
/* 0042C628 8E820014 */   lw    $v0, 0x14($s4)
/* 0042C62C A2000001 */  sb    $zero, 1($s0)
/* 0042C630 8E820014 */  lw    $v0, 0x14($s4)
.L0042C634:
/* 0042C634 3C011200 */  lui   $at, 0x1200
/* 0042C638 904C0000 */  lbu   $t4, ($v0)
/* 0042C63C 2D990020 */  sltiu $t9, $t4, 0x20
/* 0042C640 0019C023 */  negu  $t8, $t9
/* 0042C644 03017024 */  and   $t6, $t8, $at
/* 0042C648 018E6804 */  sllv  $t5, $t6, $t4
/* 0042C64C 05A1000A */  bgez  $t5, .L0042C678
/* 0042C650 00000000 */   nop   
/* 0042C654 904A0001 */  lbu   $t2, 1($v0)
/* 0042C658 3C018800 */  lui   $at, 0x8800
/* 0042C65C 2D4B0020 */  sltiu $t3, $t2, 0x20
/* 0042C660 000B7823 */  negu  $t7, $t3
/* 0042C664 01E1C824 */  and   $t9, $t7, $at
/* 0042C668 0159C004 */  sllv  $t8, $t9, $t2
/* 0042C66C 07000002 */  bltz  $t8, .L0042C678
/* 0042C670 00000000 */   nop   
/* 0042C674 A0400001 */  sb    $zero, 1($v0)
.L0042C678:
/* 0042C678 8F99801C */  lw    $t9, %got(func_00424FFC)($gp)
/* 0042C67C 8E840004 */  lw    $a0, 4($s4)
/* 0042C680 8E850024 */  lw    $a1, 0x24($s4)
/* 0042C684 27394FFC */  addiu $t9, %lo(func_00424FFC) # addiu $t9, $t9, 0x4ffc
/* 0042C688 0320F809 */  jalr  $t9
/* 0042C68C 02C01025 */   move  $v0, $s6
/* 0042C690 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042C694 8E840014 */  lw    $a0, 0x14($s4)
/* 0042C698 8E85002C */  lw    $a1, 0x2c($s4)
/* 0042C69C 8F99801C */  lw    $t9, %got(func_00424FFC)($gp)
/* 0042C6A0 02C01025 */  move  $v0, $s6
/* 0042C6A4 27394FFC */  addiu $t9, %lo(func_00424FFC) # addiu $t9, $t9, 0x4ffc
/* 0042C6A8 0320F809 */  jalr  $t9
/* 0042C6AC 00000000 */   nop   
/* 0042C6B0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042C6B4 8E840004 */  lw    $a0, 4($s4)
/* 0042C6B8 24050003 */  li    $a1, 3
/* 0042C6BC 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 0042C6C0 8E860024 */  lw    $a2, 0x24($s4)
/* 0042C6C4 00003825 */  move  $a3, $zero
/* 0042C6C8 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 0042C6CC 0320F809 */  jalr  $t9
/* 0042C6D0 02C01025 */   move  $v0, $s6
/* 0042C6D4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042C6D8 8E840014 */  lw    $a0, 0x14($s4)
/* 0042C6DC 24050003 */  li    $a1, 3
/* 0042C6E0 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 0042C6E4 8E86002C */  lw    $a2, 0x2c($s4)
/* 0042C6E8 00003825 */  move  $a3, $zero
/* 0042C6EC 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 0042C6F0 0320F809 */  jalr  $t9
/* 0042C6F4 02C01025 */   move  $v0, $s6
/* 0042C6F8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042C6FC 92AC0001 */  lbu   $t4, 1($s5)
/* 0042C700 8E8F0020 */  lw    $t7, 0x20($s4)
/* 0042C704 92990032 */  lbu   $t9, 0x32($s4)
/* 0042C708 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042C70C 318DFFE0 */  andi  $t5, $t4, 0xffe0
/* 0042C710 240E0058 */  li    $t6, 88
/* 0042C714 35AB0009 */  ori   $t3, $t5, 9
/* 0042C718 A2AE0000 */  sb    $t6, ($s5)
/* 0042C71C A2AB0001 */  sb    $t3, 1($s5)
/* 0042C720 AEAF0008 */  sw    $t7, 8($s5)
/* 0042C724 AC390004 */  sw    $t9, 4($at)
/* 0042C728 928A0033 */  lbu   $t2, 0x33($s4)
/* 0042C72C 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042C730 A42A0002 */  sh    $t2, 2($at)
/* 0042C734 92980000 */  lbu   $t8, ($s4)
/* 0042C738 24010059 */  li    $at, 89
/* 0042C73C 17010004 */  bne   $t8, $at, .L0042C750
/* 0042C740 00000000 */   nop   
/* 0042C744 96AE0002 */  lhu   $t6, 2($s5)
/* 0042C748 35CC0001 */  ori   $t4, $t6, 1
/* 0042C74C A6AC0002 */  sh    $t4, 2($s5)
.L0042C750:
/* 0042C750 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042C754 02A02025 */  move  $a0, $s5
/* 0042C758 0320F809 */  jalr  $t9
/* 0042C75C 00000000 */   nop   
/* 0042C760 10000788 */  b     .L0042E584
/* 0042C764 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042C768:
/* 0042C768 8E900004 */  lw    $s0, 4($s4)
/* 0042C76C 3C011200 */  lui   $at, 0x1200
/* 0042C770 920D0000 */  lbu   $t5, ($s0)
/* 0042C774 2DAB0020 */  sltiu $t3, $t5, 0x20
/* 0042C778 000B7823 */  negu  $t7, $t3
/* 0042C77C 01E1C824 */  and   $t9, $t7, $at
/* 0042C780 01B95004 */  sllv  $t2, $t9, $t5
/* 0042C784 05430004 */  bgezl $t2, .L0042C798
/* 0042C788 8E820014 */   lw    $v0, 0x14($s4)
/* 0042C78C 9298002C */  lbu   $t8, 0x2c($s4)
/* 0042C790 A2180001 */  sb    $t8, 1($s0)
/* 0042C794 8E820014 */  lw    $v0, 0x14($s4)
.L0042C798:
/* 0042C798 3C011200 */  lui   $at, 0x1200
/* 0042C79C 904E0000 */  lbu   $t6, ($v0)
/* 0042C7A0 2DCC0020 */  sltiu $t4, $t6, 0x20
/* 0042C7A4 000C5823 */  negu  $t3, $t4
/* 0042C7A8 01617824 */  and   $t7, $t3, $at
/* 0042C7AC 01CFC804 */  sllv  $t9, $t7, $t6
/* 0042C7B0 07210003 */  bgez  $t9, .L0042C7C0
/* 0042C7B4 00000000 */   nop   
/* 0042C7B8 928D002C */  lbu   $t5, 0x2c($s4)
/* 0042C7BC A04D0001 */  sb    $t5, 1($v0)
.L0042C7C0:
/* 0042C7C0 8F99801C */  lw    $t9, %got(func_00424FFC)($gp)
/* 0042C7C4 8E840004 */  lw    $a0, 4($s4)
/* 0042C7C8 00002825 */  move  $a1, $zero
/* 0042C7CC 27394FFC */  addiu $t9, %lo(func_00424FFC) # addiu $t9, $t9, 0x4ffc
/* 0042C7D0 0320F809 */  jalr  $t9
/* 0042C7D4 02C01025 */   move  $v0, $s6
/* 0042C7D8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042C7DC 8E840014 */  lw    $a0, 0x14($s4)
/* 0042C7E0 00002825 */  move  $a1, $zero
/* 0042C7E4 8F99801C */  lw    $t9, %got(func_00424FFC)($gp)
/* 0042C7E8 02C01025 */  move  $v0, $s6
/* 0042C7EC 27394FFC */  addiu $t9, %lo(func_00424FFC) # addiu $t9, $t9, 0x4ffc
/* 0042C7F0 0320F809 */  jalr  $t9
/* 0042C7F4 00000000 */   nop   
/* 0042C7F8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042C7FC 8E840004 */  lw    $a0, 4($s4)
/* 0042C800 24050003 */  li    $a1, 3
/* 0042C804 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 0042C808 00003025 */  move  $a2, $zero
/* 0042C80C 00003825 */  move  $a3, $zero
/* 0042C810 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 0042C814 0320F809 */  jalr  $t9
/* 0042C818 02C01025 */   move  $v0, $s6
/* 0042C81C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042C820 8E840014 */  lw    $a0, 0x14($s4)
/* 0042C824 24050003 */  li    $a1, 3
/* 0042C828 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 0042C82C 00003025 */  move  $a2, $zero
/* 0042C830 00003825 */  move  $a3, $zero
/* 0042C834 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 0042C838 0320F809 */  jalr  $t9
/* 0042C83C 02C01025 */   move  $v0, $s6
/* 0042C840 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042C844 928A0000 */  lbu   $t2, ($s4)
/* 0042C848 02A02025 */  move  $a0, $s5
/* 0042C84C 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042C850 A02A0000 */  sb    $t2, ($at)
/* 0042C854 92A30001 */  lbu   $v1, 1($s5)
/* 0042C858 9298002C */  lbu   $t8, 0x2c($s4)
/* 0042C85C 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042C860 000366C0 */  sll   $t4, $v1, 0x1b
/* 0042C864 000C5EC2 */  srl   $t3, $t4, 0x1b
/* 0042C868 030B7826 */  xor   $t7, $t8, $t3
/* 0042C86C 31EE001F */  andi  $t6, $t7, 0x1f
/* 0042C870 01C3C826 */  xor   $t9, $t6, $v1
/* 0042C874 A0390001 */  sb    $t9, 1($at)
/* 0042C878 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042C87C 8E8D0030 */  lw    $t5, 0x30($s4)
/* 0042C880 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042C884 0320F809 */  jalr  $t9
/* 0042C888 AC2D0004 */   sw    $t5, 4($at)
/* 0042C88C 1000073D */  b     .L0042E584
/* 0042C890 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042C894:
/* 0042C894 8F99801C */  lw    $t9, %got(func_00424FFC)($gp)
/* 0042C898 8E840004 */  lw    $a0, 4($s4)
/* 0042C89C 00002825 */  move  $a1, $zero
/* 0042C8A0 27394FFC */  addiu $t9, %lo(func_00424FFC) # addiu $t9, $t9, 0x4ffc
/* 0042C8A4 0320F809 */  jalr  $t9
/* 0042C8A8 02C01025 */   move  $v0, $s6
/* 0042C8AC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042C8B0 8E840004 */  lw    $a0, 4($s4)
/* 0042C8B4 00002825 */  move  $a1, $zero
/* 0042C8B8 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 0042C8BC 00003025 */  move  $a2, $zero
/* 0042C8C0 00003825 */  move  $a3, $zero
/* 0042C8C4 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 0042C8C8 0320F809 */  jalr  $t9
/* 0042C8CC 02C01025 */   move  $v0, $s6
/* 0042C8D0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042C8D4 240A007C */  li    $t2, 124
/* 0042C8D8 A2AA0000 */  sb    $t2, ($s5)
/* 0042C8DC 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042C8E0 02A02025 */  move  $a0, $s5
/* 0042C8E4 0320F809 */  jalr  $t9
/* 0042C8E8 00000000 */   nop   
/* 0042C8EC 10000725 */  b     .L0042E584
/* 0042C8F0 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042C8F4:
/* 0042C8F4 928C0003 */  lbu   $t4, 3($s4)
/* 0042C8F8 55800723 */  bnezl $t4, .L0042E588
/* 0042C8FC 8E940008 */   lw    $s4, 8($s4)
/* 0042C900 8E980004 */  lw    $t8, 4($s4)
/* 0042C904 8F020034 */  lw    $v0, 0x34($t8)
/* 0042C908 50400009 */  beql  $v0, $zero, .L0042C930
/* 0042C90C 92990002 */   lbu   $t9, 2($s4)
/* 0042C910 904B0000 */  lbu   $t3, ($v0)
/* 0042C914 24010004 */  li    $at, 4
/* 0042C918 51610005 */  beql  $t3, $at, .L0042C930
/* 0042C91C 92990002 */   lbu   $t9, 2($s4)
/* 0042C920 904F0001 */  lbu   $t7, 1($v0)
/* 0042C924 8C4E0014 */  lw    $t6, 0x14($v0)
/* 0042C928 A1CF0001 */  sb    $t7, 1($t6)
/* 0042C92C 92990002 */  lbu   $t9, 2($s4)
.L0042C930:
/* 0042C930 24010001 */  li    $at, 1
/* 0042C934 53210061 */  beql  $t9, $at, .L0042CABC
/* 0042C938 92980001 */   lbu   $t8, 1($s4)
/* 0042C93C 928D0000 */  lbu   $t5, ($s4)
/* 0042C940 2401003E */  li    $at, 62
/* 0042C944 15A10008 */  bne   $t5, $at, .L0042C968
/* 0042C948 00000000 */   nop   
/* 0042C94C 8F99801C */  lw    $t9, %got(func_00424FFC)($gp)
/* 0042C950 8E840014 */  lw    $a0, 0x14($s4)
/* 0042C954 00002825 */  move  $a1, $zero
/* 0042C958 27394FFC */  addiu $t9, %lo(func_00424FFC) # addiu $t9, $t9, 0x4ffc
/* 0042C95C 0320F809 */  jalr  $t9
/* 0042C960 02C01025 */   move  $v0, $s6
/* 0042C964 8FBC0034 */  lw    $gp, 0x34($sp)
.L0042C968:
/* 0042C968 8F99801C */  lw    $t9, %got(func_00424FFC)($gp)
/* 0042C96C 8E8A0004 */  lw    $t2, 4($s4)
/* 0042C970 00002825 */  move  $a1, $zero
/* 0042C974 27394FFC */  addiu $t9, %lo(func_00424FFC) # addiu $t9, $t9, 0x4ffc
/* 0042C978 02C01025 */  move  $v0, $s6
/* 0042C97C 0320F809 */  jalr  $t9
/* 0042C980 8D440034 */   lw    $a0, 0x34($t2)
/* 0042C984 928C0000 */  lbu   $t4, ($s4)
/* 0042C988 2401003E */  li    $at, 62
/* 0042C98C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042C990 15810009 */  bne   $t4, $at, .L0042C9B8
/* 0042C994 00002825 */   move  $a1, $zero
/* 0042C998 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 0042C99C 8E840014 */  lw    $a0, 0x14($s4)
/* 0042C9A0 00003025 */  move  $a2, $zero
/* 0042C9A4 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 0042C9A8 00003825 */  move  $a3, $zero
/* 0042C9AC 0320F809 */  jalr  $t9
/* 0042C9B0 02C01025 */   move  $v0, $s6
/* 0042C9B4 8FBC0034 */  lw    $gp, 0x34($sp)
.L0042C9B8:
/* 0042C9B8 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 0042C9BC 8E980004 */  lw    $t8, 4($s4)
/* 0042C9C0 24050003 */  li    $a1, 3
/* 0042C9C4 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 0042C9C8 00003025 */  move  $a2, $zero
/* 0042C9CC 00003825 */  move  $a3, $zero
/* 0042C9D0 02C01025 */  move  $v0, $s6
/* 0042C9D4 0320F809 */  jalr  $t9
/* 0042C9D8 8F040034 */   lw    $a0, 0x34($t8)
/* 0042C9DC 8E900004 */  lw    $s0, 4($s4)
/* 0042C9E0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042C9E4 2401007B */  li    $at, 123
/* 0042C9E8 920B0001 */  lbu   $t3, 1($s0)
/* 0042C9EC 8E0F0014 */  lw    $t7, 0x14($s0)
/* 0042C9F0 2404007B */  li    $a0, 123
/* 0042C9F4 A1EB0001 */  sb    $t3, 1($t7)
/* 0042C9F8 8E900004 */  lw    $s0, 4($s4)
/* 0042C9FC 920E0020 */  lbu   $t6, 0x20($s0)
/* 0042CA00 8E190014 */  lw    $t9, 0x14($s0)
/* 0042CA04 A32E0018 */  sb    $t6, 0x18($t9)
/* 0042CA08 928D0000 */  lbu   $t5, ($s4)
/* 0042CA0C 8FA6009C */  lw    $a2, 0x9c($sp)
/* 0042CA10 55A10011 */  bnel  $t5, $at, .L0042CA58
/* 0042CA14 8E900004 */   lw    $s0, 4($s4)
/* 0042CA18 8F99828C */  lw    $t9, %call16(varlodstr)($gp)
/* 0042CA1C 8E8A0004 */  lw    $t2, 4($s4)
/* 0042CA20 00003825 */  move  $a3, $zero
/* 0042CA24 0320F809 */  jalr  $t9
/* 0042CA28 8D450014 */   lw    $a1, 0x14($t2)
/* 0042CA2C 10400010 */  beqz  $v0, .L0042CA70
/* 0042CA30 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0042CA34 8E900004 */  lw    $s0, 4($s4)
/* 0042CA38 8F998264 */  lw    $t9, %call16(igen3)($gp)
/* 0042CA3C 2404007B */  li    $a0, 123
/* 0042CA40 8E050014 */  lw    $a1, 0x14($s0)
/* 0042CA44 0320F809 */  jalr  $t9
/* 0042CA48 92060023 */   lbu   $a2, 0x23($s0)
/* 0042CA4C 10000008 */  b     .L0042CA70
/* 0042CA50 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0042CA54 8E900004 */  lw    $s0, 4($s4)
.L0042CA58:
/* 0042CA58 8F998264 */  lw    $t9, %call16(igen3)($gp)
/* 0042CA5C 2404003E */  li    $a0, 62
/* 0042CA60 8E050014 */  lw    $a1, 0x14($s0)
/* 0042CA64 0320F809 */  jalr  $t9
/* 0042CA68 92060023 */   lbu   $a2, 0x23($s0)
/* 0042CA6C 8FBC0034 */  lw    $gp, 0x34($sp)
.L0042CA70:
/* 0042CA70 928C0001 */  lbu   $t4, 1($s4)
/* 0042CA74 518006C4 */  beql  $t4, $zero, .L0042E588
/* 0042CA78 8E940008 */   lw    $s4, 8($s4)
/* 0042CA7C 8F998020 */  lw    $t9, %got(func_0042B890)($gp)
/* 0042CA80 02802025 */  move  $a0, $s4
/* 0042CA84 02C01025 */  move  $v0, $s6
/* 0042CA88 2739B890 */  addiu $t9, %lo(func_0042B890) # addiu $t9, $t9, -0x4770
/* 0042CA8C 0320F809 */  jalr  $t9
/* 0042CA90 00000000 */   nop   
/* 0042CA94 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042CA98 02802025 */  move  $a0, $s4
/* 0042CA9C 02C01025 */  move  $v0, $s6
/* 0042CAA0 8F998020 */  lw    $t9, %got(func_0042BB4C)($gp)
/* 0042CAA4 2739BB4C */  addiu $t9, %lo(func_0042BB4C) # addiu $t9, $t9, -0x44b4
/* 0042CAA8 0320F809 */  jalr  $t9
/* 0042CAAC 00000000 */   nop   
/* 0042CAB0 100006B4 */  b     .L0042E584
/* 0042CAB4 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0042CAB8 92980001 */  lbu   $t8, 1($s4)
.L0042CABC:
/* 0042CABC 530006B2 */  beql  $t8, $zero, .L0042E588
/* 0042CAC0 8E940008 */   lw    $s4, 8($s4)
/* 0042CAC4 8F998020 */  lw    $t9, %got(func_0042B890)($gp)
/* 0042CAC8 02802025 */  move  $a0, $s4
/* 0042CACC 02C01025 */  move  $v0, $s6
/* 0042CAD0 2739B890 */  addiu $t9, %lo(func_0042B890) # addiu $t9, $t9, -0x4770
/* 0042CAD4 0320F809 */  jalr  $t9
/* 0042CAD8 00000000 */   nop   
/* 0042CADC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042CAE0 02802025 */  move  $a0, $s4
/* 0042CAE4 02C01025 */  move  $v0, $s6
/* 0042CAE8 8F998020 */  lw    $t9, %got(func_0042BB4C)($gp)
/* 0042CAEC 2739BB4C */  addiu $t9, %lo(func_0042BB4C) # addiu $t9, $t9, -0x44b4
/* 0042CAF0 0320F809 */  jalr  $t9
/* 0042CAF4 00000000 */   nop   
/* 0042CAF8 100006A2 */  b     .L0042E584
/* 0042CAFC 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042CB00:
/* 0042CB00 8E900004 */  lw    $s0, 4($s4)
/* 0042CB04 24010004 */  li    $at, 4
/* 0042CB08 920B0000 */  lbu   $t3, ($s0)
/* 0042CB0C 11610005 */  beq   $t3, $at, .L0042CB24
/* 0042CB10 00000000 */   nop   
/* 0042CB14 920F0001 */  lbu   $t7, 1($s0)
/* 0042CB18 8E0E0014 */  lw    $t6, 0x14($s0)
/* 0042CB1C A1CF0001 */  sb    $t7, 1($t6)
/* 0042CB20 8E900004 */  lw    $s0, 4($s4)
.L0042CB24:
/* 0042CB24 8F99801C */  lw    $t9, %got(func_00424FFC)($gp)
/* 0042CB28 02002025 */  move  $a0, $s0
/* 0042CB2C 00002825 */  move  $a1, $zero
/* 0042CB30 27394FFC */  addiu $t9, %lo(func_00424FFC) # addiu $t9, $t9, 0x4ffc
/* 0042CB34 0320F809 */  jalr  $t9
/* 0042CB38 02C01025 */   move  $v0, $s6
/* 0042CB3C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042CB40 8F848A34 */  lw     $a0, %got(curmst)($gp)
/* 0042CB44 8C840000 */  lw    $a0, ($a0)
/* 0042CB48 8C990020 */  lw    $t9, 0x20($a0)
/* 0042CB4C 932D000C */  lbu   $t5, 0xc($t9)
/* 0042CB50 55A0004E */  bnezl $t5, .L0042CC8C
/* 0042CB54 92820016 */   lbu   $v0, 0x16($s4)
/* 0042CB58 8E830018 */  lw    $v1, 0x18($s4)
/* 0042CB5C 24050003 */  li    $a1, 3
/* 0042CB60 00003025 */  move  $a2, $zero
/* 0042CB64 28610005 */  slti  $at, $v1, 5
/* 0042CB68 1020003C */  beqz  $at, .L0042CC5C
/* 0042CB6C 00003825 */   move  $a3, $zero
/* 0042CB70 8E82001C */  lw    $v0, 0x1c($s4)
/* 0042CB74 8C8A0018 */  lw    $t2, 0x18($a0)
/* 0042CB78 A3A0008A */  sb    $zero, 0x8a($sp)
/* 0042CB7C 00008025 */  move  $s0, $zero
/* 0042CB80 004A082A */  slt   $at, $v0, $t2
/* 0042CB84 10200006 */  beqz  $at, .L0042CBA0
/* 0042CB88 24050003 */   li    $a1, 3
/* 0042CB8C 8F8C8D44 */  lw     $t4, %got(firstparmreg)($gp)
/* 0042CB90 8D8C0004 */  lw    $t4, 4($t4)
/* 0042CB94 01838821 */  addu  $s1, $t4, $v1
/* 0042CB98 10000005 */  b     .L0042CBB0
/* 0042CB9C 2631FFFF */   addiu $s1, $s1, -1
.L0042CBA0:
/* 0042CBA0 8F988D44 */  lw     $t8, %got(firstparmreg)($gp)
/* 0042CBA4 8F180000 */  lw    $t8, ($t8)
/* 0042CBA8 03038821 */  addu  $s1, $t8, $v1
/* 0042CBAC 2631FFFF */  addiu $s1, $s1, -1
.L0042CBB0:
/* 0042CBB0 8FAB009C */  lw    $t3, 0x9c($sp)
/* 0042CBB4 00117880 */  sll   $t7, $s1, 2
/* 0042CBB8 AFB10090 */  sw    $s1, 0x90($sp)
/* 0042CBBC 016F7021 */  addu  $t6, $t3, $t7
/* 0042CBC0 8DD90040 */  lw    $t9, 0x40($t6)
/* 0042CBC4 00003025 */  move  $a2, $zero
/* 0042CBC8 17200022 */  bnez  $t9, .L0042CC54
/* 0042CBCC 00000000 */   nop   
/* 0042CBD0 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 0042CBD4 8E840004 */  lw    $a0, 4($s4)
/* 0042CBD8 00003825 */  move  $a3, $zero
/* 0042CBDC 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 0042CBE0 0320F809 */  jalr  $t9
/* 0042CBE4 02C01025 */   move  $v0, $s6
/* 0042CBE8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042CBEC 8FB10090 */  lw    $s1, 0x90($sp)
/* 0042CBF0 2404007B */  li    $a0, 123
/* 0042CBF4 8F8D8B28 */  lw     $t5, %got(mips3_64data)($gp)
/* 0042CBF8 91AD0000 */  lbu   $t5, ($t5)
/* 0042CBFC 15A0000D */  bnez  $t5, .L0042CC34
/* 0042CC00 00000000 */   nop   
/* 0042CC04 928A0014 */  lbu   $t2, 0x14($s4)
/* 0042CC08 3C010500 */  lui   $at, 0x500
/* 0042CC0C 240E0001 */  li    $t6, 1
/* 0042CC10 2D4C0020 */  sltiu $t4, $t2, 0x20
/* 0042CC14 000CC023 */  negu  $t8, $t4
/* 0042CC18 03015824 */  and   $t3, $t8, $at
/* 0042CC1C 014B7804 */  sllv  $t7, $t3, $t2
/* 0042CC20 05E10004 */  bgez  $t7, .L0042CC34
/* 0042CC24 00000000 */   nop   
/* 0042CC28 A3AE008A */  sb    $t6, 0x8a($sp)
/* 0042CC2C 10000009 */  b     .L0042CC54
/* 0042CC30 8E82001C */   lw    $v0, 0x1c($s4)
.L0042CC34:
/* 0042CC34 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 0042CC38 02202825 */  move  $a1, $s1
/* 0042CC3C 92860014 */  lbu   $a2, 0x14($s4)
/* 0042CC40 0320F809 */  jalr  $t9
/* 0042CC44 92870015 */   lbu   $a3, 0x15($s4)
/* 0042CC48 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042CC4C 8E82001C */  lw    $v0, 0x1c($s4)
/* 0042CC50 AFB10090 */  sw    $s1, 0x90($sp)
.L0042CC54:
/* 0042CC54 1000000A */  b     .L0042CC80
/* 0042CC58 92860014 */   lbu   $a2, 0x14($s4)
.L0042CC5C:
/* 0042CC5C 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 0042CC60 8E840004 */  lw    $a0, 4($s4)
/* 0042CC64 02C01025 */  move  $v0, $s6
/* 0042CC68 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 0042CC6C 0320F809 */  jalr  $t9
/* 0042CC70 24100001 */   li    $s0, 1
/* 0042CC74 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042CC78 92860014 */  lbu   $a2, 0x14($s4)
/* 0042CC7C 8E82001C */  lw    $v0, 0x1c($s4)
.L0042CC80:
/* 0042CC80 100000D0 */  b     .L0042CFC4
/* 0042CC84 92A30001 */   lbu   $v1, 1($s5)
/* 0042CC88 92820016 */  lbu   $v0, 0x16($s4)
.L0042CC8C:
/* 0042CC8C 24050003 */  li    $a1, 3
/* 0042CC90 00003025 */  move  $a2, $zero
/* 0042CC94 104000C1 */  beqz  $v0, .L0042CF9C
/* 0042CC98 00003825 */   move  $a3, $zero
/* 0042CC9C 8FB9009C */  lw    $t9, 0x9c($sp)
/* 0042CCA0 00026880 */  sll   $t5, $v0, 2
/* 0042CCA4 A3A0008A */  sb    $zero, 0x8a($sp)
/* 0042CCA8 AFA20090 */  sw    $v0, 0x90($sp)
/* 0042CCAC 032D6021 */  addu  $t4, $t9, $t5
/* 0042CCB0 8D980040 */  lw    $t8, 0x40($t4)
/* 0042CCB4 00008025 */  move  $s0, $zero
/* 0042CCB8 24050003 */  li    $a1, 3
/* 0042CCBC 170000B4 */  bnez  $t8, .L0042CF90
/* 0042CCC0 00003025 */   move  $a2, $zero
/* 0042CCC4 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 0042CCC8 8E840004 */  lw    $a0, 4($s4)
/* 0042CCCC 00003825 */  move  $a3, $zero
/* 0042CCD0 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 0042CCD4 0320F809 */  jalr  $t9
/* 0042CCD8 02C01025 */   move  $v0, $s6
/* 0042CCDC 92860014 */  lbu   $a2, 0x14($s4)
/* 0042CCE0 2401000C */  li    $at, 12
/* 0042CCE4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042CCE8 14C10054 */  bne   $a2, $at, .L0042CE3C
/* 0042CCEC 2CD80020 */   sltiu $t8, $a2, 0x20
/* 0042CCF0 928B0016 */  lbu   $t3, 0x16($s4)
/* 0042CCF4 240A0018 */  li    $t2, 24
/* 0042CCF8 240D000C */  li    $t5, 12
/* 0042CCFC 29610018 */  slti  $at, $t3, 0x18
/* 0042CD00 5020004F */  beql  $at, $zero, .L0042CE40
/* 0042CD04 00185823 */   negu  $t3, $t8
/* 0042CD08 92AF0001 */  lbu   $t7, 1($s5)
/* 0042CD0C A2AA0000 */  sb    $t2, ($s5)
/* 0042CD10 A2AD0008 */  sb    $t5, 8($s5)
/* 0042CD14 31EEFFE0 */  andi  $t6, $t7, 0xffe0
/* 0042CD18 35D90006 */  ori   $t9, $t6, 6
/* 0042CD1C A2B90001 */  sb    $t9, 1($s5)
/* 0042CD20 A6A00002 */  sh    $zero, 2($s5)
/* 0042CD24 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042CD28 02A02025 */  move  $a0, $s5
/* 0042CD2C 0320F809 */  jalr  $t9
/* 0042CD30 00000000 */   nop   
/* 0042CD34 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042CD38 240C0006 */  li    $t4, 6
/* 0042CD3C A28C0014 */  sb    $t4, 0x14($s4)
/* 0042CD40 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0042CD44 8F848908 */  lw     $a0, %got(err)($gp)
/* 0042CD48 0320F809 */  jalr  $t9
/* 0042CD4C 8C840000 */   lw    $a0, ($a0)
/* 0042CD50 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042CD54 2406000F */  li    $a2, 15
/* 0042CD58 2407000F */  li    $a3, 15
/* 0042CD5C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0042CD60 8F848908 */  lw     $a0, %got(err)($gp)
/* 0042CD64 8F858044 */  lw    $a1, %got(RO_1000B263)($gp)
/* 0042CD68 8C840000 */  lw    $a0, ($a0)
/* 0042CD6C 0320F809 */  jalr  $t9
/* 0042CD70 24A5B263 */   addiu $a1, %lo(RO_1000B263) # addiu $a1, $a1, -0x4d9d
/* 0042CD74 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042CD78 24060400 */  li    $a2, 1024
/* 0042CD7C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0042CD80 8F848908 */  lw     $a0, %got(err)($gp)
/* 0042CD84 8F878984 */  lw     $a3, %got(entnam0len)($gp)
/* 0042CD88 8F858DE4 */  lw     $a1, %got(entnam0)($gp)
/* 0042CD8C 8C840000 */  lw    $a0, ($a0)
/* 0042CD90 0320F809 */  jalr  $t9
/* 0042CD94 8CE70000 */   lw    $a3, ($a3)
/* 0042CD98 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042CD9C 24060006 */  li    $a2, 6
/* 0042CDA0 24070006 */  li    $a3, 6
/* 0042CDA4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0042CDA8 8F848908 */  lw     $a0, %got(err)($gp)
/* 0042CDAC 8F858044 */  lw    $a1, %got(RO_1000B25D)($gp)
/* 0042CDB0 8C840000 */  lw    $a0, ($a0)
/* 0042CDB4 0320F809 */  jalr  $t9
/* 0042CDB8 24A5B25D */   addiu $a1, %lo(RO_1000B25D) # addiu $a1, $a1, -0x4da3
/* 0042CDBC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042CDC0 00003025 */  move  $a2, $zero
/* 0042CDC4 2407000A */  li    $a3, 10
/* 0042CDC8 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0042CDCC 8F848908 */  lw     $a0, %got(err)($gp)
/* 0042CDD0 8F858A44 */  lw     $a1, %got(curlocln)($gp)
/* 0042CDD4 8C840000 */  lw    $a0, ($a0)
/* 0042CDD8 0320F809 */  jalr  $t9
/* 0042CDDC 8CA50000 */   lw    $a1, ($a1)
/* 0042CDE0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042CDE4 2406002C */  li    $a2, 44
/* 0042CDE8 2407002C */  li    $a3, 44
/* 0042CDEC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0042CDF0 8F848908 */  lw     $a0, %got(err)($gp)
/* 0042CDF4 8F858044 */  lw    $a1, %got(RO_1000B231)($gp)
/* 0042CDF8 8C840000 */  lw    $a0, ($a0)
/* 0042CDFC 0320F809 */  jalr  $t9
/* 0042CE00 24A5B231 */   addiu $a1, %lo(RO_1000B231) # addiu $a1, $a1, -0x4dcf
/* 0042CE04 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042CE08 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0042CE0C 8F848908 */  lw     $a0, %got(err)($gp)
/* 0042CE10 0320F809 */  jalr  $t9
/* 0042CE14 8C840000 */   lw    $a0, ($a0)
/* 0042CE18 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042CE1C 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 0042CE20 8F848908 */  lw     $a0, %got(err)($gp)
/* 0042CE24 0320F809 */  jalr  $t9
/* 0042CE28 8C840000 */   lw    $a0, ($a0)
/* 0042CE2C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042CE30 92860014 */  lbu   $a2, 0x14($s4)
/* 0042CE34 10000050 */  b     .L0042CF78
/* 0042CE38 92850016 */   lbu   $a1, 0x16($s4)
.L0042CE3C:
/* 0042CE3C 00185823 */  negu  $t3, $t8
.L0042CE40:
/* 0042CE40 3C01000C */  lui   $at, 0xc
/* 0042CE44 01615024 */  and   $t2, $t3, $at
/* 0042CE48 00CA7804 */  sllv  $t7, $t2, $a2
/* 0042CE4C 05E00023 */  bltz  $t7, .L0042CEDC
/* 0042CE50 92850016 */   lbu   $a1, 0x16($s4)
/* 0042CE54 28A10018 */  slti  $at, $a1, 0x18
/* 0042CE58 14200020 */  bnez  $at, .L0042CEDC
/* 0042CE5C 240E0086 */   li    $t6, 134
/* 0042CE60 A2AE0000 */  sb    $t6, ($s5)
/* 0042CE64 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 0042CE68 00C02025 */  move  $a0, $a2
/* 0042CE6C 0320F809 */  jalr  $t9
/* 0042CE70 00000000 */   nop   
/* 0042CE74 24010004 */  li    $at, 4
/* 0042CE78 14410006 */  bne   $v0, $at, .L0042CE94
/* 0042CE7C 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0042CE80 92B90001 */  lbu   $t9, 1($s5)
/* 0042CE84 332DFFE0 */  andi  $t5, $t9, 0xffe0
/* 0042CE88 35AC000D */  ori   $t4, $t5, 0xd
/* 0042CE8C 10000005 */  b     .L0042CEA4
/* 0042CE90 A2AC0001 */   sb    $t4, 1($s5)
.L0042CE94:
/* 0042CE94 92B80001 */  lbu   $t8, 1($s5)
/* 0042CE98 330BFFE0 */  andi  $t3, $t8, 0xffe0
/* 0042CE9C 356A000C */  ori   $t2, $t3, 0xc
/* 0042CEA0 A2AA0001 */  sb    $t2, 1($s5)
.L0042CEA4:
/* 0042CEA4 928F0014 */  lbu   $t7, 0x14($s4)
/* 0042CEA8 A6A00002 */  sh    $zero, 2($s5)
/* 0042CEAC 02A02025 */  move  $a0, $s5
/* 0042CEB0 A2AF0008 */  sb    $t7, 8($s5)
/* 0042CEB4 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042CEB8 0320F809 */  jalr  $t9
/* 0042CEBC 00000000 */   nop   
/* 0042CEC0 92AE0001 */  lbu   $t6, 1($s5)
/* 0042CEC4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042CEC8 92850016 */  lbu   $a1, 0x16($s4)
/* 0042CECC 31D9001F */  andi  $t9, $t6, 0x1f
/* 0042CED0 A2990014 */  sb    $t9, 0x14($s4)
/* 0042CED4 10000028 */  b     .L0042CF78
/* 0042CED8 332600FF */   andi  $a2, $t9, 0xff
.L0042CEDC:
/* 0042CEDC 2CCD0020 */  sltiu $t5, $a2, 0x20
/* 0042CEE0 000D6023 */  negu  $t4, $t5
/* 0042CEE4 3C01000C */  lui   $at, 0xc
/* 0042CEE8 0181C024 */  and   $t8, $t4, $at
/* 0042CEEC 00D85804 */  sllv  $t3, $t8, $a2
/* 0042CEF0 05610021 */  bgez  $t3, .L0042CF78
/* 0042CEF4 28A10018 */   slti  $at, $a1, 0x18
/* 0042CEF8 1020001F */  beqz  $at, .L0042CF78
/* 0042CEFC 240A0086 */   li    $t2, 134
/* 0042CF00 A2AA0000 */  sb    $t2, ($s5)
/* 0042CF04 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 0042CF08 00C02025 */  move  $a0, $a2
/* 0042CF0C 0320F809 */  jalr  $t9
/* 0042CF10 00000000 */   nop   
/* 0042CF14 24010004 */  li    $at, 4
/* 0042CF18 14410006 */  bne   $v0, $at, .L0042CF34
/* 0042CF1C 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0042CF20 92AF0001 */  lbu   $t7, 1($s5)
/* 0042CF24 31EEFFE0 */  andi  $t6, $t7, 0xffe0
/* 0042CF28 35D90006 */  ori   $t9, $t6, 6
/* 0042CF2C 10000005 */  b     .L0042CF44
/* 0042CF30 A2B90001 */   sb    $t9, 1($s5)
.L0042CF34:
/* 0042CF34 92AD0001 */  lbu   $t5, 1($s5)
/* 0042CF38 31ACFFE0 */  andi  $t4, $t5, 0xffe0
/* 0042CF3C 35980005 */  ori   $t8, $t4, 5
/* 0042CF40 A2B80001 */  sb    $t8, 1($s5)
.L0042CF44:
/* 0042CF44 928B0014 */  lbu   $t3, 0x14($s4)
/* 0042CF48 A6A00002 */  sh    $zero, 2($s5)
/* 0042CF4C 02A02025 */  move  $a0, $s5
/* 0042CF50 A2AB0008 */  sb    $t3, 8($s5)
/* 0042CF54 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042CF58 0320F809 */  jalr  $t9
/* 0042CF5C 00000000 */   nop   
/* 0042CF60 92AA0001 */  lbu   $t2, 1($s5)
/* 0042CF64 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042CF68 92850016 */  lbu   $a1, 0x16($s4)
/* 0042CF6C 314F001F */  andi  $t7, $t2, 0x1f
/* 0042CF70 A28F0014 */  sb    $t7, 0x14($s4)
/* 0042CF74 31E600FF */  andi  $a2, $t7, 0xff
.L0042CF78:
/* 0042CF78 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 0042CF7C 2404007B */  li    $a0, 123
/* 0042CF80 92870015 */  lbu   $a3, 0x15($s4)
/* 0042CF84 0320F809 */  jalr  $t9
/* 0042CF88 00000000 */   nop   
/* 0042CF8C 8FBC0034 */  lw    $gp, 0x34($sp)
.L0042CF90:
/* 0042CF90 92860014 */  lbu   $a2, 0x14($s4)
/* 0042CF94 1000000A */  b     .L0042CFC0
/* 0042CF98 8E82001C */   lw    $v0, 0x1c($s4)
.L0042CF9C:
/* 0042CF9C 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 0042CFA0 8E840004 */  lw    $a0, 4($s4)
/* 0042CFA4 02C01025 */  move  $v0, $s6
/* 0042CFA8 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 0042CFAC 0320F809 */  jalr  $t9
/* 0042CFB0 24100001 */   li    $s0, 1
/* 0042CFB4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042CFB8 92860014 */  lbu   $a2, 0x14($s4)
/* 0042CFBC 8E82001C */  lw    $v0, 0x1c($s4)
.L0042CFC0:
/* 0042CFC0 92A30001 */  lbu   $v1, 1($s5)
.L0042CFC4:
/* 0042CFC4 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042CFC8 8FB10090 */  lw    $s1, 0x90($sp)
/* 0042CFCC 000376C0 */  sll   $t6, $v1, 0x1b
/* 0042CFD0 000ECEC2 */  srl   $t9, $t6, 0x1b
/* 0042CFD4 00D96826 */  xor   $t5, $a2, $t9
/* 0042CFD8 31AC001F */  andi  $t4, $t5, 0x1f
/* 0042CFDC 0183C026 */  xor   $t8, $t4, $v1
/* 0042CFE0 A0380001 */  sb    $t8, 1($at)
/* 0042CFE4 92AB0001 */  lbu   $t3, 1($s5)
/* 0042CFE8 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042CFEC AEA00004 */  sw    $zero, 4($s5)
/* 0042CFF0 316AFF1F */  andi  $t2, $t3, 0xff1f
/* 0042CFF4 354F0040 */  ori   $t7, $t2, 0x40
/* 0042CFF8 A2AF0001 */  sb    $t7, 1($s5)
/* 0042CFFC AC22000C */  sw    $v0, 0xc($at)
/* 0042D000 928E0015 */  lbu   $t6, 0x15($s4)
/* 0042D004 2419007B */  li    $t9, 123
/* 0042D008 1200000B */  beqz  $s0, .L0042D038
/* 0042D00C AEAE0008 */   sw    $t6, 8($s5)
/* 0042D010 92A30001 */  lbu   $v1, 1($s5)
/* 0042D014 24010009 */  li    $at, 9
/* 0042D018 A2B90000 */  sb    $t9, ($s5)
/* 0042D01C 306D001F */  andi  $t5, $v1, 0x1f
/* 0042D020 15A10015 */  bne   $t5, $at, .L0042D078
/* 0042D024 A6A00002 */   sh    $zero, 2($s5)
/* 0042D028 306CFFE0 */  andi  $t4, $v1, 0xffe0
/* 0042D02C 35980008 */  ori   $t8, $t4, 8
/* 0042D030 10000011 */  b     .L0042D078
/* 0042D034 A2B80001 */   sb    $t8, 1($s5)
.L0042D038:
/* 0042D038 93AB008A */  lbu   $t3, 0x8a($sp)
/* 0042D03C 240A0064 */  li    $t2, 100
/* 0042D040 240F006F */  li    $t7, 111
/* 0042D044 51600005 */  beql  $t3, $zero, .L0042D05C
/* 0042D048 A2AF0000 */   sb    $t7, ($s5)
/* 0042D04C AFB10090 */  sw    $s1, 0x90($sp)
/* 0042D050 10000009 */  b     .L0042D078
/* 0042D054 A2AA0000 */   sb    $t2, ($s5)
/* 0042D058 A2AF0000 */  sb    $t7, ($s5)
.L0042D05C:
/* 0042D05C 8F998708 */  lw    $t9, %call16(coloroffset)($gp)
/* 0042D060 02202025 */  move  $a0, $s1
/* 0042D064 AFB10090 */  sw    $s1, 0x90($sp)
/* 0042D068 0320F809 */  jalr  $t9
/* 0042D06C 00000000 */   nop   
/* 0042D070 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042D074 A6A20002 */  sh    $v0, 2($s5)
.L0042D078:
/* 0042D078 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042D07C 02A02025 */  move  $a0, $s5
/* 0042D080 0320F809 */  jalr  $t9
/* 0042D084 00000000 */   nop   
/* 0042D088 1000053E */  b     .L0042E584
/* 0042D08C 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042D090:
/* 0042D090 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 0042D094 8E840004 */  lw    $a0, 4($s4)
/* 0042D098 24050004 */  li    $a1, 4
/* 0042D09C 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 0042D0A0 00003025 */  move  $a2, $zero
/* 0042D0A4 00003825 */  move  $a3, $zero
/* 0042D0A8 0320F809 */  jalr  $t9
/* 0042D0AC 02C01025 */   move  $v0, $s6
/* 0042D0B0 92B90001 */  lbu   $t9, 1($s5)
/* 0042D0B4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042D0B8 240E008E */  li    $t6, 142
/* 0042D0BC 332DFFE0 */  andi  $t5, $t9, 0xffe0
/* 0042D0C0 A2AE0000 */  sb    $t6, ($s5)
/* 0042D0C4 A2AD0001 */  sb    $t5, 1($s5)
/* 0042D0C8 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042D0CC 02A02025 */  move  $a0, $s5
/* 0042D0D0 0320F809 */  jalr  $t9
/* 0042D0D4 00000000 */   nop   
/* 0042D0D8 1000052A */  b     .L0042E584
/* 0042D0DC 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042D0E0:
/* 0042D0E0 8F99801C */  lw    $t9, %got(func_00424FFC)($gp)
/* 0042D0E4 8E840004 */  lw    $a0, 4($s4)
/* 0042D0E8 00002825 */  move  $a1, $zero
/* 0042D0EC 27394FFC */  addiu $t9, %lo(func_00424FFC) # addiu $t9, $t9, 0x4ffc
/* 0042D0F0 0320F809 */  jalr  $t9
/* 0042D0F4 02C01025 */   move  $v0, $s6
/* 0042D0F8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042D0FC 8E840004 */  lw    $a0, 4($s4)
/* 0042D100 24050003 */  li    $a1, 3
/* 0042D104 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 0042D108 00003025 */  move  $a2, $zero
/* 0042D10C 00003825 */  move  $a3, $zero
/* 0042D110 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 0042D114 0320F809 */  jalr  $t9
/* 0042D118 02C01025 */   move  $v0, $s6
/* 0042D11C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042D120 240A005A */  li    $t2, 90
/* 0042D124 240F0066 */  li    $t7, 102
/* 0042D128 8F8C8A34 */  lw     $t4, %got(curmst)($gp)
/* 0042D12C 8D8C0000 */  lw    $t4, ($t4)
/* 0042D130 8D980020 */  lw    $t8, 0x20($t4)
/* 0042D134 930B000C */  lbu   $t3, 0xc($t8)
/* 0042D138 51600004 */  beql  $t3, $zero, .L0042D14C
/* 0042D13C A2AF0000 */   sb    $t7, ($s5)
/* 0042D140 10000002 */  b     .L0042D14C
/* 0042D144 A2AA0000 */   sb    $t2, ($s5)
/* 0042D148 A2AF0000 */  sb    $t7, ($s5)
.L0042D14C:
/* 0042D14C 92AE0001 */  lbu   $t6, 1($s5)
/* 0042D150 968A0030 */  lhu   $t2, 0x30($s4)
/* 0042D154 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042D158 31D9FFE0 */  andi  $t9, $t6, 0xffe0
/* 0042D15C 372C0009 */  ori   $t4, $t9, 9
/* 0042D160 3198FF1F */  andi  $t8, $t4, 0xff1f
/* 0042D164 A2AC0001 */  sb    $t4, 1($s5)
/* 0042D168 370B0040 */  ori   $t3, $t8, 0x40
/* 0042D16C A2AB0001 */  sb    $t3, 1($s5)
/* 0042D170 AEA00004 */  sw    $zero, 4($s5)
/* 0042D174 AC2A000C */  sw    $t2, 0xc($at)
/* 0042D178 8E8F0020 */  lw    $t7, 0x20($s4)
/* 0042D17C 928E0032 */  lbu   $t6, 0x32($s4)
/* 0042D180 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042D184 AEAF0008 */  sw    $t7, 8($s5)
/* 0042D188 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042D18C 02A02025 */  move  $a0, $s5
/* 0042D190 A42E0002 */  sh    $t6, 2($at)
/* 0042D194 0320F809 */  jalr  $t9
/* 0042D198 00000000 */   nop   
/* 0042D19C 100004F9 */  b     .L0042E584
/* 0042D1A0 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042D1A4:
/* 0042D1A4 8F818A34 */  lw     $at, %got(curmst)($gp)
/* 0042D1A8 2419005C */  li    $t9, 92
/* 0042D1AC 02A02025 */  move  $a0, $s5
/* 0042D1B0 AC340000 */  sw    $s4, ($at)
/* 0042D1B4 A2B90000 */  sb    $t9, ($s5)
/* 0042D1B8 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042D1BC 8E8D0014 */  lw    $t5, 0x14($s4)
/* 0042D1C0 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042D1C4 0320F809 */  jalr  $t9
/* 0042D1C8 A42D0002 */   sh    $t5, 2($at)
/* 0042D1CC 100004ED */  b     .L0042E584
/* 0042D1D0 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042D1D4:
/* 0042D1D4 8F99801C */  lw    $t9, %got(func_00424FFC)($gp)
/* 0042D1D8 240C0001 */  li    $t4, 1
/* 0042D1DC A3AC0097 */  sb    $t4, 0x97($sp)
/* 0042D1E0 27394FFC */  addiu $t9, %lo(func_00424FFC) # addiu $t9, $t9, 0x4ffc
/* 0042D1E4 8E840004 */  lw    $a0, 4($s4)
/* 0042D1E8 00002825 */  move  $a1, $zero
/* 0042D1EC 0320F809 */  jalr  $t9
/* 0042D1F0 02C01025 */   move  $v0, $s6
/* 0042D1F4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042D1F8 02C01025 */  move  $v0, $s6
/* 0042D1FC 8F998020 */  lw    $t9, %got(func_0042AADC)($gp)
/* 0042D200 2739AADC */  addiu $t9, %lo(func_0042AADC) # addiu $t9, $t9, -0x5524
/* 0042D204 0320F809 */  jalr  $t9
/* 0042D208 00000000 */   nop   
/* 0042D20C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042D210 8E840004 */  lw    $a0, 4($s4)
/* 0042D214 00002825 */  move  $a1, $zero
/* 0042D218 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 0042D21C 00003025 */  move  $a2, $zero
/* 0042D220 00003825 */  move  $a3, $zero
/* 0042D224 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 0042D228 0320F809 */  jalr  $t9
/* 0042D22C 02C01025 */   move  $v0, $s6
/* 0042D230 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042D234 02C01025 */  move  $v0, $s6
/* 0042D238 8F998020 */  lw    $t9, %got(func_0042B09C)($gp)
/* 0042D23C 2739B09C */  addiu $t9, %lo(func_0042B09C) # addiu $t9, $t9, -0x4f64
/* 0042D240 0320F809 */  jalr  $t9
/* 0042D244 00000000 */   nop   
/* 0042D248 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042D24C 8FAB009C */  lw    $t3, 0x9c($sp)
/* 0042D250 8F988AB4 */  lw     $t8, %got(do_opt_saved_regs)($gp)
/* 0042D254 93180000 */  lbu   $t8, ($t8)
/* 0042D258 1300000A */  beqz  $t8, .L0042D284
/* 0042D25C 00000000 */   nop   
/* 0042D260 8D6A0120 */  lw    $t2, 0x120($t3)
/* 0042D264 11400007 */  beqz  $t2, .L0042D284
/* 0042D268 00000000 */   nop   
/* 0042D26C 8F998020 */  lw    $t9, %got(func_0042A1C8)($gp)
/* 0042D270 02C01025 */  move  $v0, $s6
/* 0042D274 2739A1C8 */  addiu $t9, %lo(func_0042A1C8) # addiu $t9, $t9, -0x5e38
/* 0042D278 0320F809 */  jalr  $t9
/* 0042D27C 00000000 */   nop   
/* 0042D280 8FBC0034 */  lw    $gp, 0x34($sp)
.L0042D284:
/* 0042D284 8F8F8A6C */  lw     $t7, %got(usefeedback)($gp)
/* 0042D288 A6A00002 */  sh    $zero, 2($s5)
/* 0042D28C 8FB9009C */  lw    $t9, 0x9c($sp)
/* 0042D290 91EF0000 */  lbu   $t7, ($t7)
/* 0042D294 51E00025 */  beql  $t7, $zero, .L0042D32C
/* 0042D298 8FAD009C */   lw    $t5, 0x9c($sp)
/* 0042D29C 8E8E0008 */  lw    $t6, 8($s4)
/* 0042D2A0 8F240018 */  lw    $a0, 0x18($t9)
/* 0042D2A4 8DC30010 */  lw    $v1, 0x10($t6)
/* 0042D2A8 8C850000 */  lw    $a1, ($a0)
/* 0042D2AC 946D0008 */  lhu   $t5, 8($v1)
/* 0042D2B0 94AC0008 */  lhu   $t4, 8($a1)
/* 0042D2B4 55AC0011 */  bnel  $t5, $t4, .L0042D2FC
/* 0042D2B8 8C62002C */   lw    $v0, 0x2c($v1)
/* 0042D2BC 8C980004 */  lw    $t8, 4($a0)
/* 0042D2C0 8C62002C */  lw    $v0, 0x2c($v1)
/* 0042D2C4 240A0001 */  li    $t2, 1
/* 0042D2C8 8F0B0000 */  lw    $t3, ($t8)
/* 0042D2CC 8D65002C */  lw    $a1, 0x2c($t3)
/* 0042D2D0 0045082B */  sltu  $at, $v0, $a1
/* 0042D2D4 50200004 */  beql  $at, $zero, .L0042D2E8
/* 0042D2D8 00A2082B */   sltu  $at, $a1, $v0
/* 0042D2DC 10000012 */  b     .L0042D328
/* 0042D2E0 A6AA0002 */   sh    $t2, 2($s5)
/* 0042D2E4 00A2082B */  sltu  $at, $a1, $v0
.L0042D2E8:
/* 0042D2E8 1020000F */  beqz  $at, .L0042D328
/* 0042D2EC 240F0002 */   li    $t7, 2
/* 0042D2F0 1000000D */  b     .L0042D328
/* 0042D2F4 A6AF0002 */   sh    $t7, 2($s5)
/* 0042D2F8 8C62002C */  lw    $v0, 0x2c($v1)
.L0042D2FC:
/* 0042D2FC 8CA4002C */  lw    $a0, 0x2c($a1)
/* 0042D300 240E0001 */  li    $t6, 1
/* 0042D304 0044082B */  sltu  $at, $v0, $a0
/* 0042D308 50200004 */  beql  $at, $zero, .L0042D31C
/* 0042D30C 0082082B */   sltu  $at, $a0, $v0
/* 0042D310 10000005 */  b     .L0042D328
/* 0042D314 A6AE0002 */   sh    $t6, 2($s5)
/* 0042D318 0082082B */  sltu  $at, $a0, $v0
.L0042D31C:
/* 0042D31C 10200002 */  beqz  $at, .L0042D328
/* 0042D320 24190002 */   li    $t9, 2
/* 0042D324 A6B90002 */  sh    $t9, 2($s5)
.L0042D328:
/* 0042D328 8FAD009C */  lw    $t5, 0x9c($sp)
.L0042D32C:
/* 0042D32C 8DAC00F0 */  lw    $t4, 0xf0($t5)
/* 0042D330 55800015 */  bnezl $t4, .L0042D388
/* 0042D334 928F0000 */   lbu   $t7, ($s4)
/* 0042D338 92980000 */  lbu   $t8, ($s4)
/* 0042D33C 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042D340 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042D344 02A02025 */  move  $a0, $s5
/* 0042D348 A0380000 */  sb    $t8, ($at)
/* 0042D34C 8E8B0014 */  lw    $t3, 0x14($s4)
/* 0042D350 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042D354 0320F809 */  jalr  $t9
/* 0042D358 AC2B0004 */   sw    $t3, 4($at)
/* 0042D35C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042D360 8FAA009C */  lw    $t2, 0x9c($sp)
/* 0042D364 02C01025 */  move  $v0, $s6
/* 0042D368 8F99801C */  lw    $t9, %got(func_00425594)($gp)
/* 0042D36C 8D4400EC */  lw    $a0, 0xec($t2)
/* 0042D370 27395594 */  addiu $t9, %lo(func_00425594) # addiu $t9, $t9, 0x5594
/* 0042D374 0320F809 */  jalr  $t9
/* 0042D378 00000000 */   nop   
/* 0042D37C 10000481 */  b     .L0042E584
/* 0042D380 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0042D384 928F0000 */  lbu   $t7, ($s4)
.L0042D388:
/* 0042D388 24010026 */  li    $at, 38
/* 0042D38C 240E007F */  li    $t6, 127
/* 0042D390 15E10003 */  bne   $t7, $at, .L0042D3A0
/* 0042D394 24190026 */   li    $t9, 38
/* 0042D398 10000002 */  b     .L0042D3A4
/* 0042D39C A2AE0000 */   sb    $t6, ($s5)
.L0042D3A0:
/* 0042D3A0 A2B90000 */  sb    $t9, ($s5)
.L0042D3A4:
/* 0042D3A4 8F8389D8 */  lw     $v1, %got(maxlabnam)($gp)
/* 0042D3A8 96A20002 */  lhu   $v0, 2($s5)
/* 0042D3AC 240B0003 */  li    $t3, 3
/* 0042D3B0 8C6D0000 */  lw    $t5, ($v1)
/* 0042D3B4 01625023 */  subu  $t2, $t3, $v0
/* 0042D3B8 25AC0001 */  addiu $t4, $t5, 1
/* 0042D3BC AEAC0004 */  sw    $t4, 4($s5)
/* 0042D3C0 10400002 */  beqz  $v0, .L0042D3CC
/* 0042D3C4 AC6C0000 */   sw    $t4, ($v1)
/* 0042D3C8 A6AA0002 */  sh    $t2, 2($s5)
.L0042D3CC:
/* 0042D3CC 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042D3D0 02A02025 */  move  $a0, $s5
/* 0042D3D4 0320F809 */  jalr  $t9
/* 0042D3D8 00000000 */   nop   
/* 0042D3DC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042D3E0 8FAF009C */  lw    $t7, 0x9c($sp)
/* 0042D3E4 02C01025 */  move  $v0, $s6
/* 0042D3E8 8F99801C */  lw    $t9, %got(func_00425594)($gp)
/* 0042D3EC 8DE400F0 */  lw    $a0, 0xf0($t7)
/* 0042D3F0 27395594 */  addiu $t9, %lo(func_00425594) # addiu $t9, $t9, 0x5594
/* 0042D3F4 0320F809 */  jalr  $t9
/* 0042D3F8 00000000 */   nop   
/* 0042D3FC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042D400 8E990014 */  lw    $t9, 0x14($s4)
/* 0042D404 240E0088 */  li    $t6, 136
/* 0042D408 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042D40C A2AE0000 */  sb    $t6, ($s5)
/* 0042D410 02A02025 */  move  $a0, $s5
/* 0042D414 AC390004 */  sw    $t9, 4($at)
/* 0042D418 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042D41C 0320F809 */  jalr  $t9
/* 0042D420 00000000 */   nop   
/* 0042D424 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042D428 240D0042 */  li    $t5, 66
/* 0042D42C A2AD0000 */  sb    $t5, ($s5)
/* 0042D430 8F8C89D8 */  lw     $t4, %got(maxlabnam)($gp)
/* 0042D434 02A02025 */  move  $a0, $s5
/* 0042D438 8D8C0000 */  lw    $t4, ($t4)
/* 0042D43C A6A00002 */  sh    $zero, 2($s5)
/* 0042D440 AEA00008 */  sw    $zero, 8($s5)
/* 0042D444 AEAC0004 */  sw    $t4, 4($s5)
/* 0042D448 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042D44C 0320F809 */  jalr  $t9
/* 0042D450 00000000 */   nop   
/* 0042D454 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042D458 8FB8009C */  lw    $t8, 0x9c($sp)
/* 0042D45C 02C01025 */  move  $v0, $s6
/* 0042D460 8F99801C */  lw    $t9, %got(func_00425594)($gp)
/* 0042D464 8F0400EC */  lw    $a0, 0xec($t8)
/* 0042D468 27395594 */  addiu $t9, %lo(func_00425594) # addiu $t9, $t9, 0x5594
/* 0042D46C 0320F809 */  jalr  $t9
/* 0042D470 00000000 */   nop   
/* 0042D474 10000443 */  b     .L0042E584
/* 0042D478 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042D47C:
/* 0042D47C 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042D480 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042D484 02A02025 */  move  $a0, $s5
/* 0042D488 A0250000 */  sb    $a1, ($at)
/* 0042D48C 8E8B0014 */  lw    $t3, 0x14($s4)
/* 0042D490 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042D494 0320F809 */  jalr  $t9
/* 0042D498 AC2B0004 */   sw    $t3, 4($at)
/* 0042D49C 10000439 */  b     .L0042E584
/* 0042D4A0 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042D4A4:
/* 0042D4A4 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042D4A8 02A02025 */  move  $a0, $s5
/* 0042D4AC A0250000 */  sb    $a1, ($at)
/* 0042D4B0 8E8A0014 */  lw    $t2, 0x14($s4)
/* 0042D4B4 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042D4B8 AC2A0004 */  sw    $t2, 4($at)
/* 0042D4BC 928F0024 */  lbu   $t7, 0x24($s4)
/* 0042D4C0 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042D4C4 A42F0002 */  sh    $t7, 2($at)
/* 0042D4C8 8E8E0018 */  lw    $t6, 0x18($s4)
/* 0042D4CC AEAE0008 */  sw    $t6, 8($s5)
/* 0042D4D0 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042D4D4 0320F809 */  jalr  $t9
/* 0042D4D8 00000000 */   nop   
/* 0042D4DC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042D4E0 02C01025 */  move  $v0, $s6
/* 0042D4E4 8F998020 */  lw    $t9, %got(func_0042B1A8)($gp)
                            lw $a0, -0xc($v0)
/* 0042D4E8 2739B1A8 */  addiu $t9, %lo(func_0042B1A8) # addiu $t9, $t9, -0x4e58
/* 0042D4EC 0320F809 */  jalr  $t9
/* 0042D4F0 00000000 */   nop   
/* 0042D4F4 10000423 */  b     .L0042E584
/* 0042D4F8 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042D4FC:
/* 0042D4FC 8E900004 */  lw    $s0, 4($s4)
/* 0042D500 24010002 */  li    $at, 2
/* 0042D504 00002825 */  move  $a1, $zero
/* 0042D508 92190000 */  lbu   $t9, ($s0)
/* 0042D50C 02002025 */  move  $a0, $s0
/* 0042D510 1721004B */  bne   $t9, $at, .L0042D640
/* 0042D514 00000000 */   nop   
/* 0042D518 92020001 */  lbu   $v0, 1($s0)
/* 0042D51C 24010005 */  li    $at, 5
/* 0042D520 10410047 */  beq   $v0, $at, .L0042D640
/* 0042D524 24010007 */   li    $at, 7
/* 0042D528 10410045 */  beq   $v0, $at, .L0042D640
/* 0042D52C 00000000 */   nop   
/* 0042D530 8F998020 */  lw    $t9, %got(func_0042AADC)($gp)
/* 0042D534 02C01025 */  move  $v0, $s6
/* 0042D538 2739AADC */  addiu $t9, %lo(func_0042AADC) # addiu $t9, $t9, -0x5524
/* 0042D53C 0320F809 */  jalr  $t9
/* 0042D540 00000000 */   nop   
/* 0042D544 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042D548 02C01025 */  move  $v0, $s6
/* 0042D54C 8F998020 */  lw    $t9, %got(func_0042B09C)($gp)
/* 0042D550 2739B09C */  addiu $t9, %lo(func_0042B09C) # addiu $t9, $t9, -0x4f64
/* 0042D554 0320F809 */  jalr  $t9
/* 0042D558 00000000 */   nop   
/* 0042D55C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042D560 8FAC009C */  lw    $t4, 0x9c($sp)
/* 0042D564 8F8D8AB4 */  lw     $t5, %got(do_opt_saved_regs)($gp)
/* 0042D568 91AD0000 */  lbu   $t5, ($t5)
/* 0042D56C 51A0000B */  beql  $t5, $zero, .L0042D59C
/* 0042D570 8E8A0004 */   lw    $t2, 4($s4)
/* 0042D574 8D980120 */  lw    $t8, 0x120($t4)
/* 0042D578 53000008 */  beql  $t8, $zero, .L0042D59C
/* 0042D57C 8E8A0004 */   lw    $t2, 4($s4)
/* 0042D580 8F998020 */  lw    $t9, %got(func_0042A1C8)($gp)
/* 0042D584 02C01025 */  move  $v0, $s6
/* 0042D588 2739A1C8 */  addiu $t9, %lo(func_0042A1C8) # addiu $t9, $t9, -0x5e38
/* 0042D58C 0320F809 */  jalr  $t9
/* 0042D590 00000000 */   nop   
/* 0042D594 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042D598 8E8A0004 */  lw    $t2, 4($s4)
.L0042D59C:
/* 0042D59C 240B0088 */  li    $t3, 136
/* 0042D5A0 A2AB0000 */  sb    $t3, ($s5)
/* 0042D5A4 8E830028 */  lw    $v1, 0x28($s4)
/* 0042D5A8 8D500020 */  lw    $s0, 0x20($t2)
/* 0042D5AC 0203082A */  slt   $at, $s0, $v1
/* 0042D5B0 54200006 */  bnezl $at, .L0042D5CC
/* 0042D5B4 8E8E001C */   lw    $t6, 0x1c($s4)
/* 0042D5B8 8E8F0030 */  lw    $t7, 0x30($s4)
/* 0042D5BC 01F0082A */  slt   $at, $t7, $s0
/* 0042D5C0 50200006 */  beql  $at, $zero, .L0042D5DC
/* 0042D5C4 02038023 */   subu  $s0, $s0, $v1
/* 0042D5C8 8E8E001C */  lw    $t6, 0x1c($s4)
.L0042D5CC:
/* 0042D5CC 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042D5D0 10000015 */  b     .L0042D628
/* 0042D5D4 AC2E0004 */   sw    $t6, 4($at)
/* 0042D5D8 02038023 */  subu  $s0, $s0, $v1
.L0042D5DC:
/* 0042D5DC 26100001 */  addiu $s0, $s0, 1
/* 0042D5E0 32040003 */  andi  $a0, $s0, 3
/* 0042D5E4 00042023 */  negu  $a0, $a0
/* 0042D5E8 10800007 */  beqz  $a0, .L0042D608
/* 0042D5EC 8E820020 */   lw    $v0, 0x20($s4)
/* 0042D5F0 00901821 */  addu  $v1, $a0, $s0
.L0042D5F4:
/* 0042D5F4 2610FFFF */  addiu $s0, $s0, -1
/* 0042D5F8 1470FFFE */  bne   $v1, $s0, .L0042D5F4
/* 0042D5FC 8C420008 */   lw    $v0, 8($v0)
/* 0042D600 52000008 */  beql  $s0, $zero, .L0042D624
/* 0042D604 8C590014 */   lw    $t9, 0x14($v0)
.L0042D608:
/* 0042D608 8C420008 */  lw    $v0, 8($v0)
/* 0042D60C 2610FFFC */  addiu $s0, $s0, -4
/* 0042D610 8C420008 */  lw    $v0, 8($v0)
/* 0042D614 8C420008 */  lw    $v0, 8($v0)
/* 0042D618 1600FFFB */  bnez  $s0, .L0042D608
/* 0042D61C 8C420008 */   lw    $v0, 8($v0)
/* 0042D620 8C590014 */  lw    $t9, 0x14($v0)
.L0042D624:
/* 0042D624 AEB90004 */  sw    $t9, 4($s5)
.L0042D628:
/* 0042D628 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042D62C 02A02025 */  move  $a0, $s5
/* 0042D630 0320F809 */  jalr  $t9
/* 0042D634 00000000 */   nop   
/* 0042D638 100003D2 */  b     .L0042E584
/* 0042D63C 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042D640:
/* 0042D640 8F99801C */  lw    $t9, %got(func_00424FFC)($gp)
/* 0042D644 240D0001 */  li    $t5, 1
/* 0042D648 A3AD0097 */  sb    $t5, 0x97($sp)
/* 0042D64C 27394FFC */  addiu $t9, %lo(func_00424FFC) # addiu $t9, $t9, 0x4ffc
/* 0042D650 0320F809 */  jalr  $t9
/* 0042D654 02C01025 */   move  $v0, $s6
/* 0042D658 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042D65C 02C01025 */  move  $v0, $s6
/* 0042D660 8F998020 */  lw    $t9, %got(func_0042AADC)($gp)
/* 0042D664 2739AADC */  addiu $t9, %lo(func_0042AADC) # addiu $t9, $t9, -0x5524
/* 0042D668 0320F809 */  jalr  $t9
/* 0042D66C 00000000 */   nop   
/* 0042D670 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042D674 8E840004 */  lw    $a0, 4($s4)
/* 0042D678 00002825 */  move  $a1, $zero
/* 0042D67C 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 0042D680 00003025 */  move  $a2, $zero
/* 0042D684 00003825 */  move  $a3, $zero
/* 0042D688 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 0042D68C 0320F809 */  jalr  $t9
/* 0042D690 02C01025 */   move  $v0, $s6
/* 0042D694 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042D698 02C01025 */  move  $v0, $s6
/* 0042D69C 8F998020 */  lw    $t9, %got(func_0042B09C)($gp)
/* 0042D6A0 2739B09C */  addiu $t9, %lo(func_0042B09C) # addiu $t9, $t9, -0x4f64
/* 0042D6A4 0320F809 */  jalr  $t9
/* 0042D6A8 00000000 */   nop   
/* 0042D6AC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042D6B0 8FB8009C */  lw    $t8, 0x9c($sp)
/* 0042D6B4 8F8C8AB4 */  lw     $t4, %got(do_opt_saved_regs)($gp)
/* 0042D6B8 918C0000 */  lbu   $t4, ($t4)
/* 0042D6BC 5180000B */  beql  $t4, $zero, .L0042D6EC
/* 0042D6C0 92A30001 */   lbu   $v1, 1($s5)
/* 0042D6C4 8F0B0120 */  lw    $t3, 0x120($t8)
/* 0042D6C8 51600008 */  beql  $t3, $zero, .L0042D6EC
/* 0042D6CC 92A30001 */   lbu   $v1, 1($s5)
/* 0042D6D0 8F998020 */  lw    $t9, %got(func_0042A1C8)($gp)
/* 0042D6D4 02C01025 */  move  $v0, $s6
/* 0042D6D8 2739A1C8 */  addiu $t9, %lo(func_0042A1C8) # addiu $t9, $t9, -0x5e38
/* 0042D6DC 0320F809 */  jalr  $t9
/* 0042D6E0 00000000 */   nop   
/* 0042D6E4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042D6E8 92A30001 */  lbu   $v1, 1($s5)
.L0042D6EC:
/* 0042D6EC 928F0014 */  lbu   $t7, 0x14($s4)
/* 0042D6F0 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042D6F4 000376C0 */  sll   $t6, $v1, 0x1b
/* 0042D6F8 000ECEC2 */  srl   $t9, $t6, 0x1b
/* 0042D6FC 01F96826 */  xor   $t5, $t7, $t9
/* 0042D700 240A008C */  li    $t2, 140
/* 0042D704 31AC001F */  andi  $t4, $t5, 0x1f
/* 0042D708 A2AA0000 */  sb    $t2, ($s5)
/* 0042D70C 0183C026 */  xor   $t8, $t4, $v1
/* 0042D710 A0380001 */  sb    $t8, 1($at)
/* 0042D714 8E8B0018 */  lw    $t3, 0x18($s4)
/* 0042D718 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042D71C 02A02025 */  move  $a0, $s5
/* 0042D720 AC2B0004 */  sw    $t3, 4($at)
/* 0042D724 8E8A001C */  lw    $t2, 0x1c($s4)
/* 0042D728 8E8E0028 */  lw    $t6, 0x28($s4)
/* 0042D72C 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042D730 AEAA0008 */  sw    $t2, 8($s5)
/* 0042D734 AC2E0014 */  sw    $t6, 0x14($at)
/* 0042D738 8E8F0024 */  lw    $t7, 0x24($s4)
/* 0042D73C 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042D740 AC2F0010 */  sw    $t7, 0x10($at)
/* 0042D744 8E990030 */  lw    $t9, 0x30($s4)
/* 0042D748 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042D74C AC39001C */  sw    $t9, 0x1c($at)
/* 0042D750 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042D754 8E8D002C */  lw    $t5, 0x2c($s4)
/* 0042D758 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042D75C 0320F809 */  jalr  $t9
/* 0042D760 AC2D0018 */   sw    $t5, 0x18($at)
/* 0042D764 10000387 */  b     .L0042E584
/* 0042D768 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0042D76C 8E900004 */  lw    $s0, 4($s4)
.L0042D770:
/* 0042D770 240C0001 */  li    $t4, 1
/* 0042D774 A3AC0097 */  sb    $t4, 0x97($sp)
/* 0042D778 16000007 */  bnez  $s0, .L0042D798
/* 0042D77C 00000000 */   nop   
/* 0042D780 8F99861C */  lw    $t9, %call16(dbgerror)($gp)
/* 0042D784 2404045C */  li    $a0, 1116
/* 0042D788 0320F809 */  jalr  $t9
/* 0042D78C 00000000 */   nop   
/* 0042D790 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042D794 8E900004 */  lw    $s0, 4($s4)
.L0042D798:
/* 0042D798 8F99801C */  lw    $t9, %got(func_00424FFC)($gp)
/* 0042D79C 02002025 */  move  $a0, $s0
/* 0042D7A0 00002825 */  move  $a1, $zero
/* 0042D7A4 27394FFC */  addiu $t9, %lo(func_00424FFC) # addiu $t9, $t9, 0x4ffc
/* 0042D7A8 0320F809 */  jalr  $t9
/* 0042D7AC 02C01025 */   move  $v0, $s6
/* 0042D7B0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042D7B4 02C01025 */  move  $v0, $s6
/* 0042D7B8 8F998020 */  lw    $t9, %got(func_0042AADC)($gp)
/* 0042D7BC 2739AADC */  addiu $t9, %lo(func_0042AADC) # addiu $t9, $t9, -0x5524
/* 0042D7C0 0320F809 */  jalr  $t9
/* 0042D7C4 00000000 */   nop   
/* 0042D7C8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042D7CC 8E840004 */  lw    $a0, 4($s4)
/* 0042D7D0 00002825 */  move  $a1, $zero
/* 0042D7D4 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 0042D7D8 00003025 */  move  $a2, $zero
/* 0042D7DC 00003825 */  move  $a3, $zero
/* 0042D7E0 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 0042D7E4 0320F809 */  jalr  $t9
/* 0042D7E8 02C01025 */   move  $v0, $s6
/* 0042D7EC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042D7F0 02C01025 */  move  $v0, $s6
/* 0042D7F4 8F998020 */  lw    $t9, %got(func_0042B09C)($gp)
/* 0042D7F8 2739B09C */  addiu $t9, %lo(func_0042B09C) # addiu $t9, $t9, -0x4f64
/* 0042D7FC 0320F809 */  jalr  $t9
/* 0042D800 00000000 */   nop   
/* 0042D804 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042D808 8FAB009C */  lw    $t3, 0x9c($sp)
/* 0042D80C 8F988AB4 */  lw     $t8, %got(do_opt_saved_regs)($gp)
/* 0042D810 93180000 */  lbu   $t8, ($t8)
/* 0042D814 1300000A */  beqz  $t8, .L0042D840
/* 0042D818 00000000 */   nop   
/* 0042D81C 8D6A0120 */  lw    $t2, 0x120($t3)
/* 0042D820 11400007 */  beqz  $t2, .L0042D840
/* 0042D824 00000000 */   nop   
/* 0042D828 8F998020 */  lw    $t9, %got(func_0042A1C8)($gp)
/* 0042D82C 02C01025 */  move  $v0, $s6
/* 0042D830 2739A1C8 */  addiu $t9, %lo(func_0042A1C8) # addiu $t9, $t9, -0x5e38
/* 0042D834 0320F809 */  jalr  $t9
/* 0042D838 00000000 */   nop   
/* 0042D83C 8FBC0034 */  lw    $gp, 0x34($sp)
.L0042D840:
/* 0042D840 8F998020 */  lw    $t9, %got(func_0042B144)($gp)
/* 0042D844 02C01025 */  move  $v0, $s6
/* 0042D848 2739B144 */  addiu $t9, %lo(func_0042B144) # addiu $t9, $t9, -0x4ebc
/* 0042D84C 0320F809 */  jalr  $t9
/* 0042D850 00000000 */   nop   
/* 0042D854 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042D858 240E0031 */  li    $t6, 49
/* 0042D85C A2AE0000 */  sb    $t6, ($s5)
/* 0042D860 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042D864 02A02025 */  move  $a0, $s5
/* 0042D868 0320F809 */  jalr  $t9
/* 0042D86C 00000000 */   nop   
/* 0042D870 10000344 */  b     .L0042E584
/* 0042D874 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042D878:
/* 0042D878 8F99801C */  lw    $t9, %got(func_00424FFC)($gp)
/* 0042D87C 8E840004 */  lw    $a0, 4($s4)
/* 0042D880 00002825 */  move  $a1, $zero
/* 0042D884 27394FFC */  addiu $t9, %lo(func_00424FFC) # addiu $t9, $t9, 0x4ffc
/* 0042D888 0320F809 */  jalr  $t9
/* 0042D88C 02C01025 */   move  $v0, $s6
/* 0042D890 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042D894 8E840004 */  lw    $a0, 4($s4)
/* 0042D898 00002825 */  move  $a1, $zero
/* 0042D89C 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 0042D8A0 00003025 */  move  $a2, $zero
/* 0042D8A4 00003825 */  move  $a3, $zero
/* 0042D8A8 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 0042D8AC 0320F809 */  jalr  $t9
/* 0042D8B0 02C01025 */   move  $v0, $s6
/* 0042D8B4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042D8B8 240F0005 */  li    $t7, 5
/* 0042D8BC A2AF0000 */  sb    $t7, ($s5)
/* 0042D8C0 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042D8C4 02A02025 */  move  $a0, $s5
/* 0042D8C8 0320F809 */  jalr  $t9
/* 0042D8CC 00000000 */   nop   
/* 0042D8D0 1000032C */  b     .L0042E584
/* 0042D8D4 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042D8D8:
/* 0042D8D8 9299001C */  lbu   $t9, 0x1c($s4)
/* 0042D8DC 53200021 */  beql  $t9, $zero, .L0042D964
/* 0042D8E0 8E930018 */   lw    $s3, 0x18($s4)
/* 0042D8E4 8E8C0014 */  lw    $t4, 0x14($s4)
/* 0042D8E8 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042D8EC 240D0011 */  li    $t5, 17
/* 0042D8F0 A2AD0000 */  sb    $t5, ($s5)
/* 0042D8F4 AC2C0004 */  sw    $t4, 4($at)
/* 0042D8F8 8E980018 */  lw    $t8, 0x18($s4)
/* 0042D8FC 02A02025 */  move  $a0, $s5
/* 0042D900 AEB80008 */  sw    $t8, 8($s5)
/* 0042D904 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042D908 0320F809 */  jalr  $t9
/* 0042D90C 00000000 */   nop   
/* 0042D910 8E930018 */  lw    $s3, 0x18($s4)
/* 0042D914 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042D918 5A60031B */  blezl $s3, .L0042E588
/* 0042D91C 8E940008 */   lw    $s4, 8($s4)
/* 0042D920 24100001 */  li    $s0, 1
/* 0042D924 26730001 */  addiu $s3, $s3, 1
.L0042D928:
/* 0042D928 8E940008 */  lw    $s4, 8($s4)
/* 0042D92C 02A02025 */  move  $a0, $s5
/* 0042D930 928B0000 */  lbu   $t3, ($s4)
/* 0042D934 8E8A0014 */  lw    $t2, 0x14($s4)
/* 0042D938 A2AB0000 */  sb    $t3, ($s5)
/* 0042D93C AEAA0004 */  sw    $t2, 4($s5)
/* 0042D940 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042D944 0320F809 */  jalr  $t9
/* 0042D948 00000000 */   nop   
/* 0042D94C 26100001 */  addiu $s0, $s0, 1
/* 0042D950 1613FFF5 */  bne   $s0, $s3, .L0042D928
/* 0042D954 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0042D958 1000030B */  b     .L0042E588
/* 0042D95C 8E940008 */   lw    $s4, 8($s4)
/* 0042D960 8E930018 */  lw    $s3, 0x18($s4)
.L0042D964:
/* 0042D964 5A600308 */  blezl $s3, .L0042E588
/* 0042D968 8E940008 */   lw    $s4, 8($s4)
/* 0042D96C 26730001 */  addiu $s3, $s3, 1
/* 0042D970 2663FFFF */  addiu $v1, $s3, -1
/* 0042D974 30630003 */  andi  $v1, $v1, 3
/* 0042D978 10600007 */  beqz  $v1, .L0042D998
/* 0042D97C 24100001 */   li    $s0, 1
/* 0042D980 24620001 */  addiu $v0, $v1, 1
.L0042D984:
/* 0042D984 26100001 */  addiu $s0, $s0, 1
/* 0042D988 1450FFFE */  bne   $v0, $s0, .L0042D984
/* 0042D98C 8E940008 */   lw    $s4, 8($s4)
/* 0042D990 521302FD */  beql  $s0, $s3, .L0042E588
/* 0042D994 8E940008 */   lw    $s4, 8($s4)
.L0042D998:
/* 0042D998 8E940008 */  lw    $s4, 8($s4)
/* 0042D99C 26100004 */  addiu $s0, $s0, 4
/* 0042D9A0 8E940008 */  lw    $s4, 8($s4)
/* 0042D9A4 8E940008 */  lw    $s4, 8($s4)
/* 0042D9A8 1613FFFB */  bne   $s0, $s3, .L0042D998
/* 0042D9AC 8E940008 */   lw    $s4, 8($s4)
/* 0042D9B0 100002F5 */  b     .L0042E588
/* 0042D9B4 8E940008 */   lw    $s4, 8($s4)
.L0042D9B8:
/* 0042D9B8 92A30001 */  lbu   $v1, 1($s5)
/* 0042D9BC 92860014 */  lbu   $a2, 0x14($s4)
/* 0042D9C0 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042D9C4 00037E00 */  sll   $t7, $v1, 0x18
/* 0042D9C8 000FCF42 */  srl   $t9, $t7, 0x1d
/* 0042D9CC 00D96826 */  xor   $t5, $a2, $t9
/* 0042D9D0 000D6740 */  sll   $t4, $t5, 0x1d
/* 0042D9D4 240E001B */  li    $t6, 27
/* 0042D9D8 000CC602 */  srl   $t8, $t4, 0x18
/* 0042D9DC A2AE0000 */  sb    $t6, ($s5)
/* 0042D9E0 03035826 */  xor   $t3, $t8, $v1
/* 0042D9E4 A02B0001 */  sb    $t3, 1($at)
/* 0042D9E8 24010001 */  li    $at, 1
/* 0042D9EC 54C10008 */  bnel  $a2, $at, .L0042DA10
/* 0042D9F0 8E8F0018 */   lw    $t7, 0x18($s4)
/* 0042D9F4 8F8A89FC */  lw     $t2, %got(highestmdef)($gp)
/* 0042D9F8 240E0001 */  li    $t6, 1
/* 0042D9FC A3AE0095 */  sb    $t6, 0x95($sp)
/* 0042DA00 8D4A0000 */  lw    $t2, ($t2)
/* 0042DA04 10000003 */  b     .L0042DA14
/* 0042DA08 AEAA0008 */   sw    $t2, 8($s5)
/* 0042DA0C 8E8F0018 */  lw    $t7, 0x18($s4)
.L0042DA10:
/* 0042DA10 AEAF0008 */  sw    $t7, 8($s5)
.L0042DA14:
/* 0042DA14 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042DA18 02A02025 */  move  $a0, $s5
/* 0042DA1C 0320F809 */  jalr  $t9
/* 0042DA20 00000000 */   nop   
/* 0042DA24 100002D7 */  b     .L0042E584
/* 0042DA28 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042DA2C:
/* 0042DA2C 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042DA30 02A02025 */  move  $a0, $s5
/* 0042DA34 A0250000 */  sb    $a1, ($at)
/* 0042DA38 8E990014 */  lw    $t9, 0x14($s4)
/* 0042DA3C 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042DA40 AC390004 */  sw    $t9, 4($at)
/* 0042DA44 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042DA48 0320F809 */  jalr  $t9
/* 0042DA4C 00000000 */   nop   
/* 0042DA50 100002CC */  b     .L0042E584
/* 0042DA54 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042DA58:
/* 0042DA58 8F8D8A5C */  lw     $t5, %got(lang)($gp)
/* 0042DA5C 24010003 */  li    $at, 3
/* 0042DA60 91AD0000 */  lbu   $t5, ($t5)
/* 0042DA64 55A10007 */  bnel  $t5, $at, .L0042DA84
/* 0042DA68 240C006A */   li    $t4, 106
/* 0042DA6C 8F9982AC */  lw    $t9, %call16(epilog)($gp)
/* 0042DA70 8FA4009C */  lw    $a0, 0x9c($sp)
/* 0042DA74 0320F809 */  jalr  $t9
/* 0042DA78 00000000 */   nop   
/* 0042DA7C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042DA80 240C006A */  li    $t4, 106
.L0042DA84:
/* 0042DA84 A2AC0000 */  sb    $t4, ($s5)
/* 0042DA88 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042DA8C 02A02025 */  move  $a0, $s5
/* 0042DA90 0320F809 */  jalr  $t9
/* 0042DA94 00000000 */   nop   
/* 0042DA98 100002BA */  b     .L0042E584
/* 0042DA9C 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042DAA0:
/* 0042DAA0 8E8B0014 */  lw    $t3, 0x14($s4)
/* 0042DAA4 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042DAA8 24180051 */  li    $t8, 81
/* 0042DAAC A2B80000 */  sb    $t8, ($s5)
/* 0042DAB0 A42B0002 */  sh    $t3, 2($at)
/* 0042DAB4 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042DAB8 8E8A0018 */  lw    $t2, 0x18($s4)
/* 0042DABC 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042DAC0 02A02025 */  move  $a0, $s5
/* 0042DAC4 0320F809 */  jalr  $t9
/* 0042DAC8 AC2A0004 */   sw    $t2, 4($at)
/* 0042DACC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042DAD0 8E8E0014 */  lw    $t6, 0x14($s4)
/* 0042DAD4 8F818A40 */  lw     $at, %got(curlocpg)($gp)
/* 0042DAD8 AC2E0000 */  sw    $t6, ($at)
/* 0042DADC 8E8F0018 */  lw    $t7, 0x18($s4)
/* 0042DAE0 8F818A44 */  lw     $at, %got(curlocln)($gp)
/* 0042DAE4 100002A7 */  b     .L0042E584
/* 0042DAE8 AC2F0000 */   sw    $t7, ($at)
.L0042DAEC:
/* 0042DAEC 8E900004 */  lw    $s0, 4($s4)
/* 0042DAF0 24010002 */  li    $at, 2
/* 0042DAF4 92190000 */  lbu   $t9, ($s0)
/* 0042DAF8 17210009 */  bne   $t9, $at, .L0042DB20
/* 0042DAFC 00000000 */   nop   
/* 0042DB00 8E0D0020 */  lw    $t5, 0x20($s0)
/* 0042DB04 15A00006 */  bnez  $t5, .L0042DB20
/* 0042DB08 00000000 */   nop   
/* 0042DB0C 8F998614 */  lw    $t9, %call16(boundswarning)($gp)
/* 0042DB10 0320F809 */  jalr  $t9
/* 0042DB14 00000000 */   nop   
/* 0042DB18 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042DB1C 8E900004 */  lw    $s0, 4($s4)
.L0042DB20:
/* 0042DB20 8F99801C */  lw    $t9, %got(func_00424FFC)($gp)
/* 0042DB24 02002025 */  move  $a0, $s0
/* 0042DB28 00002825 */  move  $a1, $zero
/* 0042DB2C 27394FFC */  addiu $t9, %lo(func_00424FFC) # addiu $t9, $t9, 0x4ffc
/* 0042DB30 0320F809 */  jalr  $t9
/* 0042DB34 02C01025 */   move  $v0, $s6
/* 0042DB38 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042DB3C 8E840004 */  lw    $a0, 4($s4)
/* 0042DB40 00002825 */  move  $a1, $zero
/* 0042DB44 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 0042DB48 00003025 */  move  $a2, $zero
/* 0042DB4C 00003825 */  move  $a3, $zero
/* 0042DB50 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 0042DB54 0320F809 */  jalr  $t9
/* 0042DB58 02C01025 */   move  $v0, $s6
/* 0042DB5C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042DB60 240C000F */  li    $t4, 15
/* 0042DB64 A2AC0000 */  sb    $t4, ($s5)
/* 0042DB68 A6A00002 */  sh    $zero, 2($s5)
/* 0042DB6C 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042DB70 02A02025 */  move  $a0, $s5
/* 0042DB74 0320F809 */  jalr  $t9
/* 0042DB78 00000000 */   nop   
/* 0042DB7C 10000281 */  b     .L0042E584
/* 0042DB80 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042DB84:
/* 0042DB84 92980015 */  lbu   $t8, 0x15($s4)
/* 0042DB88 13000028 */  beqz  $t8, .L0042DC2C
/* 0042DB8C 00000000 */   nop   
/* 0042DB90 928B0016 */  lbu   $t3, 0x16($s4)
/* 0042DB94 24050003 */  li    $a1, 3
/* 0042DB98 00003025 */  move  $a2, $zero
/* 0042DB9C 11600023 */  beqz  $t3, .L0042DC2C
/* 0042DBA0 00000000 */   nop   
/* 0042DBA4 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 0042DBA8 8E840004 */  lw    $a0, 4($s4)
/* 0042DBAC 00003825 */  move  $a3, $zero
/* 0042DBB0 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 0042DBB4 0320F809 */  jalr  $t9
/* 0042DBB8 02C01025 */   move  $v0, $s6
/* 0042DBBC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042DBC0 27A40084 */  addiu $a0, $sp, 0x84
/* 0042DBC4 24050004 */  li    $a1, 4
/* 0042DBC8 8F998604 */  lw    $t9, %call16(gettemp)($gp)
/* 0042DBCC 0320F809 */  jalr  $t9
/* 0042DBD0 00000000 */   nop   
/* 0042DBD4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042DBD8 2404007B */  li    $a0, 123
/* 0042DBDC 24050002 */  li    $a1, 2
/* 0042DBE0 8F998290 */  lw    $t9, %call16(spilltemplodstr)($gp)
/* 0042DBE4 8FA60084 */  lw    $a2, 0x84($sp)
/* 0042DBE8 0320F809 */  jalr  $t9
/* 0042DBEC 00000000 */   nop   
/* 0042DBF0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042DBF4 02C01025 */  move  $v0, $s6
/* 0042DBF8 8F998020 */  lw    $t9, %got(func_0042AADC)($gp)
/* 0042DBFC 2739AADC */  addiu $t9, %lo(func_0042AADC) # addiu $t9, $t9, -0x5524
/* 0042DC00 0320F809 */  jalr  $t9
/* 0042DC04 00000000 */   nop   
/* 0042DC08 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042DC0C 24040052 */  li    $a0, 82
/* 0042DC10 24050002 */  li    $a1, 2
/* 0042DC14 8F998290 */  lw    $t9, %call16(spilltemplodstr)($gp)
/* 0042DC18 8FA60084 */  lw    $a2, 0x84($sp)
/* 0042DC1C 0320F809 */  jalr  $t9
/* 0042DC20 00000000 */   nop   
/* 0042DC24 10000257 */  b     .L0042E584
/* 0042DC28 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042DC2C:
/* 0042DC2C 8F99801C */  lw    $t9, %got(func_00424FFC)($gp)
/* 0042DC30 8E840004 */  lw    $a0, 4($s4)
/* 0042DC34 00002825 */  move  $a1, $zero
/* 0042DC38 27394FFC */  addiu $t9, %lo(func_00424FFC) # addiu $t9, $t9, 0x4ffc
/* 0042DC3C 0320F809 */  jalr  $t9
/* 0042DC40 02C01025 */   move  $v0, $s6
/* 0042DC44 928A0015 */  lbu   $t2, 0x15($s4)
/* 0042DC48 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042DC4C 11400007 */  beqz  $t2, .L0042DC6C
/* 0042DC50 00000000 */   nop   
/* 0042DC54 8F998020 */  lw    $t9, %got(func_0042AADC)($gp)
/* 0042DC58 02C01025 */  move  $v0, $s6
/* 0042DC5C 2739AADC */  addiu $t9, %lo(func_0042AADC) # addiu $t9, $t9, -0x5524
/* 0042DC60 0320F809 */  jalr  $t9
/* 0042DC64 00000000 */   nop   
/* 0042DC68 8FBC0034 */  lw    $gp, 0x34($sp)
.L0042DC6C:
/* 0042DC6C 8F99801C */  lw    $t9, %got(func_004230F0)($gp)
/* 0042DC70 8E840004 */  lw    $a0, 4($s4)
/* 0042DC74 24050003 */  li    $a1, 3
/* 0042DC78 273930F0 */  addiu $t9, %lo(func_004230F0) # addiu $t9, $t9, 0x30f0
/* 0042DC7C 00003025 */  move  $a2, $zero
/* 0042DC80 00003825 */  move  $a3, $zero
/* 0042DC84 0320F809 */  jalr  $t9
/* 0042DC88 02C01025 */   move  $v0, $s6
/* 0042DC8C 928E0015 */  lbu   $t6, 0x15($s4)
/* 0042DC90 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042DC94 240F0067 */  li    $t7, 103
/* 0042DC98 15C0000F */  bnez  $t6, .L0042DCD8
/* 0042DC9C 02A02025 */   move  $a0, $s5
/* 0042DCA0 92A30001 */  lbu   $v1, 1($s5)
/* 0042DCA4 92990014 */  lbu   $t9, 0x14($s4)
/* 0042DCA8 A2AF0000 */  sb    $t7, ($s5)
/* 0042DCAC 00036EC0 */  sll   $t5, $v1, 0x1b
/* 0042DCB0 000D66C2 */  srl   $t4, $t5, 0x1b
/* 0042DCB4 032CC026 */  xor   $t8, $t9, $t4
/* 0042DCB8 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042DCBC 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042DCC0 330B001F */  andi  $t3, $t8, 0x1f
/* 0042DCC4 01635026 */  xor   $t2, $t3, $v1
/* 0042DCC8 0320F809 */  jalr  $t9
/* 0042DCCC A02A0001 */   sb    $t2, 1($at)
/* 0042DCD0 1000022C */  b     .L0042E584
/* 0042DCD4 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042DCD8:
/* 0042DCD8 92AE0000 */  lbu   $t6, ($s5)
/* 0042DCDC 24010052 */  li    $at, 82
/* 0042DCE0 55C10229 */  bnel  $t6, $at, .L0042E588
/* 0042DCE4 8E940008 */   lw    $s4, 8($s4)
/* 0042DCE8 92AF0001 */  lbu   $t7, 1($s5)
/* 0042DCEC 24010003 */  li    $at, 3
/* 0042DCF0 000F6E00 */  sll   $t5, $t7, 0x18
/* 0042DCF4 000DCF42 */  srl   $t9, $t5, 0x1d
/* 0042DCF8 57210223 */  bnel  $t9, $at, .L0042E588
/* 0042DCFC 8E940008 */   lw    $s4, 8($s4)
/* 0042DD00 8EAC000C */  lw    $t4, 0xc($s5)
/* 0042DD04 2401001F */  li    $at, 31
/* 0042DD08 2418007B */  li    $t8, 123
/* 0042DD0C 1581021D */  bne   $t4, $at, .L0042E584
/* 0042DD10 240B000F */   li    $t3, 15
/* 0042DD14 A2B80000 */  sb    $t8, ($s5)
/* 0042DD18 AEAB000C */  sw    $t3, 0xc($s5)
/* 0042DD1C 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042DD20 02A02025 */  move  $a0, $s5
/* 0042DD24 0320F809 */  jalr  $t9
/* 0042DD28 00000000 */   nop   
/* 0042DD2C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042DD30 240A0052 */  li    $t2, 82
/* 0042DD34 A2AA0000 */  sb    $t2, ($s5)
/* 0042DD38 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042DD3C 02A02025 */  move  $a0, $s5
/* 0042DD40 0320F809 */  jalr  $t9
/* 0042DD44 00000000 */   nop   
/* 0042DD48 1000020E */  b     .L0042E584
/* 0042DD4C 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042DD50:
/* 0042DD50 8F828C00 */  lw     $v0, %got(numcalls)($gp)
/* 0042DD54 240D0001 */  li    $t5, 1
/* 0042DD58 24010017 */  li    $at, 23
/* 0042DD5C 8C4E0000 */  lw    $t6, ($v0)
/* 0042DD60 A3AD0097 */  sb    $t5, 0x97($sp)
/* 0042DD64 25CF0001 */  addiu $t7, $t6, 1
/* 0042DD68 14A10007 */  bne   $a1, $at, .L0042DD88
/* 0042DD6C AC4F0000 */   sw    $t7, ($v0)
/* 0042DD70 8F998020 */  lw    $t9, %got(func_0042AADC)($gp)
/* 0042DD74 02C01025 */  move  $v0, $s6
/* 0042DD78 2739AADC */  addiu $t9, %lo(func_0042AADC) # addiu $t9, $t9, -0x5524
/* 0042DD7C 0320F809 */  jalr  $t9
/* 0042DD80 00000000 */   nop   
/* 0042DD84 8FBC0034 */  lw    $gp, 0x34($sp)
.L0042DD88:
/* 0042DD88 8F998020 */  lw    $t9, %got(func_0042B09C)($gp)
/* 0042DD8C 02C01025 */  move  $v0, $s6
/* 0042DD90 2739B09C */  addiu $t9, %lo(func_0042B09C) # addiu $t9, $t9, -0x4f64
/* 0042DD94 0320F809 */  jalr  $t9
/* 0042DD98 00000000 */   nop   
/* 0042DD9C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042DDA0 92850000 */  lbu   $a1, ($s4)
/* 0042DDA4 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042DDA8 A0250000 */  sb    $a1, ($at)
/* 0042DDAC 92A30001 */  lbu   $v1, 1($s5)
/* 0042DDB0 92990018 */  lbu   $t9, 0x18($s4)
/* 0042DDB4 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042DDB8 000366C0 */  sll   $t4, $v1, 0x1b
/* 0042DDBC 000CC6C2 */  srl   $t8, $t4, 0x1b
/* 0042DDC0 03385826 */  xor   $t3, $t9, $t8
/* 0042DDC4 316A001F */  andi  $t2, $t3, 0x1f
/* 0042DDC8 01437026 */  xor   $t6, $t2, $v1
/* 0042DDCC A02E0001 */  sb    $t6, 1($at)
/* 0042DDD0 24010017 */  li    $at, 23
/* 0042DDD4 54A1000A */  bnel  $a1, $at, .L0042DE00
/* 0042DDD8 24010097 */   li    $at, 151
/* 0042DDDC 8E8F0014 */  lw    $t7, 0x14($s4)
/* 0042DDE0 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042DDE4 8DED0000 */  lw    $t5, ($t7)
/* 0042DDE8 AC2D0004 */  sw    $t5, 4($at)
/* 0042DDEC 928C0019 */  lbu   $t4, 0x19($s4)
/* 0042DDF0 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042DDF4 10000007 */  b     .L0042DE14
/* 0042DDF8 A42C0002 */   sh    $t4, 2($at)
/* 0042DDFC 24010097 */  li    $at, 151
.L0042DE00:
/* 0042DE00 54A10005 */  bnel  $a1, $at, .L0042DE18
/* 0042DE04 9298001C */   lbu   $t8, 0x1c($s4)
/* 0042DE08 8E990020 */  lw    $t9, 0x20($s4)
/* 0042DE0C 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042DE10 AC390004 */  sw    $t9, 4($at)
.L0042DE14:
/* 0042DE14 9298001C */  lbu   $t8, 0x1c($s4)
.L0042DE18:
/* 0042DE18 928B001D */  lbu   $t3, 0x1d($s4)
/* 0042DE1C 968A001A */  lhu   $t2, 0x1a($s4)
/* 0042DE20 A2B80008 */  sb    $t8, 8($s5)
/* 0042DE24 A2AB0009 */  sb    $t3, 9($s5)
/* 0042DE28 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042DE2C 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042DE30 02A02025 */  move  $a0, $s5
/* 0042DE34 0320F809 */  jalr  $t9
/* 0042DE38 AC2A000C */   sw    $t2, 0xc($at)
/* 0042DE3C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042DE40 8FAF009C */  lw    $t7, 0x9c($sp)
/* 0042DE44 8F8E8AB4 */  lw     $t6, %got(do_opt_saved_regs)($gp)
/* 0042DE48 91CE0000 */  lbu   $t6, ($t6)
/* 0042DE4C 11C0000A */  beqz  $t6, .L0042DE78
/* 0042DE50 00000000 */   nop   
/* 0042DE54 8DED0120 */  lw    $t5, 0x120($t7)
/* 0042DE58 11A00007 */  beqz  $t5, .L0042DE78
/* 0042DE5C 00000000 */   nop   
/* 0042DE60 8F998020 */  lw    $t9, %got(func_0042A1C8)($gp)
/* 0042DE64 02C01025 */  move  $v0, $s6
/* 0042DE68 2739A1C8 */  addiu $t9, %lo(func_0042A1C8) # addiu $t9, $t9, -0x5e38
/* 0042DE6C 0320F809 */  jalr  $t9
/* 0042DE70 00000000 */   nop   
/* 0042DE74 8FBC0034 */  lw    $gp, 0x34($sp)
.L0042DE78:
/* 0042DE78 8F998020 */  lw    $t9, %got(func_0042B144)($gp)
/* 0042DE7C 02C01025 */  move  $v0, $s6
/* 0042DE80 2739B144 */  addiu $t9, %lo(func_0042B144) # addiu $t9, $t9, -0x4ebc
/* 0042DE84 0320F809 */  jalr  $t9
/* 0042DE88 00000000 */   nop   
/* 0042DE8C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042DE90 8FB8009C */  lw    $t8, 0x9c($sp)
/* 0042DE94 8F8C8A34 */  lw     $t4, %got(curmst)($gp)
/* 0042DE98 8D8C0000 */  lw    $t4, ($t4)
/* 0042DE9C 8D99001C */  lw    $t9, 0x1c($t4)
/* 0042DEA0 072201B9 */  bltzl $t9, .L0042E588
/* 0042DEA4 8E940008 */   lw    $s4, 8($s4)
/* 0042DEA8 8F9982B0 */  lw    $t9, %call16(gen_outparcode)($gp)
/* 0042DEAC 8F0B0018 */  lw    $t3, 0x18($t8)
/* 0042DEB0 0320F809 */  jalr  $t9
/* 0042DEB4 8D640000 */   lw    $a0, ($t3)
/* 0042DEB8 100001B2 */  b     .L0042E584
/* 0042DEBC 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042DEC0:
/* 0042DEC0 8F998020 */  lw    $t9, %got(func_0042AADC)($gp)
/* 0042DEC4 240A0001 */  li    $t2, 1
/* 0042DEC8 A3AA0097 */  sb    $t2, 0x97($sp)
/* 0042DECC 2739AADC */  addiu $t9, %lo(func_0042AADC) # addiu $t9, $t9, -0x5524
/* 0042DED0 0320F809 */  jalr  $t9
/* 0042DED4 02C01025 */   move  $v0, $s6
/* 0042DED8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042DEDC 02C01025 */  move  $v0, $s6
/* 0042DEE0 8F998020 */  lw    $t9, %got(func_0042B09C)($gp)
/* 0042DEE4 2739B09C */  addiu $t9, %lo(func_0042B09C) # addiu $t9, $t9, -0x4f64
/* 0042DEE8 0320F809 */  jalr  $t9
/* 0042DEEC 00000000 */   nop   
/* 0042DEF0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042DEF4 8E85001C */  lw    $a1, 0x1c($s4)
/* 0042DEF8 928F0018 */  lbu   $t7, 0x18($s4)
/* 0042DEFC 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042DF00 240E0010 */  li    $t6, 16
/* 0042DF04 A2AE0000 */  sb    $t6, ($s5)
/* 0042DF08 AEA50008 */  sw    $a1, 8($s5)
/* 0042DF0C A42F0002 */  sh    $t7, 2($at)
/* 0042DF10 92A30001 */  lbu   $v1, 1($s5)
/* 0042DF14 928D0019 */  lbu   $t5, 0x19($s4)
/* 0042DF18 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042DF1C 000366C0 */  sll   $t4, $v1, 0x1b
/* 0042DF20 000CCEC2 */  srl   $t9, $t4, 0x1b
/* 0042DF24 01B9C026 */  xor   $t8, $t5, $t9
/* 0042DF28 330B001F */  andi  $t3, $t8, 0x1f
/* 0042DF2C 01635026 */  xor   $t2, $t3, $v1
/* 0042DF30 A02A0001 */  sb    $t2, 1($at)
/* 0042DF34 8E8E0020 */  lw    $t6, 0x20($s4)
/* 0042DF38 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042DF3C AC2E000C */  sw    $t6, 0xc($at)
/* 0042DF40 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042DF44 AC250010 */  sw    $a1, 0x10($at)
/* 0042DF48 8E840014 */  lw    $a0, 0x14($s4)
/* 0042DF4C 8EE20000 */  lw    $v0, ($s7)
/* 0042DF50 0044082A */  slt   $at, $v0, $a0
/* 0042DF54 50200010 */  beql  $at, $zero, .L0042DF98
/* 0042DF58 0082082A */   slt   $at, $a0, $v0
/* 0042DF5C 50820026 */  beql  $a0, $v0, .L0042DFF8
/* 0042DF60 8E85001C */   lw    $a1, 0x1c($s4)
.L0042DF64:
/* 0042DF64 8F99884C */  lw    $t9, %call16(next_char)($gp)
/* 0042DF68 8FC40000 */  lw    $a0, ($fp)
/* 0042DF6C 0320F809 */  jalr  $t9
/* 0042DF70 00000000 */   nop   
/* 0042DF74 8EEF0000 */  lw    $t7, ($s7)
/* 0042DF78 8E0D0014 */  lw    $t5, 0x14($s0)
/* 0042DF7C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042DF80 25E20001 */  addiu $v0, $t7, 1
/* 0042DF84 15A2FFF7 */  bne   $t5, $v0, .L0042DF64
/* 0042DF88 AEE20000 */   sw    $v0, ($s7)
/* 0042DF8C 1000001A */  b     .L0042DFF8
/* 0042DF90 8E85001C */   lw    $a1, 0x1c($s4)
/* 0042DF94 0082082A */  slt   $at, $a0, $v0
.L0042DF98:
/* 0042DF98 10200016 */  beqz  $at, .L0042DFF4
/* 0042DF9C 03C02025 */   move  $a0, $fp
/* 0042DFA0 8F99889C */  lw    $t9, %call16(reset)($gp)
/* 0042DFA4 8F858044 */  lw    $a1, %got(RO_1000B230)($gp)
/* 0042DFA8 00003025 */  move  $a2, $zero
/* 0042DFAC 00003825 */  move  $a3, $zero
/* 0042DFB0 0320F809 */  jalr  $t9
/* 0042DFB4 24A5B230 */   addiu $a1, %lo(RO_1000B230) # addiu $a1, $a1, -0x4dd0
/* 0042DFB8 8E990014 */  lw    $t9, 0x14($s4)
/* 0042DFBC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042DFC0 AEE00000 */  sw    $zero, ($s7)
/* 0042DFC4 1320000B */  beqz  $t9, .L0042DFF4
/* 0042DFC8 00001025 */   move  $v0, $zero
.L0042DFCC:
/* 0042DFCC 8F99884C */  lw    $t9, %call16(next_char)($gp)
/* 0042DFD0 8FC40000 */  lw    $a0, ($fp)
/* 0042DFD4 0320F809 */  jalr  $t9
/* 0042DFD8 00000000 */   nop   
/* 0042DFDC 8EF80000 */  lw    $t8, ($s7)
/* 0042DFE0 8E0A0014 */  lw    $t2, 0x14($s0)
/* 0042DFE4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042DFE8 27020001 */  addiu $v0, $t8, 1
/* 0042DFEC 1542FFF7 */  bne   $t2, $v0, .L0042DFCC
/* 0042DFF0 AEE20000 */   sw    $v0, ($s7)
.L0042DFF4:
/* 0042DFF4 8E85001C */  lw    $a1, 0x1c($s4)
.L0042DFF8:
/* 0042DFF8 18A00022 */  blez  $a1, .L0042E084
/* 0042DFFC 00A09825 */   move  $s3, $a1
/* 0042E000 24100001 */  li    $s0, 1
/* 0042E004 26730001 */  addiu $s3, $s3, 1
.L0042E008:
/* 0042E008 8F998844 */  lw    $t9, %call16(eoln)($gp)
/* 0042E00C 8FC40000 */  lw    $a0, ($fp)
/* 0042E010 0320F809 */  jalr  $t9
/* 0042E014 00000000 */   nop   
/* 0042E018 1040000C */  beqz  $v0, .L0042E04C
/* 0042E01C 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0042E020 8F998854 */  lw    $t9, %call16(readln)($gp)
/* 0042E024 8FC40000 */  lw    $a0, ($fp)
/* 0042E028 0320F809 */  jalr  $t9
/* 0042E02C 00000000 */   nop   
/* 0042E030 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042E034 240E000A */  li    $t6, 10
/* 0042E038 8F8F8950 */  lw     $t7, %got(ustrptr)($gp)
/* 0042E03C 8DEF0000 */  lw    $t7, ($t7)
/* 0042E040 01F06021 */  addu  $t4, $t7, $s0
/* 0042E044 1000000A */  b     .L0042E070
/* 0042E048 A18EFFFF */   sb    $t6, -1($t4)
.L0042E04C:
/* 0042E04C 8F998850 */  lw    $t9, %call16(read_char)($gp)
/* 0042E050 8FC40000 */  lw    $a0, ($fp)
/* 0042E054 0320F809 */  jalr  $t9
/* 0042E058 00000000 */   nop   
/* 0042E05C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042E060 8F8D8950 */  lw     $t5, %got(ustrptr)($gp)
/* 0042E064 8DAD0000 */  lw    $t5, ($t5)
/* 0042E068 01B0C821 */  addu  $t9, $t5, $s0
/* 0042E06C A322FFFF */  sb    $v0, -1($t9)
.L0042E070:
/* 0042E070 26100001 */  addiu $s0, $s0, 1
/* 0042E074 1613FFE4 */  bne   $s0, $s3, .L0042E008
/* 0042E078 00000000 */   nop   
/* 0042E07C 8EE20000 */  lw    $v0, ($s7)
/* 0042E080 8E85001C */  lw    $a1, 0x1c($s4)
.L0042E084:
/* 0042E084 8F8B8950 */  lw     $t3, %got(ustrptr)($gp)
/* 0042E088 8F818998 */  lw     $at, %got(strpdisplace)($gp)
/* 0042E08C 0045C021 */  addu  $t8, $v0, $a1
/* 0042E090 8D6B0000 */  lw    $t3, ($t3)
/* 0042E094 AC380000 */  sw    $t8, ($at)
/* 0042E098 02A02025 */  move  $a0, $s5
/* 0042E09C AEAB0014 */  sw    $t3, 0x14($s5)
/* 0042E0A0 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042E0A4 0320F809 */  jalr  $t9
/* 0042E0A8 00000000 */   nop   
/* 0042E0AC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042E0B0 8FAF009C */  lw    $t7, 0x9c($sp)
/* 0042E0B4 8F8A8AB4 */  lw     $t2, %got(do_opt_saved_regs)($gp)
/* 0042E0B8 914A0000 */  lbu   $t2, ($t2)
/* 0042E0BC 1140000A */  beqz  $t2, .L0042E0E8
/* 0042E0C0 00000000 */   nop   
/* 0042E0C4 8DEE0120 */  lw    $t6, 0x120($t7)
/* 0042E0C8 11C00007 */  beqz  $t6, .L0042E0E8
/* 0042E0CC 00000000 */   nop   
/* 0042E0D0 8F998020 */  lw    $t9, %got(func_0042A1C8)($gp)
/* 0042E0D4 02C01025 */  move  $v0, $s6
/* 0042E0D8 2739A1C8 */  addiu $t9, %lo(func_0042A1C8) # addiu $t9, $t9, -0x5e38
/* 0042E0DC 0320F809 */  jalr  $t9
/* 0042E0E0 00000000 */   nop   
/* 0042E0E4 8FBC0034 */  lw    $gp, 0x34($sp)
.L0042E0E8:
/* 0042E0E8 8F998020 */  lw    $t9, %got(func_0042B144)($gp)
/* 0042E0EC 02C01025 */  move  $v0, $s6
/* 0042E0F0 2739B144 */  addiu $t9, %lo(func_0042B144) # addiu $t9, $t9, -0x4ebc
/* 0042E0F4 0320F809 */  jalr  $t9
/* 0042E0F8 00000000 */   nop   
/* 0042E0FC 10000121 */  b     .L0042E584
/* 0042E100 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042E104:
/* 0042E104 92A30001 */  lbu   $v1, 1($s5)
/* 0042E108 928D0014 */  lbu   $t5, 0x14($s4)
/* 0042E10C 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042E110 0003CEC0 */  sll   $t9, $v1, 0x1b
/* 0042E114 0019C6C2 */  srl   $t8, $t9, 0x1b
/* 0042E118 01B85826 */  xor   $t3, $t5, $t8
/* 0042E11C 8F8E897C */  lw     $t6, %got(curlevel)($gp)
/* 0042E120 240C0003 */  li    $t4, 3
/* 0042E124 316A001F */  andi  $t2, $t3, 0x1f
/* 0042E128 A2AC0000 */  sb    $t4, ($s5)
/* 0042E12C 01437826 */  xor   $t7, $t2, $v1
/* 0042E130 A02F0001 */  sb    $t7, 1($at)
/* 0042E134 8DCE0000 */  lw    $t6, ($t6)
/* 0042E138 8E8C0018 */  lw    $t4, 0x18($s4)
/* 0042E13C 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042E140 A6AE0002 */  sh    $t6, 2($s5)
/* 0042E144 02A02025 */  move  $a0, $s5
/* 0042E148 AC2C0004 */  sw    $t4, 4($at)
/* 0042E14C 92990015 */  lbu   $t9, 0x15($s4)
/* 0042E150 928D0016 */  lbu   $t5, 0x16($s4)
/* 0042E154 92980017 */  lbu   $t8, 0x17($s4)
/* 0042E158 A2B90008 */  sb    $t9, 8($s5)
/* 0042E15C A2AD0009 */  sb    $t5, 9($s5)
/* 0042E160 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042E164 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042E168 0320F809 */  jalr  $t9
/* 0042E16C AC38000C */   sw    $t8, 0xc($at)
/* 0042E170 92AA0001 */  lbu   $t2, 1($s5)
/* 0042E174 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042E178 240B0065 */  li    $t3, 101
/* 0042E17C 314FFFE0 */  andi  $t7, $t2, 0xffe0
/* 0042E180 35EC0008 */  ori   $t4, $t7, 8
/* 0042E184 8F988980 */  lw     $t8, %got(curblk)($gp)
/* 0042E188 3199FF1F */  andi  $t9, $t4, 0xff1f
/* 0042E18C A2AC0001 */  sb    $t4, 1($s5)
/* 0042E190 372D0040 */  ori   $t5, $t9, 0x40
/* 0042E194 8E93001C */  lw    $s3, 0x1c($s4)
/* 0042E198 A2AB0000 */  sb    $t3, ($s5)
/* 0042E19C A2AD0001 */  sb    $t5, 1($s5)
/* 0042E1A0 8F180000 */  lw    $t8, ($t8)
/* 0042E1A4 240B0004 */  li    $t3, 4
/* 0042E1A8 240A0001 */  li    $t2, 1
/* 0042E1AC AEAB0008 */  sw    $t3, 8($s5)
/* 0042E1B0 A6AA0002 */  sh    $t2, 2($s5)
/* 0042E1B4 1A60000E */  blez  $s3, .L0042E1F0
/* 0042E1B8 AEB80004 */   sw    $t8, 4($s5)
/* 0042E1BC 26730001 */  addiu $s3, $s3, 1
/* 0042E1C0 00139080 */  sll   $s2, $s3, 2
/* 0042E1C4 2652FFFC */  addiu $s2, $s2, -4
/* 0042E1C8 24100001 */  li    $s0, 1
/* 0042E1CC 00008825 */  move  $s1, $zero
.L0042E1D0:
/* 0042E1D0 AEB1000C */  sw    $s1, 0xc($s5)
/* 0042E1D4 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042E1D8 02A02025 */  move  $a0, $s5
/* 0042E1DC 0320F809 */  jalr  $t9
/* 0042E1E0 00000000 */   nop   
/* 0042E1E4 26310004 */  addiu $s1, $s1, 4
/* 0042E1E8 1632FFF9 */  bne   $s1, $s2, .L0042E1D0
/* 0042E1EC 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042E1F0:
/* 0042E1F0 8F8F89C8 */  lw     $t7, %got(staticlinkloc)($gp)
/* 0042E1F4 8DEF0000 */  lw    $t7, ($t7)
/* 0042E1F8 11E00005 */  beqz  $t7, .L0042E210
/* 0042E1FC 00000000 */   nop   
/* 0042E200 8F9982A0 */  lw    $t9, %call16(gen_static_link)($gp)
/* 0042E204 0320F809 */  jalr  $t9
/* 0042E208 00000000 */   nop   
/* 0042E20C 8FBC0034 */  lw    $gp, 0x34($sp)
.L0042E210:
/* 0042E210 8F8E8AB4 */  lw     $t6, %got(do_opt_saved_regs)($gp)
/* 0042E214 91CE0000 */  lbu   $t6, ($t6)
/* 0042E218 51C00008 */  beql  $t6, $zero, .L0042E23C
/* 0042E21C 92B90001 */   lbu   $t9, 1($s5)
/* 0042E220 8F998020 */  lw    $t9, %got(func_0042A7D0)($gp)
/* 0042E224 02C01025 */  move  $v0, $s6
/* 0042E228 2739A7D0 */  addiu $t9, %lo(func_0042A7D0) # addiu $t9, $t9, -0x5830
/* 0042E22C 0320F809 */  jalr  $t9
/* 0042E230 00000000 */   nop   
/* 0042E234 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042E238 92B90001 */  lbu   $t9, 1($s5)
.L0042E23C:
/* 0042E23C 8F8E8980 */  lw     $t6, %got(curblk)($gp)
/* 0042E240 8E93001C */  lw    $s3, 0x1c($s4)
/* 0042E244 332DFFE0 */  andi  $t5, $t9, 0xffe0
/* 0042E248 35AB0008 */  ori   $t3, $t5, 8
/* 0042E24C 316AFF1F */  andi  $t2, $t3, 0xff1f
/* 0042E250 240C0070 */  li    $t4, 112
/* 0042E254 A2AB0001 */  sb    $t3, 1($s5)
/* 0042E258 354F0040 */  ori   $t7, $t2, 0x40
/* 0042E25C A2AC0000 */  sb    $t4, ($s5)
/* 0042E260 A2AF0001 */  sb    $t7, 1($s5)
/* 0042E264 8DCE0000 */  lw    $t6, ($t6)
/* 0042E268 240C0004 */  li    $t4, 4
/* 0042E26C 2A610005 */  slti  $at, $s3, 5
/* 0042E270 AEAC0008 */  sw    $t4, 8($s5)
/* 0042E274 14200002 */  bnez  $at, .L0042E280
/* 0042E278 AEAE0004 */   sw    $t6, 4($s5)
/* 0042E27C 24130004 */  li    $s3, 4
.L0042E280:
/* 0042E280 1A600015 */  blez  $s3, .L0042E2D8
/* 0042E284 00000000 */   nop   
/* 0042E288 24100001 */  li    $s0, 1
/* 0042E28C 26730001 */  addiu $s3, $s3, 1
/* 0042E290 00008825 */  move  $s1, $zero
.L0042E294:
/* 0042E294 8F8D8D44 */  lw     $t5, %got(firstparmreg)($gp)
/* 0042E298 AEB1000C */  sw    $s1, 0xc($s5)
/* 0042E29C 8F998708 */  lw    $t9, %call16(coloroffset)($gp)
/* 0042E2A0 8DAD0000 */  lw    $t5, ($t5)
/* 0042E2A4 01B02021 */  addu  $a0, $t5, $s0
/* 0042E2A8 0320F809 */  jalr  $t9
/* 0042E2AC 2484FFFF */   addiu $a0, $a0, -1
/* 0042E2B0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042E2B4 A6A20002 */  sh    $v0, 2($s5)
/* 0042E2B8 02A02025 */  move  $a0, $s5
/* 0042E2BC 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042E2C0 0320F809 */  jalr  $t9
/* 0042E2C4 00000000 */   nop   
/* 0042E2C8 26100001 */  addiu $s0, $s0, 1
/* 0042E2CC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042E2D0 1613FFF0 */  bne   $s0, $s3, .L0042E294
/* 0042E2D4 26310004 */   addiu $s1, $s1, 4
.L0042E2D8:
/* 0042E2D8 8F998020 */  lw    $t9, %got(func_0042B1A8)($gp)
/* 0042E2DC 02C01025 */  move  $v0, $s6
                            lw $a0, -0xc($v0)
/* 0042E2E0 2739B1A8 */  addiu $t9, %lo(func_0042B1A8) # addiu $t9, $t9, -0x4e58
/* 0042E2E4 0320F809 */  jalr  $t9
/* 0042E2E8 00000000 */   nop   
/* 0042E2EC 100000A5 */  b     .L0042E584
/* 0042E2F0 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042E2F4:
/* 0042E2F4 8E980014 */  lw    $t8, 0x14($s4)
/* 0042E2F8 A2A50000 */  sb    $a1, ($s5)
/* 0042E2FC 02A02025 */  move  $a0, $s5
/* 0042E300 AEB80004 */  sw    $t8, 4($s5)
/* 0042E304 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042E308 0320F809 */  jalr  $t9
/* 0042E30C 00000000 */   nop   
/* 0042E310 1000009C */  b     .L0042E584
/* 0042E314 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042E318:
/* 0042E318 928B0014 */  lbu   $t3, 0x14($s4)
/* 0042E31C A2A50000 */  sb    $a1, ($s5)
/* 0042E320 02A02025 */  move  $a0, $s5
/* 0042E324 A6AB0002 */  sh    $t3, 2($s5)
/* 0042E328 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042E32C 0320F809 */  jalr  $t9
/* 0042E330 00000000 */   nop   
/* 0042E334 10000093 */  b     .L0042E584
/* 0042E338 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042E33C:
/* 0042E33C A2A50000 */  sb    $a1, ($s5)
/* 0042E340 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042E344 02A02025 */  move  $a0, $s5
/* 0042E348 0320F809 */  jalr  $t9
/* 0042E34C 00000000 */   nop   
/* 0042E350 1000008C */  b     .L0042E584
/* 0042E354 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042E358:
/* 0042E358 92A30001 */  lbu   $v1, 1($s5)
/* 0042E35C 928A0014 */  lbu   $t2, 0x14($s4)
/* 0042E360 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042E364 00037EC0 */  sll   $t7, $v1, 0x1b
/* 0042E368 000F76C2 */  srl   $t6, $t7, 0x1b
/* 0042E36C 014E6026 */  xor   $t4, $t2, $t6
/* 0042E370 3199001F */  andi  $t9, $t4, 0x1f
/* 0042E374 A2A50000 */  sb    $a1, ($s5)
/* 0042E378 03236826 */  xor   $t5, $t9, $v1
/* 0042E37C A02D0001 */  sb    $t5, 1($at)
/* 0042E380 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042E384 8E980018 */  lw    $t8, 0x18($s4)
/* 0042E388 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042E38C 02A02025 */  move  $a0, $s5
/* 0042E390 0320F809 */  jalr  $t9
/* 0042E394 AC380004 */   sw    $t8, 4($at)
/* 0042E398 1000007A */  b     .L0042E584
/* 0042E39C 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042E3A0:
/* 0042E3A0 92A30001 */  lbu   $v1, 1($s5)
/* 0042E3A4 928F0014 */  lbu   $t7, 0x14($s4)
/* 0042E3A8 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042E3AC 000356C0 */  sll   $t2, $v1, 0x1b
/* 0042E3B0 000A76C2 */  srl   $t6, $t2, 0x1b
/* 0042E3B4 01EE6026 */  xor   $t4, $t7, $t6
/* 0042E3B8 240B0015 */  li    $t3, 21
/* 0042E3BC 3199001F */  andi  $t9, $t4, 0x1f
/* 0042E3C0 A2AB0000 */  sb    $t3, ($s5)
/* 0042E3C4 03236826 */  xor   $t5, $t9, $v1
/* 0042E3C8 A02D0001 */  sb    $t5, 1($at)
/* 0042E3CC 92980015 */  lbu   $t8, 0x15($s4)
/* 0042E3D0 8E8B0018 */  lw    $t3, 0x18($s4)
/* 0042E3D4 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042E3D8 AEB80008 */  sw    $t8, 8($s5)
/* 0042E3DC 02A02025 */  move  $a0, $s5
/* 0042E3E0 AC2B000C */  sw    $t3, 0xc($at)
/* 0042E3E4 8E8A001C */  lw    $t2, 0x1c($s4)
/* 0042E3E8 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042E3EC 000A7AC2 */  srl   $t7, $t2, 0xb
/* 0042E3F0 AC2F0004 */  sw    $t7, 4($at)
/* 0042E3F4 92A30001 */  lbu   $v1, 1($s5)
/* 0042E3F8 928C001E */  lbu   $t4, 0x1e($s4)
/* 0042E3FC 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0042E400 0003CE00 */  sll   $t9, $v1, 0x18
/* 0042E404 00196F42 */  srl   $t5, $t9, 0x1d
/* 0042E408 018DC026 */  xor   $t8, $t4, $t5
/* 0042E40C 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042E410 00185F40 */  sll   $t3, $t8, 0x1d
/* 0042E414 000B5602 */  srl   $t2, $t3, 0x18
/* 0042E418 01437826 */  xor   $t7, $t2, $v1
/* 0042E41C 0320F809 */  jalr  $t9
/* 0042E420 A02F0001 */   sb    $t7, 1($at)
/* 0042E424 10000057 */  b     .L0042E584
/* 0042E428 8FBC0034 */   lw    $gp, 0x34($sp)
.Lreemit_error:
/* 0042E42C 8F99861C */  lw    $t9, %call16(dbgerror)($gp)
/* 0042E430 24040212 */  li    $a0, 530
/* 0042E434 0320F809 */  jalr  $t9
/* 0042E438 00000000 */   nop   
/* 0042E43C 10000051 */  b     .L0042E584
/* 0042E440 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042E444:
/* 0042E444 2C410046 */  sltiu $at, $v0, 0x46
/* 0042E448 1420003A */  bnez  $at, .L0042E534
/* 0042E44C 244DFFC2 */   addiu $t5, $v0, -0x3e
/* 0042E450 2401004C */  li    $at, 76
/* 0042E454 1041FFB9 */  beq   $v0, $at, .L0042E33C
/* 0042E458 244EFFAF */   addiu $t6, $v0, -0x51
/* 0042E45C 2DC1001A */  sltiu $at, $t6, 0x1a
/* 0042E460 1020FFF2 */  beqz  $at, .Lreemit_error
/* 0042E464 00000000 */   nop   
/* 0042E468 8F818044 */  lw    $at, %got(jtbl_1000B2E0)($gp)
/* 0042E46C 000E7080 */  sll   $t6, $t6, 2
/* 0042E470 002E0821 */  addu  $at, $at, $t6
/* 0042E474 8C2EB2E0 */  lw    $t6, %lo(jtbl_1000B2E0)($at)
/* 0042E478 01DC7021 */  addu  $t6, $t6, $gp
/* 0042E47C 01C00008 */  jr    $t6
/* 0042E480 00000000 */   nop   
.L0042E484:
/* 0042E484 2C410021 */  sltiu $at, $v0, 0x21
/* 0042E488 1420000B */  bnez  $at, .L0042E4B8
/* 0042E48C 24010026 */   li    $at, 38
/* 0042E490 1041FB50 */  beq   $v0, $at, .L0042D1D4
/* 0042E494 00000000 */   nop   
/* 0042E498 2401002C */  li    $at, 44
/* 0042E49C 1041FE2C */  beq   $v0, $at, .L0042DD50
/* 0042E4A0 00000000 */   nop   
/* 0042E4A4 24010031 */  li    $at, 49
/* 0042E4A8 5041FCB1 */  beql  $v0, $at, .L0042D770
/* 0042E4AC 8E900004 */   lw    $s0, 4($s4)
/* 0042E4B0 1000FFDE */  b     .Lreemit_error
/* 0042E4B4 00000000 */   nop   
.L0042E4B8:
/* 0042E4B8 2C410009 */  sltiu $at, $v0, 9
/* 0042E4BC 1420000E */  bnez  $at, .L0042E4F8
/* 0042E4C0 244CFFFD */   addiu $t4, $v0, -3
/* 0042E4C4 2C41001C */  sltiu $at, $v0, 0x1c
/* 0042E4C8 10200015 */  beqz  $at, .L0042E520
/* 0042E4CC 2459FFF1 */   addiu $t9, $v0, -0xf
/* 0042E4D0 2F21000D */  sltiu $at, $t9, 0xd
/* 0042E4D4 1020FFD5 */  beqz  $at, .Lreemit_error
/* 0042E4D8 00000000 */   nop   
/* 0042E4DC 8F818044 */  lw    $at, %got(jtbl_1000B28C)($gp)
/* 0042E4E0 0019C880 */  sll   $t9, $t9, 2
/* 0042E4E4 00390821 */  addu  $at, $at, $t9
/* 0042E4E8 8C39B28C */  lw    $t9, %lo(jtbl_1000B28C)($at)
/* 0042E4EC 033CC821 */  addu  $t9, $t9, $gp
/* 0042E4F0 03200008 */  jr    $t9
/* 0042E4F4 00000000 */   nop   
.L0042E4F8:
/* 0042E4F8 2D810006 */  sltiu $at, $t4, 6
/* 0042E4FC 1020FFCB */  beqz  $at, .Lreemit_error
/* 0042E500 00000000 */   nop   
/* 0042E504 8F818044 */  lw    $at, %got(jtbl_1000B274)($gp)
/* 0042E508 000C6080 */  sll   $t4, $t4, 2
/* 0042E50C 002C0821 */  addu  $at, $at, $t4
/* 0042E510 8C2CB274 */  lw    $t4, %lo(jtbl_1000B274)($at)
/* 0042E514 019C6021 */  addu  $t4, $t4, $gp
/* 0042E518 01800008 */  jr    $t4
/* 0042E51C 00000000 */   nop   
.L0042E520:
/* 0042E520 24010020 */  li    $at, 32
/* 0042E524 1041FD41 */  beq   $v0, $at, .L0042DA2C
/* 0042E528 00000000 */   nop   
/* 0042E52C 1000FFBF */  b     .Lreemit_error
/* 0042E530 00000000 */   nop   
.L0042E534:
/* 0042E534 2DA10008 */  sltiu $at, $t5, 8
/* 0042E538 1020FFBC */  beqz  $at, .Lreemit_error
/* 0042E53C 00000000 */   nop   
/* 0042E540 8F818044 */  lw    $at, %got(jtbl_1000B2C0)($gp)
/* 0042E544 000D6880 */  sll   $t5, $t5, 2
/* 0042E548 002D0821 */  addu  $at, $at, $t5
/* 0042E54C 8C2DB2C0 */  lw    $t5, %lo(jtbl_1000B2C0)($at)
/* 0042E550 01BC6821 */  addu  $t5, $t5, $gp
/* 0042E554 01A00008 */  jr    $t5
/* 0042E558 00000000 */   nop   
.L0042E55C:
/* 0042E55C 2F010016 */  sltiu $at, $t8, 0x16
/* 0042E560 1020FFB2 */  beqz  $at, .Lreemit_error
/* 0042E564 00000000 */   nop   
/* 0042E568 8F818044 */  lw    $at, %got(jtbl_1000B348)($gp)
/* 0042E56C 0018C080 */  sll   $t8, $t8, 2
/* 0042E570 00380821 */  addu  $at, $at, $t8
/* 0042E574 8C38B348 */  lw    $t8, %lo(jtbl_1000B348)($at)
/* 0042E578 031CC021 */  addu  $t8, $t8, $gp
/* 0042E57C 03000008 */  jr    $t8
/* 0042E580 00000000 */   nop   
.L0042E584:
/* 0042E584 8E940008 */  lw    $s4, 8($s4)
.L0042E588:
/* 0042E588 8FAB009C */  lw    $t3, 0x9c($sp)
/* 0042E58C 128000BB */  beqz  $s4, .L0042E87C
/* 0042E590 00000000 */   nop   
/* 0042E594 8E820010 */  lw    $v0, 0x10($s4)
/* 0042E598 93A30097 */  lbu   $v1, 0x97($sp)
/* 0042E59C 116200B7 */  beq   $t3, $v0, .L0042E87C
/* 0042E5A0 0003182B */   sltu  $v1, $zero, $v1
/* 0042E5A4 14600022 */  bnez  $v1, .L0042E630
/* 0042E5A8 A3A00097 */   sb    $zero, 0x97($sp)
/* 0042E5AC 8F998020 */  lw    $t9, %got(func_0042AADC)($gp)
/* 0042E5B0 02C01025 */  move  $v0, $s6
/* 0042E5B4 2739AADC */  addiu $t9, %lo(func_0042AADC) # addiu $t9, $t9, -0x5524
/* 0042E5B8 0320F809 */  jalr  $t9
/* 0042E5BC 00000000 */   nop   
/* 0042E5C0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042E5C4 02C01025 */  move  $v0, $s6
/* 0042E5C8 8F998020 */  lw    $t9, %got(func_0042B09C)($gp)
/* 0042E5CC 2739B09C */  addiu $t9, %lo(func_0042B09C) # addiu $t9, $t9, -0x4f64
/* 0042E5D0 0320F809 */  jalr  $t9
/* 0042E5D4 00000000 */   nop   
/* 0042E5D8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042E5DC 8FAF009C */  lw    $t7, 0x9c($sp)
/* 0042E5E0 8F8A8AB4 */  lw     $t2, %got(do_opt_saved_regs)($gp)
/* 0042E5E4 914A0000 */  lbu   $t2, ($t2)
/* 0042E5E8 1140000A */  beqz  $t2, .L0042E614
/* 0042E5EC 00000000 */   nop   
/* 0042E5F0 8DEE0120 */  lw    $t6, 0x120($t7)
/* 0042E5F4 11C00007 */  beqz  $t6, .L0042E614
/* 0042E5F8 00000000 */   nop   
/* 0042E5FC 8F998020 */  lw    $t9, %got(func_0042A1C8)($gp)
/* 0042E600 02C01025 */  move  $v0, $s6
/* 0042E604 2739A1C8 */  addiu $t9, %lo(func_0042A1C8) # addiu $t9, $t9, -0x5e38
/* 0042E608 0320F809 */  jalr  $t9
/* 0042E60C 00000000 */   nop   
/* 0042E610 8FBC0034 */  lw    $gp, 0x34($sp)
.L0042E614:
/* 0042E614 8F998020 */  lw    $t9, %got(func_0042B144)($gp)
/* 0042E618 02C01025 */  move  $v0, $s6
/* 0042E61C 2739B144 */  addiu $t9, %lo(func_0042B144) # addiu $t9, $t9, -0x4ebc
/* 0042E620 0320F809 */  jalr  $t9
/* 0042E624 00000000 */   nop   
/* 0042E628 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042E62C 8E820010 */  lw    $v0, 0x10($s4)
.L0042E630:
/* 0042E630 8F998600 */  lw    $t9, %call16(findbbtemps)($gp)
/* 0042E634 AFA2009C */  sw    $v0, 0x9c($sp)
/* 0042E638 00402025 */  move  $a0, $v0
/* 0042E63C 0320F809 */  jalr  $t9
/* 0042E640 00000000 */   nop   
/* 0042E644 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042E648 8FB9009C */  lw    $t9, 0x9c($sp)
/* 0042E64C 8F878B24 */  lw     $a3, %got(mipsflag)($gp)
/* 0042E650 90E70000 */  lbu   $a3, ($a3)
/* 0042E654 38E70003 */  xori  $a3, $a3, 3
/* 0042E658 2CE70001 */  sltiu $a3, $a3, 1
/* 0042E65C 10E00009 */  beqz  $a3, .L0042E684
/* 0042E660 00000000 */   nop   
/* 0042E664 8F2400E8 */  lw    $a0, 0xe8($t9)
/* 0042E668 8F998020 */  lw    $t9, %got(func_0042BE58)($gp)
/* 0042E66C 02C01025 */  move  $v0, $s6
/* 0042E670 2739BE58 */  addiu $t9, %lo(func_0042BE58) # addiu $t9, $t9, -0x41a8
/* 0042E674 0320F809 */  jalr  $t9
/* 0042E678 00000000 */   nop   
/* 0042E67C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042E680 00403825 */  move  $a3, $v0
.L0042E684:
/* 0042E684 8F828C30 */  lw     $v0, %got(has_ix)($gp)
/* 0042E688 30EC00FF */  andi  $t4, $a3, 0xff
/* 0042E68C 11800006 */  beqz  $t4, .L0042E6A8
/* 0042E690 A0470000 */   sb    $a3, ($v0)
/* 0042E694 8FAD009C */  lw    $t5, 0x9c($sp)
/* 0042E698 8F818C34 */  lw     $at, %got(loopno)($gp)
/* 0042E69C 8DB800E8 */  lw    $t8, 0xe8($t5)
/* 0042E6A0 8F0B0000 */  lw    $t3, ($t8)
/* 0042E6A4 AC2B0000 */  sw    $t3, ($at)
.L0042E6A8:
/* 0042E6A8 8F8A8A98 */  lw     $t2, %got(genbbnum)($gp)
/* 0042E6AC 240F0013 */  li    $t7, 19
/* 0042E6B0 240D0014 */  li    $t5, 20
/* 0042E6B4 914A0000 */  lbu   $t2, ($t2)
/* 0042E6B8 2406002D */  li    $a2, 45
/* 0042E6BC 24070020 */  li    $a3, 32
/* 0042E6C0 11400059 */  beqz  $t2, .L0042E828
/* 0042E6C4 24090042 */   li    $t1, 66
/* 0042E6C8 92AE0001 */  lbu   $t6, 1($s5)
/* 0042E6CC 8FB8009C */  lw    $t8, 0x9c($sp)
/* 0042E6D0 A2AF0000 */  sb    $t7, ($s5)
/* 0042E6D4 31D9FFE0 */  andi  $t9, $t6, 0xffe0
/* 0042E6D8 372C0009 */  ori   $t4, $t9, 9
/* 0042E6DC A2AC0001 */  sb    $t4, 1($s5)
/* 0042E6E0 AEAD0010 */  sw    $t5, 0x10($s5)
/* 0042E6E4 930B0006 */  lbu   $t3, 6($t8)
/* 0042E6E8 02C01025 */  move  $v0, $s6
/* 0042E6EC 15600006 */  bnez  $t3, .L0042E708
/* 0042E6F0 00000000 */   nop   
/* 0042E6F4 8F838950 */  lw     $v1, %got(ustrptr)($gp)
/* 0042E6F8 240A003F */  li    $t2, 63
/* 0042E6FC 8C630000 */  lw    $v1, ($v1)
/* 0042E700 10000005 */  b     .L0042E718
/* 0042E704 A06A0000 */   sb    $t2, ($v1)
.L0042E708:
/* 0042E708 8F838950 */  lw     $v1, %got(ustrptr)($gp)
/* 0042E70C 240F002D */  li    $t7, 45
/* 0042E710 8C630000 */  lw    $v1, ($v1)
/* 0042E714 A06F0000 */  sb    $t7, ($v1)
.L0042E718:
/* 0042E718 8FAE009C */  lw    $t6, 0x9c($sp)
/* 0042E71C A0660001 */  sb    $a2, 1($v1)
/* 0042E720 A0660002 */  sb    $a2, 2($v1)
/* 0042E724 A0690003 */  sb    $t1, 3($v1)
/* 0042E728 A0690004 */  sb    $t1, 4($v1)
/* 0042E72C A0670005 */  sb    $a3, 5($v1)
/* 0042E730 95D90008 */  lhu   $t9, 8($t6)
/* 0042E734 240103E8 */  li    $at, 1000
/* 0042E738 2405000A */  li    $a1, 10
/* 0042E73C 0321001B */  divu  $zero, $t9, $at
/* 0042E740 00006010 */  mfhi  $t4
/* 0042E744 24080064 */  li    $t0, 100
/* 0042E748 05810002 */  bgez  $t4, .L0042E754
/* 0042E74C 00000000 */   nop   
/* 0042E750 218C03E8 */  addi  $t4, $t4, 0x3e8
.L0042E754:
/* 0042E754 0188001B */  divu  $zero, $t4, $t0
/* 0042E758 00006812 */  mflo  $t5
/* 0042E75C 8FAB009C */  lw    $t3, 0x9c($sp)
/* 0042E760 25B80030 */  addiu $t8, $t5, 0x30
/* 0042E764 A0780006 */  sb    $t8, 6($v1)
/* 0042E768 956A0008 */  lhu   $t2, 8($t3)
/* 0042E76C 15000002 */  bnez  $t0, .L0042E778
/* 0042E770 00000000 */   nop   
/* 0042E774 0007000D */  break 7
.L0042E778:
/* 0042E778 0148001B */  divu  $zero, $t2, $t0
/* 0042E77C 00007810 */  mfhi  $t7
/* 0042E780 01E87026 */  xor   $t6, $t7, $t0
/* 0042E784 15000002 */  bnez  $t0, .L0042E790
/* 0042E788 00000000 */   nop   
/* 0042E78C 0007000D */  break 7
.L0042E790:
/* 0042E790 05C10002 */  bgez  $t6, .L0042E79C
/* 0042E794 00000000 */   nop   
/* 0042E798 01E87821 */  addu  $t7, $t7, $t0
.L0042E79C:
/* 0042E79C 01E5001B */  divu  $zero, $t7, $a1
/* 0042E7A0 0000C812 */  mflo  $t9
/* 0042E7A4 8FAD009C */  lw    $t5, 0x9c($sp)
/* 0042E7A8 272C0030 */  addiu $t4, $t9, 0x30
/* 0042E7AC A06C0007 */  sb    $t4, 7($v1)
/* 0042E7B0 95B80008 */  lhu   $t8, 8($t5)
/* 0042E7B4 14A00002 */  bnez  $a1, .L0042E7C0
/* 0042E7B8 00000000 */   nop   
/* 0042E7BC 0007000D */  break 7
.L0042E7C0:
/* 0042E7C0 0305001B */  divu  $zero, $t8, $a1
/* 0042E7C4 00005810 */  mfhi  $t3
/* 0042E7C8 01655026 */  xor   $t2, $t3, $a1
/* 0042E7CC 14A00002 */  bnez  $a1, .L0042E7D8
/* 0042E7D0 00000000 */   nop   
/* 0042E7D4 0007000D */  break 7
.L0042E7D8:
/* 0042E7D8 05410002 */  bgez  $t2, .L0042E7E4
/* 0042E7DC 00000000 */   nop   
/* 0042E7E0 01655821 */  addu  $t3, $t3, $a1
.L0042E7E4:
/* 0042E7E4 8F998020 */  lw    $t9, %got(func_0042BD94)($gp)
/* 0042E7E8 8FAF009C */  lw    $t7, 0x9c($sp)
/* 0042E7EC 256E0030 */  addiu $t6, $t3, 0x30
/* 0042E7F0 A06E0008 */  sb    $t6, 8($v1)
/* 0042E7F4 A0670009 */  sb    $a3, 9($v1)
/* 0042E7F8 2739BD94 */  addiu $t9, %lo(func_0042BD94) # addiu $t9, $t9, -0x426c
/* 0042E7FC 0320F809 */  jalr  $t9
/* 0042E800 8DE4002C */   lw    $a0, 0x2c($t7)
/* 0042E804 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042E808 02A02025 */  move  $a0, $s5
/* 0042E80C 8F998950 */  lw     $t9, %got(ustrptr)($gp)
/* 0042E810 8F390000 */  lw    $t9, ($t9)
/* 0042E814 AEB90014 */  sw    $t9, 0x14($s5)
/* 0042E818 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042E81C 0320F809 */  jalr  $t9
/* 0042E820 00000000 */   nop   
/* 0042E824 8FBC0034 */  lw    $gp, 0x34($sp)
.L0042E828:
/* 0042E828 8F99801C */  lw    $t9, %got(func_00422AF0)($gp)
/* 0042E82C 02C01025 */  move  $v0, $s6
/* 0042E830 27392AF0 */  addiu $t9, %lo(func_00422AF0) # addiu $t9, $t9, 0x2af0
/* 0042E834 0320F809 */  jalr  $t9
/* 0042E838 00000000 */   nop   
/* 0042E83C 8FAC009C */  lw    $t4, 0x9c($sp)
/* 0042E840 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042E844 8D8D0000 */  lw    $t5, ($t4)
/* 0042E848 15A0000C */  bnez  $t5, .L0042E87C
/* 0042E84C 00000000 */   nop   
/* 0042E850 8D98001C */  lw    $t8, 0x1c($t4)
/* 0042E854 24010003 */  li    $at, 3
/* 0042E858 930A0000 */  lbu   $t2, ($t8)
/* 0042E85C 11410007 */  beq   $t2, $at, .L0042E87C
/* 0042E860 00000000 */   nop   
/* 0042E864 8F998020 */  lw    $t9, %got(func_0042B1A8)($gp)
/* 0042E868 02C01025 */  move  $v0, $s6
                            lw $a0, -0xc($v0)
/* 0042E86C 2739B1A8 */  addiu $t9, %lo(func_0042B1A8) # addiu $t9, $t9, -0x4e58
/* 0042E870 0320F809 */  jalr  $t9
/* 0042E874 00000000 */   nop   
/* 0042E878 8FBC0034 */  lw    $gp, 0x34($sp)
.L0042E87C:
/* 0042E87C 5680F60A */  bnezl $s4, .L0042C0A8
/* 0042E880 92850000 */   lbu   $a1, ($s4)
/* 0042E884 93AB0097 */  lbu   $t3, 0x97($sp)
/* 0042E888 55600016 */  bnezl $t3, .L0042E8E4
/* 0042E88C 93AD0095 */   lbu   $t5, 0x95($sp)
/* 0042E890 8F998020 */  lw    $t9, %got(func_0042B09C)($gp)
/* 0042E894 02C01025 */  move  $v0, $s6
/* 0042E898 2739B09C */  addiu $t9, %lo(func_0042B09C) # addiu $t9, $t9, -0x4f64
/* 0042E89C 0320F809 */  jalr  $t9
/* 0042E8A0 00000000 */   nop   
/* 0042E8A4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042E8A8 8FAF009C */  lw    $t7, 0x9c($sp)
/* 0042E8AC 8F8E8AB4 */  lw     $t6, %got(do_opt_saved_regs)($gp)
/* 0042E8B0 91CE0000 */  lbu   $t6, ($t6)
/* 0042E8B4 51C0000B */  beql  $t6, $zero, .L0042E8E4
/* 0042E8B8 93AD0095 */   lbu   $t5, 0x95($sp)
/* 0042E8BC 8DF90120 */  lw    $t9, 0x120($t7)
/* 0042E8C0 53200008 */  beql  $t9, $zero, .L0042E8E4
/* 0042E8C4 93AD0095 */   lbu   $t5, 0x95($sp)
/* 0042E8C8 8F998020 */  lw    $t9, %got(func_0042A1C8)($gp)
/* 0042E8CC 02C01025 */  move  $v0, $s6
/* 0042E8D0 2739A1C8 */  addiu $t9, %lo(func_0042A1C8) # addiu $t9, $t9, -0x5e38
/* 0042E8D4 0320F809 */  jalr  $t9
/* 0042E8D8 00000000 */   nop   
/* 0042E8DC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042E8E0 93AD0095 */  lbu   $t5, 0x95($sp)
.L0042E8E4:
/* 0042E8E4 240C001B */  li    $t4, 27
/* 0042E8E8 15A0000E */  bnez  $t5, .L0042E924
/* 0042E8EC 00000000 */   nop   
/* 0042E8F0 92B80001 */  lbu   $t8, 1($s5)
/* 0042E8F4 8F8E89FC */  lw     $t6, %got(highestmdef)($gp)
/* 0042E8F8 A2AC0000 */  sb    $t4, ($s5)
/* 0042E8FC 330AFF1F */  andi  $t2, $t8, 0xff1f
/* 0042E900 354B0020 */  ori   $t3, $t2, 0x20
/* 0042E904 A2AB0001 */  sb    $t3, 1($s5)
/* 0042E908 8DCE0000 */  lw    $t6, ($t6)
/* 0042E90C 02A02025 */  move  $a0, $s5
/* 0042E910 AEAE0008 */  sw    $t6, 8($s5)
/* 0042E914 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042E918 0320F809 */  jalr  $t9
/* 0042E91C 00000000 */   nop   
/* 0042E920 8FBC0034 */  lw    $gp, 0x34($sp)
.L0042E924:
/* 0042E924 8F8F8B0C */  lw     $t7, %got(allcallersave)($gp)
/* 0042E928 91EF0000 */  lbu   $t7, ($t7)
/* 0042E92C 51E0006A */  beql  $t7, $zero, .L0042EAD8
/* 0042E930 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0042E934 8F8D8B10 */  lw     $t5, %got(propagate_ee_saves)($gp)
/* 0042E938 8F998B6C */  lw     $t9, %got(curproc)($gp)
/* 0042E93C 91AD0000 */  lbu   $t5, ($t5)
/* 0042E940 8F390000 */  lw    $t9, ($t9)
/* 0042E944 11A00033 */  beqz  $t5, .L0042EA14
/* 0042E948 8F300024 */   lw    $s0, 0x24($t9)
/* 0042E94C 8F848D38 */  lw     $a0, %got(firsteereg)($gp)
/* 0042E950 8F868D40 */  lw     $a2, %got(lasteereg)($gp)
/* 0042E954 8C930000 */  lw    $s3, ($a0)
/* 0042E958 8CC50000 */  lw    $a1, ($a2)
/* 0042E95C 02608825 */  move  $s1, $s3
/* 0042E960 00B3082A */  slt   $at, $a1, $s3
/* 0042E964 14200012 */  bnez  $at, .L0042E9B0
/* 0042E968 24A50001 */   addiu $a1, $a1, 1
/* 0042E96C 02131021 */  addu  $v0, $s0, $s3
/* 0042E970 8F838A1C */  lw     $v1, %got(ugen_saved_eeregs)($gp)
.L0042E974:
/* 0042E974 904CFFFF */  lbu   $t4, -1($v0)
/* 0042E978 262AFFF3 */  addiu $t2, $s1, -0xd
/* 0042E97C 5180000A */  beql  $t4, $zero, .L0042E9A8
/* 0042E980 26310001 */   addiu $s1, $s1, 1
/* 0042E984 8C780000 */  lw    $t8, ($v1)
/* 0042E988 2D4B0020 */  sltiu $t3, $t2, 0x20
/* 0042E98C 000B7023 */  negu  $t6, $t3
/* 0042E990 030E7824 */  and   $t7, $t8, $t6
/* 0042E994 014FC804 */  sllv  $t9, $t7, $t2
/* 0042E998 07220003 */  bltzl $t9, .L0042E9A8
/* 0042E99C 26310001 */   addiu $s1, $s1, 1
/* 0042E9A0 A040FFFF */  sb    $zero, -1($v0)
/* 0042E9A4 26310001 */  addiu $s1, $s1, 1
.L0042E9A8:
/* 0042E9A8 1625FFF2 */  bne   $s1, $a1, .L0042E974
/* 0042E9AC 24420001 */   addiu $v0, $v0, 1
.L0042E9B0:
/* 0042E9B0 8C930004 */  lw    $s3, 4($a0)
/* 0042E9B4 8CC50004 */  lw    $a1, 4($a2)
/* 0042E9B8 8F838A1C */  lw     $v1, %got(ugen_saved_eeregs)($gp)
/* 0042E9BC 02608825 */  move  $s1, $s3
/* 0042E9C0 00B3082A */  slt   $at, $a1, $s3
/* 0042E9C4 1420002B */  bnez  $at, .L0042EA74
/* 0042E9C8 24A50001 */   addiu $a1, $a1, 1
/* 0042E9CC 02131021 */  addu  $v0, $s0, $s3
.L0042E9D0:
/* 0042E9D0 904DFFFF */  lbu   $t5, -1($v0)
/* 0042E9D4 262BFFF3 */  addiu $t3, $s1, -0xd
/* 0042E9D8 51A0000A */  beql  $t5, $zero, .L0042EA04
/* 0042E9DC 26310001 */   addiu $s1, $s1, 1
/* 0042E9E0 8C6C0000 */  lw    $t4, ($v1)
/* 0042E9E4 2D780020 */  sltiu $t8, $t3, 0x20
/* 0042E9E8 00187023 */  negu  $t6, $t8
/* 0042E9EC 018E7824 */  and   $t7, $t4, $t6
/* 0042E9F0 016F5004 */  sllv  $t2, $t7, $t3
/* 0042E9F4 05420003 */  bltzl $t2, .L0042EA04
/* 0042E9F8 26310001 */   addiu $s1, $s1, 1
/* 0042E9FC A040FFFF */  sb    $zero, -1($v0)
/* 0042EA00 26310001 */  addiu $s1, $s1, 1
.L0042EA04:
/* 0042EA04 1625FFF2 */  bne   $s1, $a1, .L0042E9D0
/* 0042EA08 24420001 */   addiu $v0, $v0, 1
/* 0042EA0C 10000019 */  b     .L0042EA74
/* 0042EA10 00000000 */   nop   
.L0042EA14:
/* 0042EA14 8F848D38 */  lw     $a0, %got(firsteereg)($gp)
/* 0042EA18 8F868D40 */  lw     $a2, %got(lasteereg)($gp)
/* 0042EA1C 8C930000 */  lw    $s3, ($a0)
/* 0042EA20 8CC50000 */  lw    $a1, ($a2)
/* 0042EA24 02608825 */  move  $s1, $s3
/* 0042EA28 00B3082A */  slt   $at, $a1, $s3
/* 0042EA2C 14200006 */  bnez  $at, .L0042EA48
/* 0042EA30 24A50001 */   addiu $a1, $a1, 1
/* 0042EA34 02131021 */  addu  $v0, $s0, $s3
.L0042EA38:
/* 0042EA38 26310001 */  addiu $s1, $s1, 1
/* 0042EA3C A040FFFF */  sb    $zero, -1($v0)
/* 0042EA40 1625FFFD */  bne   $s1, $a1, .L0042EA38
/* 0042EA44 24420001 */   addiu $v0, $v0, 1
.L0042EA48:
/* 0042EA48 8C930004 */  lw    $s3, 4($a0)
/* 0042EA4C 8CC50004 */  lw    $a1, 4($a2)
/* 0042EA50 02608825 */  move  $s1, $s3
/* 0042EA54 00B3082A */  slt   $at, $a1, $s3
/* 0042EA58 14200006 */  bnez  $at, .L0042EA74
/* 0042EA5C 24A50001 */   addiu $a1, $a1, 1
/* 0042EA60 02131021 */  addu  $v0, $s0, $s3
.L0042EA64:
/* 0042EA64 26310001 */  addiu $s1, $s1, 1
/* 0042EA68 A040FFFF */  sb    $zero, -1($v0)
/* 0042EA6C 1625FFFD */  bne   $s1, $a1, .L0042EA64
/* 0042EA70 24420001 */   addiu $v0, $v0, 1
.L0042EA74:
/* 0042EA74 8F998A18 */  lw     $t9, %got(regsinclass1)($gp)
/* 0042EA78 24030001 */  li    $v1, 1
/* 0042EA7C A203000C */  sb    $v1, 0xc($s0)
/* 0042EA80 8F390000 */  lw    $t9, ($t9)
/* 0042EA84 8F8D8AFC */  lw     $t5, %got(someusefp)($gp)
/* 0042EA88 02191021 */  addu  $v0, $s0, $t9
/* 0042EA8C A043FFFF */  sb    $v1, -1($v0)
/* 0042EA90 91AD0000 */  lbu   $t5, ($t5)
/* 0042EA94 11A00002 */  beqz  $t5, .L0042EAA0
/* 0042EA98 00000000 */   nop   
/* 0042EA9C A043FFFE */  sb    $v1, -2($v0)
.L0042EAA0:
/* 0042EAA0 8F938D34 */  lw     $s3, %got(firsterreg)($gp)
/* 0042EAA4 8F858D3C */  lw     $a1, %got(lasterreg)($gp)
/* 0042EAA8 8E730004 */  lw    $s3, 4($s3)
/* 0042EAAC 8CA50004 */  lw    $a1, 4($a1)
/* 0042EAB0 02608825 */  move  $s1, $s3
/* 0042EAB4 00B3082A */  slt   $at, $a1, $s3
/* 0042EAB8 14200006 */  bnez  $at, .L0042EAD4
/* 0042EABC 24A50001 */   addiu $a1, $a1, 1
/* 0042EAC0 02131021 */  addu  $v0, $s0, $s3
.L0042EAC4:
/* 0042EAC4 26310001 */  addiu $s1, $s1, 1
/* 0042EAC8 A043FFFF */  sb    $v1, -1($v0)
/* 0042EACC 1625FFFD */  bne   $s1, $a1, .L0042EAC4
/* 0042EAD0 24420001 */   addiu $v0, $v0, 1
.L0042EAD4:
/* 0042EAD4 8FBF003C */  lw    $ra, 0x3c($sp)
.L0042EAD8:
/* 0042EAD8 8FB00014 */  lw    $s0, 0x14($sp)
/* 0042EADC 8FB10018 */  lw    $s1, 0x18($sp)
/* 0042EAE0 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0042EAE4 8FB30020 */  lw    $s3, 0x20($sp)
/* 0042EAE8 8FB40024 */  lw    $s4, 0x24($sp)
/* 0042EAEC 8FB50028 */  lw    $s5, 0x28($sp)
/* 0042EAF0 8FB6002C */  lw    $s6, 0x2c($sp)
/* 0042EAF4 8FB70030 */  lw    $s7, 0x30($sp)
/* 0042EAF8 8FBE0038 */  lw    $fp, 0x38($sp)
/* 0042EAFC 03E00008 */  jr    $ra
/* 0042EB00 27BD00A8 */   addiu $sp, $sp, 0xa8
    .type reemit, @function
    .size reemit, .-reemit
    .end reemit
)"");

#if 0
? fflush(FILE *); // extern
? boundswarning(); // static
u16 coloroffset(s32); // static
? epilog(struct Graphnode *, u8); // static
? findbbtemps(struct Graphnode *); // static
? func_00422AF0(); // static
? func_004230F0(struct Expression *, ?, struct Expression *, u8); // static
? func_00424FFC(struct Expression *, struct Expression *); // static
? func_00425594(struct JumpFallthroughBB *); // static
? func_0042A1C8(); // static
? func_0042A7D0(); // static
? func_0042AADC(struct Expression *, struct Expression *); // static
? func_0042B09C(); // static
? func_0042B144(); // static
? func_0042B1A8(); // static
? func_0042B890(struct Statement *, u8); // static
? func_0042BB4C(struct Statement *); // static
? func_0042BD94(u32, u32, s8, s8); // static
u8 func_0042BE58(struct Loop *); // static
? gen_outparcode(struct Graphnode *); // static
? gen_static_link(); // static
? genrop(?, s32, u8, u8); // static
? gettemp(s32 *, ?); // static
? igen3(?, struct IChain *, u8); // static
s32 inreg(struct IChain *, struct Graphnode *, s32 *, ?); // static
? next_char(FILE *); // static
? prolog(); // static
s8 read_char(FILE *); // static
? readln(FILE *); // static
? reset(struct PascalFile *, ? *, ?, ?); // static
? spilltemplodstr(?, ?, s32); // static
s32 varlodstr(?, struct IChain *, struct Graphnode *, ?); // static
static ? D_10010688; // unable to generate initializer
static ? eereg_saved_locs;
static s8 gpunaltab[24];
static u8 has_ix;
static s32 loopno;
static s8 spunaltab[24];
static ? unaltab;
static u8 use_ix = 0;
u8 allcallersave;
struct Expression *baseregexpr[23];
s32 curblk;
s32 curlevel;
s32 curlocln;
s32 curlocpg;
struct Statement *curmst;
struct Proc *curproc;
u8 do_opt_saved_regs;
s8 entnam0[1024];
u32 entnam0len;
struct PascalFile err = {(FILE *)0xFB4EE64, NULL};
s32 firsteereg[2];
s32 firsterreg[2];
s32 firstparmreg[2];
u8 genbbnum;
struct Graphnode *graphhead;
s32 highestmdef;
u8 lang;
s32 lasteereg[2];
s32 lasterreg[2];
s32 maxlabnam;
u8 mips3_64data;
u8 mipsflag;
s32 numcalls;
u8 propagate_ee_saves;
s32 regsinclass1;
u8 someusefp;
s32 staticlinkloc;
struct PascalFile strp;
s32 strpdisplace;
union Bcode u;
s32 ugen_saved_eeregs;
u8 usefeedback;
s8 *ustrptr;
#endif

#if 0
void reemit() {
    struct Graphnode *sp9C;
    u8 sp97;
    u8 sp95;
    s32 sp90;
    u8 sp8A;
    s32 sp84;
    void *temp_v0;
    s32 temp_a0_2;
    s32 temp_a0_4;
    s32 temp_a1_10;
    s32 temp_a1_11;
    s32 temp_a1_5;
    s32 temp_a1_6;
    s32 temp_a1_7;
    s32 temp_a1_8;
    s32 temp_a1_9;
    s32 temp_a2;
    s32 temp_a3_3;
    s32 temp_a3_4;
    s32 temp_s0_15;
    s32 temp_s0_16;
    s32 temp_s0_17;
    s32 temp_s0_19;
    s32 temp_s0_20;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s0_6;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s1_4;
    s32 temp_s1_5;
    s32 temp_s1_6;
    s32 temp_s1_7;
    s32 temp_s1_8;
    s32 temp_s2;
    s32 temp_s3_10;
    s32 temp_s3_11;
    s32 temp_s3_12;
    s32 temp_s3_5;
    s32 temp_s3_6;
    s32 temp_s3_7;
    s32 temp_s3_8;
    s32 temp_s3_9;
    s32 temp_t2_4;
    s32 temp_t4_3;
    s32 temp_t8;
    s32 temp_t8_3;
    s32 temp_t9_4;
    s32 temp_v0_20;
    s32 temp_v0_21;
    s32 temp_v0_22;
    s32 temp_v0_8;
    s32 temp_v1;
    s32 temp_v1_17;
    s32 temp_v1_2;
    s32 temp_v1_5;
    s32 temp_v1_7;
    s8 *temp_v1_23;
    s8 *temp_v1_24;
    s8 temp_t7_3;
    s8 temp_t9_2;
    struct Expression **temp_v0_2;
    struct Expression *temp_a0_7;
    struct Expression *temp_s0;
    struct Expression *temp_s0_10;
    struct Expression *temp_s0_11;
    struct Expression *temp_s0_12;
    struct Expression *temp_s0_13;
    struct Expression *temp_s0_18;
    struct Expression *temp_s0_2;
    struct Expression *temp_s0_7;
    struct Expression *temp_s0_8;
    struct Expression *temp_s0_9;
    struct Expression *temp_v0_11;
    struct Expression *temp_v0_12;
    struct Expression *temp_v0_14;
    struct Expression *temp_v0_15;
    struct Expression *temp_v0_4;
    struct Expression *temp_v0_6;
    struct Graphnode *temp_a1_2;
    struct Graphnode *temp_v1_14;
    struct GraphnodeList *temp_a0_5;
    struct RegstakenParregs *temp_s0_21;
    struct Statement *temp_a0_3;
    struct Statement *stat;
    struct Statement *temp_s4_2;
    struct Statement *temp_s4_3;
    struct Statement *temp_s4_4;
    struct Statement *temp_s4_5;
    struct VarAccessList *temp_s3;
    struct VarAccessList *temp_s3_3;
    u16 temp_v0_19;
    u32 temp_a0_6;
    u32 temp_a1_3;
    u32 temp_hi;
    u32 temp_hi_2;
    u32 temp_hi_3;
    u32 temp_t2_5;
    u32 temp_t3_3;
    u32 temp_t4_4;
    u32 temp_t5_2;
    u32 temp_t6_3;
    u32 temp_t7;
    u32 temp_t7_2;
    u32 temp_t8_2;
    u32 temp_t9_3;
    u32 temp_v0_17;
    u32 temp_v0_18;
    u32 temp_v0_3;
    u8 *temp_v0_23;
    u8 temp_a1;
    u8 temp_a1_4;
    u8 temp_a2_2;
    u8 temp_a2_3;
    u8 temp_a3;
    u8 temp_a3_2;
    u8 temp_a3_5;
    u8 temp_a3_6;
    u8 temp_a3_7;
    u8 temp_s0_14;
    u8 temp_t2;
    u8 temp_t2_2;
    u8 temp_t2_3;
    u8 temp_t3;
    u8 temp_t3_2;
    u8 temp_t4;
    u8 temp_t4_2;
    u8 temp_t4_5;
    u8 temp_t5;
    u8 temp_t6;
    u8 temp_t6_2;
    u8 temp_t9;
    u8 temp_v0_13;
    u8 temp_v0_16;
    u8 temp_v0_5;
    u8 temp_v0_7;
    u8 temp_v1_10;
    u8 temp_v1_11;
    u8 temp_v1_12;
    u8 temp_v1_13;
    u8 temp_v1_15;
    u8 temp_v1_16;
    u8 temp_v1_18;
    u8 temp_v1_19;
    u8 temp_v1_20;
    u8 temp_v1_21;
    u8 temp_v1_22;
    u8 temp_v1_3;
    u8 temp_v1_4;
    u8 temp_v1_6;
    u8 temp_v1_8;
    u8 temp_v1_9;
    void *temp_s3_2;
    void *temp_s3_4;
    void *temp_v0_10;
    void *temp_v0_9;
    void *phi_v0;
    void *phi_v0_3;
    s32 phi_v1;
    void *phi_v0_4;
    s32 phi_v1_2;
    s8 *phi_t0;
    s8 *phi_t1;
    s32 phi_s1;
    struct Statement *stat; // s4
    s32 phi_t8;
    u8 phi_a3;
    s32 phi_s0;
    s32 phi_s0_2;
    void *phi_v0_5;
    s32 phi_s1_2;
    u8 phi_a2;
    u8 phi_a2_2;
    s32 phi_v0_6;
    s32 phi_s0_3;
    s32 phi_v0_7;
    u8 phi_a3_2;
    struct Statement *stat;
    s32 phi_s0_4;
    s32 phi_s0_5;
    s32 phi_s0_6;
    s32 phi_s0_7;
    s32 phi_v0_8;
    s32 phi_a1;
    s32 phi_s1_3;
    s32 phi_s3;
    s32 phi_s1_4;
    s32 phi_s0_8;
    struct Statement *stat;
    u8 phi_a3_3;
    s8 *phi_v1_3;
    u32 phi_t4;
    u32 phi_t7;
    u32 phi_t3;
    u8 *phi_v0_9;
    s32 phi_s1_5;
    u8 *phi_v0_10;
    s32 phi_s1_6;
    u8 *phi_v0_11;
    s32 phi_s1_7;
    u8 *phi_v0_12;
    s32 phi_s1_8;
    u8 *phi_v0_13;
    s32 phi_s1_9;
    s8 *phi_a3_4;
    s32 phi_v1_4;
    void *phi_v0_14;
    void *phi_v0_15;
    s32 phi_a3_5;
    struct Statement *stat;
    struct Statement *stat;

    sp95 = 0;
    phi_v0 = &eereg_saved_locs;
loop_1:
    temp_v0 = phi_v0 + 4;
    temp_v0->unk-4 = 0;
    phi_v0 = temp_v0;
    if (temp_v0 != (&eereg_saved_locs + 0x58)) {
        goto loop_1;
    }

    reset(&strp, " ", 0, 0);
    strpdisplace = 0;
    prolog();
    stat = graphhead->stat_head;
    has_ix = false;
    sp9C = graphhead;
    curlocpg = 0;
    curlocln = 0;
    numcalls = 0;
    findbbtemps(graphhead);
    baseregexpr = {0};

    phi_s1 = 1;

#if 0
    phi_v0_2 = baseregexpr;
loop_3:
    temp_v0_2 = phi_v0_2 + 4;
    temp_v0_2->unk-4 = 0;
    phi_v0_2 = temp_v0_2;
    if (temp_v0_2 != (baseregexpr + 0x5C)) {
        goto loop_3;
    }
#endif

    gpunaltab = {0};
    spunaltab = {0};
    unaltab = {0};
#if 0
    phi_t0 = gpunaltab;
    phi_t1 = spunaltab;
    phi_a3_4 = unaltab;
loop_5:
    temp_a2 = 23 & 3;
    phi_v1 = 1;
    phi_v1_4 = 1;
    if (temp_a2 == 0) {
        goto block_9;
    }
    phi_v0_3 = phi_a3_4 + 1;
loop_7:
    temp_v1 = phi_v1 + 1;
    phi_v0_3->unk-1 = 0;
    phi_v0_3 += 1;
    phi_v1 = temp_v1;
    phi_v1_4 = temp_v1;
    if ((temp_a2 + 1) != temp_v1) {
        goto loop_7;
    }
    if (temp_v1 == 0x18) {
        goto block_11;
    }
block_9:
    phi_v0_4 = phi_a3_4 + phi_v1_4;
    phi_v1_2 = phi_v1_4;
loop_10:
    temp_v1_2 = phi_v1_2 + 4;
    phi_v0_4->unk-1 = 0;
    phi_v0_4->unk0 = 0;
    phi_v0_4->unk1 = 0;
    phi_v0_4->unk2 = 0;
    phi_v0_4 += 4;
    phi_v1_2 = temp_v1_2;
    if (temp_v1_2 != 0x18) {
        goto loop_10;
    }
block_11:
    temp_s1 = phi_s1 + 1;
    *phi_t0 = 0;
    *phi_t1 = 0;
    phi_t0 += 1;
    phi_t1 += 1;
    phi_s1 = temp_s1;
    phi_a3_4 += 0x17;
    if (temp_s1 != 0x18) {
        goto loop_5;
    }
#endif

    sp90 = temp_s1;
    if (stat->opc != Ulab) {
        func_0042B1A8();
    }

    sp97 = 0;
    stat = stat;

loop_15:
    temp_t7 = stat->opc - 0x60;
    temp_t8 = temp_t7 < 0x40U;
    phi_t8 = temp_t8;
    if (temp_t8 == 0) {
        goto block_17;
    }
    phi_t8 = (*(&D_10010688 + (((s32) temp_t7 >> 5) * 4)) << temp_t7) < 0;
block_17:

    if (stat->opc == Uret || stat->opc == Uujp) {
        sp97 = 1;
        func_0042AADC();
        func_0042B09C();
        if (do_opt_saved_regs != 0 && sp9C->bvs.stage3.strinsertin != NULL) {
            func_0042A1C8();
        }
        func_0042B144();
    }

block_22:
    temp_v0_3 = stat->opc & 0xFF;
    if (temp_v0_3 < 0x32U) {
        goto block_273;
    }
    if (temp_v0_3 < 0x6BU) {
        goto block_269;
    }
    temp_t8_2 = temp_v0_3 - 121;
    if (temp_v0_3 < 0x8FU) {
        goto block_288;
    }
    temp_t7_2 = temp_v0_3 - 148;
    if (temp_t7_2 >= 8U) {
        goto block_268;
    }
    switch (*(&jtbl_1000B3A0 + (temp_t7_2 * 4)) + saved_reg_gp); // switch 1; unable to parse jump table

    switch (stat->opc) {
        case Uirst: // switch 1
        case Uirsv: // switch 1
            temp_v0_4 = stat->u.store.expr;
            temp_t6 = temp_v0_4->type;
            if (((-(s32) ((u32) temp_t6 < 0x20U) & 0x12000000) << temp_t6) < 0) {
                temp_v0_4->datatype = stat->u.store.u.istr.dtype;
            }
            func_00424FFC(stat->expr, stat->u.store.baseaddr);
            func_00424FFC(stat->u.store.expr, NULL);
            phi_a3 = has_ix;
            if (phi_a3 != 0) {
                temp_v0_5 = stat->u.store.u.istr.dtype;
                phi_a3 = temp_v0_5 == Qdt || temp_v0_5 == Rdt;
            }
            func_004230F0(stat->expr, 3, stat->u.store.baseaddr, phi_a3);
            use_ix = 0U;
            func_004230F0(stat->u.store.expr, 3, NULL, 0U);
            temp_v1_3 = u.unk1;
            OPC = Uirst;
            u.unk1 = (u8) (((stat->u.store.u.istr.dtype ^ ((u32) (temp_v1_3 << 0x1B) >> 0x1B)) & 0x1F) ^ temp_v1_3);
            u.Ucode.I1 = stat->u.store.u.str.unk30;
            u.Ucode.Uopcde.uiequ1.Length = stat->u.store.size;
            u.Ucode.Lexlev = (u16) stat->u.store.u.istr.align;
            u.Ucode.Uopcde.uiequ1.offset = (s32) stat->u.store.u.istr.mtagno;
            if (stat->opc == 0x40) {
                u.Ucode.Lexlev |= 1;
            }
            uwrite(&u);
            goto block_290;

        case Uistr: // switch 5
        case Uistv: // switch 5
            temp_v0_14 = stat->u.store.expr;
            temp_t2_3 = temp_v0_14->type;
            if (((-(s32) ((u32) temp_t2_3 < 0x20U) & 0x12000000) << temp_t2_3) < 0) {
                temp_v0_14->datatype = stat->u.store.u.istr.dtype;
            }
            temp_s0_13 = stat->expr;
            if (temp_s0_13 == 0) {
                phi_v0_7 = 0;
            } else {
                temp_a3_3 = temp_s0_13->type == 1;
                phi_a3_5 = temp_a3_3;
                if (temp_a3_3 != 0) {
                    temp_a3_4 = stat->opc == 0x3F;
                    phi_a3_5 = temp_a3_4;
                    if (temp_a3_4 != 0) {
                        phi_a3_5 = inreg(temp_s0_13->ichain, sp9C, &sp90, 1) == 0;
                    }
                }
                phi_v0_7 = phi_a3_5 & 0xFF;
            }
            if (phi_v0_7 != 0) {
                func_00424FFC(stat->u.store.expr, NULL);
                func_004230F0(stat->u.store.expr, 3, NULL, 0U);
                temp_v1_11 = u.unk1;
                temp_v0_15 = stat->expr;
                OPC = Ustr;
                u.unk1 = (u8) (((stat->u.store.u.istr.dtype ^ ((u32) (temp_v1_11 << 0x1B) >> 0x1B)) & 0x1F) ^ temp_v1_11);
                temp_v1_12 = u.unk1;
                u.unk1 = (u8) (((u32) ((temp_v0_15->unk32 ^ ((u32) (temp_v1_12 << 0x18) >> 0x1D)) << 0x1D) >> 0x18) ^ temp_v1_12);
                u.Ucode.I1 = (s32) ((u32) temp_v0_15->data.isop.unk30 >> 0xB);
                u.Ucode.Uopcde.uiequ1.offset = (s32) ((s32) temp_v0_15->data.isop.opc + stat->u.store.u.str.unk30);
                u.Ucode.Lexlev = 0;
                u.Ucode.Uopcde.uiequ1.Length = stat->u.store.size;
                uwrite(&u);
            } else {
                func_00424FFC(stat->expr, stat->u.store.baseaddr);
                func_00424FFC(stat->u.store.expr, NULL);
                temp_a3_5 = has_ix;
                phi_a3_2 = temp_a3_5;
                if (temp_a3_5 != 0) {
                    temp_v0_16 = stat->u.store.u.istr.dtype;
                    temp_a3_6 = temp_v0_16 == 0xC;
                    phi_a3_2 = temp_a3_6;
                    if (temp_a3_6 == 0) {
                        phi_a3_2 = temp_v0_16 == 0xD;
                    }
                }
                func_004230F0(stat->expr, 3, stat->u.store.baseaddr, phi_a3_2);
                temp_s0_14 = use_ix;
                use_ix = 0U;
                func_004230F0(stat->u.store.expr, 3, NULL, 0U);
                if (temp_s0_14 != 0) {
                    OPC = Uisti;
                } else {
                    OPC = Uistr;
                }
                temp_v1_13 = u.unk1;
                u.unk1 = (u8) (((stat->u.store.u.istr.dtype ^ ((u32) (temp_v1_13 << 0x1B) >> 0x1B)) & 0x1F) ^ temp_v1_13);
                u.Ucode.I1 = (s32) stat->u.store.u.str.unk30;
                u.Ucode.Uopcde.uiequ1.Length = stat->u.store.size;
                u.Ucode.Lexlev = (u16) stat->u.store.u.istr.align;
                u.Ucode.Uopcde.uiequ1.offset = (s32) stat->u.store.u.istr.mtagno;
                if (stat->opc == 0x40) {
                    u.Ucode.Lexlev |= 1;
                }
                uwrite(&u);
            }
            goto block_290;

        case Umov: // switch 2
        case Umovv: // switch 2
            temp_s0_11 = stat->expr;
            temp_t9 = temp_s0_11->type;
            if (((-(s32) ((u32) temp_t9 < 0x20U) & 0x12000000) << temp_t9) < 0) {
                temp_t3 = temp_s0_11->datatype;
                if (((-(s32) ((u32) temp_t3 < 0x20U) & 0x88000000) << temp_t3) >= 0) {
                    temp_s0_11->datatype = 0;
                }
            }
            temp_v0_12 = stat->u.store.expr;
            temp_t4 = temp_v0_12->type;
            if (((-(s32) ((u32) temp_t4 < 0x20U) & 0x12000000) << temp_t4) < 0) {
                temp_t2 = temp_v0_12->datatype;
                if (((-(s32) ((u32) temp_t2 < 0x20U) & 0x88000000) << temp_t2) >= 0) {
                    temp_v0_12->datatype = 0;
                }
            }
            func_00424FFC(stat->expr, stat->u.store.baseaddr);
            func_00424FFC(stat->u.store.expr, (struct Expression *) stat->u.store.u.str.unk2C);
            func_004230F0(stat->expr, 3, stat->u.store.baseaddr, 0U);
            func_004230F0(stat->u.store.expr, 3, (struct Expression *) stat->u.store.u.str.unk2C, 0U);
            OPC = Umov;
            u.unk1 = (u8) ((u.unk1 & 0xFFE0) | 9);
            u.Ucode.Uopcde.uiequ1.Length = stat->u.store.size;
            u.Ucode.I1 = (s32) stat->u.store.u.mov.src_align;
            u.Ucode.Lexlev = (u16) stat->u.store.u.mov.dst_align;
            if (stat->opc == 0x59) {
                u.Ucode.Lexlev |= 1;
            }
            uwrite(&u);
            goto block_290;

        case Utpeq: // switch 6
        case Utpge: // switch 6
        case Utpgt: // switch 6
        case Utple: // switch 6
        case Utplt: // switch 6
        case Utpne: // switch 6
            temp_s0 = stat->expr;
            temp_t5 = temp_s0->type;
            if (((-(s32) ((u32) temp_t5 < 0x20U) & 0x12000000) << temp_t5) < 0) {
                temp_s0->datatype = stat->u.store.u.istr.dtype;
            }
            temp_v0_6 = stat->u.store.expr;
            temp_t6_2 = temp_v0_6->type;
            if (((-(s32) ((u32) temp_t6_2 < 0x20U) & 0x12000000) << temp_t6_2) < 0) {
                temp_v0_6->datatype = stat->u.store.u.istr.dtype;
            }
            func_00424FFC(stat->expr, NULL);
            func_00424FFC(stat->u.store.expr, NULL);
            func_004230F0(stat->expr, 3, NULL, 0U);
            func_004230F0(stat->u.store.expr, 3, NULL, 0U);
            OPC = stat->opc;
            temp_v1_4 = u.unk1;
            u.unk1 = (u8) (((stat->u.store.u.istr.dtype ^ ((u32) (temp_v1_4 << 0x1B) >> 0x1B)) & 0x1F) ^ temp_v1_4);
            u.Ucode.I1 = stat->u.store.u.str.unk30;
            uwrite(&u);
            goto block_290;

        case Ustsp: // switch 6
            func_00424FFC(stat->expr, NULL);
            func_004230F0(stat->expr, 0, NULL, 0U);
            OPC = Ustsp;
            uwrite(&u);
            goto block_290;

        case Uisst: // switch 5
        case Ustr: // switch 6
            if (!stat->outpar) {
                temp_v0_11 = stat->expr->data.isop.unk34;
                if ((temp_v0_11 != 0) && (temp_v0_11->type != 4)) {
                    temp_v0_11->ichain->unk1 = (u8) temp_v0_11->datatype;
                }
                if (stat->unk2 != 1) {
                    if (stat->opc == Uisst) {
                        func_00424FFC(stat->u.store.expr, NULL);
                    }
                    func_00424FFC(stat->expr->data.isop.unk34, NULL);
                    if (stat->opc == Uisst) {
                        func_004230F0(stat->u.store.expr, 0, NULL, 0U);
                    }
                    func_004230F0(stat->expr->data.isop.unk34, 3, NULL, 0U);
                    temp_s0_7 = stat->expr;
                    temp_s0_7->ichain->dtype = temp_s0_7->datatype;
                    temp_s0_8 = stat->expr;
                    temp_s0_8->ichain->isvar_issvar.size = (u8) temp_s0_8->data.isop.opc;
                    if (stat->opc == Ustr) {
                        if (varlodstr(Ustr, stat->expr->ichain, sp9C, 0) != 0) {
                            temp_s0_9 = stat->expr;
                            igen3(Ustr, temp_s0_9->ichain, temp_s0_9->data.isop.datatype);
                        }
                    } else {
                        temp_s0_10 = stat->expr;
                        igen3(Uisst, temp_s0_10->ichain, temp_s0_10->data.isop.datatype);
                    }
                    if (stat->is_increment != 0) {
                        func_0042B890(stat);
                        func_0042BB4C(stat);
                    }
                } else if (stat->is_increment != 0) {
                    func_0042B890(stat, stat->opc);
                    func_0042BB4C(stat);
                }
            }
            goto block_290;

        case Upar: // switch 2
            temp_s0_12 = stat->expr;
            if (temp_s0_12->type != 4) {
                temp_s0_12->ichain->dtype = temp_s0_12->datatype;
            }
            func_00424FFC(stat->expr, NULL);
            temp_a0_3 = curmst;
            if (temp_a0_3->u.store.size->unkC == 0) {
                temp_v1_7 = stat->u.store.var_access_list_item;
                if (temp_v1_7 < 5) {
                    sp8A = 0;
                    phi_s0_3 = 0;
                    if (stat->u.store.unk1C < (s32) temp_a0_3->u.store.var_access_list_item) {
                        phi_s1_2 = firstparmreg->unk4 + temp_v1_7;
                    } else {
                        phi_s1_2 = firstparmreg->unk0 + temp_v1_7;
                    }
                    temp_s1_2 = phi_s1_2 - 1;
                    sp90 = temp_s1_2;
                    if (sp9C->regsused[1][temp_s1_2].unk4 == 0) {
                        func_004230F0(stat->expr, 3, NULL, 0U);
                        if ((mips3_64data == 0) && (temp_t2_2 = (u8) stat->u.store.expr, (((-(s32) ((u32) temp_t2_2 < 0x20U) & 0x5000000) << temp_t2_2) < 0))) {
                            sp8A = 1;
                        } else {
                            genrop(0x7B, sp90, (u8) stat->u.store.expr, stat->u.par.size);
                            sp90 = sp90;
                        }
                    }
                    phi_a2_2 = (u8) stat->u.store.expr;
                } else {
                    func_004230F0(stat->expr, 3, NULL, 0U);
                    phi_a2_2 = (u8) stat->u.store.expr;
                    phi_v0_6 = stat->u.store.unk1C;
                    phi_s0_3 = 1;
                }
            } else {
                temp_v0_13 = stat->u.aent.push;
                if (temp_v0_13 != 0) {
                    sp8A = 0;
                    sp90 = (s32) temp_v0_13;
                    phi_s0_3 = 0;
                    if (sp9C->regsused[1][temp_v0_13].unk4 == 0) {
                        func_004230F0(stat->expr, 3, NULL, 0U);
                        temp_a2_2 = (u8) stat->u.store.expr;
                        phi_a2 = temp_a2_2;
                        if ((temp_a2_2 == 0xC) && ((s32) stat->u.aent.push < 0x18)) {
                            OPC = Ucvt;
                            u.Ucode.Uopcde.uiequ1.Length = 0xC;
                            u.unk1 = (u8) ((u.unk1 & 0xFFE0) | 6);
                            u.Ucode.Lexlev = 0;
                            uwrite(&u);
                            stat->u.store.expr = 6;
                            writeln(err.c_file);
                            write_string(err.c_file, "uopt: Warning: " /* not null-terminated */, 0xFU, 0xFU);
                            write_string(err.c_file, entnam0, 0x400U, entnam0len);
                            write_string(err.c_file, " line " /* not null-terminated */, 6U, 6U);
                            write_integer(err.c_file, curlocln, 0, 10);
                            write_string(err.c_file, ": double float parameter passed for integer;" /* not null-terminated */, 0x2CU, 0x2CU);
                            writeln(err.c_file);
                            fflush(err.c_file);
                            phi_a2 = (u8) stat->u.store.expr;
                        } else {
                            temp_a1 = stat->u.aent.push;
                            if ((((-(s32) ((u32) temp_a2_2 < 0x20U) & 0xC0000) << temp_a2_2) >= 0) && ((s32) temp_a1 >= 0x18)) {
                                OPC = Utyp;
                                if (sizeoftyp(temp_a2_2) == 4) {
                                    u.unk1 = (u8) ((u.unk1 & 0xFFE0) | 0xD);
                                } else {
                                    u.unk1 = (u8) ((u.unk1 & 0xFFE0) | 0xC);
                                }
                                u.Ucode.Lexlev = 0;
                                u.Ucode.Uopcde.uiequ1.Length = (u8) stat->u.store.expr;
                                uwrite(&u);
                                temp_t9_2 = u.unk1 & 0x1F;
                                stat->u.store.expr = temp_t9_2;
                                phi_a2 = temp_t9_2 & 0xFF;
                            } else if ((((-(s32) ((u32) temp_a2_2 < 0x20U) & 0xC0000) << temp_a2_2) < 0) && ((s32) temp_a1 < 0x18)) {
                                OPC = Utyp;
                                if (sizeoftyp(temp_a2_2) == 4) {
                                    u.unk1 = (u8) ((u.unk1 & 0xFFE0) | 6);
                                } else {
                                    u.unk1 = (u8) ((u.unk1 & 0xFFE0) | 5);
                                }
                                u.Ucode.Lexlev = 0;
                                u.Ucode.Uopcde.uiequ1.Length = (u8) stat->u.store.expr;
                                uwrite(&u);
                                temp_t7_3 = u.unk1 & 0x1F;
                                stat->u.store.expr = temp_t7_3;
                                phi_a2 = temp_t7_3 & 0xFF;
                            }
                        }
                        genrop(0x7B, (s32) stat->u.aent.push, phi_a2, stat->u.par.size);
                    }
                    phi_a2_2 = (u8) stat->u.store.expr;
                } else {
                    func_004230F0(stat->expr, 3, NULL, 0U);
                    phi_a2_2 = (u8) stat->u.store.expr;
                    phi_s0_3 = 1;
                }
                phi_v0_6 = stat->u.store.unk1C;
            }
            temp_v1_8 = u.unk1;
            u.unk1 = (u8) (((phi_a2_2 ^ ((u32) (temp_v1_8 << 0x1B) >> 0x1B)) & 0x1F) ^ temp_v1_8);
            u.Ucode.I1 = 0;
            u.unk1 = (u8) ((u.unk1 & 0xFF1F) | 0x40);
            u.Ucode.Uopcde.uiequ1.offset = phi_v0_6;
            u.Ucode.Uopcde.uiequ1.Length = (s32) stat->u.par.size;
            if (phi_s0_3 != 0) {
                temp_v1_9 = u.unk1;
                OPC = Ustr;
                u.Ucode.Lexlev = 0;
                if ((temp_v1_9 & 0x1F) == 9) {
                    u.unk1 = (u8) ((temp_v1_9 & 0xFFE0) | 8);
                }
            } else if (sp8A != 0) {
                sp90 = sp90;
                OPC = Upar;
            } else {
                OPC = Urpar;
                temp_a0_4 = sp90;
                sp90 = sp90;
                u.Ucode.Lexlev = coloroffset(temp_a0_4);
            }
            uwrite(&u);
            goto block_290;

        case Uxpar: // switch 6
            func_004230F0(stat->expr, 4, NULL, 0U);
            OPC = Uxpar;
            u.unk1 = (u8) (u.unk1 & 0xFFE0);
            uwrite(&u);
            goto block_290;

        case Upmov: // switch 2
            func_00424FFC(stat->expr, NULL);
            func_004230F0(stat->expr, 3, NULL, 0U);
            if (curmst->u.store.size->unkC != 0) {
                OPC = Umpmv;
            } else {
                OPC = Upmov;
            }
            temp_t4_2 = (u.unk1 & 0xFFE0) | 9;
            temp_t8_3 = temp_t4_2 & 0xFF1F;
            u.unk1 = temp_t4_2;
            u.unk1 = (u8) (temp_t8_3 | 0x40);
            u.Ucode.I1 = 0;
            u.Ucode.Uopcde.uiequ1.offset = (s32) (u16) stat->u.store.u.mov.offset;
            u.Ucode.Uopcde.uiequ1.Length = stat->u.store.size;
            u.Ucode.Lexlev = (u16) stat->u.store.u.mov.src_align;
            uwrite(&u);
            goto block_290;

        case Umst: // switch 2
            curmst = stat;
            OPC = Umst;
            u.Ucode.Lexlev = (u16) stat->u.store.expr;
            uwrite(&u);
            goto block_290;

        case Utjp: // switch 6
        case Ufjp:
block_135:
            sp97 = 1;
            func_00424FFC(stat->expr, NULL);
            func_0042AADC();
            func_004230F0(stat->expr, 0, NULL, 0U);
            func_0042B09C();
            if ((do_opt_saved_regs != 0) && (sp9C->bvs.stage2.unk11C.blocks != 0)) {
                func_0042A1C8();
            }
            u.Ucode.Lexlev = 0;
            if (usefeedback != 0) {
                temp_a0_5 = sp9C->successors;
                temp_v1_14 = stat->next->graphnode;
                temp_a1_2 = temp_a0_5->graphnode;
                if (temp_v1_14->num == temp_a1_2->num) {
                    temp_v0_17 = temp_v1_14->unk2C;
                    temp_a1_3 = temp_a0_5->next->graphnode->unk2C;
                    if (temp_v0_17 < temp_a1_3) {
                        u.Ucode.Lexlev = 1;
                    } else if (temp_a1_3 < temp_v0_17) {
                        u.Ucode.Lexlev = 2;
                    }
                } else {
                    temp_v0_18 = temp_v1_14->unk2C;
                    temp_a0_6 = temp_a1_2->unk2C;
                    if (temp_v0_18 < temp_a0_6) {
                        u.Ucode.Lexlev = 1;
                    } else if (temp_a0_6 < temp_v0_18) {
                        u.Ucode.Lexlev = 2;
                    }
                }
            }
            if (sp9C->jump_bbs == 0) {
                OPC = stat->opc;
                u.Ucode.I1 = (s32) stat->u.store.expr;
                uwrite(&u);
                func_00425594(sp9C->fallthrough_bbs);
            } else {
                if (stat->opc == 0x26) {
                    OPC = Utjp;
                } else {
                    OPC = Ufjp;
                }
                temp_v0_19 = u.Ucode.Lexlev;
                temp_t4_3 = maxlabnam + 1;
                u.Ucode.I1 = temp_t4_3;
                maxlabnam = temp_t4_3;
                if (temp_v0_19 != 0) {
                    u.Ucode.Lexlev = 3 - temp_v0_19;
                }
                uwrite(&u);
                func_00425594(sp9C->jump_bbs);
                OPC = Uujp;
                u.Ucode.I1 = (s32) stat->u.store.expr;
                uwrite(&u);
                OPC = Ulab;
                u.Ucode.Lexlev = 0;
                u.Ucode.Uopcde.uiequ1.Length = 0;
                u.Ucode.I1 = maxlabnam;
                uwrite(&u);
                func_00425594(sp9C->fallthrough_bbs);
            }
            goto block_290;

        case Uujp: // switch 6
            OPC = stat->opc;
            u.Ucode.I1 = (s32) stat->u.store.expr;
            uwrite(&u);
            goto block_290;

        case Ulab: // switch 5
            OPC = stat->opc;
            u.Ucode.I1 = (s32) stat->u.store.expr;
            u.Ucode.Lexlev = (u16) (u8) stat->u.store.baseaddr;
            u.Ucode.Uopcde.uiequ1.Length = (s32) stat->u.store.var_access_list_item;
            uwrite(&u);
            func_0042B1A8();
            goto block_290;

        case Uxjp: // switch 6
            temp_s0_2 = stat->expr;
            if ((temp_s0_2->type == 2) && (temp_v0_7 = temp_s0_2->datatype, (temp_v0_7 != 5)) && (temp_v0_7 != 7)) {
                func_0042AADC(temp_s0_2, NULL);
                func_0042B09C();
                if ((do_opt_saved_regs != 0) && (sp9C->bvs.stage2.unk11C.blocks != 0)) {
                    func_0042A1C8();
                }
                OPC = Uujp;
                temp_v1_5 = stat->u.store.ichain;
                temp_s0_3 = stat->expr->data.isop.opc;
                if ((temp_s0_3 < temp_v1_5) || (stat->u.store.u.str.unk30 < temp_s0_3)) {
                    u.Ucode.I1 = stat->u.store.unk1C;
                } else {
                    temp_s0_4 = (temp_s0_3 - temp_v1_5) + 1;
                    temp_a0_2 = -(s32) (temp_s0_4 & 3);
                    temp_v0_8 = stat->u.store.size;
                    phi_s0 = temp_s0_4;
                    phi_s0_2 = temp_s0_4;
                    phi_v0_14 = (void *) temp_v0_8;
                    phi_v0_15 = (void *) temp_v0_8;
                    if (temp_a0_2 != 0) {
                        do {
                            temp_s0_5 = phi_s0 - 1;
                            temp_v0_9 = phi_v0_14->unk8;
                            phi_s0 = temp_s0_5;
                            phi_s0_2 = temp_s0_5;
                            phi_v0_5 = temp_v0_9;
                            phi_v0_14 = temp_v0_9;
                            phi_v0_15 = temp_v0_9;
                        } while ((temp_a0_2 + temp_s0_4) != temp_s0_5);
                        if (temp_s0_5 != 0) {
                            goto loop_171;
                        }
                    } else {
                        do {
loop_171:
                            temp_s0_6 = phi_s0_2 - 4;
                            temp_v0_10 = phi_v0_15->unk8->unk8->unk8->unk8;
                            phi_s0_2 = temp_s0_6;
                            phi_v0_5 = temp_v0_10;
                            phi_v0_15 = temp_v0_10;
                        } while (temp_s0_6 != 0);
                    }
                    u.Ucode.I1 = phi_v0_5->unk14;
                }
                uwrite(&u);
            } else {
                sp97 = 1;
                func_00424FFC(temp_s0_2, NULL);
                func_0042AADC();
                func_004230F0(stat->expr, 0, NULL, 0U);
                func_0042B09C();
                if ((do_opt_saved_regs != 0) && (sp9C->bvs.stage2.unk11C.blocks != 0)) {
                    func_0042A1C8();
                }
                temp_v1_6 = u.unk1;
                OPC = Uxjp;
                u.unk1 = (u8) ((((u8) stat->u.store.expr ^ ((u32) (temp_v1_6 << 0x1B) >> 0x1B)) & 0x1F) ^ temp_v1_6);
                u.Ucode.I1 = stat->u.store.var_access_list_item;
                u.Ucode.Uopcde.uiequ1.Length = stat->u.store.unk1C;
                u.Ucode.Uopcde.uiequ1.uop2.Constval.dwpart.dwval_l = stat->u.store.ichain;
                u.Ucode.Uopcde.uiequ1.uop2.Constval.dwval = stat->u.store.baseaddr;
                u.Ucode.Uopcde.uiequ1.uop2.uxjp.swbnds.hbound_l = stat->u.store.u.str.unk30;
                u.Ucode.Uopcde.uiequ1.uop2.uxjp.dwbnds.hbound = (s32) stat->u.store.u.str.unk2C;
                uwrite(&u);
            }
            goto block_290;

block_178:
        case Uijp:
            sp97 = 1;
            if (stat->expr == 0) {
                dbgerror(0x45C);
            }
            func_00424FFC(stat->expr, NULL);
            func_0042AADC();
            func_004230F0(stat->expr, 0, NULL, 0U);
            func_0042B09C();
            if ((do_opt_saved_regs != 0) && (sp9C->bvs.stage2.unk11C.blocks != 0)) {
                func_0042A1C8();
            }
            func_0042B144();
            OPC = Uijp;
            uwrite(&u);
            goto block_290;

        case Uaos: // switch 4
            func_00424FFC(stat->expr, NULL);
            func_004230F0(stat->expr, 0, NULL, 0U);
            OPC = 5;
            uwrite(&u);
            goto block_290;

        case Uclab: // switch 3
            if (stat->u.store.unk1C != 0) {
                OPC = Uclab;
                u.Ucode.I1 = (s32) stat->u.store.expr;
                u.Ucode.Uopcde.uiequ1.Length = (s32) stat->u.store.var_access_list_item;
                uwrite(&u);
                temp_s3 = stat->u.store.var_access_list_item;
                if ((s32) temp_s3 > 0) {
                    temp_s3_2 = temp_s3 + 1;
                    phi_s0_4 = 1;
                    do {
                        temp_s4_2 = stat->next;
                        OPC = temp_s4_2->opc;
                        u.Ucode.I1 = temp_s4_2->u.store.expr;
                        uwrite(&u);
                        temp_s0_15 = phi_s0_4 + 1;
                        stat = temp_s4_2;
                        phi_s0_4 = temp_s0_15;
                        stat = temp_s4_2;
                    } while (temp_s0_15 != temp_s3_2);
                }
            } else {
                temp_s3_3 = stat->u.store.var_access_list_item;
                if ((s32) temp_s3_3 > 0) {
                    temp_s3_4 = temp_s3_3 + 1;
                    temp_v1_17 = (s32) (temp_s3_4 - 1) & 3;
                    phi_s0_5 = 1;
                    phi_s0_6 = 1;
                    if (temp_v1_17 != 0) {
                        do {
                            temp_s0_16 = phi_s0_5 + 1;
                            temp_s4_3 = stat->next;
                            phi_s0_5 = temp_s0_16;
                            phi_s0_6 = temp_s0_16;
                            stat = temp_s4_3;
                            stat = temp_s4_3;
                            stat = temp_s4_3;
                        } while ((temp_v1_17 + 1) != temp_s0_16);
                        if (temp_s0_16 != temp_s3_4) {
                            goto loop_195;
                        }
                    } else {
                        do {
loop_195:
                            temp_s0_17 = phi_s0_6 + 4;
                            temp_s4_4 = stat->next->unk8->unk8->unk8;
                            phi_s0_6 = temp_s0_17;
                            stat = temp_s4_4;
                            stat = temp_s4_4;
                        } while (temp_s0_17 != temp_s3_4);
                    }
                }
            }
            goto block_290;

        case Udef: // switch 3
            temp_v1_18 = u.unk1;
            temp_a2_3 = (u8) stat->u.store.expr;
            OPC = Udef;
            u.unk1 = (u8) (((u32) ((temp_a2_3 ^ ((u32) (temp_v1_18 << 0x18) >> 0x1D)) << 0x1D) >> 0x18) ^ temp_v1_18);
            if (temp_a2_3 == 1) {
                sp95 = 1;
                u.Ucode.Uopcde.uiequ1.Length = highestmdef;
            } else {
                u.Ucode.Uopcde.uiequ1.Length = (s32) stat->u.store.var_access_list_item;
            }
            uwrite(&u);
            goto block_290;

        case Ubgnb: // switch 4
        case Uendb:
block_201:
            OPC = stat->opc;
            u.Ucode.I1 = (s32) stat->u.store.expr;
            uwrite(&u);
            goto block_290;

        case Uret: // switch 2
            if (lang == 3) {
                epilog(sp9C, stat->opc);
            }
            OPC = Uret;
            uwrite(&u);
            goto block_290;

        case Uloc: // switch 2
            OPC = Uloc;
            u.Ucode.Lexlev = (u16) stat->u.store.expr;
            u.Ucode.I1 = (s32) stat->u.store.var_access_list_item;
            uwrite(&u);
            curlocpg = (s32) stat->u.store.expr;
            curlocln = (s32) stat->u.store.var_access_list_item;
            goto block_290;

        case Uchkt: // switch 3
            temp_s0_18 = stat->expr;
            if ((temp_s0_18->type == 2) && ((s32) temp_s0_18->data.isop.opc == 0)) {
                boundswarning();
            }
            func_00424FFC(stat->expr, NULL);
            func_004230F0(stat->expr, 0, NULL, 0U);
            OPC = Uchkt;
            u.Ucode.Lexlev = 0;
            uwrite(&u);
            goto block_290;

        case Upop: // switch 2
            if ((stat->u.par.size != 0) && (stat->u.aent.push != 0)) {
                func_004230F0(stat->expr, 3, NULL, 0U);
                gettemp(&sp84, 4);
                spilltemplodstr(0x7B, 2, sp84);
                func_0042AADC();
                spilltemplodstr(0x52, 2, sp84);
            } else {
                func_00424FFC(stat->expr, NULL);
                if (stat->u.par.size != 0) {
                    func_0042AADC();
                }
                func_004230F0(stat->expr, 3, NULL, 0U);
                if (stat->u.par.size == 0) {
                    temp_v1_10 = u.unk1;
                    OPC = Upop;
                    u.unk1 = (u8) ((((u8) stat->u.store.expr ^ ((u32) (temp_v1_10 << 0x1B) >> 0x1B)) & 0x1F) ^ temp_v1_10);
                    uwrite(&u);
                } else if ((OPC == 0x52) && (((u32) (u.unk1 << 0x18) >> 0x1D) == 3) && (u.Ucode.Uopcde.uiequ1.offset == 0x1F)) {
                    OPC = Ustr;
                    u.Ucode.Uopcde.uiequ1.offset = 0xF;
                    uwrite(&u);
                    OPC = Ulod;
                    uwrite(&u);
                }
            }
            goto block_290;

        case Urcuf: // switch 1
        case Ucup: // switch 3
        case Uicuf:
block_221:
            sp97 = 1;
            numcalls += 1;
            if (stat->opc == Ucup) {
                func_0042AADC();
            }
            func_0042B09C();
            temp_a1_4 = stat->opc;
            OPC = temp_a1_4;
            temp_v1_15 = u.unk1;
            u.unk1 = (u8) ((((u8) stat->u.store.var_access_list_item ^ ((u32) (temp_v1_15 << 0x1B) >> 0x1B)) & 0x1F) ^ temp_v1_15);
            if (temp_a1_4 == 0x17) {
                u.Ucode.I1 = (s32) stat->u.store.expr->type;
                u.Ucode.Lexlev = (u16) stat->u.call.level;
            } else if (temp_a1_4 == 0x97) {
                u.Ucode.I1 = stat->u.store.size;
            }
            u.Ucode.Uopcde.uiequ1.Length = stat->u.store.unk1C;
            u.unk9 = (u8) stat->u.store.unk1D;
            u.Ucode.Uopcde.uiequ1.offset = (s32) stat->u.call.extrnal_flags;
            uwrite(&u);
            if ((do_opt_saved_regs != 0) && (sp9C->bvs.stage2.unk11C.blocks != 0)) {
                func_0042A1C8();
            }
            func_0042B144();
            if ((s32) curmst->u.store.unk1C >= 0) {
                gen_outparcode(sp9C->successors->graphnode);
            }
            goto block_290;

        case Ucia: // switch 3
            sp97 = 1;
            func_0042AADC();
            func_0042B09C();
            temp_a1_5 = (s32) stat->u.store.unk1C;
            OPC = Ucia;
            u.Ucode.Uopcde.uiequ1.Length = temp_a1_5;
            u.Ucode.Lexlev = (u16) (u8) stat->u.store.var_access_list_item;
            temp_v1_19 = u.unk1;
            u.unk1 = (u8) (((stat->u.call.level ^ ((u32) (temp_v1_19 << 0x1B) >> 0x1B)) & 0x1F) ^ temp_v1_19);
            u.Ucode.Uopcde.uiequ1.offset = stat->u.store.size;
            u.Ucode.Uopcde.uiequ1.uop2.Constval.dwval = temp_a1_5;
            temp_a0_7 = stat->u.store.expr;
            temp_v0_20 = strpdisplace;
            phi_v0_8 = temp_v0_20;
            if (temp_v0_20 < (s32) temp_a0_7) {
                if (temp_a0_7 != temp_v0_20) {
                    do {
                        next_char(strp.c_file);
                        temp_v0_21 = strpdisplace + 1;
                        strpdisplace = temp_v0_21;
                    } while (stat->u.store.expr != temp_v0_21);
                    phi_v0_8 = temp_v0_21;
                }
            } else if ((s32) temp_a0_7 < temp_v0_20) {
                reset(&strp, " " /* not null-terminated */, 0, 0);
                strpdisplace = 0;
                phi_v0_8 = 0;
                if (stat->u.store.expr != 0) {
                    do {
                        next_char(strp.c_file);
                        temp_v0_22 = strpdisplace + 1;
                        strpdisplace = temp_v0_22;
                        phi_v0_8 = temp_v0_22;
                    } while (stat->u.store.expr != temp_v0_22);
                }
            }
            temp_a1_6 = (s32) stat->u.store.unk1C;
            phi_a1 = temp_a1_6;
            if (temp_a1_6 > 0) {
                temp_s3_5 = temp_a1_6 + 1;
                phi_s0_7 = 1;
                do {
                    if (eoln(strp.c_file) != 0) {
                        readln(strp.c_file);
                        ustrptr[phi_s0_7].unk-1 = 10;
                    } else {
                        ustrptr[phi_s0_7].unk-1 = read_char(strp.c_file);
                    }
                    temp_s0_19 = phi_s0_7 + 1;
                    phi_s0_7 = temp_s0_19;
                } while (temp_s0_19 != temp_s3_5);
                phi_v0_8 = strpdisplace;
                phi_a1 = (s32) stat->u.store.unk1C;
            }
            strpdisplace = phi_v0_8 + phi_a1;
            u.Ucode.Uopcde.uiequ1.uop2.Constval.dwpart.dwval_l = (s32) ustrptr;
            uwrite(&u);
            if ((do_opt_saved_regs != 0) && (sp9C->bvs.stage2.unk11C.blocks != 0)) {
                func_0042A1C8();
            }
            func_0042B144();
            goto block_290;

        case Uaent: // switch 4
            temp_v1_22 = u.unk1;
            OPC = 3;
            u.unk1 = (u8) ((((u8) stat->u.store.expr ^ ((u32) (temp_v1_22 << 0x1B) >> 0x1B)) & 0x1F) ^ temp_v1_22);
            u.Ucode.Lexlev = (u16) curlevel;
            u.Ucode.I1 = (s32) stat->u.store.var_access_list_item;
            u.Ucode.Uopcde.uiequ1.Length = stat->u.par.size;
            u.unk9 = (u8) stat->u.aent.push;
            u.Ucode.Uopcde.uiequ1.offset = (s32) stat->u.aent.extrnal_flags;
            uwrite(&u);
            temp_t4_5 = (u.unk1 & 0xFFE0) | 8;
            temp_t9_4 = temp_t4_5 & 0xFF1F;
            u.unk1 = temp_t4_5;
            temp_s3_6 = (s32) stat->u.store.unk1C;
            OPC = Updef;
            u.unk1 = (u8) (temp_t9_4 | 0x40);
            u.Ucode.Uopcde.uiequ1.Length = 4;
            u.Ucode.Lexlev = 1;
            u.Ucode.I1 = curblk;
            if (temp_s3_6 > 0) {
                temp_s2 = ((temp_s3_6 + 1) * 4) - 4;
                phi_s1_3 = 0;
                do {
                    u.Ucode.Uopcde.uiequ1.offset = phi_s1_3;
                    uwrite(&u);
                    temp_s1_3 = phi_s1_3 + 4;
                    phi_s1_3 = temp_s1_3;
                } while (temp_s1_3 != temp_s2);
            }
            if (staticlinkloc != 0) {
                gen_static_link();
            }
            if (do_opt_saved_regs != 0) {
                func_0042A7D0();
            }
            temp_s3_7 = (s32) stat->u.store.unk1C;
            temp_t3_2 = (u.unk1 & 0xFFE0) | 8;
            temp_t2_4 = temp_t3_2 & 0xFF1F;
            u.unk1 = temp_t3_2;
            OPC = Urstr;
            u.unk1 = (u8) (temp_t2_4 | 0x40);
            u.Ucode.Uopcde.uiequ1.Length = 4;
            u.Ucode.I1 = curblk;
            phi_s3 = temp_s3_7;
            if (temp_s3_7 >= 5) {
                phi_s3 = 4;
            }
            if (phi_s3 > 0) {
                phi_s1_4 = 0;
                phi_s0_8 = 1;
                do {
                    u.Ucode.Uopcde.uiequ1.offset = phi_s1_4;
                    u.Ucode.Lexlev = coloroffset((firstparmreg->unk0 + phi_s0_8) - 1);
                    uwrite(&u);
                    temp_s0_20 = phi_s0_8 + 1;
                    phi_s1_4 += 4;
                    phi_s0_8 = temp_s0_20;
                } while (temp_s0_20 != (phi_s3 + 1));
            }
            func_0042B1A8();
            goto block_290;

        case Ulbgn: // switch 5
            OPC = stat->opc;
            u.Ucode.I1 = (s32) stat->u.store.expr;
            uwrite(&u);
            goto block_290;

        case Ulbdy: // switch 5
            OPC = stat->opc;
            u.Ucode.Lexlev = (u16) (u8) stat->u.store.expr;
            uwrite(&u);
            goto block_290;

        case Ultrm: // switch 2
        case Ulend:
block_265:
            OPC = stat->opc;
            uwrite(&u);
            goto block_290;

        case Uclbd: // switch 3
        case Ucubd: // switch 3
        case Ustep: // switch 6
            temp_v1_16 = u.unk1;
            OPC = stat->opc;
            u.unk1 = (u8) ((((u8) stat->u.store.expr ^ ((u32) (temp_v1_16 << 0x1B) >> 0x1B)) & 0x1F) ^ temp_v1_16);
            u.Ucode.I1 = (s32) stat->u.store.var_access_list_item;
            uwrite(&u);
            goto block_290;

        case Uctrl: // switch 3
            temp_v1_20 = u.unk1;
            OPC = Uctrl;
            u.unk1 = (u8) ((((u8) stat->u.store.expr ^ ((u32) (temp_v1_20 << 0x1B) >> 0x1B)) & 0x1F) ^ temp_v1_20);
            u.Ucode.Uopcde.uiequ1.Length = (s32) stat->u.par.size;
            u.Ucode.Uopcde.uiequ1.offset = (s32) stat->u.store.var_access_list_item;
            u.Ucode.I1 = (s32) ((u32) stat->u.store.unk1C >> 0xB);
            temp_v1_21 = u.unk1;
            u.unk1 = (u8) (((u32) ((stat->u.store.unk1E ^ ((u32) (temp_v1_21 << 0x18) >> 0x1D)) << 0x1D) >> 0x18) ^ temp_v1_21);
            uwrite(&u);
            goto block_290;

        case Unop: // switch 2
            break;

        case Uldrc: // switch 1
        case Umsym: // switch 1
        case Uksym: // switch 1
        case Uosym: // switch 1
        case Uirlv: // switch 1
        case Ulod: // switch 2
        case Ulsym: // switch 2
        case Umax: // switch 2
        case Umin: // switch 2
        case Umod: // switch 2
        case Umpmv: // switch 2
        case Umpy: // switch 2
        case Umus: // switch 2
        case Uneg: // switch 2
        case Uneq: // switch 2
        case Unot: // switch 2
        case Uodd: // switch 2
        case Uoptn: // switch 2
        case Updef: // switch 2
        case Uregs: // switch 2
        case Urem: // switch 2
        case Ucomm: // switch 3
        case Ucsym: // switch 3
        case Ucvt: // switch 3
        case Ucvtl: // switch 3
        case Udec: // switch 3
        case Uand: // switch 4
        case Uasym: // switch 4
        case Ubgn: // switch 4
        case Uixa: // switch 5
        case Ulbd: // switch 5
        case Ustp: // switch 6
        case Usub: // switch 6
        case Uswp: // switch 6
        case Utyp: // switch 6
        case Uubd: // switch 6
        case Uunal: // switch 6
        case Uuni: // switch 6
        case Uvreg: // switch 6
        case Uxor: // switch 6
block_268:
            dbgerror(0x212);
            goto block_290;
#if 0
block_269:
            temp_t5_2 = temp_v0_3 - 62;
            if (temp_v0_3 < 0x46U) {
                goto block_286;
            }
            temp_t6_3 = temp_v0_3 - 81;
            if (temp_v0_3 == Ulend) {
                goto block_265;
            }
            if (temp_t6_3 >= 0x1AU) {
                goto block_268;
            }
            switch (*(&jtbl_1000B2E0 + (temp_t6_3 * 4)) + saved_reg_gp); // switch 2; unable to parse jump table
block_273:
            if (temp_v0_3 < 0x21U) {
                goto block_278;
            }
            if (temp_v0_3 == Ufjp) {
                goto block_135;
            }
            if (temp_v0_3 == Uicuf) {
                goto block_221;
            }
            if (temp_v0_3 == Uijp) {
                goto block_178;
            }
            goto block_268;
block_278:
            temp_t4_4 = temp_v0_3 - 3;
            if (temp_v0_3 < 9U) {
                goto block_282;
            }
            temp_t9_3 = temp_v0_3 - 15;
            if (temp_v0_3 >= 0x1CU) {
                goto block_284;
            }
            if (temp_t9_3 >= 0xDU) {
                goto block_268;
            }
            switch (*(&jtbl_1000B28C + (temp_t9_3 * 4)) + saved_reg_gp); // switch 3; unable to parse jump table
block_282:
            if (temp_t4_4 >= 6U) {
                goto block_268;
            }
            switch (*(&jtbl_1000B274 + (temp_t4_4 * 4)) + saved_reg_gp); // switch 4; unable to parse jump table
block_284:
            if (temp_v0_3 == Uendb) {
                goto block_201;
            }
            goto block_268;
block_286:
            if (temp_t5_2 >= 8U) {
                goto block_268;
            }
            switch (*(&jtbl_1000B2C0 + (temp_t5_2 * 4)) + saved_reg_gp); // switch 5; unable to parse jump table
block_288:
            if (temp_t8_2 >= 0x16U) {
                goto block_268;
            }
            switch (*(&jtbl_1000B348 + (temp_t8_2 * 4)) + saved_reg_gp); // switch 6; unable to parse jump table
#endif
    }

block_290:
    temp_s4_5 = stat->next;
    stat = temp_s4_5;
    if ((temp_s4_5 != 0) && (sp9C != temp_s4_5->graphnode)) {
        sp97 = 0;
        if (sp97 == 0) {
            func_0042AADC();
            func_0042B09C();
            if ((do_opt_saved_regs != 0) && (sp9C->bvs.stage2.unk11C.blocks != 0)) {
                func_0042A1C8();
            }
            func_0042B144();
        }
        sp9C = temp_s4_5->graphnode;
        findbbtemps(temp_s4_5->graphnode);
        temp_a3_7 = mipsflag == 3;
        phi_a3_3 = temp_a3_7;
        if (temp_a3_7 != 0) {
            phi_a3_3 = func_0042BE58(sp9C->loop);
        }
        has_ix = phi_a3_3;
        if ((phi_a3_3 & 0xFF) != 0) {
            loopno = (s32) sp9C->loop->loopno;
        }
        if (genbbnum) {
            OPC = Ucomm;
            u.unk1 = (u8) ((u.unk1 & 0xFFE0) | 9);
            u.Ucode.Uopcde.uiequ1.uop2.Constval.dwval = 20;
            if (sp9C->terminal == 0) {
                ustrptr[0] = '?';
            } else {
                ustrptr[0] = '-';
            }
            ustrptr[1] = '-';
            ustrptr[2] = '-';
            ustrptr[3] = 'B';
            ustrptr[4] = 'B';
            ustrptr[5] = ' ';
            phi_t4 = sp9C->num % 1000;
            if (phi_t4 < 0) {
                phi_t4 = phi_t4 + 1000;
            }
            ustrptr[6] = ((phi_t4 / 100) + '0');
            temp_hi_2 = (u32) sp9C->num % 100;
            phi_t7 = temp_hi_2;
            if ((temp_hi_2 ^ 0x64U) < 0) {
                phi_t7 = temp_hi_2 + 0x64U;
            }
            ustrptr[7] = (s8) ((phi_t7 / 10) + 0x30);
            temp_hi_3 = (u32) sp9C->num % 10;
            phi_t3 = temp_hi_3;
            if ((temp_hi_3 ^ 10) < 0) {
                phi_t3 = temp_hi_3 + 10;
            }
            ustrptr[8] = (s8) (phi_t3 + 0x30);
            ustrptr[9] = ' ';
            func_0042BD94(sp9C->unk2C, 10, '-', 0x20);
            u.Ucode.Uopcde.uiequ1.uop2.Constval.dwpart.dwval_l = (s32) ustrptr;
            uwrite(&u);
        }
        func_00422AF0();
        if ((sp9C->blockno == 0) && (sp9C->stat_head->opc != 3)) {
            func_0042B1A8();
        }
    }
block_315:
    if (temp_s4_5 != 0) {
        goto loop_15;
    }

    if (sp97 == 0) {
        func_0042B09C();
        if ((do_opt_saved_regs != 0) && (sp9C->bvs.stage2.unk11C.blocks != 0)) {
            func_0042A1C8();
        }
    }
    if (sp95 == 0) {
        OPC = Udef;
        u.unk1 = (u8) ((u.unk1 & 0xFF1F) | 0x20);
        u.Ucode.Uopcde.uiequ1.Length = highestmdef;
        uwrite(&u);
    }
    if (allcallersave != 0) {
        temp_s0_21 = curproc->regstaken_parregs;
        if (propagate_ee_saves != 0) {
            temp_s3_8 = firsteereg->unk0;
            temp_a1_7 = lasteereg->unk0;
            phi_s1_5 = temp_s3_8;
            if (temp_a1_7 >= temp_s3_8) {
                phi_v0_9 = &temp_s0_21->regstaken[temp_s3_8];
                do {
                    temp_t2_5 = phi_s1_5 - 0xD;
                    if ((phi_v0_9->unk-1 != 0) && (((ugen_saved_eeregs & -(s32) (temp_t2_5 < 0x20U)) << temp_t2_5) >= 0)) {
                        phi_v0_9->unk-1 = 0U;
                    }
                    temp_s1_4 = phi_s1_5 + 1;
                    phi_v0_9 += 1;
                    phi_s1_5 = temp_s1_4;
                } while (temp_s1_4 != (temp_a1_7 + 1));
            }
            temp_s3_9 = firsteereg->unk4;
            temp_a1_8 = lasteereg->unk4;
            phi_s1_6 = temp_s3_9;
            if (temp_a1_8 >= temp_s3_9) {
                phi_v0_10 = &temp_s0_21->regstaken[temp_s3_9];
                do {
                    temp_t3_3 = phi_s1_6 - 0xD;
                    if ((phi_v0_10->unk-1 != 0) && (((ugen_saved_eeregs & -(s32) (temp_t3_3 < 0x20U)) << temp_t3_3) >= 0)) {
                        phi_v0_10->unk-1 = 0U;
                    }
                    temp_s1_5 = phi_s1_6 + 1;
                    phi_v0_10 += 1;
                    phi_s1_6 = temp_s1_5;
                } while (temp_s1_5 != (temp_a1_8 + 1));
            }
        } else {
            temp_s3_10 = firsteereg->unk0;
            temp_a1_9 = lasteereg->unk0;
            phi_s1_7 = temp_s3_10;
            if (temp_a1_9 >= temp_s3_10) {
                phi_v0_11 = &temp_s0_21->regstaken[temp_s3_10];
                do {
                    temp_s1_6 = phi_s1_7 + 1;
                    phi_v0_11->unk-1 = 0;
                    phi_v0_11 += 1;
                    phi_s1_7 = temp_s1_6;
                } while (temp_s1_6 != (temp_a1_9 + 1));
            }
            temp_s3_11 = firsteereg->unk4;
            temp_a1_10 = lasteereg->unk4;
            phi_s1_8 = temp_s3_11;
            if (temp_a1_10 >= temp_s3_11) {
                phi_v0_12 = &temp_s0_21->regstaken[temp_s3_11];
                do {
                    temp_s1_7 = phi_s1_8 + 1;
                    phi_v0_12->unk-1 = 0;
                    phi_v0_12 += 1;
                    phi_s1_8 = temp_s1_7;
                } while (temp_s1_7 != (temp_a1_10 + 1));
            }
        }
        temp_s0_21->unkC = 1U;
        temp_v0_23 = &temp_s0_21->regstaken[regsinclass1];
        temp_v0_23->unk-1 = 1U;
        if (someusefp != 0) {
            temp_v0_23->unk-2 = 1U;
        }
        temp_s3_12 = firsterreg->unk4;
        temp_a1_11 = lasterreg->unk4;
        phi_s1_9 = temp_s3_12;
        if (temp_a1_11 >= temp_s3_12) {
            phi_v0_13 = &temp_s0_21->regstaken[temp_s3_12];
            do {
                temp_s1_8 = phi_s1_9 + 1;
                phi_v0_13->unk-1 = 1U;
                phi_v0_13 += 1;
                phi_s1_9 = temp_s1_8;
            } while (temp_s1_8 != (temp_a1_11 + 1));
        }
    }
block_348:
    return;
}
#endif
