#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *  * main - Entry point of the program
 *   *
 *    * Description: This program generates a random number and prints whether
 *     * the number is positive, zero, or negative.
 *      *
 *       * Return: Always 0 (Success)
 *        */
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
