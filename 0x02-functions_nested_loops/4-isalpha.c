#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: the character to check
 *
 * Description: This function checks if the ASCII value of `c` falls within the
 * range of lowercase letters (from 'a' to 'z') or
 * uppercase letters (from 'A' to 'Z').
 * If it does, the function returns 1, indicating that the
 * character is an alphabetic character.
 * Otherwise, it returns 0. This function only works for ASCII characters.
 *
 * Return: Returns 1 if c is a letter (lowercase or uppercase), 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
