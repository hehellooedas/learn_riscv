#include <stdio.h>

int main(void)
{
    long rd = 0;

    asm volatile(
        "li %0,0x1122334455667788"
        :"+r"(rd)
    );

    printf("rd = %#lx\n",rd);
    return 0;
}
