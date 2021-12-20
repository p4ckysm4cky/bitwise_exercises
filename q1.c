#include <stdio.h>

void check_lsb(int num)
{
    // We can check LSB of a number by AND(ing)
    // the value with the integer of 1
    if (num & 1)
        printf("LSB of %d is 1\n", num);
    else
        printf("LSB of %d is 0\n", num);

}

int main(void)
{
    // This can also be used to identify
    // odd and even numbers.
    for(int i = 0; i < 16; i++) {
        check_lsb(i);
    }
}