#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need to flip to get 
 * from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a = 63;
	int counting = 0;
	unsigned long int currenit;
	unsigned long int exclue = n ^ m;

	while (a >= 0)
	{
		currenit = exclue >> a;
		if (currenit & 1)
		{
			counting++;
		}
		a--;
	}

	return (counting);
}
