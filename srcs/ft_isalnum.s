global	_ft_isalnum

_ft_isalnum:
	cmp		rdi, 47
	jng		_isalnum_end

	cmp		rdi, 123
	jnl		_isalnum_end

	cmp		rdi, 65
	jnl		_isalnum_al

	cmp		rdi, 58
	jnl		_isalnum_end

	mov		rax, 1
	ret

_isalnum_al:
	cmp		rdi, 64
	jng		_isalnum_end

	cmp		rdi, 91
	jnl		_isalnum_min

	mov		rax, 1
	ret

_isalnum_min:
	cmp		rdi, 123
	jnl		_isalnum_end

	cmp		rdi, 96
	jng		_isalnum_end

	mov		rax, 1
	ret


_isalnum_end:
	mov		rax, 0
	ret