/* 8-print_base16.c */

#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lower case
 *Return: 0
 */

int main(void)
{
	char base16;

		for (base16 = 0; base16 <= 15; base16++)
			putchar ("%d", base16);

		return(0);
}

