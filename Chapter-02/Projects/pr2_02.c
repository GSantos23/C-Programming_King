/* 
	Write a program that computes the volume of a sphere with a 10-meter
	radius, using the formula v = 4/3PIr^3. Write the 4/3 as 4.0f/3.0f.
	(Try writing it as 4/3. What happens?). Hint: C doesn't have an 
	exponentiation operator, so you'll need to multiply r by itself twice 
	to compute r^3
*/

#include <stdio.h>

#define PI 3.141592
#define SCALE_FACTOR (4.0f/3.0f)
//#define SCALE_FACTOR (4/3)

int main(void)
{
	int radius = 10;

	float volume = SCALE_FACTOR * PI * radius * radius * radius;

	printf("Sphere Volume: %.2f\n", volume);

	return 0;
}

