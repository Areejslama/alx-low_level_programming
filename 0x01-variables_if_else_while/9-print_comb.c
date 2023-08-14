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
	if (a == 9)
	{	
	putchar(a +'0');
	}
	else
	putchar(' ');
	putchar(',');
	}
	putchar('\n');
	return (0);
}	
