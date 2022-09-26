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
	int i;
	int m = (unsigned int) n;

	for (i = 0; i < m; i++)
	{
		s[i] = b;
	}
	return (s);
}
