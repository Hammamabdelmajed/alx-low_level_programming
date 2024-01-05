#include <ctype.h>
#include <stdio.h>
#include <string.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @s: A pointer to the first character of the string to be converted.
 * Return: A pointer to the resulting string.
 */
char *cap_string(char *s)
{
int i = 0;
/* Capitalize the first character if it's a letter */
if (s[i] != '\0' && islower(s[i]))
{
s[i] = toupper(s[i]);
}
/* Check each character in the string */
for (i = 1; s[i] != '\0'; i++)
/* If the character is a letter and the previous character is a separator */
if (islower(s[i]) && (s[i - 1] == ' ' || s[i - 1] == '\t'
|| s[i - 1] == '\n' || s[i - 1] == ',' ||
s[i - 1] == ';' || s[i - 1] == '.' || s[i - 1] == '!'
|| s[i - 1] == '?'
|| s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')'
|| s[i - 1] == '{' || s[i - 1] == '}'))
{
/* Capitalize the letter */
s[i] = toupper(s[i]);
}
return (s);
}
