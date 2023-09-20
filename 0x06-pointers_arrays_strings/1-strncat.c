#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: string
 * @src: string
 * @n: number of elements to concatenate in
 * Return: pointer to resulting `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int v, c;

	for (v = 0; dest[v] != '\0'; v++)
		;

	for (c = 0; src[c] != '\0' && n > 0; c++, n--, v++)
	{
		dest[v] = src[c];
	}
	return (dest);
}
