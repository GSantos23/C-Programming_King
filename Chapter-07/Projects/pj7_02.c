/*
    Programming Progject 7.2
    Modify the square2.c program of Section 6.3 so that pauses after every 24 
    squares and displays the following message:

    Press Enter to continue ...
    
    After displaying the message, the program should use getchar to read a 
    character. getchar won't allow the program to continue until the user
    presses the Enter key.
*/

#include <stdio.h>

int main (void)
{
    int i, n;
    char ch = 0;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%10d\t%10d\n", i, i * i);

        if (i % 24 == 0 && (ch = getchar()) == '\n')
        {
            printf("Press Enter to continue...\n");
            ch = getchar();
        }
    }

    return 0;
}