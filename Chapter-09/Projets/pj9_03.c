/*
Modify Programming Project 9 fron Chapter 8 so that includes the following functions:

    void generate_random_walk(char walk[10][10]);
    void print_array(char walk[10][10])

main first calls generate_random_walk, which initializes the arry to contain '.'
characters and then replaces some of these characters by the letters A through Z,
as described in the original project. main then calls print_array to display the
array on the screen

Test Cases:
(Correct output)

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


(Incorrect output)

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

*/

#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

#define MAX_ROWS 10
#define MAX_COLS 10

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void)
{
    // Multidimensional array initialization
    char randArry[MAX_ROWS][MAX_COLS];    
  
    // Generate random walk
    generate_random_walk(randArry);

    // To print matrix
    print_array(randArry);
   
    printf("\n");

    return 0;
}

//*****************************************************************************
void generate_random_walk(char walk[10][10])
{
    int c = 0;  int r = 0;
    bool occupied[4]= {false};
    int numGen = 0;
    char z = 'A';

    // Fill matrix with '.'
    for (int r = 0; r < MAX_ROWS; r++)
    {
        for (int c = 0; c < MAX_COLS ; c++)
        {
            walk[r][c] = '.';
        }
    }

    // Random nmber generator
    srand((unsigned) time(NULL));

    // Multiple occupied[i] indiciates a free direction to move, if neither is false stop program
    while (walk[r][c] != 'Z' && (occupied[0] == false || occupied[1] == false || 
        occupied[2] == false || occupied[3] == false))
    {
        numGen = rand() % 4;

        if(numGen == 0)
        {
            if (r - 1 >= 0 && walk[r-1][c] == '.')
            {
                r--;
                walk[r][c] = z;
            }
            else
            {
                occupied[0] = true;
                continue;
            }

        }
        else if (numGen == 1)
        {
            if (r + 1 <=9 && walk[r+1][c] == '.')
            {
                r++;
                walk[r][c] = z;
            }
            else
            {
                occupied[1] = true;
                continue;
            }            
        }
        else if (numGen == 2)
        {
            if (c - 1 >= 0 && walk[r][c-1] == '.')
            {
                c--;
                walk[r][c] = z;
            }
            else
            {
                occupied[2] = true;
                continue;
            }            
        }
        else if (numGen == 3)
        {
            if (c + 1 <= 9 && walk[r][c+1] == '.')
            {
                c++;
                walk[r][c] = z;
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

}

void print_array(char walk[10][10])
{
    for (int i = 0; i < MAX_ROWS; i++)
    {
        for (int j = 0; j < MAX_COLS ; j++)
            printf("%c ", walk[i][j]);
        printf("\n");
    }

}