#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp - Compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 * Return: An integer less than, equal to, or greater than zero if @s1 is found,
 * respectively, to be less than, to match, or be greater than @s2.
 */
int _strcmp(char *s1, char *s2)
{
/* Use the standard strcmp function to compare the strings */
int result = strcmp(s1, s2);
return (result);
}
