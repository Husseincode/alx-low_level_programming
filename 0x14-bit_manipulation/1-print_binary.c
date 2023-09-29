#include "main.h"

/**
 * print_binary - Write a function that prints the binary representation of a number.
 * @n: n is decimal values
 * Return: (0) success
 */

void print_binary(unsigned long int n)
{
	int a, z = 0;
	unsigned long int currenit;

	for (a = 63; a >= 0; a--)
	{
		currenit = n >> a;

		if (currenit & 1)
		{
			_putchar('1');
			z++;
		}
		else if (z)
			_putchar('0');
	}
	if (!z)
		_putchar('0');
}
