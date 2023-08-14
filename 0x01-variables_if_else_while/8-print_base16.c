#include <stdio.h>
/**
 * main-this is entry point
 *
 * Description:program that prints all the numbers of base 16 
 *
 * Return:0 Always (success)
*/
int main(void)
{
	int b = 0;
	int c = 'a';

	while (b < 10)
	{
	putchar(b);
	b++;
	}
	while (c <= 'f')	
	{
	putchar(c);	
	c++;
	}
	putchar('\n');
	return(0);
}	
