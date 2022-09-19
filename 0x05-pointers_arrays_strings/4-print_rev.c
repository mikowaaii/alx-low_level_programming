#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: the pointer
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int x;

	x = strlen(s);
	while (x--)
	{
		_putchar(*(s + x));
	}
	_putchar('\n');
}
