/*
The following program fragments illustrate the relational and equality operators.
Show the output by each, assuming that i,j, and k are int variables.

(a) i = 2; j = 3;
    k = i * j == 6;
    printf("%d", k);

(b) i = 5; j = 10; k = 1;
    printf("%d", k > i < j);

(c) i = 3; j = 2; k = 1;
    printf("%d", i < j == j < k)

(d) i = 3; j = 4; k = 5;
    printf("%d", i % j + i < k);

*/

/*
Answers:

(a) 1

(b) 1

(c) 1

(d) 0
*/


#include <stdio.h>

int main(void)
{
	int i; int j; int k;

    i = 2; j = 3;
    k = i * j == 6;

    printf("%d", k);
    printf("\n");

    i = 5; j = 10; k = 1;
    printf("%d", k > i < j);
    printf("\n");

    i = 3; j = 2; k = 1;
    printf("%d", i < j == j < k);
    printf("\n");

    i = 3; j = 4; k = 5;
    printf("%d", i % j + i < k);
    printf("\n");

    return 0;
}
