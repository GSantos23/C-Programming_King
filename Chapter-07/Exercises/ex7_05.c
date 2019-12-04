/*
 * Which one of the following is not legal way to write number 65? (Assume that
 * the character set is ASCII)
 *
 * (a) 'A'
 * (b) 0b1000001
 * (c) 0101
 * (d) 0x41
*/

// Answer: All options prints 65, however binary is not in the ASCII table.

#include <stdio.h>

int main(void)
{
    //char ch = 'A';
    //printf("%d ", ch);
    //******************
    //int number = 0101;
    //int number = 0x41;
    int number = 0b1000001;

    printf("%d\n", number);

    return 0;
}



