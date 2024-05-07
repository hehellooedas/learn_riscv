#include <stdio.h>

int main(void)
{
    long rs = 0x1122334455667788;
    long rd = 0;

    asm volatile(
        "slliw %0,%1,4  \n\t"
        :"=r"(rd)
        :"r"(rs)
    );

    printf("rd = %#lx\n",rd);
    return 0;
}
