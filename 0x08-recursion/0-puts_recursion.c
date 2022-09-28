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
	int n;

	if ((*s == '\0'))
	{
		_putchar('\n');
		return;
	}
	c = s[n];
	_putchar(c);
	c++;
	n++;
	_puts_recursion(s);
}
