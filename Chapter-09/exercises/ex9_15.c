/*
The following (rather confusing) function finds the median of three numbers. 
Rewrite the function so that it has just one return statement.

double median(double x, double y, double z)
{
    if (x <= y)
        if(y <= x)return y;
        else if (x <= z) return z;
        else return x;
    if (z <= y) return y;
    if (x <= z) return x;
    return z;
}
*/

#include <stdio.h>

double median(double x, double y, double z);

int main(void)
{
    int a = 0;  int b = 0;   int c = 0;
    double answer = 0;

    printf("Type three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    answer = median(a, b, c);

    printf("Result %.2f\n", answer);

    return 0;
}


double median(double x, double y, double z)
{
  double result;

  if (x <= y)
    if (y <= z) result = y;
    else if (x <= z) result = z;
    else result = x;
  else {
    if (z <= y) result = y;
    else if (x <= z) result = x;
    else result = z;
  }

  return result;
}