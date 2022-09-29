#include "main.h"

/**
 * _pow_recursion - finds the value of x raised to the power of y
 * @x: integer to be raised to the power of y
 * @y: value of the power
 *
 * Return: returns the value of x raised to the power of y
 * and returns -1 if y is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
