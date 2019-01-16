/*
	Programming Project 9 in Chapter 5 asked you to write a program that
	determines which of two dates comes earlier on the calendar. Generalize
	the program so that the user enter may enter any number of dates.
	The user will enter 0/0/0 to indicate that no more dates will be entered:

	Enter a date (mm/dd/yyyy): 3/6/08
	Enter a date (mm/dd/yyyy): 5/17/07
	Enter a date (mm/dd/yyyy): 6/3/07
	Enter a date (mm/dd/yyyy): 0/0/0

	5/17/07 is the earlier date.
*/

#include <stdio.h>

int main (void)
{
	int month1, day1, year1;
	int month2, day2, year2;
	int earlyMonth, earlyDay, earlyYear;

	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%2d", &month1, &day1, &year1);

	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%2d", &month2, &day2, &year2);

	while (month1 != 0 && day1 != 0 &&  year1 != 0)
	{
		if (year1 < year2){
			earlyMonth = month1;
			earlyDay = day1;
			earlyYear = year1;
		}
		else if (year2 > year1){
			earlyMonth = month2;
			earlyDay = day2;
			earlyYear = year2;
		}
		else if (year1 == year2 && month1 < month2){
			earlyMonth = month1;
			earlyDay = day1;
			earlyYear = year1;
		}
		else if (year1 == year2 && month2 < month1){
			earlyMonth = month2;
			earlyDay = day2;
			earlyYear = year2;
		}
		else if (year1 == year2 && month1 == month2 && day1 < day2){
			earlyMonth = month1;
			earlyDay = day1;
			earlyYear = year1;
		}
		else{
			earlyMonth = month2;
			earlyDay = day2;
			earlyYear = year2;
		}

		printf("Enter a date (mm/dd/yyyy): ");
		scanf("%d/%d/%2d", &month1, &day1, &year1);
	}

	printf("%d/%d/%.2d is the earlier date.\n", earlyMonth, earlyDay, earlyYear);

	return 0;
}
