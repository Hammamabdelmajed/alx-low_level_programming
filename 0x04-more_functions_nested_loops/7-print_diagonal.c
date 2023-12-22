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
for (i = 0; i < n; i++)
{
if (n > 0)
{
_putchar('\\');
_putchar('\n');
for (j = 0; j < i ; j++)
{
_putchar(' ');
}
}
else
{
_putchar('\n');
}
}
}
