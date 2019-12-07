/*
 * The Fibonacci numbers are 0, 1, 1, 2, 3, 5, 8, 13 ..., where each number is
 * the sum of the two preceding numbers. Write a program fragment that declares
 * an array named fib_numbers of length 40 and fills the array with the first 40
 * Fibonacci numbers. Hint: Fill in the first two numbers individually, then use
 * a loop to compute the remaining numbers.
*/

#include <stdio.h>

int main(void)
{
	int fib_numbers[40] = {0};

	fib_numbers[0] = 0;
	fib_numbers[1] = 1;

	int a = fib_numbers[0];
	int b = fib_numbers[1];

	for (int i = 1; i < 40; i++)
	{
		fib_numbers[i] = a + b;
		a = b;
		b = fib_numbers[i];	
	}

	printf("Result:\n");

	for (int j = 0; j < 40; j++)
	{
		printf("%d ", fib_numbers[j]);
	}

	printf("\n");

	return 0;
}
