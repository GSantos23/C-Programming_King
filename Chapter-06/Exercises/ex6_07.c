/**
 * Translate the program of Exercise 2 into a single for statement.
 */

#include <stdio.h>

int main(void)
{
	int i = 0;

	for (i = 9384; i > 0; i/=10)
	{
		printf("%d \n", i);
	}

	printf("\n");

	return 0;
}