#include "main.h"
#include <stdio.h>
/**
 *  * _pow_recursion - returns the value of x raised to the power of y
 *   * @x: the base
 *    * @y: the exponent
 *     *
 *      * Description: This function calculates
 *      the power of a number using recursion.
 *       * It multiplies x by itself y times to calculate x^y.
 *        * If y is less than 0, the function returns -1 to indicate an error.
 *         * The power of a number with exponent 0 is defined to be 1.
 *         *
 *     Return: The value of x raised to the power
 *     of y, or -1 if y is less than 0
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
