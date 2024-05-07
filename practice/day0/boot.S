.section .text
.global _start
_start:
    la sp,stack_start
    li t0,4096
    add sp,sp,10
1:
    j 1b

.section .data
.align 12
.global stack_start
stack_start:
    .skip 4096
