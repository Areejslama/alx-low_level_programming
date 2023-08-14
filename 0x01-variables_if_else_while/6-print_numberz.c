#include <stdio.h>
/**
 * main-this is entry point
 *
 * Description:a program that prints all single numbers of base 10
 *
 * Return:0 Always (success)
*/
int main(void)
{

	int num = 0;
		while (num < 10)
		{
		/*convert num ASCII representation*/
		putchar(num + '0');
		num++;
		}
		putchar('\n');
		return (0);
}
