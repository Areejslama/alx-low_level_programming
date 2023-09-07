#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range- creates an array of integers
 * @min:an integer
 * @max:an integer
 *
 * Return:NULL
*/
int *array_range(int min, int max)
{
int *a;
int i;
int size;

if (min > max)
{
return (NULL);
}
size = ((max - min) + 1)
a = malloc(sizeof(int) * size);
if (a == NULL)
{
return (NULL);
}
for (i = 0; min <= max ; i++)
a[i] = min++;
return (a);
}
