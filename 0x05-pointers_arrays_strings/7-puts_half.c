#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int lenght, n, i;

	lenght = 0;

	while (str[lenght] != '\0')
	{
		lenght++;
	}

	if (lenght % 2 == 0)
	{
		for (i = lenght / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (lenght % 2)
	{
		for (n = (lenght - 1) / 2; n < lenght - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
