/*
 * Write the following function:
 *
 * void find_two_largest (int a[], int n, int *largest, int *second_largest);
 *
 * When passed an array of length n, the function will search a for its largest
 * and second largest elements, storing them in the variables pointed to by
 * largest and second_largest, respectively
 *
*/

#include <stdio.h>
#define N 5

void find_two_largest (int a[], int n, int *largest, int *second_largest);

int main(void)
{
	int arr_numbers[N];
	int first = 0, second = 0;

	printf("Please type %d numbers separated by a space: ", N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr_numbers[i]);
	}

	find_two_largest(arr_numbers, N, &first, &second);

	printf("Largest element: %d\n", first);
	printf("Second largest element: %d\n", second);

	printf("\n");
	return 0;
}


//source: http://knking.com/books/c2/answers/c11.html
void find_two_largest (int a[], int n, int *largest, int *second_largest)
{

	if (a[0] > a[1])
	{
		*largest = a[0];
		*second_largest = a[1];
	}
	else
	{
		*largest = a[1];
		*second_largest = a[0];
	}


	for (int i = 2; i < n; i++)
	{
		if (a[i] > *largest)
		{
			*second_largest = *largest;
			*largest = a[i];
		}
		else if (a[i] > *second_largest)
			*second_largest = a[i];

	}

}