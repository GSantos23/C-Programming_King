/*
Write a program that declares several int and float variable -- without initializing
them -- and then prints their values. Is there any pattern to the values?
(Usually there isn't)
*/

#include <stdio.h>

int main(void)
{
    int var1, var2;    float var3, var4;

    printf("The values are:\n");
    printf("var1: %d\n", var1);
    printf("var2: %d\n", var2);
    printf("var3: %.2f\n", var3);
    printf("var4: %.2f\n", var4);

    return 0;
}

/*
Answer: No, given that the compiler assigns random numbers. For exampless:


The values are:
var1: 602388912
var2: 32766
var3: -0.00
var4: 89727424501121024.00
---------------------------
The values are:
var1: 740079072
var2: 32764
var3: 325.95
var4: -0.00
*/