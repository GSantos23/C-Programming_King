/*
	In one state, single residents are subject to the following income tax:

	income 				Amount of tax
	Not over $750		1% of income
	$750 - $2250		$7.50 	plus 2% of amount over 750
	$2250 - $3750		$37.50 	plus 3% of amount over $2250
	$3750 - $5250		$82.50  plus 4% of amount over $3750
	$5250 - $7000		$142.50 plus 5% of amount over $5250
	Over $7000			$230.00 plus 6% of amount over $7000

	Write a program that ask the user to enter the amount of taxable income,
	then displays the tax due
*/

#include <stdio.h>

int main (void)
{
	float income, tax, total;

	printf("Enter amount of taxable income: ");
	scanf("%f", &income);

	if (income < 750){
		tax   = income * 0.01;
		printf("The amount of tax: %.2f\n", tax); 
	}
	else if (income >= 750 && income < 2250){
		tax = 7.50f + income * 0.02;
		printf("The amount of tax: %.2f\n", tax);
	}
	else if (income >= 2250 && income < 3750){
		tax = 37.50f + income * 0.03;
		printf("The amount of tax: %.2f\n", tax);
	}
	else if (income >= 3750 && income < 5250){
		tax = 82.50f + income * 0.04;
		printf("The amount of tax: %.2f\n", tax);
	}
	else if (income >= 5250 && income < 7000){
		tax = 142.50f + income * 0.05;
		printf("The amount of tax: %.2f\n", tax);
	}
	else {
		tax = 230.00f + income * 0.06;
		printf("The amount of tax: %.2f\n", tax);
	}

	return 0;
}