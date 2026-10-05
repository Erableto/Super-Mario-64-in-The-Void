#include "macros.inc"
.set UCODE_SIZE, 0x800

.section .text

.balign 16
glabel gspFast3D_fifoTextStart
#if F3D_OLD == 1
    .incbin "lib/PR/f3d_old/fifo/F3D_old.bin"
#elif F3D_NEW == 1
    .incbin "lib/PR/f3d_new/fifo/F3D_new.bin"
#else
    .incbin "lib/PR/f3d_old/fifo/F3D_old.bin"
#endif
glabel gspFast3D_fifoTextEnd

/* DATA SECTION START */

.section .data

.balign 16
glabel gspFast3D_fifoDataStart
#if F3D_OLD == 1
    .incbin "lib/PR/f3d_old/fifo/F3D_old_data.bin"
#elif F3D_NEW == 1
    .incbin "lib/PR/f3d_new/fifo/F3D_new_data.bin"
#else
    .incbin "lib/PR/f3d_old/fifo/F3D_old_data.bin"
#endif
glabel gspFast3D_fifoDataEnd
