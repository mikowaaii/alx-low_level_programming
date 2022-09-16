#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints the numbers 0 to 9 followed by a new line
 *
 * Return: returns void
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
