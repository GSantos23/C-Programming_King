/*
	European countries use a 13-digit code, known as a European Article
	Number (EAN) instead of 12-digit Universal Product Code (UPC) found
	in North America. Each EAN ends with a check digit, just as UPC does.
	The technique for calculating the check digit is also similar:

	Add the second, fourth, sixth, eighth, tenth, and twelfth digits.
	Add the first, third, fifth, seventh, ninth, and eleventh digits.
	Multiply the first sum by 3 and add it to the second sum.
	Subtract 1 of the remainder when the adjusted total is divided by 10.
	Subtract the remainder from 9.

	For example, consider Gulluoglu Turkish Delight Pistacho & Coconut, 
	which has an EAN of 8691484260008. The first sum is 6+1+8+2+0+0 = 17,
	and the second sum is 8+9+4+4+6+0 = 31. Multiplying the first sum by 3
	and addding the second yields 82. Subtracting 1 gives 81. The remainder
	upon dividing by 10 is 1. When the remainder is subracted from 9, the 
	result is 8, which matches the last digit of the original code. Your job
	is to modify  the upc.c program from Section 4.1 so that it calculates 
	the check digit for an EAN. The user will enter the first 12 digits of 
	the EAN as a single number:

	Enter the first 12 digits of an EAN: 869148426000
	Check digit: 8
*/

#include <stdio.h>

int main (void)
{
	int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12;
	int first_sum, second_sum, mult_sub, remainder, chk_digit;

	printf("Enter the first 12 digits of an EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, 
		&i7, &i8, &i9, &i10, &i11, &i12);

	first_sum = i2 + i4 + i6 + i8 + i10 + i12;
	second_sum = i1 + i3 + i5 + i7 + i9 + i11;
	mult_sub = (first_sum * 3) + second_sum - 1;
	remainder = mult_sub % 10;
	chk_digit = 9 - remainder;

	printf("Check digit: %d\n", chk_digit);

	return 0;
}