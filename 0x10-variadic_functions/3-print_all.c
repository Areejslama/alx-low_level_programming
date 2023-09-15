#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all- function that prints anything
 * @format:list of types
 *
 * Return:void
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	char *sep = ",";
	va_list args;

	va_start(args, format);
	while (format[i] != '\0' && format != NULL)
	{
		switch (format[i])
		{
			case 'c':
			printf("%s%c", str, va_arg(args, int));
			break;
			case 'i':
			printf("%s%d", str, va_arg(args, int));
			break;
			case 'f':
			printf("%s%f", str, va_arg(args, double));
			break;
			case 's':
			str = va_arg(args, char*);
			if (sep == NULL)
			{
				printf("(nil)");
			}
			printf("%s%s", str, sep);
			break;
			default:
			i++;
			continue;
		}
	}
		printf("\n");
		va_end(args);
}
