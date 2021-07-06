/*
Write the following function:
    
    float compute_GPA (char grades[], int n);

The grades array will contain letter grades (A,B,C,D or F, either upper-case or
lowercase): n is the length of the array. The function should return the average
of the grades (assume that A = 4, B = 3, C = 2, D = 1, and F = 0).
*/

#include <stdio.h>

float compute_GPA (char grades[], int n);

// Test main
int main(void)
{
    
    int testN = 5;  
    char testArray[] = {'A', 'B', 'C', 'D', 'F'};
    float testFunc = 0;

    testFunc = compute_GPA(testArray, testN);
    printf("Average: %.2f\n", testFunc);

    // uncomment if you want to type your own array
    /*
    int length = 0; 

    printf("Type length of array: ");
    scanf("%d", &length);

    char gradeArray[length];

    printf("Type grades: ");
    for (int i = 0; i < length; i++)
    {
        scanf(" %c", &gradeArray[i]);
    }

    float testFunc2 = compute_GPA(gradeArray, length);
    printf("Average: %.2f\n", testFunc2);
    */
    
    return 0;
}

float compute_GPA(char grades[], int n)
{
    int value = 0;  
    float result = 0; 
    float average = 0;

    for (int i = 0; i < n; i++)
    {
        if (grades[i] == 'A' || grades[i] == 'a')
            value  += 4;
        else if (grades[i] == 'B' || grades[i] == 'b')
            value += 3;
        else if (grades[i] == 'C' || grades[i] == 'c')
            value += 2;
        else if (grades[i] == 'D' || grades[i] == 'd')
            value += 1;
        else if (grades[i] == 'F' || grades[i] == 'f')
            value += 0;
        else
            printf("You must type: A, B, C, D, or F\n");
    }

    result = value;
    average = result / n;

    return average;
}