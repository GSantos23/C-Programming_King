/*
Author: Gerson

Modify Program Project 8 from Chapter 5 so that the user enters a time using the
12-hour clock. The input will have the form hours: minutes followed by either A,
P, AM or PM (either lower-case or upper-case). White space is allowed (but not 
required) between the numerical time and the AM/PM indicator. Examples of valid
input:

1:15P           1:15 P
1:15PM          1:15 PM
1:15p           1:15 p
1:15pm          1:15 pm

You may assume that the input has one these forms; there is no need to test for
errors.
*/

#include <stdio.h>

int main (void)
{
    int midnightMinutes, departureHours, departureMinutes;
    //int arrivalHours, arrivalMinutes;
    char period;

    printf("Enter a 12-hour time: ");
    //scanf("%d:%d %c", &departureHours, &departureMinutes, &period);
    scanf("%d:%d", &departureHours, &departureMinutes);
    
    period = getchar(); // Even if you put pm or PM only detect P. So it works

    if (period == 'p' || period == 'P')
        midnightMinutes = (departureHours + 12) * 60 + departureMinutes;
    else
        midnightMinutes = departureHours * 60 + departureMinutes;

    printf("test: %d", midnightMinutes);
    printf("\n");

    if (midnightMinutes > 0 && midnightMinutes < 510)  // 12:00 am, 8:30 am
        printf("Closest departure time is 8:00 am, arriving at 10:16 am\n");
    else if (midnightMinutes >= 510 && midnightMinutes < 619)
        printf("Closest departure time is 9:43 am, arriving at 11:52 am\n");
    else if (midnightMinutes >= 619 && midnightMinutes < 720)
        printf("Closest departure time is 11:19 am, arriving at 1:31 pm\n");
    else if (midnightMinutes >= 720 && midnightMinutes < 800)
        printf("Closest departure time is 12:47 pm, arriving at 3:00 pm\n");
    else if (midnightMinutes >= 800 && midnightMinutes < 900)
        printf("Closest departure time is 2:00 pm, arriving at 4:08 pm\n");
    else if (midnightMinutes >= 900 && midnightMinutes < 1080)
        printf("Closest departure time is 3:45 pm, arriving at 5:55 pm\n");
    else if (midnightMinutes >= 1080 && midnightMinutes < 1200)
        printf("Closest departure time is 7:00 pm, arriving at 9:20 pm\n");
    else if (midnightMinutes >= 1200 && midnightMinutes <= 1440)
        printf("Closest departure time is 9:45 pm, arriving at 11:58 pm\n");

    return 0;
}