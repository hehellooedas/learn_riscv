#include <stdio.h>

int main(void)
{
    long rd = 0;

    asm volatile(
        "lui %0,0xff    \n\t"
        :"+r"(rd)
    );

    printf("rd = %#lx\n",rd);
    return 0;
}
