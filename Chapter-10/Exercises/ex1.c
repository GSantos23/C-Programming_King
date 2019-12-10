// The following program outline shows only function definitions and variable
// declarations.

/*
 * For each of the following scopes, list all variable and parameters names
 * visible in that scope:
 * (a) The f function
 * (b) The g function
 * (c) The block in which e is declared
 * (d) The main function
 */

/*
Answers:

(a) variables: a,c.  		parameters: b
(b) variables: a, d      	parameters: none
(c) variables: a, d, e.		parameters: none
(d) variables: a, f.		parameters: none

 */


int a;

void f(int b)
{
	int c;
}

void g(void)
{
	int d;
	{
		int e;
	}
}

int main(void)
{
	int f;
}
