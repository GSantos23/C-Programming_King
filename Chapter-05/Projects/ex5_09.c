/*
	Write a program that prompts the user to enter two dates and then 
	indicates which date comes earlier on the calendar:

	Enter first  date (mm/dd/yyyy): 3/6/08
	Enter second date (mm/dd/yyyy): 5/17/07

	5/17/07 is earlier than 3/6/08
*/

#include <stdio.h>

int main (void)
{
	int month1, day1, year1;
	int month2, day2, year2;

	printf("Enter first date (mm/dd/yyyy): ");
	scanf("%d/%d/%2d", &month1, &day1, &year1);

	printf("Enter second date (mm/dd/yyyy): ");
	scanf("%d/%d/%2d", &month2, &day2, &year2);

	if (year1 < year2){
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month1, day1, year1,
			month2, day2, year2);
	}
	else if (year2 > year1)
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month2, day2, year2,
			month1, day1, year1);
	else if (year1 == year2 && month1 < month2)
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month1, day1, year1,
			month2, day2, year2);
	else if (year1 == year2 && month2 < month1)
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month2, day2, year2,
			month1, day1, year1);
	else if (year1 == year2 && month1 == month2 && day1 < day2)
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month1, day1, year1,
			month2, day2, year2);
	else
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month2, day2, year2,
			month1, day1, year1);

	return 0;
}