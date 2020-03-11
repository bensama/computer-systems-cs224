/*
	practice-3-16.c

	void cond(long a, long *p) {
		if (p && a > *p) {
			*p = a;
		}
	}
*/
	; ! destination is always the left register !

	.file	"practice-3-16.c"
	.text
	.globl	cond
	.type	cond, @function
cond:
.LFB0:
	.cfi_startproc
	testq	%rsi, %rsi 						; if (p == NULL) *checks if it is equal to itself
	je	.L1									; if equal goto L1
	cmpq	%rdi, (%rsi) 					; if (*p >= a)   *cmpq compares (basically a subq but doesnt save result) 
	jge	.L1									; goto L1
	movq	%rdi, (%rsi)					; otherwise *p = a
.L1:
	rep ret 								; returns *if p is null we are done and we return 
	.cfi_endproc
.LFE0:
	.size	cond, .-cond
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
