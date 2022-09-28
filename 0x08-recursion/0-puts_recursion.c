#include "main.h"

/**
 * _puts_recursion - prints a string then a new line
 * @s: string to be printed
 *
 * Return: returns nothing
 */
void _puts_recursion(char *s)
{
	if ((*s = '\0'))
	{
		return;
	}
	_puts_recursion(s++);
}
