#include <stdio.h>

/**
 * main - prints the first 50
 * Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int ii, jj, kk, next;

	jj = 1;

	kk = 2;

	for (i1 = 1; i1 <= 50; ++i1)
	{
		if (jj != 20365011074)
		{
			printf("%ld, ", jj);
		} else
		{
			printf("%ld\n", jj);
		}
		next = jj + kk;
		jj = kk;
		kk = next;
	}

	return (0);
}
