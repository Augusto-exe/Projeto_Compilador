	.comm  z,4,4
	.globl main
	.type main, @function
main:
	pushq	%rbp 
	movq	%rsp, %rbp
	subq $16, %rsp
	subq $0, %rsp
	subq $4, %rsp
	subq $4, %rsp
	subq $4, %rsp
	subq $4, %rsp
	movl $0, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	movl %eax, -20(%rbp)
.L3:
	movl -20(%rbp), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $999999, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	movl (%rsp), %edx
	addq $4, %rsp
	cmpl %eax, %edx
	jl .L1
	jmp .L2
.L1:
	movl $23, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $0, %eax 
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
	movl %eax, z(%rip) 
	movl $1, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $15, %eax 
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
	movl %eax, -28(%rbp)
	movl $0, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl z(%rip), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl -28(%rbp), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %edx
	addq $4, %rsp
	movl (%rsp), %eax
	addq $4, %rsp
	addl  %edx, %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $1, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %ecx
	addq $4, %rsp
	movl (%rsp), %eax
	addq $4, %rsp
	movl $0, %edx
	idivl %ecx
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %edx
	addq $4, %rsp
	movl (%rsp), %eax
	addq $4, %rsp
	addl  %edx, %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	movl %eax, -32(%rbp)
	movl $23, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $0, %eax 
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
	movl %eax, z(%rip) 
	movl $1, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $15, %eax 
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
	movl %eax, -28(%rbp)
	movl $0, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl z(%rip), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl -28(%rbp), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %edx
	addq $4, %rsp
	movl (%rsp), %eax
	addq $4, %rsp
	addl  %edx, %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $1, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %ecx
	addq $4, %rsp
	movl (%rsp), %eax
	addq $4, %rsp
	movl $0, %edx
	idivl %ecx
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %edx
	addq $4, %rsp
	movl (%rsp), %eax
	addq $4, %rsp
	addl  %edx, %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	movl %eax, -32(%rbp)
	movl $23, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $0, %eax 
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
	movl %eax, z(%rip) 
	movl $1, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $15, %eax 
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
	movl %eax, -28(%rbp)
	movl $0, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl z(%rip), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl -28(%rbp), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %edx
	addq $4, %rsp
	movl (%rsp), %eax
	addq $4, %rsp
	addl  %edx, %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $1, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %ecx
	addq $4, %rsp
	movl (%rsp), %eax
	addq $4, %rsp
	movl $0, %edx
	idivl %ecx
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %edx
	addq $4, %rsp
	movl (%rsp), %eax
	addq $4, %rsp
	addl  %edx, %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	movl %eax, -32(%rbp)
	movl $23, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $0, %eax 
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
	movl %eax, z(%rip) 
	movl $1, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $15, %eax 
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
	movl %eax, -28(%rbp)
	movl $0, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl z(%rip), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl -28(%rbp), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %edx
	addq $4, %rsp
	movl (%rsp), %eax
	addq $4, %rsp
	addl  %edx, %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $1, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %ecx
	addq $4, %rsp
	movl (%rsp), %eax
	addq $4, %rsp
	movl $0, %edx
	idivl %ecx
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %edx
	addq $4, %rsp
	movl (%rsp), %eax
	addq $4, %rsp
	addl  %edx, %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	movl %eax, -32(%rbp)
	movl $23, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $0, %eax 
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
	movl %eax, z(%rip) 
	movl $1, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $15, %eax 
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
	movl %eax, -28(%rbp)
	movl $0, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl z(%rip), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl -28(%rbp), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %edx
	addq $4, %rsp
	movl (%rsp), %eax
	addq $4, %rsp
	addl  %edx, %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $1, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %ecx
	addq $4, %rsp
	movl (%rsp), %eax
	addq $4, %rsp
	movl $0, %edx
	idivl %ecx
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %edx
	addq $4, %rsp
	movl (%rsp), %eax
	addq $4, %rsp
	addl  %edx, %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	movl %eax, -32(%rbp)
	movl $23, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $0, %eax 
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
	movl %eax, z(%rip) 
	movl $1, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $15, %eax 
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
	movl %eax, -28(%rbp)
	movl $0, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl z(%rip), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl -28(%rbp), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %edx
	addq $4, %rsp
	movl (%rsp), %eax
	addq $4, %rsp
	addl  %edx, %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $1, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %ecx
	addq $4, %rsp
	movl (%rsp), %eax
	addq $4, %rsp
	movl $0, %edx
	idivl %ecx
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %edx
	addq $4, %rsp
	movl (%rsp), %eax
	addq $4, %rsp
	addl  %edx, %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	movl %eax, -32(%rbp)
	movl $23, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $0, %eax 
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
	movl %eax, z(%rip) 
	movl $1, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $15, %eax 
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
	movl %eax, -28(%rbp)
	movl $0, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl z(%rip), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl -28(%rbp), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %edx
	addq $4, %rsp
	movl (%rsp), %eax
	addq $4, %rsp
	addl  %edx, %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $1, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %ecx
	addq $4, %rsp
	movl (%rsp), %eax
	addq $4, %rsp
	movl $0, %edx
	idivl %ecx
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %edx
	addq $4, %rsp
	movl (%rsp), %eax
	addq $4, %rsp
	addl  %edx, %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	movl %eax, -32(%rbp)
	movl $23, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $0, %eax 
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
	movl %eax, z(%rip) 
	movl $1, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $15, %eax 
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
	movl %eax, -28(%rbp)
	movl $0, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl z(%rip), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl -28(%rbp), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %edx
	addq $4, %rsp
	movl (%rsp), %eax
	addq $4, %rsp
	addl  %edx, %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $1, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %ecx
	addq $4, %rsp
	movl (%rsp), %eax
	addq $4, %rsp
	movl $0, %edx
	idivl %ecx
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %edx
	addq $4, %rsp
	movl (%rsp), %eax
	addq $4, %rsp
	addl  %edx, %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	movl %eax, -32(%rbp)
	movl $23, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $0, %eax 
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
	movl %eax, z(%rip) 
	movl $1, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $15, %eax 
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
	movl %eax, -28(%rbp)
	movl $0, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl z(%rip), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl -28(%rbp), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %edx
	addq $4, %rsp
	movl (%rsp), %eax
	addq $4, %rsp
	addl  %edx, %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $1, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %ecx
	addq $4, %rsp
	movl (%rsp), %eax
	addq $4, %rsp
	movl $0, %edx
	idivl %ecx
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %edx
	addq $4, %rsp
	movl (%rsp), %eax
	addq $4, %rsp
	addl  %edx, %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	movl %eax, -32(%rbp)
	movl -20(%rbp), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $1, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %edx
	addq $4, %rsp
	movl (%rsp), %eax
	addq $4, %rsp
	addl  %edx, %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	movl %eax, -20(%rbp)
	jmp .L3
.L2:
	movl -32(%rbp), %eax
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	leave
	ret
