#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers.
 * Return: 0 (success)
 */

void print_most_numbers(void)
{
	int numbers[10] = {'0', '1', '3', '5', '6', '7', '8', '9', '\n'};
	int i;

	for (i = 0; i < 11; i++)
	{
		_putchar(numbers[i]);
	}
}
