/*
Write a program that evaluates an expression:

Enter an expression: 1 + 2.5 * 3
Value of expression: 10.5

The operands in the expression are floating-point numbers; the operators are 
+, -, *, and /. The expression is evaluated from left to right (no operator 
takes precedence over any other operator)
*/

#include <stdio.h>

int main(void)
{
    float var1, var2, var3;
    char opertor1, opertor2;
    float value1, value2;

    printf("Enter an expression: ");
    scanf("%f %c %f %c %f", &var1, &opertor1, &var2, &opertor2, &var3);

    printf("Value of expression: ");

    if (opertor1 == '+')
        value1 = var1 + var2;
    else if (opertor1 == '-')
        value1 = var1 - var2;
    else if (opertor1 == '*')
        value1 = var1 * var2;
    else if (opertor1 == '/')
        value1 = var1 / var2;
    else
    {
        printf("WRONG, This is not an operator\n");
        return  -1;
    }

    if (opertor2 == '+')
        value2 = value1 + var3;
    else if (opertor2 == '-')
        value2 = value1 - var3;
    else if (opertor2 == '*')
        value2 = value1 * var3;
    else if (opertor2 == '/')
        value2 = value1 / var3;
    else
    {
        printf("WRONG, This is not an operator\n");
        return  -1;
    }

    printf("%.1f\n", value2);

    return 0;
}