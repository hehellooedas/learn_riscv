#include <stdio.h>

void print_hello(){
    printf("Hello World!\n");
}


int main(void)
{
    long address = 0;

    asm volatile(
        "la %0,print_hello"
        :"+r"(address)
    );

    printf("the address of function print_hello is %p\n",address);
    return 0;
}
