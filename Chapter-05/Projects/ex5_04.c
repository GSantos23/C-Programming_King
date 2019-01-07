/*
 * Here's a simplified version of the Beaufort scale, which is used to estimate 
 * wind force: 
 * 
 * Speed (knots)		Description
 * Less than 1			Calm
 * 1 - 3				Light air
 * 4 - 27				Breeze
 * 28 - 47				Gale
 * 48 - 63				Storm
 * Above 63				Hurricane
 * 
 * Write a program that asks the user to enter a wind speed (in knots), then 
 * displays the corresponding description.
 */

#include <stdio.h> 

int main (void)
{
	int windSpeed;

	printf("Enter wind speed (in knots): ");
	scanf("%d", &windSpeed);

	if (windSpeed < 1)
		printf("Description:\tCalm\n");
	else if (windSpeed > 1 && windSpeed <= 3)
		printf("Description:\tLight air\n");
	else if (windSpeed > 3 && windSpeed <= 27)
		printf("Description:\tBreeze\n");
	else if (windSpeed > 27 && windSpeed <= 47)
		printf("Description:\tGale\n");
	else if (windSpeed > 47 && windSpeed <= 63)
		printf("Description:\tStorm\n");
	else
		printf("Description:\tHurricane\n");

	return 0;
}
