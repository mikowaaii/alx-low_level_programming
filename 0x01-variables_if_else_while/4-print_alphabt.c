#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * Return: returns 0
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		{
		if (x == 'e' || x == 'q')
			continue;
		}
		putchar(x);
	}
	putchar('\n');
	return (0);
}
