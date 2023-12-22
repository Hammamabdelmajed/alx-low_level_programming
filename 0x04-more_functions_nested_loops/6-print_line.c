#include "main.h"
/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of times the character _ should be printed.
 * Description: This function prints the character _ n times,
 * followed by a newline. If n is 0 or less, it only prints a newline.
 */
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
