#include "main.h"
#include <stdio.h>
/**
 *  * factorial - returns the factorial of a given number
 *   * @n: the number to calculate the factorial of
 *    *
 *     * Description: This function calculates the
 *     factorial of a number using recursion.
 *      * The factorial of a number is the product of
 *       all positive integers less than or equal to the number.
 *       * If the number is less than 0, the function
 *       returns -1 to indicate an error.
 *        * The factorial of 0 is defined to be 1.
 *         *
 *          * Return: The factorial of the number, or
 *          -1 if the number is less than 0
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
