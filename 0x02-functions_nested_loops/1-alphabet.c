#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: This function initializes a random number and prints whether
 * it's greater than 5, and is 0, or less than 6 and not 0.
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
