/*
Write a program that counts the number of vowels (a, e, i, o, u) in a sentence:

Enter a sentence: And that's the way it is.
Your sentence contains 6 vowels.

*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int vowelCount = 0;
    char ch;

    printf("Enter a sentence: ");
    ch = tolower(getchar());        // To avoid extra condition with uppercase

    while (ch != '\n')
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vowelCount++;
        ch = tolower(getchar());
    }

    printf("Your sentence contains %d vowels.\n", vowelCount);

    return 0;
}

