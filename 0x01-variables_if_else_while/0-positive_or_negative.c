#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* 0-positive_or_negative.c */

/* A script that prints random number and indicate if they are positive, negative or zero */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	    printf("%d is positive\n", n);
	else if (n < 0)
	    printf("%d is negative\n", n);
	else
	   printf("%d is zero\n", n);
	return (0);
}
