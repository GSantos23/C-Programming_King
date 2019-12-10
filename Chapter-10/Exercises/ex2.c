/*
 * The following program outline shows only function definitions and variable
 * declarations.
 *
 * For each of the following scopes, list all variable and parameter names
 * visible in that scope . If there's more than one variable or parameter with
 * the same name, indicate which one is visible.
 * (a) The f function
 * (b) The g function
 * (c) The block in which a and d are declared
 * (d) The main function
 */

/*
Answers:

(a) global: b, c  local: b (visible), d  parameter: none
(b) global: b, c  local: c (visible) parameter: a
(c) global: b, c  local: a (visible), c (visible), d    parameter: a
(d) global: b, c  local: c (visible), d

 */


int b, c;

void f(void)
{
	int b, d;
}

void g(int a)
{
	int c;
	{
		int a, d;
	}
}

int main(void)
{
	int c, d;
}

