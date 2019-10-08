/*
	Write a program that ask the user for a two-digit number, then prints
	the English word for the number:

	Enter  a two-digit number: 45
	You entered the number forty-five.

	Hint: Break the number into two digits. Use one switch statement to 
	print the word for the first digit ("twenty", "thirty", and so forth).
	Use a second switch statement to print the word for the second digit.
	Don't forget that the numbers between 11 and 19 require special 
	treatment. 
*/

#include <stdio.h>

int main (void)
{
	int number, firstDigit, secondDigit;

	printf("Enter a two-digit number: ");
	scanf("%d", &number);

	printf("You entered the number ");

	if (number >= 10 && number < 20)
	{
		switch (number)
		{
			case 10: printf("Ten.\n");        	break;
			case 11: printf("Eleven.\n");     	break;
			case 12: printf("Twelve.\n");		break;
			case 13: printf("Thirtheen\n");		break;
			case 14: printf("Fourtheen.\n");	break;
			case 15: printf("Fiftheen.\n");		break;
			case 16: printf("Sixtheen.\n");		break;
			case 17: printf("Seventheen.\n");	break;
			case 18: printf("Eightheen.\n");	break;
			case 19: printf("Ninetheen.\n");	break;
		}
	}
	else
	{
		firstDigit = number / 10;
		secondDigit = number % 10;
		
		switch (firstDigit)
		{
			case 2: printf("Twenty-");    break;
			case 3: printf("Thirty-");    break;
			case 4: printf("Forty-");     break;
			case 5: printf("Fifty-");     break;
			case 6: printf("Sixty-");     break;
			case 7: printf("Seventy-");   break;
			case 8: printf("Eighty-");    break;
			case 9: printf("Ninety-");    break;
			default: printf("");
		}

		switch (secondDigit)
		{
			case 1: printf("one.\n");        break;
			case 2: printf("two.\n");        break;
			case 3: printf("three.\n");      break;
			case 4: printf("four.\n");       break;
			case 5: printf("five.\n");       break;
			case 6: printf("six.\n");        break;
			case 7: printf("seven.\n");      break;
			case 8: printf("eight.\n");      break;
			case 9: printf("nine.\n");   	 break;
			default: printf(".\n");
		}

	}

	return 0;
}