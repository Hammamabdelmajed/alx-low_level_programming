/**
 *  * _strlen_recursion - returns the length of a string
 *   * @s: pointer to the first character of the string
 *    *
 *     * Description: This function returns the length of a string.
 *      * It uses recursion to count each character of the string one by one.
 *       * When it reaches the end of the string
 *        (denoted by the null character '\0'),
 *        * it returns 0. Otherwise, it makes
 *        a recursive call with the rest of the string
 *         * and adds 1 to the result,
 *    effectively counting the current character.
 *          *
 *           * Return: The length of the string
 */
#include <stdio.h>
#include "main.h"
int _strlen_recursion(char *s)
{
int count = 0;
if (*s == '\0')
{
return (0);
}
return (_strlen_recursion(s + 1) + count + 1);
}
