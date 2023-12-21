#include "main.h"
#include <unistd.h>
/**
* times_table - prints the 9 times table, starting with 0
*
* Description: This function prints the 9 times table,
* starting from 0. Each row of the table is printed on
* a new line.
*
* Return: This is a void function so does not return anything
*/
void times_table(void)
{
int i, j, product;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
product = i * j;
if (j != 0)
{
_putchar(',');
_putchar(' ');
if (product < 10)
{
_putchar(' ');
_putchar('0' + product);
}
else
{
_putchar((product / 10) + '0');
_putchar((product % 10) + '0');
}
}
else
{
_putchar ('0' + product);
}
_putchar('\n');
}
}
}
