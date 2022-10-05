#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the int to be checked
 *
 * Return: On success return 1
 * Otherwise, 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
