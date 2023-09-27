#include "main.h"
#include <stdio.h>

/**
 * prime_number - finds out if a number is prime
 *
 * @xx: number to determine if prime
 * @yy: number to check if divisor
 *
 * Return: 1 if prime, 0 otherwise
 */
int prime_number(int xx, int yy)
{
	if (xx == yy)
		return (1);
	if (!(xx % yy))
		return (0);
	return (prime_number(xx, yy + 1));
}
/**
 * is_prime_number - returns if a number is prime
 *
 * @n: number to determine its prime
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_number(n, 2));
}
