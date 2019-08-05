/*
Write the following function

    double inner_product (double a[], double b [], int n);

The function should return a[0] * b[0] + a[1] + b[1] + ... + a[n-1] * b[n-1]
*/

#include <stdio.h>

double inner_product(double a[], double b[], int n);

int main(void)
{
    int number = 3;
    printf("Type a number for inner_product: ");
    scanf("%d", &number);

    double a[] = {1, 2, 3};
    double b[] = {10, 20, 30};

    double testFunc = inner_product(a, b, number);
    printf("Inner Prodct: %.2f\n", testFunc);

    return 0;
}


double inner_product(double a[], double b[], int n)
{
    double result = 0;
    double value = 0;
    double x = 0;

    for (int i = 0; i < n; i++)
    {
        result = a[i] * b[i];
        x += result;
    }

    value = x;

    return value;
}