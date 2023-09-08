#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the sizes of various data types.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar("%d", number);
	}
	return (0);
}

