section .data
	hello db "Hello, Holberton", 0

section .text
	global main

	extern printf
	global _start

main:
	; Prepare arguments for printf
	mov rdi, hello
	mov rax, 0            ; 0 corresponds to the format string "%s"
	call printf

	; Exit the program
	mov rax, 60           ; syscall number for exit
	xor rdi, rdi          ; exit code 0
	syscall

