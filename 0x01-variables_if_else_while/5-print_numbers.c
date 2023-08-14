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
	int countr = 0;

	while (countr < 10)
	{
		printf("%d", countr );
		countr++;
	}
	return (0);
}
