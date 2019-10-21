/*
	Write a program that prompts the user to enter a number n, then prints 
	all even squares between 1 and n. For example, if the user enters 100,
	the program should print the following :

	4
	16
	36
	64
	100
*/

#include <stdio.h>

int main(void)
{
	int n, even = 0, i =1;

	printf("Enter value of n: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		even = i*i;
		if (even % 2 == 0)
			printf("%d\n", even);

		if (even >= n)
			break;
	}

	return 0;
}