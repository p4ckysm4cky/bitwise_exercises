#include <stdio.h>


int get_nth_bit(int num, int n) 
{
    // create bit_mask for nth bit
    int nth_bit_mask = 1 << n;
    return (num & nth_bit_mask) != 0;
}


void print_int_binary(int num)
{
    int int_bit_size = sizeof(int) * 8;
    for (int i = int_bit_size - 1; i > -1; i--) {
        printf("%d", get_nth_bit(num, i));
        if (i % 4 == 0) {
            putchar(' ');
        }
    }
    putchar('\n');
}


int main(void)
{
    for (int i = 0; i < 51; i++) {
        printf("%d | ", i);
        print_int_binary(i);
    }
}