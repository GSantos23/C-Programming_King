/*
    Programming Project 7.3
    Modify sum2.c program from Section 7.1 to sum a series of double values.
*/
#include <stdio.h>

int main (void)
{
    double n; 
    double sum = 0.0;

    printf("This program sums a series of numbers.\n");
    printf("Enter integers (0 to terminate).\n");

    scanf("%lf", &n);
    while (n != 0) 
    {
        sum += n;
        scanf("%lf", &n);
    }

    printf("The sum is: %.2f\n", sum);

    return 0;
}