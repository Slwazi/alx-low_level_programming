#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: - pointer to the variable to update
 * the value it points to to 98
 * Return: s
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
