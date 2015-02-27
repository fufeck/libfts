global	_ft_bzero

_ft_bzero:
	mov		rdx, 0
	jmp		_while_bzero
	
_while_bzero:
	cmp 	rdx, rsi  
	jnl		_end_bzero
	mov		[rdi + rdx], byte 0
	inc		rdx
	jmp		_while_bzero

_end_bzero:
	ret
