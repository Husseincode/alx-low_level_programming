#include <stdio.h>
/**
 * Main - A program that prints sizes of various types
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;
	float decimal;
	char letter;
	long int c;
	long long int d;
	printf("Size of a char: %ld byte(s) \n Size of an int: %ld \n Size of a long int: %ld \n Size of a long long int: %ld \n Size of a float: %ld", sizeof(letter), sizeof(num), sizeof(c),sizeof(d), sizeof(decimal));
	return 0;
}

