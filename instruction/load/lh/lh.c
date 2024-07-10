#include <stdio.h>

int main(void)
{
    long hex = 0x1122334455667788;
    short int half_word = 0;

    asm volatile(
        "lh %0,(%1)"
        :"=r"(half_word)
        :"r"(&hex)
    );
    printf("half_word = %#x\n",half_word);
    return 0;
}
