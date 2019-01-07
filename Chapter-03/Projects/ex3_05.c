/*
	Write a program that asks the user to enter numbers from 1 to 16 (in any
	order) and then displays the numbers in a 4 by 4 arragement, followed 
	by the sums of the rows, columns, and diagonals.
	See book page 50-51 formore details
*/

#include <stdio.h>

int main (void)
{
	int i0, i1, i2, i3;
	int i4, i5, i6, i7;
	int i8, i9, i10, i11;
	int i12, i13, i14, i15;

	printf("Enter the numbers from 1 to 16 in any order:\n");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &i0, &i1, &i2, 
		&i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12, &i13, &i14, &i15);

	printf("\n\n");
	printf("%d %d %d %d\n", i0, i1, i2, i3);
	printf("%d %d %d %d\n", i4, i5, i6, i7);
	printf("%d %d %d %d\n", i8, i9, i10, i11);
	printf("%d %d %d %d\n", i12, i13, i14, i15);

	int row1 = i0 + i1 + i2 + i3;
	int row2 = i4 + i5 + i6 + i7;
	int row3 = i8 + i9 + i10 + i11;
	int row4 = i12 + i13 + i14 + i15;

	int col1 = i0 + i4 + i8 + i12;
	int col2 = i1 + i5 + i9 + i13;
	int col3 = i2 + i6 + i10 + i14;
	int col4 = i3 + i7 + i11 + i15;

	int diag1 = i0 + i5 + i10 + i15;
	int diag2 = i3 + i6 + i9 + i12;

	printf("Row sums: %d %d %d %d\n", row1, row2, row3, row4);
	printf("Column sums: %d %d %d %d\n", col1, col2, col3, col4);
	printf("Diagonal sums: %d %d\n", diag1, diag2);

	return 0;
}