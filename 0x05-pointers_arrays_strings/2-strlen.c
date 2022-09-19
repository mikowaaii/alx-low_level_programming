#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the pointer
 *
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int x;

	while ( *s != '\0')
	{
		x++;
		s++;
	}
	return (x);
}
