#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a function that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * return: result
 */

int main(int argc, char **argv)
{
	int i, total = 0, num;

	while (argc-- > 1)

	{
	for (i = 0; argv[argc][i]; i++)
	{
	if (!(isdigit(argv[argc][i])))
	{
		printf("Error\n");
		return (1);
	}
	}
	{
		num = atoi(argv[argc]);
		total += num;
	}
	}
	printf("%d\n", total);
	return (0);
}
