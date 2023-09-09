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
char *output;

if (new_size > old_size)
{
return (NULL);
}
if (new_size == old_size)
{
return (ptr);
}
if (ptr == NULL)
{
output = malloc(new_size);
}
if (output == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
return (output);
output = malloc(sizeof(int) * new_size);
new_size++;
return (NULL);
}

