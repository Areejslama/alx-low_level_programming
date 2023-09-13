#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator-executes a function given as a parameter on each element
 * @array:a pointer
 * @size:size of a function
 * @action:function to pointer
 * Return:void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size + 1; i++)
	{
	action(array[i]);
	}


}
