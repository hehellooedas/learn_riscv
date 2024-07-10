#include <stdio.h>

int main(void)
{
    long rd = 2;
    int shift = 3;

    asm volatile(
        "sll %0,%1,%2   \n\t"
        :"=r"(rd)
        :"0"(rd),"r"(shift)
    );

    printf("rd = %d\n",rd);
    return 0;
}
