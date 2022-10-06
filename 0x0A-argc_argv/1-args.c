#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: the count of arguments
 * @argv: array of pointers to the string which are the arguments
 *
 * Return: Always 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
