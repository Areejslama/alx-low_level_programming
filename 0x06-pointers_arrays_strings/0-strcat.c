#include <stdio.h>
#include "main.h"
/**
 * _strcat- function that concatenates two strings
 * @dest:string to be cat
 * @src:string to be cat
 *
 * Return:pointer to string
*/
char *_strcat(char *dest, char *src)
{
	int i;
	dest_len = 0;
	src_len = 0;

	for (i = 0 ; dest[i] != '\0' ; i++)
		dest_len++;
	for(i = 0 ; src [i] != '\0' ; i++)
		src_len++;
	for (i = 0 ; i <= src_len ; i++)
		dest[dest_len +i] = src[i];
	return (dest);
}
