	.file	"main.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "Undefined!\0"
LC2:
	.ascii "PI: %lf\12\0"
LC3:
	.ascii "MAX: %d\12\0"
LC4:
	.ascii "pause\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$16, %esp
	call	___main
	movl	$LC0, (%esp)
	call	_puts
	fldl	LC1
	fstpl	4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	movl	$5, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	movl	$LC4, (%esp)
	call	_system
	movl	$0, %eax
	leave
	ret
	.section .rdata,"dr"
	.align 8
LC1:
	.long	1374389535
	.long	1074339512
	.ident	"GCC: (tdm-1) 5.1.0"
	.def	_puts;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_system;	.scl	2;	.type	32;	.endef
