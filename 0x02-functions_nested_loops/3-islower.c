#include <stdio.h>
#include "main.h"
/**
 * islower checks for lowercase character
 *
 * return:1 if lowercase and 0 otherwise
*/
int _islower(int c)
{
	if ( c >= 97 && c <=122 )
	{
		return (1);
	}
		return (0);
}		
