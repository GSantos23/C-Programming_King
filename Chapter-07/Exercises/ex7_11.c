/*
Write a program that takes a first name and last name entered by the user and 
displays the last name, a comma, and the first initial, followed by a period:

Enter a fisrt and last name: Lloyd Fosdick
Fosdick, L.
*/

#include <stdio.h>

int main(void)
{
    char lastName;
    char firstName;
    char tmp;

    printf("Enter a first and last name: ");
    
    firstName = getchar();
    tmp = getchar();

    while (tmp != ' ')
    {
        ;
        tmp = getchar();
    }

    lastName = getchar();
    while(lastName != '\n')
    {
        printf("%c", lastName);
        lastName = getchar();
    }

    printf(", %c.\n", firstName);

    return 0;
}