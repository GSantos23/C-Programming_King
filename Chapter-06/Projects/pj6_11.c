/*
	The value of the mathematical constant e can be expressed as an infinite
	series:

	e = 1 +  1/1! + 1/2! + 1/3! + ...

	Write a program that approximates e by computing the value of
	1 + 1/1! + 1/2! + 1/3! + ... + 1/n!, where n is entered by the user.
*/

#include <stdio.h>

int main(void)
{
	int n = 0;
	float e = 1.0f;
	float factorial = 1.0;

	printf("Enter value on n: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		factorial = factorial * i;
		e = e + 1/factorial;
	}

	printf("Vale of e: %.4f\n", e);

	return 0;
}