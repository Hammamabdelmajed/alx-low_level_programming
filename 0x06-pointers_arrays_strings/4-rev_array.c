#include "main.h"
#include "stdio.h"
#include <string.h>
/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: A pointer to the first element of the array to be reversed.
 * @n: The number of elements in the array.
 * Return: void.
 */
void reverse_array(int *a, int n)
{
int start = 0;
int end = n - 1;
while (start < end)
{
/* Swap the elements */
int temp = a[start];
a[start] = a[end];
a[end] = temp;
/* Move the pointers */
start++;
end--;
}
}
