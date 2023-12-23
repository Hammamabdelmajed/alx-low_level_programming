#include "main.h"
/**
 *  * print_triangle - Prints a triangle of a given size.
 *   * @size: The size of the triangle.
 *    *
 *     * Description: This function prints a triangle of size 'size',
 * using the character '#'. If 'size' is 0 or less, it only prints a newline.
 */
void print_triangle(int size)
{
int i, j, k;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
/* Print spaces */
for (j = size - i; j > 0; j--)
{
_putchar(' ');
}
for (k = 0; k < i; k++)
{
_putchar('#');
}
/* Print a newline */
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
