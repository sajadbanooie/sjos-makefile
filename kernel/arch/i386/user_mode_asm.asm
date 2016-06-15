global switch_to_usermode
extern user_mode_entry
extern um_stack_top
switch_to_usermode:
    cli
    mov ax, 0x23
    mov ds, ax
    mov es, ax
    mov fs, ax
    mov gs, ax
    push  dword 0x23
    push esp
    pushfd
    ;push dword	0x0202
    or dword [esp],0x200
    push  dword 0x1B
    push  dword user_mode_entry
    iret

