#include <stdio.h>
/**
 * main - A program that writes sizes of different output
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	float b;
	char c;
	long int d;
	long long int e;

	printf("Size of a char: %lu byte(s) \n", sizeof(c));
	printf("Size of an int: %lu byte(s) \n", sizeof(a));
	printf("Size of a long int: %lu byte(s) \n", sizeof(d));
	printf("Size of a long long int: %lu byte(s) \n", sizeof(e));
	printf("Size of a float: %lu byte(s) \n", sizeof(b));
	return (0);
}

