#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _realloc- function that reallocates a memory block
 * @ptr:a pointer
 * @old_size:an old size of memory block
 * @new_size:a new size of memory block
 *
 * Return:new size
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int *output;

if (new_size > old_size)
{
return (NULL);
}
if (new_size == old_size)
{
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
return (NULL);
}
output = malloc(sizeof(int) * new_size);
new_size++;
output = realloc(output, sizeof(int) * new_size);
free(ptr);
return (output);
}

