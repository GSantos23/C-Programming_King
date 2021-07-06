/*
Modify Programming Project 17 from Chapter 8 so that it includes the following 
functions:

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

After obtaining the number n from the user, main will call create_magic_square,
passing it an n X n array that is declared inside main create_magic_square will
fill the array with the numbers 1, 2, ...,n^2 as described in the original project.
main will then call print_magic_square, which will display the array in the format
described in the original project. Note: If your compiler doesn't support variable-length
arrays, declare the array in main to be 99 x 99 instead of n x n and use the following
prototypes instead: 

void create_magic_square(int n, char magic_square[99][99]);
void print_magic_square(int n, char magic_square[99][99]);

Test Case:

This program creates a magic square of a specified size.
The size must be odd number between 1 and 99.
Enter a size of magic square: 5

    17  24   1   8  15
    23   5   7  14  16
     4   6  13  20  22
    10  12  19  21   3
    11  18  25   2   9

*/
#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(void)
{
    int size = 0;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be odd number between 1 and 99.\n");
    printf("Enter a size of magic square: ");
    scanf("%d",&size);
    printf("\n");

    char magicSquare[size][size];

    // To init array to zeros
    for (int row = 0; row < size; row++)
        for (int col = 0; col < size; col++)
            magicSquare[row][col] = 0;

    create_magic_square(size, magicSquare);

    print_magic_square(size, magicSquare);
        
    printf("\n");

    return 0;
}

//*****************************************************************************
void create_magic_square(int n, char magic_square[n][n])
{
    int row = 0;    
    int col = n/2;   
    int limit = n - 1;
    int dummyRow, dummyCol;

    for (int i = 1; i <= n*n; i++)
    {
        magic_square[row][col] = i; // Store value in array

        dummyRow = row;     // Holds previous value 
        dummyCol = col;     // Hold previous value

        // Row/Col conditions: Ternary operator condition?True:False
        (row -1 < 0) ? row = limit:row--;
        (col + 1 > limit) ? col = 0: col++;

        // To prevent overwrite in same spot. If a store a previous number:
        // magic_square[row][col] == 1
        if(magic_square[row][col] != 0)
        {
            row = dummyRow + 1;
            col = dummyCol;
        }      
        
    }
}


void print_magic_square(int n, char magic_square[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%3d ", magic_square[i][j]);
            
        printf("\n");
    }
        
    printf("\n");

}