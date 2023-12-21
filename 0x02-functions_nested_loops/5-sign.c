#include "main.h"
#include <stdio.h>
/**
 * print_sign - prints the sign of a number
 * @r: the number to check
 *
 * Description: This function checks if the number `r` is greater than,
 * less than, or equal to zero.
 * If `r` is greater than zero, the function returns 1 and prints '+'.
 * If `r` is zero, the function returns 0 and prints '0'.
 * If `r` is less than zero, the function returns -1 and prints '-'.
 *
 * Return: Returns 1 and prints '+' if r is greater than zero,
 * returns 0 and prints '0' if r is zero,
 * returns -1 and prints '-' if r is less than zero
 */
int print_sign(int r)
{
if (r > 0)
{
_putchar ('+');
return (1);
}
else if (r == 0)
{
_putchar ('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}
}
