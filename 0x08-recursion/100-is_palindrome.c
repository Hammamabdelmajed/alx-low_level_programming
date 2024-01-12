#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "main.h"
/**
 *  * is_palindrome_recursion - checks if
 *  a string is a palindrome using recursion
 *   * @s: the string to check
 *    * @start: the start index of the substring to check
 *     * @end: the end index of the substring to check
 *      *
 *       * Description: This function
 *       checks if a string is a palindrome using recursion.
 *        * If the string is a palindrome, it
 *        returns 1. Otherwise, it returns 0.
 *         *
 *          * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome_recursion(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
else if (s[start] != s[end])
{
return (0);
}
else
{
return (is_palindrome_recursion(s, start + 1, end - 1));
}
}
/**
 *  * is_palindrome - a wrapper function for is_palindrome_recursion
 *   * @s: the string to check
 *    *
 *     * Description: This function checks if s is NULL
 *     before calling is_palindrome_recursion.
 *      * If s is NULL, the function returns 0.
 *      Otherwise, it calls is_palindrome_recursion with
 *       * start and end indices of 0 and strlen(s) - 1, respectively.
 *        *
 *         * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
if (s == NULL)
{
return (0);
}
else
{
return (is_palindrome_recursion(s, 0, strlen(s) - 1));
}
}
