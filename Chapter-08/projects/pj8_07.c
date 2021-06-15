/* Write a program that read a 5 x 5 array of integers and then prints the rows
sums and the columns sums:

Enter row 1: 8 3  9 0 10
Enter row 2: 3 5 17 1  1
Enter row 3: 2 8 6 23 1
Enter row 4: 15 7 3 2 9
Enter row 5: 6 14 2 6 0

Row totals: 30 27 40 36 28
Column totals: 34 37 37 32 31
*/

#include <stdio.h>

int main(void)
{
    int arr[5][5] = {0};
    int value_row = 0, sum_row = 0;
    int value_col = 0, sum_col = 0;
    int row_total[5] = {0};
    int col_total[5] = {0};

    for (int i = 0; i < 5; i++) {
        printf("Enter row %d: ", i+1);
        for (int j = 0; j < 5; j++) {
            scanf("%d", &value_row);
            arr[i][j] = value_row;
            sum_row += value_row;
        }

        row_total[i] = sum_row;
        sum_row = 0;
    }

    printf("\nRow totals: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", row_total[i]);
    }


    /* To calculate this part, we need that whole array is already stored */
    printf("\nCol totals: ");
    for (int j = 0; j < 5; j++) {
        for (int k = 0; k < 5; k++) {
            value_col = arr[k][j];
            sum_col += value_col;
        }

        col_total[j] = sum_col;
        sum_col = 0;
    }


    for (int i = 0; i < 5; i++) {
        printf("%d ", col_total[i]);
    }

    printf("\n");
    return 0;
}
