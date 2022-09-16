#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints the numbers 0 to 9 and a new line
 *
 * Return: returns nothing
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if ((c = 50) || (c = 52))
		{
			continue;
		}
		_putchar(c);
	}
	_putchar('\n');
}
