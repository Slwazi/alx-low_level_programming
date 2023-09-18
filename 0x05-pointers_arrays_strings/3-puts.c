#include "main.h"

/**
 * _puts -  function that prints a string, followed
 * by a new line, to stdou
 * @str: - pointer to the variable to update
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}

	putchar('\n');
}
