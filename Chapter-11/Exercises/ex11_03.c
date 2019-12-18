/*
 * The following function supposedly computes the sum and average of the numbers
 * in a array a, which has a length n. avg and sum point to variables that the
 * function should modify. Unfortunately contains several errors; find and
 * correc them.
*/

#include <stdio.h>
#define LENGTH 3		// You can modify the lenght of the array

/* Changes: 
change both sum and avg to *sum and *avg, to obtain the contents 
*/

void avg_sum (double a[], int n, double *avg, double *sum)
{
    int i;

    *sum = 0.0;	// *sum is a pointer variable, sum is a pointer to double
    for (i = 0; i < n; i++)
        *sum += a[i];
    *avg = *sum / n; // same to average
}

int main(void)
{
	double arr_num[LENGTH];	double average;	double summation;

	printf("Enter %d numbers for the array: ", LENGTH);
	for (int i = 0; i < LENGTH; ++i)
	{
		scanf("%lf", &arr_num[i]);
	}

	// When a function has *var as argument, don't forget to put &var as parameter
	avg_sum(arr_num, LENGTH, &average, &summation);

	printf("Average of array: %.2lf\n", average);
	printf("Sum of array: %.2lf\n", summation);

	printf("\n");

	return 0;
}
