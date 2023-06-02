section .data
    hello db "Hello, Holberton", 0
    format db "%s", 0

section .text
    global main
    extern printf

main:
    ; Save callee-saved registers
    push rbx
    push rbp
    push r12
    push r13
    push r14
    push r15

    ; Prepare arguments for printf
    mov rdi, format
    mov rsi, hello

    ; Call printf
    xor eax, eax
    call printf

    ; Clean up the stack
    add rsp, 8

    ; Restore callee-saved registers
    pop r15
    pop r14
    pop r13
    pop r12
    pop rbp
    pop rbx

    ; Exit the program
    xor eax, eax
    ret
