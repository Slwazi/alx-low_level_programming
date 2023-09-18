#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: - pointer to the variable to update
 * the value it points to to 98
 * Return: s
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
	}

	return (length);
}
