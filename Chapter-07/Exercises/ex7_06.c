/*
Author: Gerson

Write a program that prints the values of sizeof(int), sizeof(short), 
sizeof(long), sizeof(float), sizeof(double) and sizeof(double).
*/

#include <stdio.h>

int main(void)
{
    printf("Table of sizeof values:***************************************\n");
    printf("sizeof(int) \t%ld\n", sizeof(int));
    printf("sizeof(int) \t%ld\n", sizeof(short));
    printf("sizeof(int) \t%ld\n", sizeof(long));
    printf("sizeof(int) \t%ld\n", sizeof(float));
    printf("sizeof(int) \t%ld\n", sizeof(double));
    printf("sizeof(int) \t%ld\n", sizeof(long double));

    return 0;
}