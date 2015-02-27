global	_ft_strcat

_ft_strcat:
	mov		rdx, 0
	mov		rcx, 0
	jmp		_calc_len

_calc_len:
	cmp 	byte[rdi + rcx], 0
	jz		_loop_strcat
	inc		rcx
	jmp		_calc_len
	
_loop_strcat:
	
	;compar end of s2
	cmp 	byte[rsi + rdx], 0
	
	;if end goto end
	jz		_end_strcat

	;else copy s2 in s1
	mov		r8, [rsi + rdx]
	mov		[rdi + rcx], r8

	;increment s1 and s2
	inc		rdx
	inc		rcx
	
	;restart loop
	jmp		_loop_strcat

_end_strcat:
	mov 	rax, rdi
	ret
