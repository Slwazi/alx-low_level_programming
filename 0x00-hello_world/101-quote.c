#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the specified message
 * to the standard error (file descriptor 2).
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
