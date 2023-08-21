#include <stdio.h>
#include "main.h"
/**
 * reset_to_98- a function that takes a pointer to an int as parameter 
 * @n:a parameter
 *
 * Return:the value
*/
void reset_to_98(int *n)
{
	int a;

	a = 402;
	n = &a;
	_putchar(a);
	*n = 98;
	_putchar(a);
}
