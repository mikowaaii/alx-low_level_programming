#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: int to be checked
 *
 * Return: returns 1 if c is uppercase. Otherwise, 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
