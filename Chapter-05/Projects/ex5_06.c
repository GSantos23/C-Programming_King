/*
	Modify the upc.c program of Section 4.1 so that it checks wheter a UPC
	is valid. After the user enter the upc, the program will display either
	VALID or NOT VALID
*/

#include <stdio.h>

int main (void)
{
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, k1, first_sum, second_sum;
    int total, chk_digit;

    printf("Enter the 12 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5,
    &j1, &j2, &j3, &j4, &j5, &k1);

    first_sum = d + i2  + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;
    chk_digit = 9 - ((total - 1) % 10);

    printf("Check digit: %d\n", chk_digit);

    if (k1 == chk_digit)
    	printf("VALID\n");
    else
    	printf("NOT VALID\n");

    return 0;
}