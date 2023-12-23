#include "main.h"
/**
 *  * print_number - Prints an integer.
 *   * @n: The integer to be printed.
 */
void print_number(int n)
{
/* Handle negative numbers */
if (n < 0)
{
_putchar('-');
n = -n;
}
/* Recursively print digits from left to right */
if (n / 10)
{
print_number(n / 10);
}
/* Print last digit */
_putchar(n % 10 + '0');
}
