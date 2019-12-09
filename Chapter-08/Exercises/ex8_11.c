/*
 * Write a program fragment that declares an 8 X 8 char array named checker_board
 * and then uses a loop to store the following data into the array (one character
 * per array element):

    B R B R B R B R
    R B R B R B R B
    B R B R B R B R
    R B R B R B R B
    B R B R B R B R
    R B R B R B R B
    B R B R B R B R
    R B R B R B R B

 * HINT: The element row i, column j, should be the letter B if i + j is an even
 * number.
*/

#include <stdio.h>

int main(void)
{
	char checker_board[8][8] = {0};
	char pieces_black = 'B';
	char pieces_red = 'R';

	printf("Display checker_board:\n\n");

	for (int row = 0; row < 8; row++)
	{
		for (int col = 0; col < 8; col++)
		{
			if ((row + col) % 2 == 0)
			{
				checker_board[row][col] = pieces_black;
				printf("%c ", checker_board[row][col]);
			}
			else
			{
				checker_board[row][col] = pieces_red;
				printf("%c ", checker_board[row][col]);				
			}

		}
		printf("\n");
			}

	return 0;

}
