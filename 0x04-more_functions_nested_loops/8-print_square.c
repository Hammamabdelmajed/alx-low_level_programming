#include "main.h"
/**
 *  * print_square - Prints a square of a given size.
 *   * @size: The size of the square.
 *    *
 *     * Description: This function prints a square of size 'size',
 *using the character '#'. If 'size' is 0 or less, it only prints a newline.
 */
void print_square(int size)
{
int i;
int j;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
