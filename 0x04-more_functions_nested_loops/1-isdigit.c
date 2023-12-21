#include "main.h"
/**
 * _isdigit - checks for parameter if it is digit
 * @c: the character to check
 * Description: This function checks if
 * the entered parameter `c` falls within the
 * range of digits (from '0' to '9'). If it does, the function
 * returns 1, indicating that the parameter is a digit. Otherwise,
 * it returns 0.
 * Return: Returns 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
