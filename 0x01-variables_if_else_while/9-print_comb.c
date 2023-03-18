/* 9-print_comb.c */

#include <stdio.h>

/**
 * main - program that prints all possible combinations of single-digit numbers
 * Return: 0
 */

int main(void)
{
	int singledigit;

	for (singledigit = 0; singledigit <= 9; singledigit++)
	{
		putchar((singledigit % 10) + '0');
		if (singledigit == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
