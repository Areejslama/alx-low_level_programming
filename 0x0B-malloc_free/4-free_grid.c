#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *  free_grid- frees a 2 dimensional grid
 *  @grid:pointer
 *  @height:an integer
 *  Return:0 Always
*/
void free_grid(int **grid, int height)
{
	int n;

	for (n = 0 ; n < height ; n++)
	{
		free(grid[n]);
	}
	free(grid);
}
