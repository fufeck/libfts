global	_ft_isprint

_ft_isprint:
	cmp		rdi, 31
	jng		_isprint_end
	cmp		rdi, 127
	jnl		_isprint_end
	mov		rax, 1
	ret

_isprint_end:
	mov		rax, 0
	ret