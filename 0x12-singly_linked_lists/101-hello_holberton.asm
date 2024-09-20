section .data
    message db "Hello, Holberton", 10, 0    ; 10 is the ASCII code for newline

section .text
    global main
    extern printf

main:
    ; Prepare arguments for printf
    mov rdi, message    ; First argument: address of the message
    xor rax, rax        ; Clear RAX (no floating point arguments)

    ; Call printf
    call printf

    ; Return from main
    mov rax, 0          ; Return 0
    ret
