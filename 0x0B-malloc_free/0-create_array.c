#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array -  a function that creates an array of chars.
 * Return: NUll, if size = 0; pointer to the array if it fails
 * @size: value
 * @c: char value
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
		return (str);
	}
}
