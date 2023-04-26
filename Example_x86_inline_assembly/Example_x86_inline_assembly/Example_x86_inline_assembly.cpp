#include <iostream>
#include <Windows.h>

int main() {
    int a = 5, b = 10, result;

    __asm {
        mov eax, a      ; Move the value of 'a' into the EAX register
        add eax, b      ; Add the value of 'b' to EAX
        mov result, eax ; Move the result from EAX into 'result'
    }

    std::cout << "The result is: " << result << std::endl;
    return 0;
}