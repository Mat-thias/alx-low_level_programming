/**
 * swap_int - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 * return - void
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = *temp;
}
