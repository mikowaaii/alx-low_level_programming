#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: the pointer
 * @n: number of element in the array
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i = 1;

	printf("%d", a[0]);

	while (i < n)
	{
		if (n > 1)
		{
			printf(", %d", a[i]);
			i++;
		}
		else
		{
			break;
		}
	}
	_putchar('\n');
}
