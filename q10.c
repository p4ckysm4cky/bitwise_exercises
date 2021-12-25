#include <stdio.h>


int get_nth_bit(int num, int n) 
{
    // create bit_mask for nth bit
    int nth_bit_mask = 1 << n;
    return (num & nth_bit_mask) != 0;
}


int get_leading_zeros(int num) {
    int const int_bit_size = sizeof(int) * 8;
    int counter = 0;
    for (int i = int_bit_size - 1; i > -1; i--) {
        if (get_nth_bit(num, i) == 0) {
            counter += 1;
        } else {
            return counter;
        }
    }
    return counter;
}


int main(void)
{
    for (int i = 0; i < 23; i++) {
        printf("%d, number of trailing zeros: %d\n", i, get_leading_zeros(i));
    }
}