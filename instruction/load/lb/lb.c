#include <stdio.h>

int main(void)
{
    long hex = 0x1122334455667788;
    char byte = 0;

    asm volatile(
        "lb %0,(%1)"
        :"=r"(byte)
        :"r"(&hex)
    );
    printf("byte = %#x\n",byte);
    return 0;
}
