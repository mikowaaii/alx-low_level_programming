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
	int i = 0, x;

	while (i < n)
	{
		x = (*(a + i));
		_putchar((x / 10) + '0');
		_putchar((x % 10) + '0');
		_putchar(',');
		_putchar(' ');
		i++;
	}
	_putchar('\n');
}
