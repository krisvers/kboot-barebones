bits 32

global mul
mul:
	push ebp

	mov ebp, esp

	mov eax, [esp + 8]
	mov edx, [esp + 12]

	mul edx

	pop ebp

	ret
