/*
Modify Programming Project 16 from Chapter 8 so that it includes the following
functions:

void read_word(int counts[26]);
bool equal_aray(int counts1[26], int counts2[26]);

main will call  read_word twice, once for each of the two words entered by the user.
As if reads a word, read_word will use the letters in the word to update the counts
array, as described in the original project. (main will declare two arrays, one for
each word. These arrays are used to track how many times each letter occurs in the
words.)  main will then call equal_array, passing in the two arrays, equal_array
will return true if the elements in the two arrays are identical (indicating that
the words are anagrams) and false otherwise.
*/

/*
Test case:

Enter first word: smartest
Enter second word: mattress
The words are anagrams.

Enter first word: dumbest
Enter second word: stumble
The words are no anagrams.

*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]);
bool equal_aray(int counts1[26], int counts2[26]);

int main(void)
{
    int anagram1[26] = {0};     // counts1
    int anagram2[26] = {0};     // counts2

    printf("Enter first word: ");
    read_word(anagram1);
    
    printf("Enter second word: ");
    read_word(anagram2);

    printf("\n");

    if(equal_aray(anagram1, anagram2) == true)
        printf("The words are anagrams\n");
    else
        printf("The words are no anagrams\n");

    return 0;
}

//*****************************************************************************

void read_word(int counts[26])
{
    char chs =  0;      char myWord[26] = {0};
    int k = 0;          int testo = 0;
    
    chs = getchar();

    while(chs != '\n')
    {
        myWord[k] = chs;
        testo = (tolower(myWord[k]) - 'a') % 26;
        counts[testo] = counts[testo]+1;
        k++;        
        chs = getchar();
    }

}


bool equal_aray(int counts1[26], int counts2[26])
{

    for (int i = 0; i < 26; i++)
    {
        if (counts1[i] != counts2[i])   // To compare arrays
            return false;
    }

    return true;
}