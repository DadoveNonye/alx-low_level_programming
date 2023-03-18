/* 5-print_numbers.c */

#include <stdio.h>

/**
 * main - Prog that prints all single digits of base 10 starting from 0.
 *
 * Return: 0
 */

int main(void)
{
	char singledig;

	for (singledig = 0; singledig < 10; singledig++)
	printf("%d", singledig);
	printf("\n");
	return (0);
	}
