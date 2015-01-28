
global	_ft_isdigit

_ft_isdigit:
	cmp		rdi, 64
	jng		_isdigit_end

	cmp		rdi, 91
	jnl		_isdigit_min

	mov		rax, 1
	ret

_isdigit_min:
	cmp		rdi, 123
	jnl		_isdigit_end

	cmp		rdi, 97
	jng		_isdigit_end

	mov		rax, 0
	ret


_isdigit_end:
	mov		rax, 0
	ret