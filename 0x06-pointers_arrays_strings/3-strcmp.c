#include <stdio.h>
#include "main.h"
/**
 *  _strcmp- compares two strings
 *  @s1:string to be compared
 *  @s2:string to be compared
 *
 *  Return:0 Always (success)
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i =  0 ; s1[i] != '\0' || s2[i] != '\0' ; i++)

		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
			{
				return (s1[i] - s2[i]);
			}
				i++;
			return (0);
		}
}
