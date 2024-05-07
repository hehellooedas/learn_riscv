#include <stdio.h>

int main(void)
{
    long rd = 64;

    asm volatile(
        "srli %0,%0,2   \n\t"
        :"+r"(rd)
    );

    printf("rd = %d\n",rd);
    return 0;
}
