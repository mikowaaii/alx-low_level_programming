#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: int to be checked
 *
 * Return: returns 0
 */
int print_last_digit(int x)
{
	if ( x > 0 || x == 0)
	{
		return (x % 10);
	}
	else
	{
		return ((x * -1) % 10);
	}
	return (0);
}
