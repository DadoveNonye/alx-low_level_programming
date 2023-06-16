#include <stdlib.h>
#include "main.h"

/**
 * array_range -function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *chn;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	chn = malloc(sizeof(int) * size);

	if (chn == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		chn[i] = min++;

	return (chn);
}
