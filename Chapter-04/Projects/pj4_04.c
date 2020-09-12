/*
	Write a program that reads an integer entered by the user and displays
	it in octal (base 8):

	Enter a number between 0 and 32767: 1953
	In octal, your number is: 03641

	The output should be displayed using five digits, even if fewer digits 
	are sufficient. Hint: To convert the number to octal, first divide it 
	by 8; the remainer is the last digit of the octal number (1, in this 
	case). Then divide the original number by 8 and repeat the process to
	arrive at the next-to-last-digit.
*/

#include <stdio.h>

int main (void)
{
	int number;
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &number);

	n1 = number % 8;
	n2 = number / 8;

	n3 = n2 % 8;
	n4 = n2 / 8;

	n5 = n4 % 8;
	n6 = n4 / 8;

	n7 = n6 % 8;
	n8 = n6 / 8;

	n9 = n8 % 8;
	n10 = n8 / 8;

	printf("In octal, your number is: %d%d%d%d%d\n", n9, n7, n5, n3, n1);

	return 0;
}