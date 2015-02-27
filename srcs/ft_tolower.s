global	_ft_tolower

_ft_tolower:
	cmp		rdi, 64
	jng		_tolower_end
	cmp		rdi, 91
	jnl		_tolower_end
	mov		rax, rdi
	add		rax, 32
	ret

_tolower_end:
	mov		rax, rdi
	ret