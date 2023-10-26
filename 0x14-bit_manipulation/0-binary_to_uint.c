#include "main.h"

/**
 * binary_to_uint - function that converts a binary
 * number to an unsigned int.
 * @b: Pointing to a string of 0 and 1 chars.
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int base;
	unsigned int num;

	num = 0;
	if (!b)
	{
		return (0);
	}
	for (base = 0; b[base] != '\0'; base++)
	{
		if (b[base] != '0' && b[base] != '1')
		{
			return (0);
		}
	}

	for (base = 0; b[base] != '\0'; base++)
	{
		num <<= 1;
		if (b[base] == '1')
			num += 1;
	}
	return (num);
}
