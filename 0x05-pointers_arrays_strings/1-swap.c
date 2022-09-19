#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: the 1st pointer
 * @b: the 2nd pointer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
