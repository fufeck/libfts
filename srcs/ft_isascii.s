global	_ft_isascii

_ft_isascii:
	cmp		rdi, -1
	jng		_isascii_end
	cmp		rdi, 128
	jnl		_isascii_end
	mov		rax, 1
	ret

_isascii_end:
	mov		rax, 0
	ret