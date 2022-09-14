#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: int to be checked
 *
 * Return: returns 0
 */
int print_last_digit(int x)
{
	int l;

	if ( x > 0 || x == 0)
	{
		l = x % 10;
		_putchar('0' + l);
		return (l);
	}
	else
	{
		l = ((x * -1) % 10);
		_putchar('0' + l);
		return (l);
	}
	return (0);
}
