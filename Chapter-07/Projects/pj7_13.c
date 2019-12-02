/*
Write a program that calculates the average word length for a sentence:

Enter a sentence: It was deja vu all over again.
Average word length: 3.4

For simplicity, your program should consider a punctuation mark to be part of 
the word to which it is attached. Display the average word length to one decimal
place.
*/

#include <stdio.h>

int main(void)
{
    char ch;
    int spaceCount = 1;                 // To count the first word
    int letterCount = 0;
    float average = 0.0;
    
    printf("Enter a sentence: ");

    ch = getchar();

    while (ch != '\n')
    {
        letterCount++;

        if (ch == ' ')
        {
            spaceCount++;
            letterCount--;
        }

        ch = getchar();
    }

    average = (float) letterCount / spaceCount;

    printf("Average word length: %.1f\n", average);

    return 0;
}