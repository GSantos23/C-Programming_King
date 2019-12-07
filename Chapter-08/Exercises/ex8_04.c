/*
 * (C99) Repeat Exercise 3, but this time use a designated initializer. Make the
 * initializer as short as possible.
 *
*/
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool weekend[] = {[0]=true, [6]=true};	// C99 designated initializer

	for (int i = 0; i < 7; i++)
	{
		printf("Values[%d] --> %d\n", i, weekend[i]);
	}

	return 0;
}