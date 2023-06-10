#include "main.h"
#include <stdio.h>

/**
 * main - A function that prints argument received
 * @argc: argument count
 * @argv: argument vector
 * return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)

		for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
