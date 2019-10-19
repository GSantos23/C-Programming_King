/* The following if statement is unnecessarily complicated. Simplify it as much
as possible. (Hint: The entire statement can be replaced by a single assigment.)


    if (age >= 13)
        if (age <= 19)
          teenager = true;
        else
          teenager = false;
    else if (age < 13)
        teenager = false;

*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int age;    bool teenager; 

    // Test case
    age = 10;

/*
    if (age >= 13)
        if (age <= 19)
            teenager = true;
        else
            teenager = false;
    else if (age <= 13)
        teenager = false;
*/
    // Version 1
/*    
    if (age >= 13 && age <= 19)
        teenager = true;
    else
        teenager = false;
*/

    /* Version 2 */
    teenager = (age >= 13 && age <= 19) ? true : false;

    printf("Value:%d\n", teenager); // If 1 teenager = true, 0 teenager = false

    return 0;
}
