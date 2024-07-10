#include <stdio.h>

int main(void)
{
    long rs1 = 3,rs2 = 5;
    long rd = 0;

    asm volatile(
        "slt %0,%1,%2   \n\t"
        :"=r"(rd)
        :"r"(rs1),"r"(rs2)
    );

    printf("rd = %d\n",rd);
    return 0;
}
