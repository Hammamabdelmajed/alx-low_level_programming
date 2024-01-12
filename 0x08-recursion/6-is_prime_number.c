#include <stdio.h>
#include "main.h"
/**
 *  * is_prime_number - checks if a number is prime
 *   * @n: the number to check
 *    *
 *     * Description: This function checks
 *     if a number is prime. If the number is prime,
 *      * it returns 1. Otherwise, it returns 0.
 *       *
 *        * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
int i = 5;
if (n <= 1)
{
return (0);
}
else if (n <= 3)
{
return (1);
}
else if (n % 2 == 0 || n % 3 == 0)
{
return (0);
}
while (i * i <= n)
{
if (n % i == 0 || n % (i + 2) == 0)
{
return (0);
}
i += 6;
}
return (1);
}
