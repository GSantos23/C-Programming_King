/*
The following program fragments illustrate the logical operators. Show the 
output by each, assuming that i,j, and k are int variables.

(a) i = 10; j = 5;
    printf("%d", !i < j);

(b) i = 2; j = 1;
    printf("%d", !!i + !j);

(c) i = 5; j = 0; k = -5;
    printf("%d", i && j || k)

(d) i = 1; j = 2; k = 3;
    printf("%d", i < j || k);

*/

/*
Answers:

(a) 1

(b) 1

(c) 1

(d) 1
*/


#include <stdio.h>

int main(void)
{
	int i; int j; int k;

    i = 10; j = 5;
    printf("%d", !i < j);
    printf("\n");

    i = 2; j = 1;
    printf("%d", !!i + !j);
    printf("\n");

    i = 5; j = 0; k = -5;
    printf("%d", i && j || k);
    printf("\n");

    i = 1; j = 2; k = 3;
    printf("%d", i < j || k);
    printf("\n");

    return 0;
}
