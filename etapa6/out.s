loadI 42 => rbss  -> details:  , 15
loadI 1024 => rsp  -> details:  , 15
loadI 1024 => rfp  -> details:  , 15
addI rpc, 5 => r17  -> details:  , 15
storeAI r17 => rsp, 0  -> details:  , 15
storeAI rsp => rsp, 4  -> details:  , 15
storeAI rfp => rsp, 8  -> details:  , 15
jumpI -> L0  -> details:  , 15
loadAI rsp, 12 => r0  -> details:  , 15
halt
  -> details:  , 4
L0: nop  -> details: main , 0
i2i rsp => rfp  -> details: main , 0
addI rsp, 16 => rsp  -> details: main , 0
addI rsp, 4 => rsp  -> details:  , 12
addI rsp, 4 => rsp  -> details:  , 12
loadI 0 => r2  -> details:  , 6
loadI 3 => r0  -> details:  , 6
sub r2, r0 => r1  -> details:  , 8
storeAI r1 => rfp, 16  -> details: a , 2
loadI 234 => r4  -> details:  , 6
storeAI r4 => rfp, 20  -> details: b , 2
loadAI rfp, 16 => r6  -> details: a , 7
loadI 0 => r7  -> details:  , 6
cmp_GT r6, r7 -> r8  -> details:  , 9
cbr r8 -> L1, L2  -> details:  , 9
L1: nop  -> details:  , 11
loadI 393 => r9  -> details:  , 6
storeAI r9 => rfp, 20  -> details: b , 2
jumpI -> L3  -> details:  , 11
L2: nop  -> details:  , 11
loadI 432 => r11  -> details:  , 6
storeAI r11 => rfp, 20  -> details: b , 2
L3: nop  -> details:  , 11
loadI 0 => r13  -> details:  , 6
storeAI r13 => rfp, 12  -> details:  , 1
loadAI rfp, 0 => r14  -> details:  , 1
loadAI rfp, 4 => r15  -> details:  , 1
loadAI rfp, 8 => r16  -> details:  , 1
i2i r15 => rsp  -> details:  , 1
i2i r16 => rfp  -> details:  , 1
jump -> r14  -> details:  , 1


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
	subq $4, %rsp
	movl $0, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl $3, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	movl (%rsp), %edx
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
	movl $393, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	movl %eax, -24(%rbp)
	movl $432, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	movl %eax, -24(%rbp)
	movl $0, %eax 
	subq $4, %rsp
	movl %eax, (%rsp)
	movl (%rsp), %eax
	addq $4, %rsp
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc

