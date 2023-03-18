/* 3-print_alphabets.c */

#include <stdio.h>
/**
 * main - program that prints alphabets in lowcase then in uppercase
 * Return: 0.
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar(alpha);

	putchar('\n');

	return (0);
}
