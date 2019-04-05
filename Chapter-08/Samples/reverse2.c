// Reverse a series of numbers using a variable-length string (C99)

#include <stdio.h>

int main(void)
{
    int i, n;

    printf("How many numbers do you want to reverse? ");
    scanf("%d", &n);

    int a[n];       // C99 only - length depends on n
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("In reverse order: ");
    for (i = n - 1; i >= 0; i--)
        printf(" %d", a[i]);
    printf("\n");

    return 0;
}