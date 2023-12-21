#include "main.h"
/**
* _islupper - checks for upper case characte
* @c: the character to check
* Description: This function checks if the ASCII value of `c` falls within the
* range of uppercase letters (from 'A' to 'Z'). If it does, the function
* returns 1, indicating that the character is uppercase. Otherwise,
* it returns 0.
* This function only works for ASCII characters.
* Return: Returns 1 if c is uppercase, 0 otherwise
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
