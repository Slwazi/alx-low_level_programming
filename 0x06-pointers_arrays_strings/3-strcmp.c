#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: string
 * @s2: string
 * Return: negative int if s1 < s2, 0 if matching, and positive int if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int v;

	for (v = 0; s1[v] != '\0' || s2[v] != '\0'; v++)
	{
		if (s1[v] != s2[v])
			return (s1[v] - s2[v]);
	}
	return (0);
}
