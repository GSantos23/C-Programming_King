/* What output does the following for statement produce?


for (i = 10; i >= 1; i /= 2)
    printf("%d ", i++);

*/    

// Answer: Infinite loop printing 1's. 

#include <stdio.h>

int main(void)
{
	int i;

	for (i = 10; i >= 1; i /= 2)
    	printf("%d ", i++);	

    printf("\n");

    return 0;
}