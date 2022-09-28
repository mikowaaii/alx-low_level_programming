#include "main.h"

/**
 * _strlen_recursion - get the length of a string
 * @s: string to be printed
 *
 * Return: returns the length of a string
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if ((*s == '\0'))
	{
		return (n);
		return (0);
	}
	n++;
	_strlen_recursion(s + 1);
}
