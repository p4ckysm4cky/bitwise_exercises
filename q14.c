#include <stdio.h>


void swap_nums(int *a, int *b)
{
    // Explanation:
    // x = a ^ b
    // x ^ b = a
    // x ^ a = b
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}


int main(void)
{
    int a = 123;
    int b = 456;
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    swap_nums(&a, &b);
    printf("a: %d\n", a);
    printf("b: %d\n", b);
}