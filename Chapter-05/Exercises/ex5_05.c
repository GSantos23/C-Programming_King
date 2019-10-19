/* Is the following if statement legal?

    if (n >= 1 <= 10)
        printf("n is between 1 and 10\n");

  If so, what does it do when n is equal to 0?
*/


/*  we obtain compiler errors, so is not legal */
/* warning: comparisons like ‘X<=Y<=Z’ do not have their mathematical meaning [-Wparentheses]*/


#include <stdio.h>

int main(void)
{
    int n = 1;

    if (n >= 1 <= 10)
        printf("n is between 1 and 10\n");

    return 0;
}
