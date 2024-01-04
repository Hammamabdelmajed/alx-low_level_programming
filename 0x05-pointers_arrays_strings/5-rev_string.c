#include <stdio.h>
#include <string.h>

/**
 * rev_string - Reverses a string in place.
 * @s: The string to be reversed.
 * Return: void.
 */
void rev_string(char *s)
{
int i;
int length = strlen(s);
for( i = 0; i < length / 2; i++)
{
char temp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temp;
}
}
