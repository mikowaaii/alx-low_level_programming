#include <unistd.h>

/**
 * _putchar - writes the character c to std
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 and errno is set approprietly
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
