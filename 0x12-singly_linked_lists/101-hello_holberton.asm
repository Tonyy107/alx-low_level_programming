section .data
    fmt db "Hello, Holberton\n", 0   ; Null-terminated string

section .text
    global main                     ; Declare main as the entry point
    extern printf                   ; Tell NASM printf is defined elsewhere

main:
    ; Call printf
    mov rdi, fmt                    ; Pass the format string in rdi
    xor rax, rax                    ; Clear rax (needed for variadic functions like printf)
    call printf                     ; Call the C printf function

    ; Exit the function
    mov eax, 0                      ; Return 0
    ret                             ; Return from main
