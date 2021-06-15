/*
Write a program that reverses the words in a sentence:

Enter a sentence: you can cage a swallow can't you?
Reversal of sentence: you can't swallow a cage can you?

Hint: Use a loop to read the characters one by one and store them in a one-dimensional
char array. Have the loop stop at a period, question mark, or exclamation point 
("the terminating character"), which is saved in a separate char variable. Then 
use a second loop to search backward through the array for the beginning of the 
last word, then search backward for the next-to-last word. Repeat until the beginning
of the array is reached. Finally, print the terminating character.
*/


#include <stdio.h>
#define MAX_LEN 40          // Maximum characters for string

int main(void)
{
    char initText;
    char termChar;
    char textArray[MAX_LEN+1] = {0};
    int last = MAX_LEN+1;   // Counts last item after terminator
    int next = 0;           // Reverse counter for string
    int count = 0;          // Number of characters

    printf("Enter a sentence: ");

    // Display string to reverse and delimits terminators
    initText = getchar();
    while(initText != '\n')
    {
        if(initText == '?' || initText == '.' || initText == '!')
        {
            termChar = initText;
            last = count;
            break;
        }

        textArray[count] = initText;  
        count++;                        
        initText = getchar();
    }


    printf("Reversal of sentence: ");

    while(count > 0)
    {
        if(textArray[count] == ' ') // blank space condition
        {
            for (next = count; next != last; next++)
                printf("%c", textArray[next]);

            last = count;
            printf("%c", textArray[count]);
        }

        count--;
    }

    // Condition to prevent repeated words in string
    while(textArray[count] != '\0' && textArray[count] != ' ')
    {
        printf("%c", textArray[count]);
        count++;
    }

    printf("%c\n", termChar);   // To print last character terminator

    return 0;
}