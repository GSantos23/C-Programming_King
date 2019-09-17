/* 
	Modify the program of Programming Project 2 so that it prompts the
	user to enter the radius of the sphere
*/

#include <stdio.h>

#define PI 3.141592
#define SCALE_FACTOR (4.0f/3.0f)
//#define SCALE_FACTOR (4/3)

int main(void)
{
	float radius;

	printf("Enter radius of sphere: ");
	scanf("%f", &radius);
	
	float volume = SCALE_FACTOR * PI * radius * radius * radius;

	printf("Sphere Volume: %.2f\n", volume);

	return 0;
}

