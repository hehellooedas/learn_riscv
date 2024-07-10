#include <stdio.h>

int main(void)
{
    long rs1 = 1,rs2 = 2;
    long result = 0;

    asm volatile(
        "bgt %1,%2,over     \n\t"
        "addi %0,%0,1       \n\t"
        "addi %0,%0,1       \n\t"
        "over:              \n\t"
        :"+r"(result)
        :"r"(rs1),"r"(rs2)
        :"memory"
    );

    printf("result = %d\n",result);
    return 0;
}
