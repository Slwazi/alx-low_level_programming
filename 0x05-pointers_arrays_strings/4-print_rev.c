#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int v, j, len;

	v = 0;

	while (s[v] != '\0')
	{
		v++;
	}

	len = v;

	for (j = len - v; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
