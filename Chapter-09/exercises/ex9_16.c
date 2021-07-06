/*
Condense the fact function in the same way we condensed power
*/
#include <stdio.h>

// Fact function, page 204
/*
int fact(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fact(n -1);
}
*/

int fact(int n)
{
    return n <= 1 ? 1 : n * fact(n-1);
}

int main(void)
{
    int result = 0;

    result = fact(4);
    printf("Factorial: %d\n", result);

    return 0;
}