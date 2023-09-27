#include "main.h"

/**
 * _sqrt_recursion - Function calculates the natural square root of n.
 * @n: base number.
 *
 * Return: the square root of n.
 */
int _sqrt_recursion(int n, int low, int high)
{
	if (n == 0 || n == 1)
	{
		return n;
	}

	int mid = low + (high - low) / 2;
	int square = mid * mid;

	if (square == n)
	{
		return mid;
	} else if (square < n)
	{
		if ((mid + 1) * (mid + 1) > n)
		{
			return mid;
		} else
		{
			return _sqrt_recursion(n, mid + 1, high);
		}
    } else
    {
    	return _sqrt_recursion(n, low, mid - 1);
    }
}
