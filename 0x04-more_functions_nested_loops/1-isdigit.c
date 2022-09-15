#include "main.h"

/**
 * _isdigit - checks for a digit 0 through 9
 * @c: int to be checked
 *
 * Return: returns 1 on success. Otherwise, 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
