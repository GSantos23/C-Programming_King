/**
 * Exercise 8.9
 * Using the array of Exercise 8, write a program fragment that computes the 
 * average temperature for a month(averaged over all days of the month and all
 * hours of the day)
 */

#include <stdio.h>

int main()
{
	double temperature_readings[30][24]; // [days][hours]
	double average_month_temperature = 0;
	int factor = 720;	// 30 * 24, remeber that arrays follow row-major order

	for (int day = 0l day < 30; day++) {
		for (int hour = 0; hour < 24; hour++) {
			average_month_temperature = temperature_readings[day][hour];
		}
	}

	average_month_temperature /= factor;
}