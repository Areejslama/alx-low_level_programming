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
	int x = 48;

	while (x <= 102 )
	{
	putchar(x);
	if (x==57)
	x+=39;
	x++;
	}
	putchar('\n');
	return(0);
}	
