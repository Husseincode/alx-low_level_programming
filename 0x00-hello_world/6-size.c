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
	printf("The size of an integer is %ld \n The size of float is %ld \n The size of char is %ld", sizeof(num), sizeof(decimal), sizeof(letter));
	return 0;
}
