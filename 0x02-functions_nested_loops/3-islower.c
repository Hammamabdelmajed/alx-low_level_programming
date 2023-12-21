#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lowercase character
 * @c: the character to check
 *
 * Description: This function checks if the ASCII value of `c` falls within the
 * range of lowercase letters (from 'a' to 'z'). If it does, the function
 * returns 1, indicating that the character is lowercase. Otherwise,
 * it returns 0.
 * This function only works for ASCII characters.
 *
 * Return: Returns 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}

