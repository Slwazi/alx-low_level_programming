#include "main.h"
/**
 * _strlen - Prints the length of a string.
 * @s: the string to be printed
 * Return: the length of string
 */
int _strlen(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen(s + 1));
	return (0);
}
/**
 * _checker - check if s is palindrome.
 * @s: string base address.
 * @i: left index.
 * @j: rigth index.
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int _checker(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (_checker(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - check if s is palindrome
 * @s: base address for string.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (_checker(s, 0, _strlen(s) - 1));
}
