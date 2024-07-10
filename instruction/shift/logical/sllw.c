#include <stdio.h>

int main(void)
{
    long rs = 0x1122334455667788;
    long rd = 0;
    asm volatile(
        "sllw %0,%1,%2"
        :"=r"(rd)
        :"r"(rs),"r"(4)
    );

    printf("rd = %#lx\n",rd);
    return 0;
}
