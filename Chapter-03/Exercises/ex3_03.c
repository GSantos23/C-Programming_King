/*
For each of the following pairs of scanf format strings, indicate whether or not
the two strings are equivalent. If they're not, show how they can be distinguished.

(a) "%d"        versus   " %d"          -> Equivalent
(b) "%d-%d-%d"  versus   "%d -%d -%d"   -> Equivalent, do not forget '-'
(c) "%f"        versus   "%f "          -> Different, you must type CTRL + D
(d) "%f,%f"     versus   "%f, %f"       -> Different, do not forget space
*/


// uncomment for test
/*
#include <stdio.h>

int main(void)
{
    int var1 = 0, var2 = 0, var3 = 0; 
    float x =0, y = 0;


    printf("Type the indicate format string: ");
    scanf("%f, %f", &x, &y);
    //scanf("%d -%d -%d", &var1, &var2, &var3);

    printf("%f\n", x);
    printf("%f\n", y);
    //printf("Result: %d\n", var1);
    //printf("Result: %d\n", var2);
    //printf("Result: %d\n", var3);

    return 0;
}
*/