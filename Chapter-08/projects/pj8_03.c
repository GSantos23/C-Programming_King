/* Modify the repdigit.c program of Section 8.1 so that the user can enter more
 * than one number to be tested for repeated digits. The program should
 * terminate when the user enters a number that's less or equal to 0
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

    do {
         while (n > 0) {
             digit = n % 10;
             if (digit_seen[digit])
                 break;
            digit_seen[digit] = true;
            n /= 10;
        }

            if (n > 0)
                printf("Repeated digit\n");
            else
                printf("No repeated digit\n");

        printf("Enter a number: ");
        scanf("%ld", &n);

    }while (n > 0);


	return 0;
}
