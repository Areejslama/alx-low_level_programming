#include <stdio.h>
#include "main.h"
/**
 * print_to_98- prints all numbers to 98
 * @n:number sould be printed
 *
 * Return:numbers
*/
void print_to_98(int n)
{
	int count;

	for(count = n ; count > 98 ; count--)
		printf("%d," ,  count);
	for(count = n ; count < 98 ; count ++)
		printf("%d," ,  count);
	printf("98\n");
}
