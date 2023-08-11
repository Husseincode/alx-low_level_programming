#include <stdio.h>
/**
 * main -  A program of lowercase and uppercase.
 * Return: 0 (Success)
 */

int main(void)
{
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabets[i]);
	}

	char upperA[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int b;

	for (b = 0; b < 26; b++)
	{
		putchar(upperA[b]);
	}
	putchar('\n');
	return (0);
}
