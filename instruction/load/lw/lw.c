#include <stdio.h>

int main(void)
{
    long hex = 0x1122334455667788;
    int word = 0;
    
    asm volatile(
        "lw %0,(%1)     \n\t"
        :"+r"(word)
        :"r"(&hex)
    );

    printf("word = %#lx\n",word);
    return 0;
}
