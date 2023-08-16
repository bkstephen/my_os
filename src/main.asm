org 0x7C00
bits 16

%define ENDL 0x0D, 0x0A

start:
    jmp main

print:
    ;push si
    ;push ax
    ;push bx

.loop:
    lodsb ; load fist byte in si to al
    or al, al
    jz .done

    mov ah, 0Eh
    ;mov bh, 0
    int 10h
    
    jmp .loop

.done:
    ;pop bx
    ;pop ax
    ;pop si
    ret

main:
    
    mov ax, 0
    ;mov ds, ax
    ;mov es, ax

    ; set up the stack starting where the bootloader ends
    ;mov ss, ax
    ;mov sp, 7C00h

    mov si, msg
    call print
    
    hlt

.halt
    jmp .halt


msg: db 'Hello World',ENDL,0

; times = repeat instruction or directive
; $ = obtain assembly position of the beginning of current line
; $$ = obtain 
; $-$$ gives current size of program

times 510-($-$$) db 0


; db = define bytes directive
; dw = define words
dw 0AA55h ; bios expects the last bit of a sector to be AA 55


