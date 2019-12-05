/*
Modify repdigit.c program of Section 8.1 so that it prints a table showing how 
many times each digit appears in the number:

Enter a number: 41271092
Digit:          0 1 2 3 4 5 6 7 8 9 
Ocurrences:     1 2 2 0 1 0 0 1 0 1

*/

#include <stdbool.h>
#include <stdio.h>

int main (void)
{
    //bool digit_seen[10] = {false};
    int digit_seen[10] = {0};
    int index[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    printf("Digit:\t    ");

    for(int i = 0; i < 10; i++)
    {
        index[i] = i;
        printf("%d ", index[i]);
    }


    while (n > 0)
    {
        digit = n % 10;
 
        digit_seen[digit]++;
        
        n /= 10;
    }

    printf("\nOcurrences: ");

    for(int i = 0; i < 10; i++)
    {
        printf("%d ", digit_seen[i]);
    }


    printf("\n");

    return 0;
}