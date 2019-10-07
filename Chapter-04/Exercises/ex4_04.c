/*
Repeat Exercise 3 for C99.
*/

/* To compile in C99: gcc -Wall -std=c99 file.c */

#include <stdio.h>

int main(void)
{
    printf("a)%d\n", 8 / 5);
    printf("b)%d\n", -8 / 5);
    printf("c)%d\n", 8 / -5);
    printf("d)%d\n", -8 / -5);

    return 0;
}

/* Answers:

a)1

b)-1

c)-1

d)1

*/