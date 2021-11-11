.comm  x,4,4
	.globl mult
	.type mult, @function
mult:
	.cfi_startproc 
	pushq	%rbp 
	.cfi_def_cfa_offset 16	
	.cfi_offset 6, -16
	movq	%rsp, %rbp 
	.cfi_def_cfa_register 6
	subq $4, %rsp
	subq $4, %rsp
	subq $4, %rsp
	movl -20(%rbp), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl -24(%rbp), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	movl (%rsp), %edx
	addq $4, %rsp
	imull  %edx, %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	movl %eax, -28(%rbp)
	movl -28(%rbp), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc

	.globl main
	.type main, @function
main:
	.cfi_startproc 
	pushq	%rbp 
	.cfi_def_cfa_offset 16	
	.cfi_offset 6, -16
	movq	%rsp, %rbp 
	.cfi_def_cfa_register 6
	subq $4, %rsp
	movl $7, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	movl %eax, -20(%rbp)
	movl $9, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	movl %eax, x(%rip) 
	movl x(%rip), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl -20(%rbp), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	movl (%rsp), %edx
	addq $4, %rsp
	addl  %edx, %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	movl %eax, x(%rip) 
	movl x(%rip), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
