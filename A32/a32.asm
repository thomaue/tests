bits 32

section .data
    message db 'Hello World !', 10

section .text
    global _start
    _start:
        mov eax, 4 ;write in 32
        mov ebx, 1
        mov ecx, message
        mov edx, 13+1
        int 0x80 ;interuption like syscall

        mov eax, 1 ;exit
        mov ebx, 0
        int 0x80

        ;ld -m elf_i386 a32.o -o a32