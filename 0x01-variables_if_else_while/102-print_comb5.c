#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *  * main - Entry point of the program
 *   *
 *    * Description: This program generates a random number and prints whether
 *     * the number is positive, zero, or negative.
 *      *
 *       * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 0; i < 100; i++)
{
for (j = i + 1; j < 100; j++)
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(' ');
putchar(j / 10 + '0');
putchar(j % 10 + '0');
if (i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
