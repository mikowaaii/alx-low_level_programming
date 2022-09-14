#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: int to be checked
 *
 * Return: returns the last digit
 */
int print_last_digit(int x)
{
	int l = x % 10;

	if (x < 0)
	{
		l = l * -1;
	}
	_putchar('0' + l);
	return (l);
}
