/*
	Write a program that formats product information entered by the user.
	A session with the program should look like this:

	Enter item number: 583
	Enter unit price: 13.5
	Enter purchase date (mm/dd/yyyy): 10/24/2010

	Item 		Unit 		Purchase
				Price 		Date 

	583			$  13.50	10/24/2010

	The item and date should be left justified; the unit price should be
	right justified. Allow dollar amounts up to  $9999.99. 
	Hint: Use tabs to line up colums.
*/

#include <stdio.h>

int main (void)
{
	int itemNumber = 0;
	float unitPrice = 0.0f;
	int mm = 0, dd = 0, yyyy = 0;

	printf("Enter item number: ");
	scanf("%d", &itemNumber);

	printf("Enter unit price: ");
	scanf("%f", &unitPrice);

	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &mm, &dd, &yyyy);

	printf("Item\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n");
	printf("%d\t\t$%.2f\t\t%2.2d/%d/%d\n", itemNumber, unitPrice, mm, dd, yyyy);

	return 0;
}