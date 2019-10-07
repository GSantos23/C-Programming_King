/*
Show the output produced by each of the following program fragments. Assume that
 and k are int variables.

 (a) i = 7; j = 8;
     i *= j + 1;
     printf("%d %d", i, j);

 (b) i = j = k = 1;
     i += j += k;
     printf("%d %d %d", i, j, k);

 (c) i = 1; j = 2; k = 3;
     i -= j -= k;
     printf("%d %d %d", i, j, k);

 (d) i = 2; j = 1; k = 0;
     i *= j *= k;
     printf("%d %d %d", i, j, k);

*/

#include <stdio.h>

int main(void)
{
    int i, j, k;

/*
    i = 7; j = 8;
    i *= j + 1;
    printf("%d %d", i, j);
*/

/*
    i = j = k = 1;
    i += j += k;
    printf("%d %d %d", i, j, k);
*/

/*
    i = 1; j = 2; k = 3;
    i -= j -= k;
    printf("%d %d %d", i, j, k);
*/

    i = 2; j = 1; k = 0;
    i *= j *= k;
    printf("%d %d %d", i, j, k);

    printf("\n");

    return 0;
}

/*
Answers:

(a) 63 8

(b) 3 2 1

(c) 2 -1 3

(d) 0 0 0

*/