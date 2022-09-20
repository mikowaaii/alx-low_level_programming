#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: the pointer
 * @n: number of element in the array
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar(((*(a + i)) / 10) + '0');
		_putchar(((*(a + i)) / 10) + '0');
		_putchar(',');
		_putchar(' ');
		i++;
	}
	_putchar('\n');
}
