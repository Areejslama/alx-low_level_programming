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
int m;
int l;

if (width <= 0 || height <= 0)
{
return (NULL);
}
d = malloc(sizeof(int *) * height);
if (d == NULL)
{
free(d);
return (NULL);
}
for (i = 0 ; i < height ; i++)
{
d[i] = malloc(sizeof(int *) * width);
}
if (d[i] == NULL)
{
for (n = i; n >= 0; n--)
free (d[n]);
}
free (d);
return (NULL);
for (m = 0 ; m < height ; m++)
{
for (l = 0 ; l < width ; l++)
d[m][n] = 0;
}
return (d);
}
