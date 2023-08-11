#include <stdio.h>
/**
 * main - This program pribnts alphabet in lowercase
 * Return: always 0 (Success)
 */

int main(void)
{
	char alphabets[26] = "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z";
	int counter;

	for (counter = 0; counter < 26; counter++)
	{
		putchar(alphabets[counter]);
	}
	putchar("\n");
	return (0);
}
