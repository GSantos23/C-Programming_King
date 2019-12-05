/*
Modify Programming Project 11 from Chapter 7 so that the program lables its output:

Enter a first and last name: Lloyd Fosdick
You entered the name: Fosdick, L.

The program will need to store the last name (but not the first name) in an array
of characters until it can be printed. You may assume that the last name is no more 
than 20 characters long.
*/

#include <stdio.h>

int main(void)
{
    char lastName;
    char firstName;
    char tmp;
    char arrayLastName[20] = {' '};
    int  inc = 0;   // Incrementer

    printf("Enter a first and last name: ");
    
    firstName = getchar();
    tmp = getchar();

    while (tmp != ' ')
    {
        ;
        tmp = getchar();
    }

    printf("You entered : ");

    lastName = getchar();
    while(lastName != '\n')
    {        
        arrayLastName[inc] = lastName;
        printf("%c", arrayLastName[inc]);
        inc++;
        lastName = getchar();
    }

    printf(", %c.\n", firstName);

    return 0;
}