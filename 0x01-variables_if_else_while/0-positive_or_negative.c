#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* The main function should have a return type of int.
 * The function should not take any parameters, so its declaration should be int main(void).
 * The opening curly brace { should be on the same line as the function declaration.
 * The closing curly brace } should be on a new line, aligned with the main function declaration.
 * Each statement within the main function should be indented with four spaces.
 * The return statement should include a return value (usually 0 for success).
 * Here's an example of how the main funct */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive", n);
}
else if (n == 0)
{
printf("%d is zero", n);
}
else
{
printf("%d is negative", n);
}
return (0);
}
