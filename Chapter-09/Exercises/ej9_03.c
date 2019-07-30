/*
Write a function gcd(m,n) that calculates the greatest common divisor of the integer
m and n. (Programming Project 2 in Chapter 6 describe's Euclid's algorithm for
computing the GCD.)
*/
#include <stdio.h>


int gcd(int m, int n)
{
    int remainder; 

    while (n != 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;

    }

    return m;
}

int main(void)
{
    int m, n;
    int answer = 0;

    printf("Enter two integers: ");
    scanf("%d %d", &m ,&n);

    answer = gcd(m,n);

    printf("Greatest Common Divisor: %d\n", answer);
}