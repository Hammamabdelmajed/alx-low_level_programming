#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to get the last digit of
 *
 * Description: This function computes the last digit of an integer `n`
 * by taking the modulus of `n` by 10.
 * The function then prints this last digit and returns it.
 *
 * Return: Returns the last digit of n
 */
int print_last_digit(int n)
{
int last_digit = n % 10;
if (last_digit < 0)
{
last_digit = -last_digit;
}
_putchar('0' + last_digit);
return (last_digit);
}
