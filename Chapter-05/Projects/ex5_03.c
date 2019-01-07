/*
	Modify broker.c program from Section 5.2 by making both of the following
	changes:

		(a) Ask the user to enter the number of shares and the price per share,
			instead of the value of the trade.
		(b) Add statements that compute the commission charged by a rival broker
			($33 plus 3c per share for fewer than 2000 shares, $33 plus 2c for 
			2000 shares or more). Display the rival's commission as well as the
			commission charged by the original broker.
*/

#include <stdio.h>

int main (void)
{
	float commision, value;
	float numberShares, pricePerShare, brokerCommission;

	printf("Enter number of shares: ");
	scanf("%f", &numberShares);

	printf("Enter price per share: ");
	scanf("%f", &pricePerShare);


	// Rival Broker
	printf("******Rival Broker Commision******\n");
	if (numberShares < 2000)
		brokerCommission = 33.00f + (0.03 * pricePerShare);
	else
		brokerCommission = 33.00f + (0.02 * pricePerShare);

	printf("Commision: $%.2f\n", brokerCommission);

	// I assume that the following statement correspond to original broker
	value = numberShares * pricePerShare;

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
	
	printf("******Original Broker Commision******\n");
	printf("Commision: $%.2f\n", commision);

	return 0;
}
