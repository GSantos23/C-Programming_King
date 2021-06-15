/* Modify the repdigit.c program of section 8.1 so that it prints a table
 * showing how many times each digit appears in the number.
 *
 * Enter a number: 4127092
 * Digit:       0 1 2 3 4 5 6 7 8 9
 * Ocurrence:   1 2 2 0 1 0 0 1 0 1
 */

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
	int digit_seen[10] = {0};
    int index[10] = {10};
	int digit;
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

    printf("Digit:\t\t ");

    for (int i = 0; i < 10; i++) {
        index[i] = i;
        printf("%d ", index[i]);
    }

    printf("\nOccurrence:\t ");

	/* a[i]++ increments the element at index i, it doesn't increment i */
    while (n > 0) {
        digit = n % 10;
        digit_seen[digit]++;
        n /= 10;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", digit_seen[i]);
    }

    printf("\n");

	return 0;
}
