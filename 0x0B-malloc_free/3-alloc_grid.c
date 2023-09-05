#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid-  returns a pointer to a 2 dimensional array of integers
 * @width:an integer
 * @height:an integer
 * Return:0 or NULL
*/
int **alloc_grid(int width, int height)
{
	int **d;
	int i;
	int n;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	d = malloc(sizeof(int *) * height);
	if (d == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < height ; i++)
	{
		d[i] = malloc(sizeof(int *) * width);
	if (d[i] == NULL)
	{
		free(d);
		for (n = 0 ; n <= height ; n++)
			free(d[n]);
		return (NULL);
	}
	for (n = 0 ; n < width ; n++)
		d[i][n] = 0;
	return (d);
}
