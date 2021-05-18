/**
 * Exercise 8.4 
 * (C99) Repeat exercise 8.3, but this time use a designated initializer 
 * Make the initializer as short as possible */

#include <stdio.h>
#include <stdbool.h>

int main()
{
	// C99 Designated initializer
	bool weekend[7] = {[0] = true, [6] = true};	

	for (int i = 0; i < 7; i++) {
		printf("Values[%d] = %d\n", i, weekend[i]);
	}

	return 0;
}

