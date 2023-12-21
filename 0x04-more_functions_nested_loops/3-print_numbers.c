#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9
 * Description: This function prints the numbers from 0 to 9,
 * each followed by a new line. The function uses the _putchar
 * function to print each number and the new line character.
 *
 * Return: This is a void function so does not return anything
 */
void print_numbers(void)
{
int i;
for(i = 0; i <= 9 ; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
