/*
Write a function that computes the value of the polynomial:

3X^5 + 2X^4 - 5X^3 - X^2 + 7X - 6

Write a program that asks the user to enter value for x, calls the function to
compute the value of the polynomial, and then display the value returned by the
function.
*/

#include <stdio.h>
#include <math.h>       // C math library, for pow(double x, double y)

double polynomial(double x);

int main(void)
{
    double value = 0;   double result = 0;

    printf("Please enter a value for x: ");
    scanf("%lf", &value);

    result = polynomial(value);

    printf("The result is: %.2lf\n", result);

    return 0;
    
}


double polynomial(double x)
{
    double equation = 0;

    equation = 3*pow(x, 5.0) + 2*pow(x, 4.0) - 5*pow(x, 3) - x*x + 7*x - 6;

    return equation;
}