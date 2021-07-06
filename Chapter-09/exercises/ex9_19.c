/*
Consider the following mystery function:

void pb(int n)
{
    if (n != 0) {
        pb(n /2);
        putchar('0' + n % 2);
    }
}

Trace the execution by hand. Then write a program that calls the function, passing
it a number entered by the user. What does the function do?
*/

//Answer:  Binary representation of typed number

#include <stdio.h>

void pb(int n);

int main(void)
{
    int number = 0;

    printf("Type a number: ");
    scanf("%d", &number);

    pb(number);
    printf("\n");

    return 0;
}

void pb(int n)
{
    if (n != 0) {
        pb(n /2);
        //putchar(n % 2);
        putchar('0' + n % 2);
    }
}