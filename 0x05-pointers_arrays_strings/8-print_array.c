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
	char n;

	while (i < n)
	{
		n = (*(a + i));
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		i++;
	}
	_putchar('\n');
}
