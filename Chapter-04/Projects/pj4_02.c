/*
	Extend the program in Programming Project 1 to handle three-digit numbers
*/

#include <stdio.h>

int main (void)
{
	int number;

	printf("Enter a two-digit number: ");
	scanf("%d", &number);

	int firstNum = number / 100;	// Last number
	int tempNum = number % 100;
	int midNum = tempNum / 10;     // Middle number
	int thirdNum = tempNum % 10;     // First number

	printf("The reversal is: %d%d%d\n", thirdNum, midNum, firstNum);

	return 0;
}