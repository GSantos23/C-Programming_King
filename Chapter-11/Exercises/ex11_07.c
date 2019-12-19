/*
 * Write the following function:
 *
 * void split_date(int day_of_year, int year, int *month, int *day);
 *
 * day_of_year is an integer between 1 and 366, specifying a particular day
 * within the year designated by year, month and day point to variables in
 * which the function will store the equivalent month (1-12) and day within
 * that month(1-31)
 *
*/

#include <stdio.h>
#include <stdbool.h>

void split_date (int day_of_year, int year, int *month, int *day);

int main(void)
{
	int year_input = 0, day_input = 0;
	int month_output = 0, day_output = 0;

	printf("Please enter day of year (1 ~ 366): ");
	scanf("%d", &day_input);
	printf("Please enter year: ");
	scanf("%d", &year_input);

	split_date(day_input, year_input, &month_output, &day_output);

	printf("\n");
	printf("Month: %d, Day: %d\n", month_output, day_output);

	return 0;
}

void split_date (int day_of_year, int year, int *month, int *day)
{
	bool leap_year;

	// Non leap year
	int day_per_month[12] = {31, 28, 31, 30, 31, 30,
							 31, 31, 30, 31, 30, 31};

	int total_days[11];

	//check if year is leap year, Feb == 29 days
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) // leap year
		leap_year = true;
	else
		leap_year = false;

	if(leap_year)
		day_per_month[1] = 29;

	total_days[0] = day_per_month[0] + day_per_month[1];	 // Feb
	total_days[1] = total_days[0] + day_per_month[2]; 		// Mar
	total_days[2] = total_days[1] + day_per_month[3]; 		// Apr
	total_days[3] = total_days[2] + day_per_month[4]; 		// May
	total_days[4] = total_days[3] + day_per_month[5]; 		// Jun
	total_days[5] = total_days[4] + day_per_month[6]; 		// Jul
	total_days[6] = total_days[5] + day_per_month[7]; 		// Aug
	total_days[7] = total_days[6] + day_per_month[8]; 		// Sep
	total_days[8] = total_days[7] + day_per_month[9]; 		// Oct
	total_days[9] = total_days[8] + day_per_month[10]; 		// Nov
	total_days[10] = total_days[9] + day_per_month[11]; 	// Dec


	if(day_of_year > 0 && day_of_year <= day_per_month[0])
	{
		*month = 1;
		*day = day_of_year;
	}
	else if(day_of_year > day_per_month[0] && day_of_year <= total_days[0])
	{
		*month = 2;
		*day = day_of_year - day_per_month[0];
	}
	else if(day_of_year > total_days[0] && day_of_year <= total_days[1])
	{
		*month = 3;
		*day = day_of_year - total_days[0];
	}
	else if(day_of_year > total_days[1] && day_of_year <= total_days[2])
	{
		*month = 4;
		*day = day_of_year - total_days[1];
	}
	else if(day_of_year > total_days[2] && day_of_year <= total_days[3])
	{
		*month = 5;
		*day = day_of_year - total_days[2];
	}
	else if(day_of_year > total_days[3] && day_of_year <= total_days[4])
	{
		*month = 6;
		*day = day_of_year - total_days[3];
	}
	else if(day_of_year > total_days[4] && day_of_year <= total_days[5])
	{
		*month = 7;
		*day = day_of_year - total_days[4];
	}
	else if(day_of_year > total_days[5] && day_of_year <= total_days[6])
	{
		*month = 8;
		*day = day_of_year - total_days[5];
	}
	else if(day_of_year > total_days[6] && day_of_year <= total_days[7])
	{
		*month = 9;
		*day = day_of_year - total_days[6];
	}
	else if(day_of_year > total_days[7] && day_of_year <= total_days[8])
	{
		*month = 10;
		*day = day_of_year - total_days[7];
	}
	else if(day_of_year > total_days[8] && day_of_year <= total_days[9])
	{
		*month = 11;
		*day = day_of_year - total_days[8];
	}
	else if(day_of_year > total_days[9] && day_of_year <= total_days[10])
	{
		*month = 12;
		*day = day_of_year - total_days[9];
	}

}
