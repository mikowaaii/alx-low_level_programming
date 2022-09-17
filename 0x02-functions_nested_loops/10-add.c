#include "main.h"

/**
 * add - finds sum of two integers
 * @a: int to be added
 * @b: int to be added
 *
 * Return: returns 0
 */
int add(int a, int b)
{
	int r;
	r = (a + b);

	if (r >= 10)
	{
		_putchar((r / 10) + '0');
		_putchar((r % 10) + '0');
	}
	else
	{
		_putchar((r % 10) + '0');
	}
	return (0);
}
