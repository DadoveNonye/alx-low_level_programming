#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{

			if (format[i] == 'c')
			{
				printf("%s%c", sep, va_arg(list, int));
			}
			if (format[i] == 'i')
			{
				printf("%s%d", sep, va_arg(list, int));
			}
			if (format[i] == 'f')
			{
				printf("%s%d", sep, va_arg(list, int));
			}
			if (format[i] == 's')
			{
				 str = va_arg(list, char *);
			if (!str)
				str = "(nil)";
				 printf("%s%s", sep, str);
			}
			else
				i++;

			sep = ", ";
			i++;
	}
	printf("\n");
	va_end(list);
}
}
