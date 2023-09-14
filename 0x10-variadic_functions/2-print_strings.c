#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings-  function that prints strings
 * @n:parameter
 *@separator:a parameter
 * Return:void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	const char *s;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, const char *);
	if (s == NULL)
	{
		printf("%s", "(nil)");
	}
	else
	{
		printf("%s", s);
	}
	if (i < n - 1 && separator != NULL)
	{
		printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}	}
