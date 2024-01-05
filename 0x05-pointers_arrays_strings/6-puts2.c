#include <stdio.h>
#include <string.h>
#include "main.h"
/*
 * puts2 - Prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @s: The string to be printed.
 * Return: void.
 */
void puts2(char *s)
{
int i;
int length = strlen(s);
for (i = 0; i < length; i += 2)
{
printf("%c", s[i]);
}
printf("\n");
}
