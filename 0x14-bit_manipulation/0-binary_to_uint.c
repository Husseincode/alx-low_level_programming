#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: string containing the binary number
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int a = 0;
	unsigned int decimal = 0;

	if (!b)
		return (0);

	for (; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		decimal = 2 * decimal + (b[a] - '0');
	}
	return (decimal);
}