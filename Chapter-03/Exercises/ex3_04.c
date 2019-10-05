/*
Suppose that we call scanf as follows:

scanf("%d%f%d", &i, &x, &j);

If the user enters:

10.3 5 6

what will be the value of i,x, and j after the call? (Assume that i and j are
int variables and x is a float variable.)
*/

/*
 *				i  |  x   |  j  |
 *			-------|------|-----|
 *	Value     10.3 |   5  |  6  |
 *	Result    10   |  .3  |  5  |
 * */

// Test Case

#include <stdio.h>

int main(void)
{
	int i, j;
	float x;

	scanf("%d%f%d", &i, &x, &j);

	printf("i = %d, x = %f, j = %d", i, x, j);

    printf("\n");

	return 0;
}
