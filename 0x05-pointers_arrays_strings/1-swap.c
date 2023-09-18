#include "main.h"

/**
 * swap_int - swap_int that swaps the values of two integers
 * @a: by a new line
 * @b: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

