#include <iostream>
#include <Windows.h>

int main() {
    int a = 5, b = 10, c = 3, result;

    __asm {
        mov eax, a              ; Move the value of 'a' into the EAX register
        add eax, b              ; Add the value of 'b' to EAX
        cmp eax, 5              ; Compare the value of EAX with 5
        jle skip_subtraction    ; Jump to 'skip_subtraction' if EAX is less than or equal to 5
        sub eax, c; Subtract the value of 'c' from EAX if EAX is greater than 5
        skip_subtraction:
        mov result, eax         ; Move the result from EAX into 'result'
    }

    std::cout << "The result is: " << result << std::endl;
    return 0;
}