/*
Give the values of i and j after each of the following expressions statements has
been executed. (Assume that i has the value 1 initially and j has the value 2.)

(a) i += j;       ------------->  3  2
(b) i--;          ------------->  0  2
(c) i * j / i;    ------------->  1  2
(d) i % ++j;      ------------->  1  3

*/

#include <stdio.h>

int main(void)
{
    int i = 1, j = 2;

    //i += j;
    //i--;
    //i * j / i;
    i % ++j;

    printf("i = %d, j = %d\n", i, j);   

    return 0;
}