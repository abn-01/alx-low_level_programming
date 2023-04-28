section .data
    hello db "Hello, Holberton",0
    fmt db "%s\n",0

section .text
    global main

    extern printf

main:
    push rbp
    mov rbp, rsp

    push hello
    push fmt
    call printf
    add rsp, 16

    mov rsp, rbp
    pop rbp
    mov eax, 0
    ret
