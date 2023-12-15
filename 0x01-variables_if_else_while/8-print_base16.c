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
char letter;
int n;
for (n = 0; n < 10; n++)
putchar(n + '0');
for (letter = 'a'; letter <= 'f'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
