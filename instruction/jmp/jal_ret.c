#include <stdio.h>

int main(void)
{
    long result = 0;

    asm volatile(
        "addi %0,%0,1           \n\t"
        "mv t0,ra               \n\t"
        "jal next_label         \n\t"
        "addi %0,%0,1           \n\t"

        "mv ra,t0               \n\t"
        "j over                 \n\t"

        "next_label:            \n\t"
        "ret                    \n\t"
        "over:                  \n\t"
        :"+r"(result)
        :
        :"memory","t0"
    );

    printf("result = %d\n",result);
    return 0;
}
