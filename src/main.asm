org 0x7C00
bits 16

main:
    hlt

.halt
    jmp .halt

; times = repeat instruction or directive
;$ = obtain assembly position of the beginning of current line
;$$ = obtain 
; $-$$ gives current size of program

times 510-($-$$) db 0


; db = define bytes directive
; dw = define words
dw 0AA55h ; bios expects the last bit of a sector to be AA 55
