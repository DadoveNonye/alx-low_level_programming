#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: bytes to be checked
 * return: status 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	void *chn;

	chn = malloc(b);
	if (chn == NULL)
		exit(98);

	return (chn);
}
