section .data
    format db "Hello, Holberton\n"

section .text
    global main

main:
    ; Prepare the arguments for printf
    mov edi, format
    xor eax, eax ; Clear EAX to prepare for a varargs function call

    ; Call printf
    call printf

    ; Exit gracefully
    xor eax, eax
    ret
```
