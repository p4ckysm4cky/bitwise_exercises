#include <stdio.h>


void clear_nth_bit(int *num, int n)
{
    int bit_mask = ~(1 << n);
    *num = *num & bit_mask;
}


int main(void)
{
    for (int i = 0; i < 16; i++) {
        int x = i;
        clear_nth_bit(&x, 0);
        printf("%d: %d\n", i, x);
    }
}
