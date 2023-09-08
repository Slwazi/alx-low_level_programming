#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function the alphabet in lowercase, and then in
 * uppercase, followed by a new line
 * it's greater than 5, and is 0, or less than 6 and not 0.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}

	putchar('\n');
	return (0);
}

