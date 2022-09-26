#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: the pointer
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int x;
	char m;

	x = strlen(s);
	while (x--)
	{
		m = *(s+x);
		_putchar(m);
	}
}
