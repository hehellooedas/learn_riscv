#include <stdio.h>

int main(void)
{
    long result = 0;

    asm volatile(
        "addi %0,%0,1   \n\t"
        "j 1f           \n\t"
        "addi %0,%0,1   \n\t"
        "1:"
        :"+r"(result)
        :
        :"memory"
    );

    printf("result = %d\n",result);
    return 0;
}
