/* Exercise 8.6
 * Calculators, watches, and other electronic devices often rely on seven-segment
 * displays for numerical output. To form a digit, such devices "turn on" some of
 * the seven segments while leaving other "off":
 *   _      _   _       _   _  _   _   _
 *  | |  |  _|  _| |_| |_  |_   | |_| |_|
 *  |_|  | |_   _|   |  _| |_|  | |_|  _|
 *
 *  Suppose that we want to set up an array that remembers which segments should
 *  be "on"  for each digit. Let's number the segments as follows:
 *
 *   _0_
 * 5|_6_|1
 * 4|___|2
 *    3
 *
 * Here's what the array might look like, with each row representing one digit:
 *  const int segments[10][7] = {{1, 1, 1, 1, 1 , 1, 0},...};
 *
 *  I've give you the first row of the initializer; fill in the rest
*/

#include <stdio.h>

int main()
{								//0, 1, 2, 3, 4, 5, 6
	const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0},
								 {0, 1, 1, 0, 0, 0, 0},
								 {1, 1, 0, 1, 1, 0, 1},
								 {1, 1, 1, 1, 0, 0, 1},
								 {0, 1, 1, 0, 0, 1, 1},
								 {1, 0, 1, 1, 0, 1, 1},
								 {1, 0, 1, 1, 1, 1, 1},
								 {1, 1, 1, 0, 0, 0, 0},
								 {1, 1, 1, 1, 1, 1, 1},
								 {1, 1, 1, 1, 0, 1, 1}};

	printf("\n");								 
 
}
