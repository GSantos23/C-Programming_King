/*
	Write a program that asks the users to enter a value for x and then
	displays the value of the following polynomial:

		3X^5 + 2X^4 - 5X^3 - X^2 + 7X - 6

	Hint: C doesn't hava an exponentation operator, so you'll need to 
	multiply X by itself repeatedly in order to compute the powers of X.
	(For example, x*x*x is x cubed).
*/

#include <stdio.h>

int main(void)
{
	float x;

	printf("Enter value of X: ");
	scanf("%f", &x);

	float result = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6;
	printf("Result: %.2f\n", result);

	return 0;
}