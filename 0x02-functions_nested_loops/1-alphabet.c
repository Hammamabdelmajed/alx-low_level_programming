#include "main.h"
/**
 * main - Entry point
 * print alphabet in lowercase
 * Description: Prints "_putchar", followed by a new line.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z' ; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
