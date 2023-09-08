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
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}

	for (digit = 'a'; digit <= 'f'; digit++)
	{
		putchar(digit);
	}

	putchar('\n');
	return (0);
}

