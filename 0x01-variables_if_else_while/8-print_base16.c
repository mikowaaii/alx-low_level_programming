#include <stdio.h>

/**
 * main - entry point
 *
 * Return: returns 0
 */
int main(void)
{
	int x;
	int y;
	
	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
