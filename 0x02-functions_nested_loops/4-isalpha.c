#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: int to be checked
 *
 * Return: On success returns 1. Otherwise, 0.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
