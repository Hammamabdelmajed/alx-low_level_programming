#include <stdio.h>
/**
 *  * main - Entry point
 *   *
 *    * Description: This program finds and prints the largest prime factor
 *     * of the number 612852475143.
 *      *
 *       * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long num = 612852475143;
unsigned long div = 2, maxPrime;
while (num != 0)
{
if (num % div != 0)
div = div + 1;
else
{
maxPrime = num;
num = num / div;
if (num == 1)
{
printf("%lu\n", maxPrime);
break;
}
}
}
return (0);
}
