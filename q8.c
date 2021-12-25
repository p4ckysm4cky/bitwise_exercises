#include <stdio.h>


int get_nth_bit(int num, int n) 
{
    // create bit_mask for nth bit
    int nth_bit_mask = 1 << n;
    return (num & nth_bit_mask) != 0;
}


int get_lsb_set_bit(int num)
{
    int int_bit_size = sizeof(int) * 8;
    for (int i = 0; i < int_bit_size; i++) {
        int msb_set = get_nth_bit(num, i);
        if (msb_set) {
            return i;
        }
    }
    return -1;
}


int main(void)
{
    for (int i = 0; i < 17; i++) {
        printf("%d least significant set bit is %d\n", i, get_lsb_set_bit(i));
    }
}