#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the alphabet in lowercase,
 * followed by a new l
 * ine ou can only use the putchar function (every other function
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
