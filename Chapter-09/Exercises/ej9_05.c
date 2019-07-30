/*
Write a function num_digits(n) that returns the number of digits in n (a positive
integer). Hint: To determine the number of digits in a number n, divide it by 10
repeatedly. When n reaches 0, the number of divisions indicates how many digits
n originally had.
*/
#include <stdio.h>


int num_digits(int n);

int main(void)
{
    int number = 0; int result = 0;

    printf("Please enter a number: ");
    scanf("%d", &number);

    result = num_digits(number);

    printf("Number of digits: %d\n", result);

    return 0;
}

int num_digits(int n)
{
    int newNumber;
    int counter = 0;        // Count the number of digits after every iteration

    while (n != 0)
    {
        newNumber = n / 10;
        n = newNumber;
        counter++;
    }

    return counter;
}