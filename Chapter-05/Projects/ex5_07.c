/*
	Write a program that finds the largest and smallest of four integers
	entered  by the user:

	Enter four integers: 21 43 10 35
	Largest = 43
	Smallest = 10

	Use a few if statements as possible. Hint: Four if statements are 
	sufficient. 
*/

#include <stdio.h>

int main(void)
{
	int n1, n2, n3, n4;
	int largest, smallest;
	int s1 , s2;

	printf("Enter four integers: ");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);


	if (n1 > n2 && n1 > n3 && n1 > n4){
		largest = n1;
		s1 = (n2 < n3 && n2 < n4)?n2:n3;
		s2 = (n3 < n4 && n3 < n2)?n3:n4;
		smallest = (s1 < s2)?s1:s2;
	}
	else {
		if (n2 > n3 && n2 > n4){
			largest = n2;
			s1 = (n1 < n3 && n1 < n4)?n1:n3;
			s2 = (n3 < n4 && n3 < n4)?n3:n4;
			smallest = (s1 < s2)?s1:s2;
		}
		else if (n3 > n4 && n3 > n2){
			largest = n3;
			s1 = (n1 < n2 && n1 < n4)?n1:n2;
			s2 = (n2 < n4 && n2 < n4)?n2:n4;
			smallest = (s1 < s2)?s1:s2;
		}
		else{
			largest = n4;
			s1 = (n1 < n2 && n1 < n3)?n1:n2;
			s2 = (n2 < n3 && n2 < n3)?n2:n3;
			smallest = (s1 < s2)?s1:s2;
		}
	}

	printf("Largest = %d\n", largest);

/*
	if (n1 < n2 && n1 < n3 && n1 < n4){
		smallest = n1;
	}
	else {
		if (n2 < n3 && n2 < n4){
			smallest = n2;
		}
		else if (n3 < n4 && n3 < n2){
			smallest = n3;
		}
		else{
			smallest = n4;
		}
	}
*/
	printf("Smallest = %d\n", smallest);

	return 0;

}
