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
	int num;
	va_list print;

	va_start(print, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(print, int);
		printf("%d", num);
	}
	if (i < n - 1 && separator != NULL)
	{
		printf("%s", separator);
	}
	va_end(print);
	printf("\n");
}
