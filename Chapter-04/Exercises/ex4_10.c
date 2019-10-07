/*
Show the output produced by each of the following program fragments. Assume that
 and k are int variables.

 (a) i = 6;
     j = i += i;
     printf("%d %d", i, j);

 (b) i = 5;
     j = (i -= 2) + 1;
     printf("%d %d %d", i, j, k);

 (c) i = 7;
     j = 6 + (i = 2.5);
     printf("%d %d", i, j);

 (d) i = 2; j = 8;
     j  = (i = 6) + (j = 3);
     printf("%d %d", i, j);

*/

#include <stdio.h>

int main(void)
{
    int i, j;

/*
    i = 6;
    j = i += i;
    printf("%d %d", i, j);
*/

/*
    i = 5;
    j = (i -= 2) + 1;
    printf("%d %d", i, j);
*/

/*    
    i = 7;
    j = 6 + (i = 2.5);
    printf("%d %d", i, j);
*/

    i = 2; j = 8;
    j  = (i = 6) + (j = 3);
    printf("%d %d", i, j);


    printf("\n");

    return 0;
}

/*
Answers:

(a) 12 12

(b) 3 4

(c) 2 8

(d) 6 9

*/