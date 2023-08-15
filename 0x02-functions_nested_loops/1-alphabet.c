#include "main.h"

/**
 * main - A function that prints the alphabet, in lowercase, followed by a new line.
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		printf(alp);
	}
	return (0);
}
