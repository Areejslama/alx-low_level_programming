#include <stdio.h>
#include "main.h"
/**
 *  reverse_array-  reverses the content of an array of integers
 *  @a:array to reverse
 *  @n:an integer
 *
 *  Return:elemnts of array
*/
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0 ; i < n-- ; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
