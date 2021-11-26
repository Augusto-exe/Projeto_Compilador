	.comm  z,4,4
	.globl main
	.type main, @function
main:
	pushq	%rbp 
	movq	%rsp, %rbp
	subq $16, %rsp
	subq $0, %rsp
	subq $4, %rsp
	movl $100, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	movl %eax, -20(%rbp)
	movl -20(%rbp), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	leave
	ret

