#include "main.h"
#include <stdio.h>

/**
  * print_number - Prints an integer.
  * @n: The integer to prints.
  *
  * Return: Nothing!
  */
void print_number(int n)
{
	unsigned int v = n;

	if (n < 0)
	{
		n *= -1;
		v = n;
		_putchar('-');
	}

	v /= 10;

	if (v != 0)
		print_number(v);

	_putchar((unsigned int) n % 10 + '0');
}
