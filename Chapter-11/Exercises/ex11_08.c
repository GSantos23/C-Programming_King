/*
 * Write the following function:
 *
 * int *find_largest(int a[], int n);
 *
 * When passed an array a of length n, the function will return a pointer to
 * the array's largest element.
 *
*/

#include <stdio.h>
#define N 5

int *find_largest(int a[], int n);

int main(void)
{
	int arr_num[N];
	printf("Please enter %d numbers: ", N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr_num[i]);
	}

	int *p = find_largest(arr_num, N);

	printf("The largest value of the array is: %d\n", *p);

	return 0;
}

int *find_largest(int a[], int n)
{
	int *tmp = &a[0];

	for (int i = 1; i < n; i++)
	{
		if(a[i] > *tmp)
			tmp = &a[i];
	}

	return tmp;
}

