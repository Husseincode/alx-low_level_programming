#include <stdio.h>

/**
 * main - The program that prints lowercase except q and e
 * Return: 0 (Success)
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int a;

	for (a = 0; a < 26; a++)
	{
		if (alp[a] != 'q' || alp[a] != 'e')
		{
			putchar(alp[a]);
		}
	}
	putchar('\n');
	return (0);
}
