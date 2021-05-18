/**
 * Exercise 8.7
 * Using the shorcut described in Section 8.2, shrink the initializer for the
 * segments array (Exercise 6) as much as you can.
 */

#include <stdio.h>

int main()
{								//0, 1, 2, 3, 4, 5, 6
	const int segments[10][7] = {{1, 1, 1, 1, 1, 1},
								 {[1][1] = 1,[1][2] = 1},
								 {1, 1, 0, 1, 1, 0, 1},
								 {1, 1, 1, 1, 0, 0, 1},
								 {0, 1, 1, 0, 0, 1, 1},
								 {1, 0, 1, 1, 0, 1, 1},
								 {1, 0, 1, 1, 1, 1, 1},
								 {1, 1, 1},
								 {1, 1, 1, 1, 1, 1, 1},
								 {1, 1, 1, 1, 0, 1, 1}};

	printf("\n");								 
 
}
