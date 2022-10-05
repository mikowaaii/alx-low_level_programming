#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: the pointer
 *
 * Return: nothing
 */
void _puts(char *str)
{
	char x;

	while (*str != '\0')
	{
		x = *str;
		_putchar(x);
		str++;
	}
	_putchar('\n');
}
