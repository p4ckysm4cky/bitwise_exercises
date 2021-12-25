#include <stdio.h>

#define INT_SIZE sizeof(int) * 8


int get_nth_bit(int num, int n) 
{
    // create bit_mask for nth bit
    int nth_bit_mask = 1 << n;
    return (num & nth_bit_mask) != 0;
}


void set_nth_bit(int *num, int n)
{
    // create bit_mask for nth bit
    int nth_bit_mask = 1 << n;
    *num = *num | nth_bit_mask;
}


void clear_nth_bit(int *num, int n)
{
    int bit_mask = ~(1 << n);
    *num = *num & bit_mask;
}


int rotate_left(int num, int rotation)
{
    int return_val = num;
    for (int i = 0; i < rotation; i++) {
        // Get MSB
        int msb_bit = get_nth_bit(return_val, INT_SIZE - 1);
        return_val = return_val << 1;
        // modify LSB
        if (msb_bit)
            set_nth_bit(&return_val, 0);
        else
            clear_nth_bit(&return_val, 0);
    }
    return return_val;
}


int rotate_right(int num, int rotation)
{
    int return_val = num;
    for (int i = 0; i < rotation; i++) {
        // Get LSB
        int lsb_bit = get_nth_bit(return_val, 0);
        return_val = return_val >> 1;
        // modify MSB
        if (lsb_bit)
            set_nth_bit(&return_val, INT_SIZE - 1);
        else
            clear_nth_bit(&return_val, INT_SIZE - 1);
    }
    return return_val;
}


int main(void)
{
    int num = -15;
    printf("%d left rotated 2 times = %d\n", num, rotate_left(num, 2));
    printf("%d right rotated 2 times = %d\n", num, rotate_right(num, 2));
}