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
    int valArr[5][5];
    int rowSum[5], colSum[5];
    int sum = 0 , sum2 = 0;;
    int value = 0, value2 = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter row %d: ", i+1);
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &value);
            valArr[i][j] = value;
            sum += value;
        }

        rowSum[i] = sum;
        sum = 0;
    }

    printf("Row totals: "); 
    for (int i = 0; i < 5; i++)
        printf("%d ", rowSum[i]);

    printf("\n");
    printf("Column totals: ");

    for (int j = 0; j < 5; j++)
    {
        for (int k = 0; k < 5; k++)
        {
            value2 = valArr[k][j];
            sum2 += value2;
        }

        colSum[j] = sum2;
        sum2 = 0;
    }

    for (int i = 0; i < 5; i++)
        printf("%d ", colSum[i]);

    printf("\n");

    return 0;
}