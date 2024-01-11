#include <stdio.h>
#include "main.h"
/**
 *  * _print_rev_recursion - prints a string in reverse
 *   * @s: pointer to the first character of the string to be printed
 *    *
 *     * Description: This function prints a string in reverse.
 *      * It uses recursion to print each character
 *      of the string one by one in reverse order.
 *       * When it reaches the end of the string
 *       (denoted by the null character '\0'),
 *        * it returns without printing anything.
 *      Otherwise, it makes a recursive call with
 *         * the rest of the string and then prints the current character.
 *          * This results in the characters being printed in reverse order.
 *           *
 *            * Return: void
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
putchar(*s);
}
