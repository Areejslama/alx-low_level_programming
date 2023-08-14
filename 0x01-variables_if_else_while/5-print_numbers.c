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
	int counter = 0;

	while (counter < 10)
	{
		printf("%d\t" , counter);	
		counter++;
	}
	return (0);
}
