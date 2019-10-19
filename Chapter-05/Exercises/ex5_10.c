/* What output does the following program fragment produce? (Assume that i is an
integer varaible.)

i = 1;
switch (i % 3) {
    case 0: printf("zero");
    case 1: printf("one");   //<--- Answer
    case 2: printf("two");
}

*/

#include <stdio.h>

int main(void)
{
    int i = 3;

    switch (i % 3) {
        case 0: printf("zero");
        case 1: printf("one");   
        case 2: printf("two");
    }

    printf("\n");
    return 0;

}

/* The lack of break statements give us an unexpected answer: onetwo */