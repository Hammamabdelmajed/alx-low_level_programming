#include <ctype.h>
#include <stdio.h>
#include "main.h"
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @s: A pointer to the first character of the string to be converted.
 * Return: A pointer to the resulting string.
 */
char *string_toupper(char *s)
{
char *start = s;
/* Loop through each character of the string */
while (*s != '\0')
{
/* If the character is lowercase, convert it to uppercase */
if (*s >= 'a' && *s <= 'z')
{
*s = toupper((unsigned char) *s);
}
s++;
}
return (start);
}
