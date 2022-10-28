#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string to be converted
 *
 * Return: returns the converted number. Otherwise returns
 * 0 if there is one or more chars in the string and if string
 * b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int x;
	unsigned int num = 0;
	unsigned int dec = 1;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		i++;
	}
	for (x = i; x >= 0; x--)
	{
		if (b[x] != '0' || b[x] != '1')
		{
			return (0);
		}
		if (b[x] == '1')
		{
			num += dec;
		}
		dec *= 2;
	}
	return (num);
}
