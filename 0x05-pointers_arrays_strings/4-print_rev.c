#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: The string to be printed.
 * Return: void.
 */
void print_rev(char *s)
{
int i;
int length = strlen(s);
for (i = length - 1; i >= 0; i--)
{
printf("%c", s[i]);
}
printf("\n");
}
