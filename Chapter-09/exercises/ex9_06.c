/*
Write a function digit(n,k) that returns the kth digit (from the right) in n (a 
positive integer). For example, digit(829,1) returns 9, digit(829,2) returns 2,
and digit(829,3) returns 8. If k is greater that the number of digits in n, have
the funciton return 0.
*/

#include <stdio.h>

int digit(int n, int k);

int main(void)
{
    int value = 0;  
    int result = 0; 
    int digitNum = 0;

    printf("Please type a number and kth digit i.e num kth_digit: ");
    scanf("%d %d", &value, &digitNum);

    result = digit(value, digitNum);
    printf("Answer: %d\n", result);

    return 0;
}

int digit(int n, int k)
{
    int counter = 0;    
    int number = 0; 
    int remainder = 0;

    while (counter != k)
    {
        number = n / 10;
        remainder = n % 10;
        n = number;
        counter++;
    }

    return remainder;
}