#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function initializes a random number and prints whether
 *                        it's positive, zero, or negative.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}

