/*
The following  function is supposed to return true if any element of the array a
has the value 0 and false if all elements are nonzero. Sadly, it contains an 
error. Find the error and show it:

bool has_zero(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        if (a[i] == 0)
            return true;
        else
            return false;
}

*/

#include <stdio.h>
#include <stdbool.h>

bool has_zero(int a[], int n);


int main(void)
{
    int number = 3;
    int testArray[] = {1, 2, 0};

    bool result = has_zero(testArray, number);

    printf("Result: %d\n", result);



    return 0;
}

bool has_zero(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        if (a[i] == 0)
            return true;
        
    return false;
}

