/*
Modify Programming Project 6 from Chapter 3 so that the user may add, subtract,
multiply or divide two fractions (by entering +,-,*, or / between fractions)
*/

#include <stdio.h>

int main (void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;
    char ch;
    
    printf("Enter two fractions separated by a sign (+,-,*,/): ");
    scanf("%d/%d%c%d/%d", &num1, &denom1, &ch,&num2, &denom2);

    if (ch == '+')
    {
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;        
    }
    else if (ch == '-')
    {
        result_num = num1 * denom2 - num2 * denom1;
        result_denom = denom1 * denom2;      
    }
    else if (ch == '*')
    {
        result_num = num1 * num2;
        result_denom = denom1 * denom2;        
    }
    else if (ch == '/')
    {
        result_num = num1 * denom2;
        result_denom = num2 * denom1;        
    }
    else
    {
        printf("This is not a fraction operator.");
        return -1;
    }

    printf("The result is %d/%d\n", result_num, result_denom);

    return 0;
}