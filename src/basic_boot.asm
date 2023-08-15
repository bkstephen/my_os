org 0x7C00
bits 16

hang:

    ; get cursor position where "printing string" start at
    mov ah, 0x03    ; number of systemcall which get position of cursor
    xor bh, bh      ; number of page -> 0
    int 0x10
    
    ; print message
    mov bp, msg     ; address of message
    mov cx, msg_len ; length of message
    mov ax, 0x1301  ; number of systemcall which print string
    int 0x10
    
    ; infinite loop
    jmp $
    
times 510-($-$$) db 0

db 0x55
db 0xAA

msg: db 'Test'
msg_len: equ $-msg
