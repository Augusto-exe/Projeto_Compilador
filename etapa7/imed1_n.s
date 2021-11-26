	.comm  z,4,4
	.globl main
	.type main, @function
main:
	pushq	%rbp 
	movq	%rsp, %rbp
	subq $16, %rsp
	subq $0, %rsp
	subq $4, %rsp
	movl $5, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $2, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $3, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %edx
	addq $4, %rsp
	movl (%rsp), %eax
	addq $4, %rsp
	addl  %edx, %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $4, %eax 
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
	movl (%rsp), %edx
	addq $4, %rsp
	imull  %edx, %eax
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

