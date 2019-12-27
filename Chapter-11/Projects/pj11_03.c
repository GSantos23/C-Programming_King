/*
 * Modify Programming Project 3 from Chapter 6 so that it includes the
 * following function:
 *
 * void reduce(int numerator, int denominator, int *reduced_numerator,
 *             int *reduced_denominator);
 *
 * numerator and denominator are the numerator and denominator of a fraction.
 * reduced_numerator and reduced_denominator are pointers to variables in which
 * the function will storethe numerator and denominator of the fraction once it
 * has been reduced to lowest terms.
 *
*/

#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator,
			int *reduced_denominator);

int main(void)
{
	int numerator, denominator;
	int initNumerator = 0, initDenominator = 0;

	printf("Enter a fraction (num/dem): ");
	scanf("%d/%d", &numerator, &denominator);

	reduce(numerator, denominator, &initNumerator, &initDenominator);

	printf("In lowest terms: %d/%d\n", initNumerator, initDenominator);

	return 0;
}


void reduce(int numerator, int denominator, int *reduced_numerator,
			int *reduced_denominator)
{
	int remainder;		int GCD;	int tmp_numerator;	int tmp_denominator;

	tmp_numerator = numerator;
	tmp_denominator = denominator;

	while (numerator > 0)
	{
		remainder = denominator % numerator;
		denominator = numerator;
		numerator = remainder;
	}

	GCD = denominator;

	*reduced_numerator = tmp_numerator / GCD;
	*reduced_denominator = tmp_denominator / GCD;

	return;
}
