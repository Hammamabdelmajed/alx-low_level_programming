#include "main.h"
/**
 * print_numbers_except_2_and_4 - prints numbers from 0 to 9, except 2 and 4
 * Description: This function prints all single digit numbers from 0 to 9,
 * each followed by a new line, except for 2 and 4. The function uses the
 * _putchar function to print each number and the new line character.
 * Return: This is a void function so does not return anything
 */
void print_most_numbers(void)
{
int i;
for (i = 0; i <= '9'; i++)
{
if (i != '2' &&  i != '4')
{
_putchar(i + '0');
}
}
_putchar('\n');
}
