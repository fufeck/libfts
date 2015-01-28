
global	_ft_isalpha

_ft_isalpha:
	cmp		rdi, 64
	jng		_isalpha_end

	cmp		rdi, 91
	jnl		_isalpha_min

	mov		rax, 1
	ret

_isalpha_min:
	cmp		rdi, 123
	jnl		_isalpha_end

	cmp		rdi, 96
	jng		_isalpha_end

	mov		rax, 1
	ret


_isalpha_end:
	mov		rax, 0
	ret