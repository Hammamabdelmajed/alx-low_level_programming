#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: the integer to compute the absolute value of
 *
 * Description: This function computes the absolute value of an integer `n`.
 * If `n` is less than zero, the function returns `-n`,
 * which is the absolute value of `n`.
 * Otherwise, it returns `n` as it is.
 *
 * Return: Returns the absolute value of n
 */
int _abs(int n)
{
if (n < 0)
{
return (-n);
}
else
{
return (n);
}
}
