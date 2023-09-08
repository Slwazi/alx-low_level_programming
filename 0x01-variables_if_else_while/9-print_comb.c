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
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

