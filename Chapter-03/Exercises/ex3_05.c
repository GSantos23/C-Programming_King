/*
Suppose that we call scanf as follows:

scanf("%f%d%f", &i, &x, &j);

If the user enters: 

12.3 45.6 789

what will be the value of x,i, and j after the call? (Assume that i and j are 
int variables and x is a float variable.)
*/

/*
               i  |  x   |  j  |
           -------|------|-----|
   Value     12.3 | 45.6 | 789 |
   Result    i = 1095027917, x = 0.000000, j = 1058642330
 * */

// Test Case

#include <stdio.h>

int main(void)
{
    int i, j;
    float x;

    scanf("%f%d%f", &i, &x, &j);

    printf("i = %d, x = %f, j = %d", i, x, j);

    printf("\n");

    return 0;
}
