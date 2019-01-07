/*
	Write a program that asks the user to enter a two-digit number, then
	prints the number with its digits reversed. A session with the program
	should have the following appareance:

	Enter a two-digit number: 28
	The reversal is: 82

	Read the number using %d, then break it into two digits. Hint: In n is 
	an integer, then n % 10 is the last digit and n / 10 is n with the last
	digit removed.
*/

#include <stdio.h>

int main (void)
{
	int number;

	printf("Enter a two-digit number: ");
	scanf("%d", &number);

	int firstNum = number / 10;
	int lastNum = number % 10;

	printf("The reversal is: %d%d\n", lastNum, firstNum);

	return 0;
}