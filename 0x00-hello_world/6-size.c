#include <stdio.h>
/**
 * Main - A program that print
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;
	float decimal;
	char letter;
	long int c;
	long long int d;
	printf("Size of a char: %ld byte(s) \n", sizeof(letter));
	printf("Size of a long int: %ld byte(s) \n", sizeof(c));
	printf("Size of a long long int: %ld byte(s) \n", sizeof(d));
	printf("Size of a float: %ld byte(s) \n", sizeof(decimal));
	printf("Size of a integer: %ld byte(s) \n", sizeof(num));
	return (0);
}

