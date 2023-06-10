#include "main.h"
#include <stdio.h>

/**
 * main - A function that number of arg passed into it
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);

	return (0);
}
