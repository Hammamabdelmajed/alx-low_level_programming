#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase
 * print alphabet in lowercase
 * Description: this function uses a loop to interate through ASCII values of the lowercase.
 * alphabet
 * Return: this function does not return a value
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
