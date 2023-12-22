#include <stdlib.h>
#include <stdio.h>
/**
 *  * main - Entry point
 *   *
 *    * Description: This program prints the numbers from 1 to 100,
 *     * but for multiples of three, it prints "Fizz" instead of the number,
 * and for multiples of five, it prints "Buzz".
 * For numbers which are multiples of both three and five,
 * it prints "FizzBuzz".
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("%d FizzBuzz ", i);
}
else if (i % 3 == 0)
{
printf("%d Fizz ", i);
}
else if (i % 5 == 0)
{
printf("%d Buzz ", i);
}
else
{
printf("%d ", i);
}
}
printf("\n");
return (0);
}
