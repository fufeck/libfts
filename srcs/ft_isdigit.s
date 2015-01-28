
global	_ft_isdigit

_ft_isdigit:
	cmp		rdi, 47
	jng		_isdigit_end
	cmp		rdi, 58
	jnl		_isdigit_end
	mov		rax, 1
	ret

_isdigit_end:
	mov		rax, 0
	ret