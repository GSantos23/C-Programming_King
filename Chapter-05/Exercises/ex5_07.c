/* What does the following statement print if i has the value 17? What does it
print if i has the value -17?

    printf("%d\n", i >= 0 ? i : -i);
*/

/* Answer: Using ternary operator exp1 ? exp2 : exp3 
 *      if exp1 then exp2, else exp3 
 * So i = 17 -> 17, and i = -17 -> 17
 */


#include <stdio.h>

int main(void)
{
    int i = -17;

    printf("%d\n", i >= 0 ? i : -i);

    return 0;
}