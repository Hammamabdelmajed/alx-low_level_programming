#include "main.h"
/**
 * main - Entry point
 *
 * Description: Prints "_putchar", followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;
for (letter='a'; letter <= 'z' ; letter++)
{
_putchar(letter);
_putchar('\n');
}
return (0);
}
