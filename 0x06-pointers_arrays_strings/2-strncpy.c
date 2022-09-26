#include "main.h"

/**
 * _strncpy - copies n characters of a string from source to destintaion
 * @dest: string to copy to
 * @src: string to copy form
 * @n: number of characters to be copied
 *
 * Return: a pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (src[a] != 
