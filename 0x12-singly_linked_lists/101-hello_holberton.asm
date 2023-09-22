global  main
extern  printf

main:
mov  rdi,format
mov rax,0
call printf
xor eax,eax
ret
format: db "Hello, Holberton\n", 0

