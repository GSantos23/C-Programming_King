/*
Write a program that prints an n X n magic square (a square arragement of the numbers
1, 2, ...., n^2 in which the sum of the rows, colums, and diagonals are all the same.)
The user will specify the value of n:

This program creates a magic square of a specified size.
The size must be odd number between 1 and 99.
Enter a size of magic square: 5

    17  24   1   8  15
    23   5   7  14  16
     4   6  13  20  22
    10  12  19  21   3
    11  18  25   2   9

Store the magic square in a two-dimensional array. Start by placing the number 1
in the middle of row 0. Place each of the remaining 2, 3, ...., n^2 by moving up
one row and  over one column. Any attempt to go outside the bounds of the array 
should "wrap-around" to the opposite sideof the array. For example, instead of storing
the next number in  row - 1, we sould store in row n -1 (the last row). Instead of
storing the next number in column n, we should store in column 0. If a particular
array element is already occupied, put the number directly below the previously stored
number. If your compiler supports variable-length arrays, delcare the array to have n
rows and n columns. If not, declare the array to have 99 rows and 99 columns.
*/

#include <stdio.h>

int main(void)
{
    int size = 0;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be odd number between 1 and 99.\n");
    printf("Enter a size of magic square: ");
    scanf("%d",&size);
    printf("\n");

    int magicSquare[size][size];

    // To init array to zeros
    for (int row = 0; row < size; row++)
        for (int col = 0; col < size; col++)
            magicSquare[row][col] = 0;

    int row = 0;    int col = size/2;   int limit = size - 1;
    int dummyRow, dummyCol;

    for (int i = 1; i <= size*size; i++)
    {
        magicSquare[row][col] = i; // Store value in array

        dummyRow = row;     // Holds previous value 
        dummyCol = col;     // Hold previous value

        // Row/Col conditions: Ternary operator condition?True:False
        (row -1 < 0) ? row = limit:row--;
        (col + 1 > limit) ? col = 0: col++;

        // To prevent overwrite in same spot. If a store a previous number:
        // magicsquare[row][col] == 1
        if(magicSquare[row][col] != 0)
        {
            row = dummyRow + 1;
            col = dummyCol;
        }      
        
    }

    // To print final array
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            printf("%3d ", magicSquare[i][j]);
            
        printf("\n");
    }
        
    printf("\n");

    return 0;
}