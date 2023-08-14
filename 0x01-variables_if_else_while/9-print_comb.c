#include <stdio.h>
/**
 * main-thi is entry point
 *
 * Description: a program that prints all possible combinations of digit numbers
 *
 * Return:0 Always (success)
*/
int main(void)
{
	int a = 0;

	while ( a < 10)
	{	
	putchar(a + '0');
	a++;
	}
	putchar(',');
	putchar('\n');
	return (0);
}	
