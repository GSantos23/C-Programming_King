/*
Modify Programming Project 5 from Chapter 7 so that the SCRABBLE values of the 
letters are stored in an array. The array will have 26 elements, corresponding to
the 26 letters of the alphabet. For example, element 0 of the array will store 1
(because the SCRABBLE value of letter A is 1), element 1 of the array will store
3 (because the SCRABBLE value of the letter B is 3), and so forth. As each character
of the input word is read, the program will use the array to determine the SCRABBLE
value of the character. Use an array initializer to set up the array.

     1: AEILNORSTU
     2: DG
     3: BCMP
     4: FHVWY
     5: K
     8: JX
    10: QZ

*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int  scrabbleValue = 0;
    int  scrabbleArray[26] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};

    printf("Enter a word: ");
    ch = toupper(getchar());            // Converts getchar() to uppercase
    
    while (ch != '\n') {
        if(ch == 'D' || ch == 'G')
            scrabbleValue += scrabbleArray[3];
        else if (ch == 'B' || ch == 'C' || ch == 'M' || ch == 'P')
            scrabbleValue += scrabbleArray[1];
        else if (ch == 'F' || ch == 'H' || ch == 'V' || ch == 'W' || ch == 'Y')
            scrabbleValue += scrabbleArray[5];
        else if (ch == 'K')
            scrabbleValue += scrabbleArray[10];
        else if (ch == 'J' || ch == 'X')
            scrabbleValue += scrabbleArray[23];
        else if (ch == 'Q' || ch == 'Z')
            scrabbleValue += scrabbleArray[25];
        else
            scrabbleValue += scrabbleArray[0];

        ch = toupper(getchar());
    }

    printf("Scrabble value: %d\n", scrabbleValue);
    
    return 0;
}