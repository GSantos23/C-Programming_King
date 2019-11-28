/*
What output does the following for statement produce?

for ( i = 5, j = i - 1; i > 0, j > 0; --i, j = i - i)
    printf("%d ", i);

*/

// Answer: 5

#include <stdio.h>

int main(void)
{
	int i, j;
	
	for ( i = 5, j = i - 1; i > 0, j > 0; --i, j = i - i)
    	printf("%d ", i);

    printf("\n");

    return 0;
}