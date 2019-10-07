/*
If i and j are positive integers, does (-i)/j always have the same value as -(i/j)?
Justify your answer.
*/

// Yes, given that the final answer is still going to be negative

#include <stdio.h>

int main(void)
{
    int i = 10, j = 5;

    printf("Case 1 (-i)/j: %d\n", (-i)/j);
    printf("Case 2 -(i/j): %d\n", -(i/j));

    return 0;
}

// Both results are -2.