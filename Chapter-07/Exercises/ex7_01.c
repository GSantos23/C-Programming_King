/*
Programming Project 7.1
The square2.c program  of Section 6.3 will fail (usually by printing strange 
answers) if i*i exceeds the maximum int value. Run the program and determine the 
smallest value of n that causes failure. Try changing the type of i to short and
running the program again. (Don't forget to update the conversion specifications
in the call of pritnf!) Then try long. From these experiments, what can you 
conclude about the number of bits used to store integer types in your machine?
*/

#include <stdio.h>

int main (void)
{
    short i;
    //long i;
    int n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%10d%10d\n", i, i * i);
        // if long
        //printf("%10ld\t\t%10ld\n", i, i * i);
    }

    return 0;
}

/*
    Answer: When you change your data types the range of value are restricted.
    Dont forget the limit boundaries to prevent errors in your program :)
*/