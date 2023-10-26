#include "main.h"

/**
 * _pow - func calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int ab;

	num = 1;
	for (ab = 1; ab <= power; ab++)
	{
		num *= base;
	}
	return (num);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int divide, checks;
	char flagged;

	flagged = 0;
	divide = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divide != 0)
	{
		checks = n & divide;
		if (checks == divide)
		{
			flagged = 1;
			_putchar('1');
		}
		else if (flagged == 1 || divide == 1)
		{
			_putchar('0');
		}
		divide >>= 1;
	}
}
