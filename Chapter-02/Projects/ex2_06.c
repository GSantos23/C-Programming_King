/*
	Modify the program of Programming Project 5 so that the polynomial
	is evaluated using the following formula:

	((((3x+2)x-5)x-1)x+7)x-6

	Note that the modified program perform fewer multiplications. 
	This technique for evaluating polynomials is know as Horner's Rule.
*/

#include <stdio.h>

int main(void)
{
	float x;

	printf("Enter value of X: ");
	scanf("%f", &x);

	float result = ((((3*x+2)*x-5)*x-1)*x+7)*x-6;
	printf("Result: %.2f\n", result);

	return 0;
}