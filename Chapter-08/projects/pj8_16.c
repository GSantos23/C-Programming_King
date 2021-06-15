/*
Write a program that test wheter two words are anagrams (permutations of the same
letters):

Enter first word: smartest
Enter second word: mattress
The words are anagrams.

Enter first word: dumbest
Enter second word: stumble
The words are no anagrams.

Write a loop that reads the first word, character by character, using an array of 
26 integers to keep track of how many times each letter has been seen. (For example,
after the word smartest has been read, the array should contain the value
1 0 0 0 1 0 0 0 0 0 0 0 1 0 0 0 0 1 2 2 0 0 0 0 0 0, reflecting the fact that
smartest contains one a, one e, one m, one r, two s's and two t's.) 
Use another loop to read the second word, except this time decrementing the corresponding
array element as each letter is read. Both loops should ignore any characters that
aren't letters, and both should treat upper-case letters in the same way as lower-case
letters. After the second word has been read, use a third loop to check wheter all 
the elements in the array are zero. If so, the words are anagrams. 

Hint: you may wish to use functions form <ctype.h>, such as isalpha and tolower
*/

#include <stdio.h>
#include <ctype.h>
#define MAX_LEN 20

int main(void)
{
    char firstWord[MAX_LEN+1] = {0};
    char scondWord[MAX_LEN+1] = {0};
    char anagram[26] = {0};
    char ch = 0; char ch2 = 0;
    int count = 0; int count2 = 0;
    int j = 0; int k = 0;
    int test = 0; int test2 = 0;
    int flag = 0;

    printf("Enter first word: ");
    ch = getchar();

    while(ch != '\n')
    {
        firstWord[count] = ch;
        count++;
        ch = getchar();
        test = (tolower(firstWord[j]) - 'a') % 26;
        anagram[test] = anagram[test]+1;
        j++;        
    }

    // uncomment to display array of values
/*
    for (int i = 0; i < 26; i++)
    {
        printf("%d ", anagram[i]);
    }
*/
    printf("\nEnter second word: ");

    while(ch2 != '\n')
    {
        scondWord[count2] = ch2;
        count2++;
        ch2 = getchar();
        test2 = (tolower(scondWord[k]) - 'a') % 26;
        anagram[test2] = anagram[test2]-1;
        k++;        
    }

    // uncomment to display array of values
/*
    for (int i = 0; i < 26; i++)
    {
        printf("%d ", anagram[i]);

    }
*/
    

    for (int i = 0; i < 26; i++)
    {
        if(anagram[i] != 0)
            flag++;
    }

    if(flag)
        printf("\nThe words are no anagrams\n");
    else
        printf("\nThe words are anagrams\n");

    return 0;
}