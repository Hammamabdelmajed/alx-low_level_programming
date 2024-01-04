/**
 * swap_int - swaps the values of two int pointers
 * @a: a pointer to an int
 * @b: a pointer to an int
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
int temp; /* declare a temporary variable to store one of the values */
temp = *a; /* store the value pointed by a in temp */
*a = *b; /* assign the value pointed by b to the value pointed by a */
*b = temp; /* assign the value stored in temp to the value pointed by b */
}
