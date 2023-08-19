#include <stdio.h>
#include "main.h"
/**
 * main- that prints fizzbuzz program
 *
 * Return:value from 1 to 100
*/
int main(void)
{
	int y;

	for (y = 1 ; y <= 100 ; y++)
	{
		if (y % 3 == 0 && y % 5 == 0)
		{
			printf("Fizzbuzz");
		}
		else if (y % 3 == 0)
		{
			printf("fizz");
		}
		else if (y % 5 == 0)
		{
			printf("buzz");
		}
		else
		{
			printf("%d", y);
		}

		if (y != 100)
		{
		printf(" ");
		}
		else

		printf("\n");
	}
	return (0);
}
