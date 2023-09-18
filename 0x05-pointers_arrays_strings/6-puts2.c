#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int lenght, i;

	lenght = 0;

	while (str[lenght] != '\0')
	{
		lenght++;
	}

	for (i = 0; i < lenght; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
