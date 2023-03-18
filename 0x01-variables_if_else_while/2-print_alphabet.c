/*2-print_alphabet.c*/

#include<stdio.h>

/**
 * main -  program that prints the alphabet in lowercase,
 *  followed by a new line.
 *  Return: always o.
 */

int main(void)
{
	char alphaa;

	for (alphaa = "a"; alphaa <= "z"; alphaa++)
		putchar(alphaa);

		putchar("\n");

		return (0);
}
