global	_ft_strlen

_ft_strlen:

	xor	rcx, rcx
	not	rcx
	xor	al,al
	repne scasb
	not	rcx
	sub rcx, 1
	mov	rax, rcx
	ret

	