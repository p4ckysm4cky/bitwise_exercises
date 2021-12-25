#include <stdio.h>

#define INT_SIZE sizeof(int) * 8


int get_nth_bit(int num, int n) 
{
    // create bit_mask for nth bit
    int nth_bit_mask = 1 << n;
    return (num & nth_bit_mask) != 0;
}


void count_zeros_ones(int num, int *ones, int *zeros)
{
    *ones = 0;
    *zeros = 0;
    for (int i = 0; i < INT_SIZE; i++) {
        int bit = get_nth_bit(num, i);
        if (bit) {
            *ones += 1;
        }
        else {
            *zeros += 1;
        }
    }
}


int main(void)
{
    for (int i = 0; i < 26; i++) {
        int ones, zeros;
        count_zeros_ones(i, &ones, &zeros);
        printf("%d has %d zeros and %d ones\n", i, zeros, ones);
    }
}
