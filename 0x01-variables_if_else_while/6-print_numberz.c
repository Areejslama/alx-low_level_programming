#include <stdio.h>
/**
 * main-this is entry point
 *
 * Description: program that prints all single digit numbers
 *
 * Return : 0 Always (success)
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
