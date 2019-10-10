/* Write a single expression whose value is either -1, 0, or +1, depending on 
wheter i is less than, equal to, or greater than j, respectively. */

#include <stdio.h>

int main(void)
{
	int i; int j; int k;
	
	i = 1; j = 1;		/* Equal value */
	//i = 1; j = 0;     /* Greater than */
	//i = -1; j = 0;       /* Less than    */
	
	k = (i - j) - (i < j);
	
	printf("%d\n", k);
	
	return 0;
	
}
