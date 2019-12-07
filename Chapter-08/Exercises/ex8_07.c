/*
 * Using the shortcuts described in Section 8.2, shrink the initializer for the
 * segments array (Exercise 6) as much as you can.
*/

#include <stdio.h>

int main(void)
{								//0  1  2  3  4  5  6
	const int segments[10][7] = {{1, 1, 1, 1, 1, 1}, // 0
								 {0, 1, 1}, // 1
								 {1, 1, 0, 1, 1, 0, 1}, // 2
								 {1, 1, 1, 1, 0, 0, 1}, // 3
								 {0, 1, 1, 0, 0, 1, 1}, // 4
								 {1, 0, 1, 1, 0, 1, 1}, // 5
								 {1, 0, 1, 1, 1, 1, 1}, // 6			_
								 {1, 1, 1, 0, 0, 0, 1}, // 7, assuming  -|
								 {1, 1, 1, 1, 1, 1, 1}, // 8
								 {1, 1, 1, 1, 0, 1, 1}, // 9
								};

	printf("\n");

	return 0;
}
