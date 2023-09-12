#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: Write a function that prints the alphabet, in l
 * owercase, followed by a new line.
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
