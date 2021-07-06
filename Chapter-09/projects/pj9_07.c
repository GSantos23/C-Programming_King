/*
The power function of Section 9.6 can be made faster by having it calculate x^n 
in a different way. We first notice that if n is a power of 2, then x^n can be 
composed by squaring. For example, x^4 is the square of x^2, so x^4 can be computed
using only two multiplications instead of three. As it happens, this technique can
be used even when n is not power of 2. If n is even, we use the formula x^n = (x^n/2)^2.
If n is odd, then x^n = x X x^n-1. Write a recursive function that computes x^n.
(The recursion ends when n = 0, in which case the function returns 1.)
To test your function, write a program that asks the user to enter values for x and n,
calls power to compute x^n, and then displays the value returned by the function.
*/

#include <stdio.h>

int power(int x, int n);

int main(void)
{
    int x_value = 0, n_value = 0, result = 0;

    printf("This pogram computes power of X^n\n");

    printf("Enter a value for x: ");
    scanf("%d", &x_value);

    printf("Enter a value for n: ");
    scanf("%d", &n_value);

    result = power(x_value, n_value);
    printf("result: %d\n", result);

    return 0;
}

/* Power function from page 204
int power(int x, int n)
{
    if (n == 0)
        return 1;
    else
        return x * power(x, n - 1);
}
*/

int power(int x, int n)
{
    if (n == 0)
        return 1;
    else if (n != 0 && n % 2 == 0)
        return power(x, n/2) * power(x, n/2);
    else 
        return x * power(x, n - 1);
}