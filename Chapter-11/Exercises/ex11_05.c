/*
 * Write the following function:
 *
 * void split_time (long total_sec, int *hr, int *min, int *sec);
 *
 * total_sec is a time represented as the number of seconds since midnight,
 * hr, min, and sec are pointers to variables in which the function will store
 * the equivalent time in hours (0-23), minutes (0-59), and seconds (0-59),
 * respectively
*/

#include <stdio.h>

void split_time (long total_sec, int *hr, int *min, int *sec);

int main(void)
{
	long seconds_since_midnight = 0;
	int hour = 0, minutes = 0, seconds = 0;

	printf("Please type number of seconds since midnight: ");
	scanf("%ld", &seconds_since_midnight);

	split_time(seconds_since_midnight, &hour, &minutes, &seconds);

	printf("Hours: %d\n", hour);
	printf("Minutes: %d\n", minutes);
	printf("Seconds: %d\n", seconds);

	printf("\n");
	return 0;
}

void split_time (long total_sec, int *hr, int *min, int *sec)
{
	int remainder = (int) total_sec;
	
	*hr = total_sec / 3600;
	remainder = total_sec % 3600;
	*min = remainder / 60;
	remainder = total_sec % 60;
	*sec = remainder;	
}