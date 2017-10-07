global array               ; required for linker and NASM

section .text              ; start of the "CODE segment"

array: push ebp           
       mov ebp, esp        ; set up the EBP
       push ecx            ; save used registers
       push esi

       mov ecx, [ebp+12]   ; array length
       mov esi, [ebp+8]    ; array address

       xor eax, eax        ; clear the sum value
lp:    add eax, [esi]      ; fetch an array element
       add esi, 4          ; move to another element
       loop lp             ; loop over all elements

       pop esi             ; restore used registers
       pop ecx
       pop ebp
       ret                 ; return to caller
