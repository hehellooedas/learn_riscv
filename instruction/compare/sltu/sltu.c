#include <stdio.h>

int main(void)
{
    long rd = 0;
    long rs1 = 20,rs2 = -1;

    asm volatile(
        "sltu %0,%1,%2  \n\t"
        :"=r"(rd)
        :"r"(rs1),"r"(rs2)
        :"memory"
    );

    printf("rd = %d\n",rd);
    return 0;
}
