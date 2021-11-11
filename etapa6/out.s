loadI 49 => rbss  -> details:  , 15
loadI 1024 => rsp  -> details:  , 15
loadI 1024 => rfp  -> details:  , 15
addI rpc, 5 => r20  -> details:  , 15
storeAI r20 => rsp, 0  -> details:  , 15
storeAI rsp => rsp, 4  -> details:  , 15
storeAI rfp => rsp, 8  -> details:  , 15
jumpI -> L1  -> details:  , 15
loadAI rsp, 12 => r0  -> details:  , 15
halt
  -> details:  , 4
L0: nop  -> details: mult , 0
i2i rsp => rfp  -> details: mult , 0
addI rsp, 16 => rsp  -> details: mult , 0
addI rsp, 4 => rsp  -> details:  , 12
addI rsp, 4 => rsp  -> details:  , 12
addI rsp, 4 => rsp  -> details:  , 12
loadAI rfp, 16 => r0  -> details: z , 7
loadAI rfp, 20 => r1  -> details: w , 7
mult r0, r1 => r2  -> details:  , 8
storeAI r2 => rfp, 24  -> details: x , 2
loadAI rfp, 24 => r4  -> details: x , 7
storeAI r4 => rfp, 12  -> details:  , 1
loadAI rfp, 0 => r5  -> details:  , 1
loadAI rfp, 4 => r6  -> details:  , 1
loadAI rfp, 8 => r7  -> details:  , 1
i2i r6 => rsp  -> details:  , 1
i2i r7 => rfp  -> details:  , 1
jump -> r5  -> details:  , 1
L1: nop  -> details: main , 0
i2i rsp => rfp  -> details: main , 0
addI rsp, 16 => rsp  -> details: main , 0
addI rsp, 4 => rsp  -> details:  , 12
loadI 7 => r8  -> details:  , 6
storeAI r8 => rfp, 16  -> details: y , 2
loadI 9 => r10  -> details:  , 6
storeAI r10 => rbss, 0  -> details: x , 2
loadAI rbss, 0 => r12  -> details: x , 7
loadAI rfp, 16 => r13  -> details: y , 7
add r12, r13 => r14  -> details:  , 8
storeAI r14 => rbss, 0  -> details: x , 2
loadAI rbss, 0 => r16  -> details: x , 7
storeAI r16 => rfp, 12  -> details:  , 1
loadAI rfp, 0 => r17  -> details:  , 1
loadAI rfp, 4 => r18  -> details:  , 1
loadAI rfp, 8 => r19  -> details:  , 1
i2i r18 => rsp  -> details:  , 1
i2i r19 => rfp  -> details:  , 1
jump -> r17  -> details:  , 1


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

