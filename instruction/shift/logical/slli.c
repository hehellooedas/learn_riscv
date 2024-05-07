#include <stdio.h>

int main(void)
{
    long rd = 2;

    asm volatile(
        "slli %0,%0,3  \n\t"
        :"+r"(rd)
    );

    printf("rd = %d\n",rd);
    return 0;
}
