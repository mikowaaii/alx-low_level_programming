#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: 1st string
 * @src: 2nd string
 * @n: number of bytes used
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
