%define MACH_SYSCALL(nb)	0x2000000 | nb
%define STDOUT				1
%define READ				3
%define WRITE				4

global	_ft_cat

section .data
	BUFFSIZE	equ	0x28

section .text

_ft_cat:
	mov		rbx, rdi
	mov		rdx, BUFFSIZE
	lea 	rsi, [rsp + 8]
	mov 	rax, MACH_SYSCALL(READ)
	syscall

	jc 		_end_loop
	cmp 	rax, 0
	jle 	_end_loop

	mov		rdx, rax
	mov		rdi, STDOUT
	mov 	rax, MACH_SYSCALL(WRITE)
	syscall

	mov 	rdi, rbx
	jmp 	_ft_cat

_end_loop:
	ret
