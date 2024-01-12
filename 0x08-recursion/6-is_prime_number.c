#include <stdio.h>
#include "main.h"
/**
 *  * is_prime_number_recursion - checks if a number is prime using recursion
 *   * @n: the number to check
 *    * @i: the current divisor to check
 *     *
 *      * Description: This function checks
 *      if a number is prime using recursion. If the number is prime,
 *       * it returns 1. Otherwise, it returns 0.
 *        *
 *         * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number_recursion(int n, int i)
{
if (n <= 1)
{
return (0);
}
else if (n == i)
{
return (1);
}
else if (n % i == 0)
{
return (0);
}
else
{
return (is_prime_number_recursion(n, i + 1));
}
}
/**
 *  * is_prime_number - a wrapper function for is_prime_number_recursion
 *   * @n: the number to check
 *    *
 *     * Description: This function checks
 *     if n is negative before calling is_prime_number_recursion.
 *      * If n is negative, the function returns 0.
 *      Otherwise, it calls is_prime_number_recursion with
 *       * an initial divisor of 2.
 *        *
 *         * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
if (n < 0)
{
return (0);
}
else
{
return (is_prime_number_recursion(n, 2));
}
}
