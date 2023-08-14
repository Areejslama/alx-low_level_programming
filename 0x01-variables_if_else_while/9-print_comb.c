#include <stdio.h>
/**
 * main-this is entry point
 *
 * Description: program that prints all possible combinations of digit numbers
 *
 * Return:0 Always (success)
*/
int main(void)
{
	int a = 0;

	while( a < 10)
	{	
	putchar(a + '0');

	if (a != 9)
	{	
	putchar(',');
	putchar(' ');
	}
	a++;
	}
	putchar('\n');
	return (0);
}
