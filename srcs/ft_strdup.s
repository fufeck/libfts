%define MACH_SYSCALL(nb)	0x2000000 | nb
%define MALLOC				4

extern 	_malloc
extern 	_ft_strlen
extern 	_ft_memcpy

global	_ft_strdup

_ft_strdup:

 	mov 	r12, rdi
 	call 	_ft_strlen
 	mov 	rdi, rax
 	add 	rdi, 1
 	push 	rdi
 	call 	_malloc
 	test 	rax, rax
 	jz 		_end_strdup
 	mov 	rdi, rax
 	mov 	rsi, r12
 	pop 	rdx
 	call 	_ft_memcpy
 	ret

_end_strdup:
	ret
