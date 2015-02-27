%define MACH_SYSCALL(nb)	0x2000000 | nb
%define STDOUT				1
%define WRITE				4

global	_ft_puts
	
_ft_puts:

	mov		rcx, 0
	jmp		_calc_len	

_calc_len:

	cmp 	byte[rdi + rcx], 0
	jz		_puts_write
	inc		rcx
	jmp		_calc_len

_puts_write:

	mov	r9, rdi
	mov	rdi, STDOUT
	lea	rsi, [rel r9]
	mov	rdx, rcx
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	ret

