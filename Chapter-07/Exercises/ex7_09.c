/* Suppose that i and j are variables of type int. What is the type of the
 * expression i / j + 'a'? */

// int, given that 'a' is equal to 97 + de result of i/j

#include <stdio.h>

int main(void)
{
	int i = 1;
	int j = 1;

	printf("Value: %d\n", i/j + 'a');

	return 0;
}
