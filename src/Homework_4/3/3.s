	.file	"3.c"
	.text
	.globl	f
	.type	f, @function
f:
.LFB0:
	.cfi_startproc
	movl	4(%esp), %eax			; Load 4 bytes from the stack at the location 4 bytes forward from the stack pointer into %eax
	leal	(%eax,%eax,2), %eax		; Calculate %eax+2*%eax and store the result in %eax
	ret								; Return by popping the return address of the stack and jumping there.  
									; %eax is conventionally the register that holds the return value, so this function returns x*3
	.cfi_endproc
.LFE0:
	.size	f, .-f
	.globl	g
	.type	g, @function
g:
.LFB1:
	.cfi_startproc
	movl	4(%esp), %edx			; Load 4 bytes from the stack at the location 4 bytes forward from the stack pointer into %edx
	movl	8(%esp), %eax			; Load 4 bytes from the stack at the location 8 bytes forward from the stack pointer into %eax
	leal	(%eax,%eax,2), %eax		; Calculate %eax+2*%eax and store the result in %eax
	leal	(%edx,%edx,2), %edx		; Calculate %edx+2*%edx and store the result in %edx
	addl	%edx, %eax				; Add %edx to %eax and store the result in %eax
	ret								; Return by popping the return address of the stack and jumping there.  
									; %eax is conventionally the register that holds the return value, so this function returns a*3 + b*3
	.cfi_endproc
.LFE1:
	.size	g, .-g
	.ident	"GCC: (Debian 7.2.0-8) 7.2.0"
	.section	.note.GNU-stack,"",@progbits
