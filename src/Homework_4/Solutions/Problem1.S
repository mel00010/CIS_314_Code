	movl 8(%ebp), %esi		; %esi holds x
	movl 12(%ebp), %ebx		; %ebx holds n
	movl $-1, %edi			; Set result to -1
	movl $1, %edx			; Set mask to 1
.L2: 						; Beginning of for loop
	movl %edx, %eax			; Load mask into %eax
	andl %esi, %eax			; Bitwise and mask with x and store it in %eax
	xorl %eax, %edi			; Exclusive or result with the output of the last operation
	movl %ebx, %ecx			; Load n into %ecx
	shll %ecx, %edx			; Shift n left by mask, then store the result in mask
	cmpl $0, %edx			; Check if mask is 0
	jne .L2					; Jump if it is not equal to 0
	movl %edi, %eax			; Move result into %eax for returning
