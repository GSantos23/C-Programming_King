/*
	The following table shows the daily flights from one city to another:

	Departure Time 			Arrival Time
		8:00 a.m.			10:16 a.m.
		9:43 a.m.			11:52 a.m.
	   11:19 a.m.			 1:31 p.m.
	   12:47 p.m.			 3:00 p.m.
	    2:00 p.m.			 4:08 p.m.
	    3:45 p.m.			 5:55 p.m.
	    7:00 p.m.			 9:20 p.m.
	    9:45 p.m.			11:58 p.m.

	Write a program that asks the user to enter a time (expresed in hours 
	and minutes, using 24-hour clock). The program then displays the 
	depature and arrival times for the flight whose departure time is 
	closest to that enterd by the user:

	Enter a 24-hour time: 13:15
	Closest departure time is 12:47 p.m., arriving at 3:00 p.m.

	Hint: Convert the input into a time expressed in minutes since midnigth,
	and compare it to the departures times, also expresed in minutes since
	midnight. For example, 13:15 is 13 X 60 + 15 = 795 minutes since 
	midnight, which is closer to 12:47 p.m. (767 since midnight) that to any
	of the departures times.
*/

#include <stdio.h>

int main (void)
{
	int midnightMinutes, departureHours, departureMinutes;
	int arrivalHours, arrivalMinutes;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &departureHours, &departureMinutes);

	midnightMinutes = departureHours * 60 + departureMinutes;

	if (midnightMinutes > 0 && midnightMinutes < 510)  // 12:00 am, 8:30 pm
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