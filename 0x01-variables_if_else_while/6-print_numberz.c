/* 6-print_numberz.c */

#include <stdio.h>

/**
 * main - single digits of base 10 followed by a new line
 * Return: 0
 */

int main(void)
{
	int singledigits;

	for (singledigits = 0; singledigits < 10; singledigits++)

		putchar((singledigits % 11) + '0');

	return (0);
}
