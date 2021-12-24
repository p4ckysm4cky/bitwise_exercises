#include <stdio.h>


void toggle_n_bit(int *num, int n)
{
    int bit_mask = 1 << n;
    // When we XOR with the bitmask we can 
    // flip the bit at the position of the bitmask
    *num = *num ^ bit_mask;
}

int main(void)
{
    for (int i = 0; i < 17; i++) {
        int x = i;
        toggle_n_bit(&x, 0);
        printf("%d: %d\n", i, x);
    }
}