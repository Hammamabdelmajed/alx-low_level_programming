#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - Appends the string pointed to by @src to
 * the end of the string pointed to by @dest.
 * It will use at most n bytes from src.
 * @dest: A pointer to the first character of the string
 * to be concatenated upon.
 * @src: A pointer to the first character of the string
 * to be appended.
 * @n: Maximum number of bytes to be used from src.
 * Return: A pointer to the resulting string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return dest;
}
