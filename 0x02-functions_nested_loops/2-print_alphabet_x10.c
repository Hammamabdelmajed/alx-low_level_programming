#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in 10 times lowercase
 * print alphabet in lowercase
 * Description: this function uses a loop to interate through ASCII
 * values of the lowercase.
 * alphabet
 * Return: this function does not return a value
 */
void print_alphabet_x10(void)
{
int i = 1;
while (i <= 10)
{
char letter;
for (letter = 'a'; letter <= 'z' ; letter++)
{
_putchar(letter);
}
_putchar('\n');
i++;
}
}
