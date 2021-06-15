/**
 * Write a program that generates a "random walk" across 10 X 10 array. 
 * The array     will contain characters (all '.' initially). The program must 
 * randomly "walk"     from element to element, always going up, down, left, or 
 * right by one element. 
 * The elements visited by the program will be labeled with letters A through Z,
 *  in the order visited. Here's an example of the desired output:

    A . . . . . . . . .
    B C D . . . . . . .
    . F E . . . . . . .
    H G . . . . . . . .
    I . . . . . . . . .
    J . . . . . . . Z .
    K . . R S T U V Y .
    L M P Q . . . W X . 
    . N O . . . . . . .
    . . . . . . . . . .

  * Hint: use srand and rand functions (see deal.c) to generate random numbers. 
  * After generting a number, look at its remainder when divided by 4. There are 
  * four possible values for the remiander --0, 1, 2,and 3 -- indicating the
  * direction of the next move. Before performing a move, check that (a) it 
  * won't go outside the array, and (b) it doesn't take us to an element that
  * already has a letter assigned.
  * If either condition is violated, try moving in another direction. If all 
  * four directions are blocked, the program must terminate. 
  * Here's an example of premature termination:

    A B G H I . . . . .
    . C F . J K . . . .
    . D E . M L . . . .
    . . . . N O . . . .
    . . W X Y P Q . . .
    . . V U T S R . . .
    . . . . . . . . . .
    . . . . . . . . . .
    . . . . . . . . . .
    . . . . . . . . . .

    Y is blocked on all four sides, so there's no place to place  z.
*/ 

#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

#define MAX_ROWS 10
#define MAX_COLS 10

int main(void)
{
    // Multidimensional array initialization
    char randArry[MAX_ROWS][MAX_COLS];    
    bool occupied[4]= {false};
    int numGen = 0; 
    int c = 0;  int r = 0;
    char z = 'A';

    // Fill matrix with '.'
    for (int r = 0; r < MAX_ROWS; r++)
    {
        for (int c = 0; c < MAX_COLS ; c++)
        {
            randArry[r][c] = '.';
        }
    }

    // Random nmber generator
    srand((unsigned) time(NULL));

    // Multiple occupied[i] indiciates a free direction to move, if neither is false stop program
    while (randArry[r][c] != 'Z' && (occupied[0] == false || 
        occupied[1] == false || occupied[2] == false || occupied[3] == false))
    {
        numGen = rand() % 4;

        if(numGen == 0)
        {
            if (r - 1 >= 0 && randArry[r-1][c] == '.')
            {
                r--;
                randArry[r][c] = z;
            }
            else
            {
                occupied[0] = true;
                continue;
            }

        }
        else if (numGen == 1)
        {
            if (r + 1 <=9 && randArry[r+1][c] == '.')
            {
                r++;
                randArry[r][c] = z;
            }
            else
            {
                occupied[1] = true;
                continue;
            }            
        }
        else if (numGen == 2)
        {
            if (c - 1 >= 0 && randArry[r][c-1] == '.')
            {
                c--;
                randArry[r][c] = z;
            }
            else
            {
                occupied[2] = true;
                continue;
            }            
        }
        else if (numGen == 3)
        {
            if (c + 1 <= 9 && randArry[r][c+1] == '.')
            {
                c++;
                randArry[r][c] = z;
            }
            else
            {
                occupied[3] = true;
                continue;
            }            
        }        

        z++;    // Increase to next letter

        // Unset occupied[i] flag for next iteration
        occupied[0]= false; occupied[1]= false; 
        occupied[2]= false; occupied[3]= false;

    }

    // To print matrix
    for (int i = 0; i < MAX_ROWS; i++)
    {
        for (int j = 0; j < MAX_COLS ; j++)
            printf("%c ", randArry[i][j]);
        printf("\n");
    }
    
    printf("\n");

    return 0;
}