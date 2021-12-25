#include <stdio.h>


void flip_bit(int *num)
{
    *num = ~ *num;
}


int main(void)
{
    for (int i = 0; i < 17; i++) {
        int x = i;
        flip_bit(&x);
        printf("%d flipped is %d\n", i, x);
    }
}