#include <stdio.h>

int main(void)
{
    long rs1 = 114514,rs2 = 114514;
    long result = 0;

    asm volatile(
        "beq %1,%2,add_result_1       \n\t"
        "addi %0,%0,20                \n\t"
        "add_result_1:                \n\t"
        "addi %0,%0,1"
        :"+r"(result)
        :"r"(rs1),"r"(rs2)
    );

    printf("result = %d\n",result);
    return 0;
}
