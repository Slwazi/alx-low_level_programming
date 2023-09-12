#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int su3, su5, su;
	int i;

	su3 = 0;
	su5 = 0;
	su = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			su3 = su3 + i;
		} else if ((i % 5) == 0)
		{
			su5 = su5 + i;
		}
	}
	su = su3 + su5;
	printf("%lu\n", su);
	return (0);
}
