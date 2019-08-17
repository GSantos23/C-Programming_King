/*
Modify Programming Project 5 from Chaper 5 so that if uses a function to compute
the amount of income tax. When passed an amount of taxable income, the function
will return the tax due.
*/

/*
    In one state, single residents are subject to the following income tax:

    income              Amount of tax
    Not over $750       1% of income
    $750 - $2250        $7.50   plus 2% of amount over 750
    $2250 - $3750       $37.50  plus 3% of amount over $2250
    $3750 - $5250       $82.50  plus 4% of amount over $3750
    $5250 - $7000       $142.50 plus 5% of amount over $5250
    Over $7000          $230.00 plus 6% of amount over $7000

    Write a program that ask the user to enter the amount of taxable income,
    then displays the tax due
*/

#include <stdio.h>

float incomeTax(float income_value);

int main (void)
{
    float income, tax_total;

    printf("Enter amount of taxable income: ");
    scanf("%f", &income);

    tax_total = incomeTax(income);

    printf("The amount of tax: %.2f\n", tax_total);

    return 0;
}


float incomeTax(float income_value)
{
    float tax = 0;  

    if (income_value < 750){
        tax   = income_value * 0.01;
    }
    else if (income_value >= 750 && income_value < 2250){
        tax = 7.50f + income_value * 0.02;
    }
    else if (income_value >= 2250 && income_value < 3750){
        tax = 37.50f + income_value * 0.03;
    }
    else if (income_value >= 3750 && income_value < 5250){
        tax = 82.50f + income_value * 0.04;
    }
    else if (income_value >= 5250 && income_value < 7000){
        tax = 142.50f + income_value * 0.05;
    }
    else {
        tax = 230.00f + income_value * 0.06;
    }

    return tax;

}