#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - A function that prints numbers
 * followed by a new line.
 * @separator: The string "," to be printed btwn numbers.
 * @n: Num of integers passed to the function.
 * @...: A
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list total;
	unsigned int fnum;

	va_start(total, n);

	for (fnum = 0; fnum < n; fnum++)
	{
		printf("%d", va_arg(total, int));

		if (fnum != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(total);
}
