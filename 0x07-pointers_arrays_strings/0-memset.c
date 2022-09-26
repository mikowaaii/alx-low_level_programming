#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the block of memory to be filled
 * @b: value to be set
 * @n: number of bytes to be set to the value
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;
	int y = 0;
	char z;

	while (*s != '\0')
	{
		y++;
		s++;
	}
	while (x < n)
	{
		_putchar(b);
		x++;
	}
	while (n < y)
	{
		z = s[n];
		_putchar(z);
		n++;
	}
	return (s);
}
