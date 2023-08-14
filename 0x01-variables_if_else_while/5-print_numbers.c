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

	while (count < 10)
	{
		printf("%d", count);
		count++;
	}
	return (0);
}
