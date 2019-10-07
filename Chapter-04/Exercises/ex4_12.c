/*
Show the output produced by each of the following program fragments. Assume that
 and k are int variables.

 (a) i = 5;
     j = ++i * 3 - 2;
     printf("%d %d", i, j);

 (b) i = 5; 
     j =  3 - 2 * i++;
     printf("%d %d", i, j);

 (c) i = 7; 
     j = 3 * i-- + 2;
     printf("%d %d", i, j);

 (d) i = 3;
     j = 3 * i-- * 2; 
     printf("%d %d %d", i, j, k);

*/

#include <stdio.h>

int main(void)
{
    int i, j;

/*
    i = 5;
    j = ++i * 3 - 2;
    printf("%d %d", i, j);
*/

/*
    i = 5; 
    j =  3 - 2 * i++;
    printf("%d %d", i, j);
*/

/*
    i = 7; 
    j = 3 * i-- + 2;
    printf("%d %d", i, j);
*/
    i = 3;
    j = 3 * i-- * 2; 
    printf("%d %d", i, j);

    printf("\n");

    return 0;
}

/*
Answers: 

(a) 6 16

(b) 6 -7

(c) 6 23

(d) 2 18

*/