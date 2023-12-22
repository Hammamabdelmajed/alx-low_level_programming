#include <unistd.h>
#include "main.h"
/**
 *_putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Description: This function writes the character `c` to stdout. 
 * The character is written at the position indicated by the stream's 
 * internal file position indicator, which is then advanced one character.
 *
 * Return: On success, the character written is returned.
 * If a writing error occurs, -1 is returned and the error indicator is set.
 */
int _putchar(char c)
{
 return write(1, &c, 1);
}
