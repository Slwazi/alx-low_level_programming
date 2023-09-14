#include "main.h"

/**
  * print_most_numbers - Print the numbers since 0 up to 9
  * Do not print 2 and 4
  * Return: The numbers since 0 up to 9
  */
void print_most_numbers(void);
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c == 2 || c == 4)
		{

		}
		else
		{
			_putchar(c + '0');
		}
	}

	_putchar('\n');
}
