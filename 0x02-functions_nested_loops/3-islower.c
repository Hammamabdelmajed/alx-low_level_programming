#include "main.h"
#include <ctype.h>
/**
 * _islower - Prints the alphabet in 10 times lowercase
 * print alphabet in lowercase
 * Description: this function uses a loop to interate through ASCII
 * values of the lowercase.
 * alphabet
 * Return: this function does not return a value
 */
int _islower(int c)
{
if(c >= 'a' && c <= 'z')
{
return 1;
} 
else 
{
return 0;
}
}

