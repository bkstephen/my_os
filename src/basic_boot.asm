org 0x7C00
bits 16

; boot.asm
hang:
    jmp hang
 
times 510-($-$$) db 0
dw 0AA55h
