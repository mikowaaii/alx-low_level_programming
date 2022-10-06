#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: count of arguments
 * @argv: array of pointers to the string which are the arguments
 *
 * Return: On success, returns 0. When error occurs, returns 1.
 */
int main(int argc, char *argv[])
{
	int r;

	if (argc == 3)
	{
		r = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", r);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
