#include "main.h"
#include <stdio.h>
/**
 *  * _puts_recursion - prints a string, followed by a new line
 *   * @s: pointer to the first character of the string to be printed
 *    *
 *     * Description: This function prints a string followed by a new line.
 *      * It uses recursion to print each character of the string one by one.
 * When it reaches the end of the string
 * (denoted by the null character '\0'),
 *        * it prints a new line and returns.
 *         *
 *          * Return: void
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
return;
}
putchar(*s);
_puts_recursion(s + 1);
}
