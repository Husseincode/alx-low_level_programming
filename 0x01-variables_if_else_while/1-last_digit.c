#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program of conditional statement
 * Return: 0 (Success)
 */

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n = 98;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of %d and is greater than 5\n", n);
	}

	else if (n == 0)
	{
		printf("Last digit of %d and is 0\n", n);
	}

	else if (n < 6 && n == 0)
	{
		printf("Last digit of %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
