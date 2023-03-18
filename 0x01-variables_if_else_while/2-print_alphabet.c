/*2-print_alphabet.c*/

#include<stdio.h>

/**
 * main -  program that prints the alphabet in lowercase,
 *  followed by a new line.
 *  Return: always o.
 */

int main(void)
{
	char alphaa[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	for (i = 0; i <= 26; i++)
	{
		putchar(alphaa[i]);
}
		putchar("\n");
	
		return (0);
}
