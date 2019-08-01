/*
Write functions that return the following values. (Assume that a and n are 
parameters, where a is an array of int and n is the length of the array.)

(a) The largest element of a.
(b) The average of all elements in a
(c) The number of positive elements in a.

*/

#include <stdio.h>

int largestElement(int a[], int n);
int average(int a[], int n);
int positiveElement(int a[], int n);

int main(void)
{
    int n = 3;  int a[] = {10, 20, -1};
    
    int avg = average(a, n);
    int big = largestElement(a, n);
    int pos = positiveElement(a, n);

    printf("Largest Element: %d\n", big);
    printf("Average of all elements: %d\n", avg);
    printf("Number of positive elements in a: %d\n", pos);

    return 0;
}


int largestElement(int a[], int n)
{
    int largest = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest)
            largest = a[i];
    }

    return largest;
}


int average(int a[], int n)
{
    int avg = 0; int result = 0;

    for (int i = 0; i < n; i++)
    {
        avg = avg + a[i];
    }

    result = avg / n;

    return result;
}


int positiveElement(int a[], int n)
{
    int counter = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
            counter++;
    }

    return counter;
}

