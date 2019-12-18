/*
 * Write the following function:
 *
 * void swap(int *p, int *q);
 *
 * When passed the addresses of two variables, swap should exchange the values
 * of the variables:
 *
 * swap(&i, &j);    // exchange values of i and j
*/

#include <stdio.h>

void swap(int *p, int *q);

int main(void)
{
	int i, j;

	printf("Enter two values (i,j) separated by a space: ");
	scanf("%d %d", &i, &j);

	printf("Value of i before swap() %d\n", i);
	printf("Value of j before swap() %d\n", j);

	swap(&i, &j);
	printf("\n");

	printf("Value of i after swap() %d\n", i);
	printf("Value of j after swap() %d\n", j);

	printf("\n");
	return 0;
}

void swap(int *p, int *q)
{
	int tmp;	

	tmp = *p;
	*p = *q;
	*q = tmp;
}
