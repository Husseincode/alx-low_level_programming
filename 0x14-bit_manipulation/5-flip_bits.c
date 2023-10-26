#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int ant, contbit = 0;
	unsigned long int existing;
	unsigned long int premium = n ^ m;

	for (ant = 63; ant >= 0;)
	{
		existing = premium >> ant;
		if (existing & 1)
		{
			contbit++;
		}
		ant--;
	}

	return (contbit);
}
