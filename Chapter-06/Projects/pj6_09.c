/*
	Programming Project 8 in Chapter 2 asked to write a program that 
	calculates the remaining balance on a loan after the first, second,
	and third monthly payments. Modify the program so that it also asks
	the user to enter the number of payments and then displays the balance                
	remaining after each of these payments.
*/

#include <stdio.h>

int main (void)
{
	float loan = 0.0f, interestRate = 0.0f, monthlyPayment = 0.0f;
	int numberofPayments = 0;
	float result = 0.0f;
	
	printf("Enter amount of  loan: ");
	scanf("%f", &loan);

	printf("Enter interest rate: ");
	scanf("%f", &interestRate);

	printf("Enter monthly payment: ");
	scanf("%f", &monthlyPayment);

	float monthlyInterestRate = (interestRate/100)/12;

	printf("Enter number of payments: ");
	scanf("%d", &numberofPayments);

	for (int i = 1; i <= numberofPayments; i++)
	{
		result = loan - monthlyPayment + loan*monthlyInterestRate;
		loan = result;
	}

	printf("Remaining Balance: $%.2f\n", result);

	return 0;
}
