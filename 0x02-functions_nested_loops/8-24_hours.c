#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Description: This function prints every minute of the day,
 * starting from 00:00 to 23:59. Each minute is printed on
 * a new line.
 *
 * Return: This is a void function so does not return anything
 */
void jack_bauer(void)
{
int hour, minute;
for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
putchar((hour / 10) + '0');
putchar((hour % 10) + '0');
putchar(':');
putchar((minute / 10) + '0');
putchar((minute % 10) + '0');
putchar('\n');
}
}
}
