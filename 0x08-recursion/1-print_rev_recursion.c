#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be printed
 *
 * Return: returns nothing
 */
void _print_rev_recursion(char *s)
{
	if ((*s == '\0'))
	{
		_putchar(*s);
		return;
	}
	_print_rev_recursion(s + 1);
}
