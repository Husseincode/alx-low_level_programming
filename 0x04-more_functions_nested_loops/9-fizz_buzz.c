#include <stdio.h>

/**
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n%3 == 0 && n%5 != 0)
                {
                        printf("fizz");
                }
		else if (n%5 == 0 && n%3 == 0)
                {
                        printf("Buzz");
                }
		else if (n%3 == 0 && n%5 == 0)
		{
			printf("Fizzbuzz");
		}
		else if (n == 1)
		{
			printf("%d", n);
		}
		else
		{
			printf("%d", n);
		}
	}
	return (0);
}
