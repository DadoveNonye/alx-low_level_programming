/* 8-print_base16.c */

#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lower case
 *Return: 0
 */

int main(void)
{
	int base16;
	char alpha;

		for (base16 = 0; base16 <= 15; base16++)
			putchar ((base16 % 15) + '0');

		for (alpha = 'a'; alpha <= 'o'; alpha++)
			putchar (alpha);
		/*	putchar ("\n")*/	

		return (0);
}

