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

	for (y = 0 ; y <= 100 ; y++)
	{
		if (y % 3 == 0)
		{
			printf("Fizz");
		}
		else if (y % 5 == 0)
		{
			printf("buzz");
		}
		else if (y % 3 == 0 && y % 5 == 0)
		{
			printf("fizzbuzz");
		}
		else
		{
			printf("%d", y);
		}

		if (y != 100)
		{
		printf(" ");
		}
		printf("\n");
	}
	return (0);
}
