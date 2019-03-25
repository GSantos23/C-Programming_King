/*
Write a progrsm that computes the factorial of a positive integer:

Enter a positive integer: 6
Facotrial of 6: 720

(a) Use a short variable to store the value of the factorial. What is the 
    largest value of n for which the program correctly prints the factorial of n?
(b) Repeat part (a) using an int variable instead.
(c) Repeat part (a) using a long variable instead.
(d) Repeat part (a) using a long long variable instead.
(e) Repeat part (a) using a float variable instead.
(f) Repeat part (a) using a double variable instead.
(g) Repeat part (a) using an long double variable instead.

In cases (e)-(g), the program will display a close approximation of the factorial,
ot necessarily the exact value

*/

#include <stdio.h>

int main(void)
{
    //short factorial = 1;
    //int factorial = 1;
    //long factorial = 1;
    //long long factorial = 1;
    //float factorial = 1.0;
    //double factorial = 1.0;
    long double factorial = 1.0;
    int n = 0;
    int tmp = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    tmp = n;

    while (n != 1)
    {
        factorial = factorial * n;
        n--;
    }

    printf("Factorial of %d: %Lf\n", tmp, factorial);

    return 0;
}

/*
Answers to questions

a)    7
b)   12
c)   20
d)   20
e)   34
f)  170
g) 1754

*/