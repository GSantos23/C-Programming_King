/*
Rewrite the fact function so that it's no longer recursive
*/
#include <stdio.h>

int fact(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial = factorial * i;
            
    }
        
    return factorial;
}

int main(void)
{
    int result = 0;

    result = fact(4);
    printf("Factorial: %d\n", result);

    return 0;
}