#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: array of integers
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int v;
	int h;

	for (v = 0; v < (n / 2); v++)
	{
		h = a[v];
		a[v] = a[n - v - 1];
		a[n - v - 1] = h;
	}
}
