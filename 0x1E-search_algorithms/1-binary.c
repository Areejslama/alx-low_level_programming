#include "search_algos.h"
/**
 * binary_search - search for a value in a sorted array using binary search
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index of the value if found, -1 otherwise
 **/
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int mid;
	int right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (int i = left; i <= right; i++)
		{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
		}
		printf("\n");
		mid = left + (right - left) / 2;
	if (array[mid] == value)
	{
		return (mid);
	}
	else if (array[mid] < value)
	{
		left = mid + 1;
	}
	else
	{
		right = mid - 1;
	}
	}
	return (-1);
}
