/*
Write a function day_of_year(month, day, year) that returns the day of the year
(an integer between 1 and 366) specified by the three arguments
*/
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int day_of_year(int month, int day, int year);

int main(void)
{
    int m = 0, d = 0, y = 0;     int result = 0;

    printf("Enter month/day/year: ");
    scanf("%d/%d/%d", &m, &d, &y);

    result = day_of_year(m, d, y);
    printf("Day of the year: %d\n", result);
}

int day_of_year(int month, int day, int year)
{
    int currentDay = day;   int cummulative = 0;
    int leapYear[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30 ,31};
    int noLeapYear[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 ,31};

    bool isNotLeap = true;

    if ((year % 4 == 0) && ((year % 400 != 0 ) || (year % 100 == 0)))
        isNotLeap = false;  // Leap Year

    for (int i = 0; i < month-1; i++)
    {
        if (isNotLeap)
            cummulative += noLeapYear[i];
        else
            cummulative += leapYear[i];
    }

    cummulative += currentDay;     // Add the number of days of current month

    return cummulative;
}