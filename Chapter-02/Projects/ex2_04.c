/* 
	Write a program that asks the user to enter dollars-and-cents amount,
	then displays the amount with 5% tax add.
*/

#include <stdio.h>

int main(void)
{
	float initAmount;

	printf("Enter an amount: ");
	scanf("%f", &initAmount);

	float tax = 0.05 * initAmount;
	
	float finalAmount = tax + initAmount;

	printf("With tax added: $%.2f \n", finalAmount);

	return 0;
}