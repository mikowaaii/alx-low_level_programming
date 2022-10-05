#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: int to be checked
 *
 * Return: returns 0
 */
int _abs(int n)
{
	if (n > 0 || n == 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
	return (0);
}
