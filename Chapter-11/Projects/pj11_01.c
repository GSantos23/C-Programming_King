/*
 * Modify Programming Project 7 from Chapter 2 so that it includes the following
 * function:
 *
 * void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);
 *
 * The function determines the smallest number of $20, $10, $5, and $1 bills
 * necessary to pay the amount represented by the dollars parameter. The tweenties
 * parameter points to a variable in which the function will store thee number of
 * $20 bills required.  The tens, fives, and ones parameters are similar.
 *
*/

#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

// main() function *********************************************

int main(void)
{
	int bill_20 = 0, bill_10 = 0, bill_5 = 0, bill_1 = 0;
	int amount;

	printf("Enter a dollar amount: ");
	scanf("%d", &amount);

	pay_amount(amount, &bill_20, &bill_10, &bill_5, &bill_1);


	printf("$20 bills: %d\n", bill_20);
	printf("$10 bills: %d\n", bill_10);
	printf(" $5 bills: %d\n", bill_5);
	printf(" $1 bills: %d\n", bill_1);

	return 0;
}

// Function Definition *****************************************

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
	*twenties = dollars / 20;

	dollars = dollars - *twenties * 20;

	*tens = dollars / 10;
	dollars = dollars - *tens * 10;

	*fives = dollars / 5;
	dollars = dollars - *fives * 5;

	*ones = dollars / 1;
}