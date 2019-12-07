/*
 * Using the array of Exercise 8, write a program fragment that computes the
 * average temperature for a month (averaged over all days of the month and
 * all hours of the day.)
*/

#include <stdio.h>

int main(void)
{

	int temperature_readings[30][24];	// [day][hours]
	int average_temperature_readings = 0;
	int factor = 720;	// From 30 *24
	
	for (int day = 0; day < 30; day++)
	{
		for (int hour = 0; hour < 24; hour++)
		{
			average_temperature_readings = temperature_readings[day][hour];
		}
	}

	average_temperature_readings = average_temperature_readings / factor;

	return 0;
}
