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
	#imult  %eax, %eax, %edx
	subq $4, %rsp
	movl %eax, (%rsp)
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
	movl $2, -20(%rbp) 
	movl $3, x(%rip)
	subq $4, %rsp
	movl -20(%rbp), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl -20(%rbp), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
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
	add  %edx, %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc


