/*1-last_digit.c*/
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  will assign a random number to the variable n each time it is executed.
 * Return: always 0
 *  */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
	{
		printf("The last digit of %d is %d, and is greater than 5\n");
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("The last digit of %d is %d, and is less than 6 and not 0\n");	
	}
	else
	{
		printf("The last digit of %d is %d, and is 0\n");	
	}
	return (0);
}
