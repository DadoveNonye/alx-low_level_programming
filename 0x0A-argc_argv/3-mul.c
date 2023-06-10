#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Afunction that multiples two num
 * @argc: Argument count
 * @argv: Argument vector
 * @Return: 0
 */

int main(int argc, char **argv)
{
	int num1, num2, total;
		if (argc != 3)
		{
			printf("Error\n");
		return (1);
		}
		else
		{
			num1 = atoi(argv[1]);
			num2 = atoi(argv[2]);
			total = num1 * num2;
			printf("%d\n", total);
		}


	return (0);
}
