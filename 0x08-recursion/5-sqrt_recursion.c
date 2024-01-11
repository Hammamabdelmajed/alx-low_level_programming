#include <stdio.h>
#include "main.h"
/**
 *  * _sqrt_recursion - a function that
 *  returns the natural square root of a number
 *   * @n: the number to calculate the square root of
 *    * @i: the current guess of the square root
 *     *
 *      * Description: This function uses recursion
 *      to find the natural square root of a number.
 *       * If the number does not have a natural square root,
 *       the function returns -1.
 *         * Return: the natural square root of n,
 *    or -1 if n does not have a natural square root
 */
int _sqrt_1(int n, int i)
{
if (i * i > n)
{
return (-1);
}
else if (i * i == n)
{
return (i);
}
else
{
return (_sqrt_1(n, i + 1));
}
}
/**
 *  * sqrt_1 - a wrapper function for _sqrt_recursion
 *   * @n: the number to calculate the square root of
 *    *
 *     * Description: This function checks
 *     if n is negative before calling _sqrt_recursion.
 *      * If n is negative, the function
 *      returns -1. Otherwise, it calls _sqrt_recursion with
 *       * an initial guess of 0.
 *        *
 *         * Return: the natural square root of n,
 *     or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
{
return (_sqrt_1(n, 0));
}
}
