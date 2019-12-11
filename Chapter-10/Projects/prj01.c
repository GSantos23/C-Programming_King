/*
 * Modify the stack example of Section 10.2 so that it stores characters
 * instead of integers. Next, add a main function that asks the user to enter
 * a series of parentheses and/or braces, then indicates whether or not they're
 * properly nested:
 *
 * Enter parentheses and/or braces: ((){}{()})
 * Parentheses/braces are nested properly
 *
 * Hint: As the program reads charecters, have it push each left parenthesis
 * or left brace. When it reads a right parenthesis or brace, have it pop the
 * stack and check that the item popped is a matching parentheses or brace.
 * (If not, the parentheses/braces aren't nested properly.) When the program
 * reads the new-line character, have it check wheter the stack is empty; if
 * so, the parentheses/braces are matched. If the stack isn't empty (or if
 * stack_underflow is ever called), the parentheses/braces aren't matched.
 * If stack_overflow is called, have the program print the message Stack
 * overflow and terminate immediately.
 */


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>	// C99 only

#define STACK_SIZE	100 

// External Variables	*******************************************************
char contents[STACK_SIZE];
int top = 0;

// Prototypes			*******************************************************
void push(char ch);
char pop(void);
void stack_underflow();
int stack_overflow();
void make_empty(void);
bool is_empty(void);
bool is_full(void);

// main Function 		*******************************************************
int main(void)
{
	char ch; 
	bool match = true;

	printf("Enter parentheses and/or braces: ");

	while((ch = getchar()) != '\n')
	{
		if (ch == '{' || ch == '(')
			push(ch);
		else if (ch == '}')
		{
			if(pop()  != '{')
				match = false;
		}
		else if (ch == ')')
		{
			if (pop() != '(')
				match = false;
		}
	}

	if (!is_empty())
		match = false;

	if (match == true)
		printf("Parentheses/Braces matched!!!\n");
	else
		printf("Parentheses/Braces aren't matched!!\n");

	printf("\n");

	return 0;
}


// Function Definition	*******************************************************
void stack_underflow()
{
	printf("Stack Underflow\n");
	exit(0);
}

int stack_overflow()
{
	printf("Stack Overflow\n");
	exit(0);
}

void make_empty(void)
{
	top = 0;
}

bool is_empty(void)
{
	return top == 0;
}

bool is_full(void)
{
	return top == STACK_SIZE;
}


void push(char ch)
{
	if (is_full())
		stack_overflow();
	else
		contents[top++] = ch;
}


char pop(void)
{
    if (is_empty())
		stack_underflow();
	else
		return contents[--top];
}
