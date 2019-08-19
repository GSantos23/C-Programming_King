/*
Write a program that asks the user to enter a series  of integers (which it stores
in an array), then sorts by calling the function selection_sort. When given an
array with n elements, selection_sort must do the following:
    
    1. Search the array to find the largest element, then move it to the last position
       in the array
    2. Call itself recursivly to sort the first n - 1 elements of the array
*/

#include <stdio.h>


void selection_sort(int arrayToSort[], int arraySize);

int main(void)
{
    int elements = 0;       int n = 0;

    printf("Please type number of elemets of array: ");
    scanf("%d", &elements);

    int a[elements];

    printf("Please type values: \n");

    for (int i = 0; i < elements; i++)
    {
        scanf("%d", &a[i]);
    }

    n = sizeof(a)/sizeof(a[0]);

    printf("\nNormal array: ");
    // Test: Print new array
    for (int j = 0; j < elements; j++)
    {
        printf("%d ", a[j]);
    }

    printf("\n");
    selection_sort(a,n);
    printf("\nSorted array: ");
    for (int j = 0; j < elements; j++)
    {
        printf("%d ", a[j]);
    }

    printf("\n");
    return 0;
}

// source of function: https://github.com/auwsmit/cpama2/blob/master/Ch09/ProgrammingProjects/p1.c
void selection_sort(int a[], int n)
{
    if (n == 0) return;

    int i, j = 0;

    for (i = 1; i < n; i++)
        if (a[i] > a[j])
            j = i;

    i = a[n-1];
    a[n-1] = a[j];
    a[j] = i;

    selection_sort(a, n - 1);
}