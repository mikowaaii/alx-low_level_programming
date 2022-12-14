#include <string.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the pointer
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int x, m;

	x = strlen(str);

	if (x % 2 == 0)
	{
		m = (x / 2);
	}
	else
	{
		m = ((x / 2) + 1);
	}

	while (m < x)
	{
		_putchar(*(str + m));
		m++;
	}
	_putchar('\n');
}
