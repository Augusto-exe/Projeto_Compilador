	.globl main
	.type main, @function
main:
	.cfi_startproc 
	pushq	%rbp 
	.cfi_def_cfa_offset 16	
	.cfi_offset 6, -16
	movq	%rsp, %rbp 
	.cfi_def_cfa_register 6
	subq $16, %rsp
	subq $4, %rsp
	subq $4, %rsp
	movl $0, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $3, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %edx
	addq $4, %rsp
	movl (%rsp), %eax
	addq $4, %rsp
	subl  %edx, %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	movl %eax, -20(%rbp)
	movl $234, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	movl %eax, -24(%rbp)
	movl -20(%rbp), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $0, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
.L1:
	movl $393, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	movl %eax, -24(%rbp)
	 jmp .L3
.L2:
	movl $432, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	movl %eax, -24(%rbp)
.L3:
	movl -24(%rbp), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc

