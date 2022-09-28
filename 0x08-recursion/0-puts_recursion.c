#include "main.h"

/**
 * _puts_recursion - prints a string then a new line
 * @s: string to be printed
 *
 * Return: returns nothing
 */
void _puts_recursion(char *s)
{
	char c;

	if ((*s == '\0'))
	{
		_putchar('\n');
		return;
	}
	c = s
	_putchar(c);
	_puts_recursion(s + 1);
}
