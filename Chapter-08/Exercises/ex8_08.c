/*Modify Programming Project 7 so that it prompts for five quiz for each of five
students, then computes the total score and average score for each student, and
the average score, high score, and low score for each quiz*/

#include <stdio.h>

int main(void)
{
    int valArr[5][5];
    double rowSum[5], colSum[5];
    int highScore[5], lowScore[5];
    int max = 0, min = 0;
    int sum = 0 , sum2 = 0;;
    int value = 0, value2 = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter quiz %d: ", i+1);
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &value);
            valArr[i][j] = value;
            sum += value;
        }

        rowSum[i] = sum;
        sum = 0;
    }

    //*************************************************************************
    printf("\nQuiz average: "); 
    for (int i = 0; i < 5; i++)
        printf("%.1f ", rowSum[i]/5);

    //*************************************************************************
    printf("\nQuiz high: ");
    for (int i = 0; i < 5; i++)
    {
        max = valArr[i][0];
        min = valArr[i][0];
        for (int j = 0; j < 5; j++)
        {
            if (valArr[i][j] > max)
                max = valArr[i][j];

            if (valArr[i][j] < min)
                min = valArr[i][j];
        }

        highScore[i] = max;
        lowScore[i] = min;
    }

    for (int i = 0; i < 5; ++i)
        printf("%d ", highScore[i]);

    //*************************************************************************
    printf("\nQuiz Low: ");

    for (int i = 0; i < 5; ++i)
        printf("%d ", lowScore[i]);

    //*************************************************************************
    printf("\n\n");
    printf("Student average: ");

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
        printf("%.1f ", colSum[i]/5);

    //*************************************************************************
    printf("\nTotal score: ");
    for (int i = 0; i < 5; i++)
        printf("%.1f ", colSum[i]);

    printf("\n");

    return 0;
}