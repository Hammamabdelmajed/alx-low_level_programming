#include "main.h"
#include <ctype.h>
/**
 * _islower - checks if the letter is lowercase or not
 * return 1 if yes and 0 if not
 * Description: this function uses a loop to interate through ASCII
 * values of the lowercase. using c as parameter
 * will be used as variable that could be changed anytime
 * Return: this function returns 0 or 1
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}

