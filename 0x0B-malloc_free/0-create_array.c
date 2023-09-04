#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array- function that creates an array of chars
 * @size:an integer
 * @c:char
 *
 * Return:a pointer or NULL
*/
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i;

ptr = malloc(sizeof(char) * size);

if (size == 0)
{
	return (NULL);
}
else if (ptr == NULL)
{
	return (NULL);
}
for (i = 0 ; i < size ; i++)
ptr[i] = c;
return (ptr);
}
