/*
Write a recursive version of the gcd function (see Exercise 3). Here's the strategy
to use for computing gcd(m,n): If n is 0, return m. Otherwise, call gcd recursively,
passing  n as the first argument and m % n as the second
*/

#include <stdio.h>

/*
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
*/


int gcd(int m, int n)
{
    if (n == 0)
        return m;
    else
        return gcd(n, m % n);

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