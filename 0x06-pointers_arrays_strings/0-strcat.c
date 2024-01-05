#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *  _strcat - Appends the string pointed to by @src to
 * the end of the string pointed to by @dest.
 * @dest: A pointer to the first character of the string
 * to be concatenated upon.
 * @src: A pointer to the first character of the string
 * to be appended.
 * Return: A pointer to the resulting string @dest.
 */
char *_strcat(char *dest, char *src)
{
strcat(dest, src);
return dest;
}
