#include "main.h"
/**
 *  * print_diagonal - Draws a diagonal line on the terminal.
 *   * @n: The number of times the character \\ should be printed.
 *    *
 *     * Description: This function prints the character \\ n times,
 *      * each followed by a newline and space
 * characters for the diagonal effect.
 *       * If n is 0 or less, it only prints a newline.
 */
void print_diagonal(int n)
{
int i;
int j;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i ; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
