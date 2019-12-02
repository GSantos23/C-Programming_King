/*
Write a program that ask the user for a 12-hour time, then displays the time in
24-hour form:

Enter a 12-hour time: 9:11 PM
Equivalent 24-hour time: 21:11

See programming project 8 for a description of the input format
*/

#include <stdio.h>

int main(void)
{
    int hour, minute;
    int newHour, newMinute;
    char period;
    char period2;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d", &hour, &minute);

    // Does not support pm with space
    period = getchar(); // Even if you put pm or PM only detect P. So it works
    period2= getchar();

    if (period == 'p' || period == 'P' || (period == ' ' && period2 == 'p') 
        || (period == ' ' && period2 == 'P'))
    {
        newHour = hour + 12;
        newMinute = minute;
    }
    else
    {
        newHour = hour;    
        newMinute = minute;
    }

    printf("Equivalent 24-hour time: %d:%d\n", newHour, newMinute);

    return 0;
}