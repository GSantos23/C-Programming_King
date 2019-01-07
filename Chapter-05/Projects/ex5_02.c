/*
	Write a program that ask the user for a 24-hour time, then displays the
	time in 12-hour form:

	Enter a 24-hour time: 21:11
	Equivalent 12-hour time: 9:11 PM

	Be careful not to display 12:00 as 0:00
*/

#include <stdio.h>

int main(void)
{
	int hour, minutes;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minutes);

	printf("Equivalent 12-hour time: ");

	switch (hour)
	{
		case 1: case 13: printf("1:%d", minutes);		break;
		case 2: case 14: printf("2:%d", minutes);		break;
		case 3: case 15: printf("3:%d", minutes);		break;
		case 4: case 16: printf("4:%d", minutes);		break;
		case 5: case 17: printf("5:%d", minutes);		break;
		case 6: case 18: printf("6:%d", minutes);		break;
		case 7: case 19: printf("7:%d", minutes);		break;
		case 8: case 20: printf("8:%d", minutes);		break;
		case 9: case 21: printf("9:%d", minutes);		break;
		case 10: case 22: printf("10:%d", minutes);		break;
		case 11: case 23: printf("11:%d", minutes);		break;
		case 12: case 24: printf("12:%d", minutes);		break;
	}

	if (hour == 24 || hour < 12)
		printf(" AM\n");
	else
		printf(" PM\n");

	return 0;
}