/* Modify the repdigit.c program from Sectiom 8.1 so that it shows which digits
 * (if any) were repetead
 *
 * Enter a number: 939577
 * Repeated digit: 7 9
 */

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
	bool digit_seen[10] = {false};
	int digit;
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while (n > 0) {
		digit = n % 10;
		if (digit_seen[digit])
            printf("%d ", digit);
			//break;
		digit_seen[digit] = true;
		n /= 10;
	}


    printf("\n");

	return 0;
}
