#include "main.h"
#include <ctype.h>
/**
 * _islower - checks if the letter is lowercase or not
 * return 1 if yes and 0 if not 
 * Description: this function uses a loop to interate through ASCII
 * values of the lowercase.
 * alphabet
 * Return: this function does not return a value
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

