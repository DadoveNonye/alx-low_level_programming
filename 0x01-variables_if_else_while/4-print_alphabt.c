/* 4-print_alphabt.c */
#include <stdio.h>

/**
 * main - program that prints alphabets in lower case,
 * followed by a new line. print all letters expect q and e
 *
 * Return: 0
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
			putchar(alpha);
	}

	putchar('\n');

	return (0);
}
