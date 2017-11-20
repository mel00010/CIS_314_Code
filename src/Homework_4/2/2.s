	.file	"2.c"
	.text
	.p2align 4,,15
	.globl	transpose
	.type	transpose, @function
transpose:
.LFB0:
	.cfi_startproc
	xorl	%r9d, %r9d
	leaq	52(%rdi), %r10
	leaq	104(%rdi), %r8
	addl	$1, %r9d
	cmpl	$13, %r9d
	je	.L7
	.p2align 4,,10
	.p2align 3
.L4:
	leaq	676(%rdi), %rdx
	movq	%r10, %rax
	.p2align 4,,10
	.p2align 3
.L3:
	movl	(%rdx), %esi
	movl	(%rax), %ecx
	addq	$52, %rax
	addq	$4, %rdx
	movl	%esi, -52(%rax)
	movl	%ecx, -4(%rdx)
	cmpq	%r8, %rax
	jne	.L3
	addl	$1, %r9d
	addq	$52, %r10
	addq	$104, %r8
	cmpl	$13, %r9d
	jne	.L4
.L7:
	rep ret
	.cfi_endproc
.LFE0:
	.size	transpose, .-transpose
	.ident	"GCC: (Debian 7.2.0-8) 7.2.0"
	.section	.note.GNU-stack,"",@progbits
