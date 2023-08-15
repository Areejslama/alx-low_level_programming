#include <stdio.h>
#include "main.h"
/**
 * _islower-checks for lowercase 
 *@c:case to be checked
 *
 * return: 1 if _islower and 0 if not
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
}
