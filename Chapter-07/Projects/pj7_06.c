/*
Author: Gerson

Write a program that prints the values of sizeof(int), sizeof(short), 
sizeof(long), sizeof(float), sizeof(double) and sizeof(double).
*/

#include <stdio.h>

int main(void)
{
    printf("Table of sizeof values:***************************************\n");
    printf("sizeof(int) \t%10ld\n", sizeof(int));
    printf("sizeof(short) \t%10ld\n", sizeof(short));
    printf("sizeof(long) \t%10ld\n", sizeof(long));
    printf("sizeof(float) \t%10ld\n", sizeof(float));
    printf("sizeof(double) \t%10ld\n", sizeof(double));
    printf("sizeof(long double) \t%2ld\n", sizeof(long double));

    return 0;
}