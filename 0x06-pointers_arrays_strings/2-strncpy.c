#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncpy - Copies up to n characters from the string pointed to by @src to @dest.
 * @dest: A pointer to the first character of the destination string.
 * @src: A pointer to the first character of the source string.
 * @n: Maximum number of characters to be copied from src.
 * Return: A pointer to the resulting string @dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src , n);
return (dest);
}
