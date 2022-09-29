#include "main.h"

/**
 * factorial - finds factorial of a given number
 * @n: the given number
 *
 * Return: returns the factorial of the given number
 * and returns -1 if n is less than 0 to indicate and error.
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
