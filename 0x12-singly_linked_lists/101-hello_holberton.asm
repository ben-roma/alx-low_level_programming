section .data
    hello db "Hello, Holberton", 0

section .text
    global main

    ; ssize_t write(int fd, const void *buf, size_t count)
    extern write, exit

main:
    ; Prepare arguments for write
    mov rax, 1            ; syscall number for write
    mov rdi, 1            ; file descriptor 1 (stdout)
    mov rsi, hello        ; pointer to the string
    mov rdx, 17           ; length of the string
    syscall

    ; Exit the program
    mov rax, 60           ; syscall number for exit
    xor rdi, rdi          ; exit code 0
    syscall

