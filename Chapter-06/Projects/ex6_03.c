/*
	Write a program that asks the user to enter a fraction, then reduces the
	fraction to lowest terms:

	Enter a fraction: 6/12
	In lowest terms: 1/2

	Hint: To reduce a fraction to lowest terms, first compute the GCD of the
	numerator and denominator. Then divide both numerator and denominator by
	the GCD
*/

#include <stdio.h>

int main(void)
{
	int numerator, denominator, remainder;
	int GCD, initNumerator, initDenominator;

	printf("Enter a fraction: ");
	scanf("%d/%d", &numerator, &denominator);

	initNumerator = numerator;
	initDenominator = denominator;

	while (numerator > 0)
	{
		remainder = denominator % numerator;
		denominator = numerator;
		numerator = remainder;
	}

	GCD = denominator;

	//printf("GCD: %d\n", GCD);

	numerator = initNumerator / GCD;
	denominator = initDenominator /GCD;

	printf("In lowest terms: %d/%d\n", numerator ,denominator);

	return 0;
}
