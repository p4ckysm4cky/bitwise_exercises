#include <stdio.h>


void check_msb(int num)
{
    // get bit count of int
    int int_bit_size = sizeof(int) * 8;
    // create msb bitmask for int
    int msb_bit_mask = 1 << (int_bit_size - 1);
    if (num & msb_bit_mask)
        printf("MSB of %d is 1\n", num);
    else
        printf("MSB of %d is 0\n", num);
}


int main(void)
{
    // This can be used to detect if a number is negative
    // because MSB will be (1) in either one's complement
    // or two's complement.
    for(int i = 0; i < 16; i++) {
        check_msb(i);
    }
    for(int i = 0; i > -15; i--) {
        check_msb(i);
    }
}