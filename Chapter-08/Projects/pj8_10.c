/*
Modify Programming Project 8 from Chapter 5 so that the departure times are 
stored in an array and the arrival times are stored in a second array.
(The times are integers, representing the number of minutes since midnight.)
The program will use a loop to search the array of departure times for the one
closest to the time entered by the user.
*/

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    int midnightMinutes, departureHours, departureMinutes;
    //int arrivalHours, arrivalMinutes;
    int departureTimes[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    //int arrivalTimes[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &departureHours, &departureMinutes);

    midnightMinutes = departureHours * 60 + departureMinutes;

    bool checkIn = false;

    while (!checkIn)
    {
        if (midnightMinutes  > 0 && midnightMinutes < departureTimes[0])
        {
            printf("Closest departure time is 8:00 am, arriving at 10:16 am\n");
            checkIn = true;
        }
        else if (midnightMinutes >= departureTimes[0] && midnightMinutes < departureTimes[1])
        {
            printf("Closest departure time is 9:43 am, arriving at 11:52 am\n");
            checkIn = true;
        }
        else if (midnightMinutes >= departureTimes[1] && midnightMinutes < departureTimes[2])
        {
            printf("Closest departure time is 11:19 am, arriving at 1:31 pm\n");
            checkIn = true;
        }
        else if (midnightMinutes >= departureTimes[2] && midnightMinutes < departureTimes[3])
        {
            printf("Closest departure time is 12:47 pm, arriving at 3:00 pm\n");
            checkIn = true;
        }
        else if (midnightMinutes >= departureTimes[3] && midnightMinutes < departureTimes[4])
        {
            printf("Closest departure time is 2:00 pm, arriving at 4:08 pm\n");
            checkIn = true;
        }
        else if (midnightMinutes >= departureTimes[4] && midnightMinutes < departureTimes[5])
        {
            printf("Closest departure time is 3:45 pm, arriving at 5:55 pm\n");
            checkIn = true;
        }
        else if (midnightMinutes >= departureTimes[5] && midnightMinutes < departureTimes[6])
        {
            printf("Closest departure time is 7:00 pm, arriving at 9:20 pm\n");
            checkIn = true;
        }
        else if (midnightMinutes >= departureTimes[6] && midnightMinutes < departureTimes[7])
        {
            printf("Closest departure time is 9:45 pm, arriving at 11:58 pm\n");
            checkIn = true;
        }        

    }

    return 0;
}