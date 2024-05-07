#include <stdio.h>

int main(void)
{
    long rd = 64;
    int shift = 2;

    asm volatile(
        "srl %0,%0,%1   \n\t"
        :"+r"(rd)
        :"r"(shift)
    );

    printf("rd = %d\n",rd);
    return 0;
}
