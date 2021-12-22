#include <stdio.h>

void set_nth_bit(int *num, int n)
{
    // create bit_mask for nth bit
    int nth_bit_mask = 1 << n;
    *num = *num | nth_bit_mask;
}


int main()
{
    for (int i = 0; i < 17; i++) {
        int x = i;
        set_nth_bit(&x, 6);
        printf("%d\n", x);
    }
}