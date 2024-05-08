#include "search_algos.h"
/**
 * linear_search- search for value in array
 * @array:pointer to first element
 * @size:number of elements
 * @value:value to search for
 * Return:0 Always
**/
int linear_search(int *array, size_t size, int value) 
{
	size_t i;
	
	for (i = 0; i < size; i++) 
	{
		if (array[i] == value) 
		{
			return (i);
		}
	}
	return (-1);
}
