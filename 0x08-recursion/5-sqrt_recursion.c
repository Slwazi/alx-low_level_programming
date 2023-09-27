#include "main.h"

/**
 * _sqrt_recursion - Function calculates the natural square root of n.
 * @n: base number.
 *
 * Return: the square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (n, 2);
}
