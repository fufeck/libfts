global	_ft_toupper

_ft_toupper:
	cmp		rdi, 96
	jng		_toupper_end
	cmp		rdi, 123
	jnl		_toupper_end
	mov		rax, rdi
	sub		rax, 32
	ret

_toupper_end:
	mov		rax, rdi
	ret