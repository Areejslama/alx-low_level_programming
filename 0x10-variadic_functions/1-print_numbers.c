#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers-  function that prints numbers
 * @separator:parameter
 * @n:parameter
 * Return:void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list print;

	va_start(print, n);
	va_arg(print, int);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(print, int));
	}
	if (i != n - 1 && separator != NULL)
	{
		printf("%d", *separator);
	}
	va_end(print);
	printf("\n");
}
