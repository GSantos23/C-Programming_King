/** 
 * Exercise 8.3 - Write an declaration of an array named weekend containing
 * seven bool values. Include an initializer that makes the first and last 
 * values true, all other values should be false */
 
#include <stdio.h>
#include <stdbool.h>

int main()
{
	bool weekend[7] = {true, false, false, false, false, false, true};

	for (int i = 0; i < 7; i++) {
		printf("Values[%d] = %d\n", i, weekend[i]);
	}

	return 0;
}


