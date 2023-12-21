#include "main.h"
#include <unistd.h>

/**
 *print_to_98 - prints all natural numbers from n to 98
 *@n: the starting number
 *
 *Description: This function prints all natural numbers from `n` to 98,
 *each followed by a comma and a space, except for the last number which
 *is followed by a new line. If `n` is greater than 98, the function prints
 *the numbers in decreasing order.
 *
 *Return: This is a void function so does not return anything
 */
void print_to_98(int n)
{
while (n != 98)
{
print_number(n);
_putchar(',');
_putchar(' ');
n < 98 ? n++ : n--;
}
print_number(n);
_putchar('\n');
}
/**
 * print_number - prints an integer char by char
 * @n: The integer to print
 *
 * Description: This function prints an integer char by char by calling
 * the recursive function print_number_rec.
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
print_number_rec(n);
}
/**
 * print_number_rec - prints an integer char by char
 * @n: The integer to print
 *
 * Description: This function prints an integer char by char recursively.
 * It divides the number by 10 and calls itself with the quotient until
 * it reaches zero. Then it prints the last digit.
 */
void print_number_rec(int n)
{
if (n / 10)
{
print_number_rec(n / 10);
_putchar((n % 10) + '0');
}
}
