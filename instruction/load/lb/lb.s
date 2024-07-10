	.file	"lb.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_c2p0_zicsr2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
	.section	.rodata
	.align	3
.LC1:
	.string	"byte = %#x\n"
	.text
	.align	1
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	lui	a5,%hi(.LC0)
	ld	a5,%lo(.LC0)(a5)
	sd	a5,-32(s0)
	sb	zero,-17(s0)
	addi	a5,s0,-32
#APP
# 8 "lb.c" 1
	lb a5,(a5)
# 0 "" 2
#NO_APP
	sb	a5,-17(s0)
	lbu	a5,-17(s0)
	sext.w	a5,a5
	mv	a1,a5
	lui	a5,%hi(.LC1)
	addi	a0,a5,%lo(.LC1)
	call	printf
	li	a5,0
	mv	a0,a5
	ld	ra,24(sp)
	.cfi_restore 1
	ld	s0,16(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align	3
.LC0:
	.dword	1234605616436508552
	.ident	"GCC: (g13bf9232fc1) 13.2.1 20240430"
	.section	.note.GNU-stack,"",@progbits
