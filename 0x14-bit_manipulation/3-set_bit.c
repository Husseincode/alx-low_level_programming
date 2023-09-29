#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @index: index of the bit to set to 1
 * @n: number to change
 * Return: 1 and -1 for success and failure respectively
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = ((1UL << index) | *n);

	return (1);
}
