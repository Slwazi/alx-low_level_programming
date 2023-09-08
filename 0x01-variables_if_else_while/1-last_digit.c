#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: This function initializes a random number and prints whether
 *						it's greater than 5, and is 0, or less than 6 and not 0.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand();

	int lastDigit = n % 10;

	printf("Last digit of %d is %d", n, lastDigit);

	if (lastDigit > 5)
	{
		printf(" and is greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf(" and is 0\n");
	}
	else
	{
		printf(" and is less than 6 and not 0\n");
	}

	return (0);
}

