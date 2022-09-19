#include "main.h"

/**
 * puts2 - prints every other character of a string starting with the 1st character
 * @str: the pointer
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int x;

	while (*(str + x) != '\0')
	{
		if (x % 2 == 0)
		{
			_putchar(*(str + x));
			x++;
		}
		_putchar(*(str + x));
	}
	_putchar('\n');
}
