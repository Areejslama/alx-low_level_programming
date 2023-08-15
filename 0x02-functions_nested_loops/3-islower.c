#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for lowercase
 *@c:case to be checked
 *
 *Return:1 if c lowercase and 0 if otherwise
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
}
