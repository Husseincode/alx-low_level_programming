#include "main.h"

/**
 * char *_strncat - a function that concatenates two strings.
 * @dest: A function parameter
 * @src: An input value
 * @n: integer by byte
 * Return: 0 (success)
 */

char *_strncat(char *dest, char *src, int n)
{
	n = 0;

	while (dest[n] != '\0')
	{
		n++;
	}

	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
