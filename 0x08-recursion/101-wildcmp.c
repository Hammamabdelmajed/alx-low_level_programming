#include <stdio.h>
#include "main.h"
/**
 *  * wildcmp - compares two strings
 *   * @s1: the first string
 *    * @s2: the second string
 *     *
 *      * Description: This function compares
 *      two strings and returns 1 if the strings can be
 *       * considered identical, otherwise return 0.
 *       The string s2 can contain the special character *,
 *        * which can replace any string (including an empty string).
 *         *
 *          * Return: 1 if the strings can be considered
 *          identical, otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
else if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
else if (*s2 == '*')
{
if (*(s2 + 1) != '\0' && *s1 == '\0')
{
return (0);
}
else if (wildcmp(s1, s2 + 1) == 1)
{
return (1);
}
else
{
return (wildcmp(s1 + 1, s2));
}
}
else
{
return (0);
}
}
