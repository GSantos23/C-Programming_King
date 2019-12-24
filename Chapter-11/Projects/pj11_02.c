/*
 * Modify the Programming Project 8 from Chapter 5 so that it includes the
 * following function:
 *
 * void find_closest_flight(int desired_time, int *departure_time,
 *                          int *arrival_time);
 *
 * This function will find the flight whose departure time is closed to
 * departure_time (expressed in minutes since midnight). It will store the
 * departure and arrival time of this flight (also expressed in minutes since
 * midnight) in the variables pointed by departure_time and arrival_time,
 * respectively.
 *
*/

#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time,
 int *arrival_time);


int main(void)
{
	int midnightMinutes = 0, departureHours = 0, departureMinutes = 0;
	int new_departure = 0, new_arrival = 0;

	printf("Enter a 24-hour time (hh:mm) ");
	scanf("%d:%d", &departureHours, &departureMinutes);

	// Calculate minutes since midnight
	midnightMinutes = departureHours * 60 + departureMinutes;

	find_closest_flight(midnightMinutes, &new_departure, &new_arrival);

	// To convert to 12-hour format and am/pm display
	int hour_format_departure = new_departure/60;
	int hour_format_arrival = new_arrival/60;

	if (hour_format_departure < 12)
		printf("Closest departure time: %.2d:%.2d AM\n", hour_format_departure,
		 new_departure%60);
	else if (hour_format_departure > 12)
	{
		hour_format_departure-=12;
		printf("Closest departure time: %.2d:%.2d PM\n", hour_format_departure,
		 new_departure%60);
	}

	if (hour_format_arrival < 12)
		printf("Arrival time: %.2d:%.2d AM\n", hour_format_arrival,
		 new_arrival%60);
	else if (hour_format_arrival > 12)
	{
		hour_format_arrival-=12;
		printf("Arrival time: %.2d:%.2d PM\n", hour_format_arrival,
		 new_arrival%60);
	}


	return 0;
}


//**************************************************************
void find_closest_flight(int desired_time, int *departure_time,
 int *arrival_time)
{
	if (desired_time > 0 && desired_time < 510)
	{
		*departure_time = 480; // 8:00 am
		*arrival_time = 616; // 1016 am
	}
	else if (desired_time >= 510 && desired_time < 619)
	{
		*departure_time = 583; // 9:43 am
		*arrival_time = 712;  // 11:52 am
	}
	else if (desired_time >= 619 && desired_time < 720)
	{
		*departure_time = 679; // 11:19 am
		*arrival_time = 811; // 1:31 pm
	}
	else if (desired_time >= 720 && desired_time < 800)
	{
		*departure_time = 767; // 12:47 pm
		*arrival_time = 900;   // 3:00
	}
	else if (desired_time >= 800 && desired_time < 900)
	{
		*departure_time = 840; // 2:00 pm
		*arrival_time = 968; // 4:08 pm
	}
	else if (desired_time >= 900 && desired_time < 1080)
	{
		*departure_time = 945; // 3:45
		*arrival_time = 1075;	// 5:55 pm
	}
	else if (desired_time >= 1080 && desired_time < 1200)
	{
		*departure_time = 1140; // 7:00 pm
		*arrival_time = 1280; // 9:20 pm
	}
	else if (desired_time >= 1200 && desired_time < 1440)
	{
		*departure_time = 1305; // 9:45 pm
		*arrival_time = 1438; // 11:58 pm
	}

}