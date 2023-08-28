#include <stdio.h>
#include "main.h"
/**
 * _strstr- function that locates a substring
 * @needle:substring
 * @haystack:string
 *
 * Return:a pointer or null
*/
char *_strstr(char *haystack, char *needle)
{
	char *i = haystack;
	char *a = needle;

	for (; *haystack != '\0' ; haystack++)
	{
		while (*i == *a && *a != '\0')
		{
			i++;
			a++;
		}
		if (*i == '\0')
			return (haystack);
	}	
	return (0);

}
