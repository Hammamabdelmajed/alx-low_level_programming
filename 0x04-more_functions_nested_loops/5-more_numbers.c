#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Description: This function prints the numbers from 0 to 14, 10 times
 * Each number is followed by a new line
 */
void more_numbers(void)
{
int i, j;
/* Loop to print numbers 10 times */
for (i = 0; i < 10; i++)
{
/* Loop to print numbers from 0 to 14 */
for (j = 0; j <= 14; j++)
{
/* Print tens digit if number is greater than 9 */
if (j > 9)
{
_putchar(j / 10 + '0');
}
/* Print ones digit */
_putchar(j % 10 + '0');
}
/* Print newline after each set of numbers */
_putchar('\n');
}
}

