#include <stdio.h>
/**
 * main-this is entry point
 *
 * Description:prints all single digit numbers of base 10
 *
 * Return:0 Always (success)
*/
int main(void)
{
	int count = 0;

	for (count = 0; count < 10; count++;)
	{
		putchar(count);
		
	}
	putchar('\n');
	return (0);
	
}
