#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("The number %d is a positive number\n", i);
	}
	else if (i == 0)
	{
		printf("The number %d is equal to zero\n", i);
	}
	else if (i < 0)
	{
		printf("The number %d is a negative number\n", i);
	}
}
