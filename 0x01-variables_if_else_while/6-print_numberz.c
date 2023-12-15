#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * Description: This program generates a random number and prints whether
 * the number is positive, zero, or negative.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
putchar(num + '0');
putchar('\n');
return (0);
}
