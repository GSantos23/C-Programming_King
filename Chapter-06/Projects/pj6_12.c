/*
	Modify Programming Project 11 so that the program continues adding terms
	until the current terms become less than E, where E is a small 
	(floating-point) number entered by the user.
*/

#include <stdio.h>

int main(void)
{
	int n = 0;
	float e = 1.0f; 	float factorial = 1.0;	float epsilon = 0.0f;

	printf("Enter value on n: ");
	scanf("%d", &n);

	printf("Enter value on epsilon: ");
	scanf("%f", &epsilon);	

	for (int i = 1; i <= n; i++)
	{
		factorial = factorial * i;
		e = e + 1/factorial;

		if (1/factorial < epsilon)
			break;
	}

	printf("Vale of e: %.4f\n", e);

	return 0;
}