#include "main.h"

/**
 * _strncpy - Copy a string starting from index 0 of `dest`.
 * @dest: string
 * @src: string
 * @n: number of chars to copy over
 * Return: `dest` edited string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int v;

	for (v = 0; v < n && src[v] != '\0'; v++)
		dest[i] = src[i];

	for (; n > v; v++)
		dest[v] = '\0';

	return (dest);
}
