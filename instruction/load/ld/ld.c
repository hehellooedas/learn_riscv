#include <stdio.h>

int main(void)
{
    long hex = 0x1122334455667788;
    long double_word = 0;

    asm volatile(
        "ld %0,(%1)     \n\t"
        :"+r"(double_word)
        :"r"(&hex)
    );

    printf("double_word = %#lx\n",double_word);
    return 0;
}
