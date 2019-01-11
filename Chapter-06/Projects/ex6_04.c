/*
	Add a loop to the broker.c program of Section 5.2 so that the user can 
	enter more than one trade and the program will calculate the commission
	on each. The program should  terminate when the user enters 0 as the
	trade value
*/

#include <stdio.h>

int main (void)
{
	float commision, value;

	printf("Enter value of trade: ");
	scanf("%f", &value);

	while (value != 0)
	{
		if (value < 2500.00f)
			commision = 30.00f + 0.017f * value;
		else if (value < 6250.00f)
			commision = 56.00f + 0.0066f*value;
		else if (value < 20000.00f)
			commision = 76.00f + 0.0034f*value;
		else if (value < 50000.00f)
			commision = 100.00f + 0.0022f*value;
		else if (value < 500000.00f)
			commision = 155.00f + 0.0011f*value;
		else
			commision = 255.00f + 0.0009f*value;

		if (commision < 39.00f)
			commision = 39.00f;
		
		printf("Commision: $%.2f\n", commision);

		printf("Enter value of trade: ");
		scanf("%f", &value);		
	}


	return 0;
}