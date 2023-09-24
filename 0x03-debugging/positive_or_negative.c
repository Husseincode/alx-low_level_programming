#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("The number %d is a positive number\n", n);
	}
	else if (n == 0)
	{
		printf("The number %d is equal to zero\n", n);
	}
	else if (n < 0)
	{
		printf("The number %d is a negative number\n", n);
	}
}
