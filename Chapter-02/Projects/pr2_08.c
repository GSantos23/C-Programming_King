/*
	Write a program that calculates the remaining balance on a loan after
	the first, second, and third monthly payments.
	Display each payment with two digits after the decimal point. Hint: Each
	month, the balance is decreased by the amount of payment, but increased 
	by the balance times the monthly interest rate. To find the monthly
	interest rate entered by the user to a percentage and divide it by 12.
*/

#include <stdio.h>

int main (void)
{
	float loan = 0.0, interestRate = 0.0, monthlyPayment = 0.0;
	float firstPayment = 0.0, secondPayment = 0.0, thirdPayment = 0.0;

	printf("Enter amount of  loan: ");
	scanf("%f", &loan);

	printf("Enter interest rate: ");
	scanf("%f", &interestRate);

	printf("Enter monthly payment: ");
	scanf("%f", &monthlyPayment);

	float monthlyInterestRate = (interestRate/100)/12;

	firstPayment = loan - monthlyPayment + loan*monthlyInterestRate;
	printf("Balance remaining after first payment: $%.2f\n", firstPayment);


	secondPayment = firstPayment - monthlyPayment + firstPayment*monthlyInterestRate;
	printf("Balance remaining after second payment: $%.2f\n", secondPayment);

	thirdPayment = secondPayment - monthlyPayment + secondPayment*monthlyInterestRate;
	printf("Balance remaining after third payment: $%.2f\n", thirdPayment);

	return 0;
}