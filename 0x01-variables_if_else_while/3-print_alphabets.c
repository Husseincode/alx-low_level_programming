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

	for (i = 0; i < 26; i++)
	{
		putchar(upperA[i]);
	}
	putchar('\n');
	return (0);
}
