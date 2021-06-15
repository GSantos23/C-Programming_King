/*
Modify Programming Project 4 from Chapter 7 so that the program labels its output:

Enter phone number: 1-800-COL-LECT
In numeric form: 1-800-265-5328

The program will need to store the phone number (either in its original form or
in its numeric form) in an array of characters until it can be printed. You may 
assume that the phone number is no more than 15 characters long.
*/  

#include <stdio.h>

int main(void)
{
    char ch;
    char phoneNumber[15] = {'0'};
    int counter = 0;

    printf("Enter phone number: ");
    ch = getchar();

    while(ch != '\n') {
        
        switch (ch) {
            case 'A': case 'B': case 'C': 
                phoneNumber[counter] = '2';
                break;
            case 'D': case 'E': case 'F': 
                phoneNumber[counter] = '3';
                break;
            case 'G': case 'H': case 'I': 
                phoneNumber[counter] = '4';
                break;
            case 'J': case 'K': case 'L': 
                phoneNumber[counter] = '5';
                break;
            case 'M': case 'N': case 'O':   
                phoneNumber[counter] = '6';
                break;
            case 'P': case 'R': case 'S':    
                phoneNumber[counter] = '7';
                break;
            case 'T': case 'U': case 'V':     
                phoneNumber[counter] = '8';
                break;
            case 'W': case 'X': case 'Y': 
                phoneNumber[counter] = '9';
                break;                
            default:    
                phoneNumber[counter] = ch;
                break;
        }

        counter++;
        ch = getchar();
    }

    printf("In numeric form: ");
    
    for (int i = 0; i < counter; i++)
        printf("%c", phoneNumber[i]);

    printf("\n");

    return 0;
}