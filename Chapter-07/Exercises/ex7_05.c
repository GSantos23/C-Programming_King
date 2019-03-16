/*
Author: GERSON
SCRABBLE Program

In the SCRABBLE Crosswords Game, players form words using small tiles, each 
containing a letter and a face value. The face value varies from one letter to
another, based on the letter's rarity. Here are the face values:

     1: AEILNORSTU
     2: DG
     3: BCMP
     4: FHVWY
     5: K
     8: JX
    10: QZ

Write a program that prints the computes the value of a word by summing the 
values of the letters:

    Enter a word: pitfall
    SCrabble value: 12

Your program should allow any mixture of lowercase and uppercase letters in the 
word. Hint: Use the toupper library function.
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int  scrabbleValue = 0;

    printf("Enter a word: ");
    ch = toupper(getchar());            // Converts getchar() to uppercase
    
    while (ch != '\n')
    {
        if(ch == 'D' || ch == 'G')
            scrabbleValue += 2;
        else if (ch == 'B' || ch == 'C' || ch == 'M' || ch == 'P')
            scrabbleValue += 3;
        else if (ch == 'F' || ch == 'H' || ch == 'V' || ch == 'W' || ch == 'Y')
            scrabbleValue += 4;
        else if (ch == 'K')
            scrabbleValue += 5;
        else if (ch == 'J' || ch == 'X')
            scrabbleValue += 8;
        else if (ch == 'Q' || ch == 'Z')
            scrabbleValue += 10;
        else
            scrabbleValue++;

        ch = toupper(getchar());
    }

    printf("Scrabble value: %d\n", scrabbleValue);
    return 0;
}