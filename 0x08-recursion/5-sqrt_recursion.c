#include "main.h"
/**
 * get_root - calculates i**i  n.
 * @n: base number.
 * @i: iterator number.
 * Return: i.
 */
int get_root(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i <= n)
		return (get_root(n, i + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - calculates the natural square root of n.
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
	return (get_root(n, 2));
}
