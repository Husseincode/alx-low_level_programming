#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse
 * Return : 0 (Success)
 */

int main(void)
{
	char* revalp[] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(revalp[i]);
	}
	putchar('\n');
	return (0);
}
