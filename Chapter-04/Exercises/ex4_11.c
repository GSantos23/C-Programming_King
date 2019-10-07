/*
Show the output produced by each of the following program fragments. Assume that
 and k are int variables.

 (a) i = 1;
     printf("d", i++ - 1);
     printf("%d", i);

 (b) i = 10; j = 5;
     printf("%d", i++ - ++j);
     printf("%d %d", i, j);

 (c) i = 7; j = 8;
     printf("%d ", i++ - --j);
     printf("%d %d", i, j);

 (d) i = 3; j = 4; k = 5;
     printf("%d ", i++ - j++ + --k);
     printf("%d %d %d", i, j, k);

*/

#include <stdio.h>

int main(void)
{
    int i, j, k;

/*
    i = 1;
    printf("%d", i++ - 1);
    printf("%d", i);
*/

/*    
    i = 10; j = 5;
    printf("%d", i++ - ++j);
    printf("%d %d", i, j);    
*/

/*
    i = 7; j = 8;
    printf("%d ", i++ - --j);
    printf("%d %d", i, j);
*/
    i = 3; j = 4; k = 5;
    printf("%d ", i++ - j++ + --k);
    printf("%d %d %d", i, j, k);

    printf("\n");

    return 0;
}

/*
Answers: Remember that the formating of the printf is given us tricky numbers !!

(a) 02

(b) 411 6

(c) 0 8 7

(d) 3 4 5 4

*/