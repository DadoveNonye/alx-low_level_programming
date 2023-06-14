#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that crates an array of chars
 * and initialize with a specific char
 * @size: size of the array
 * @c: assigned char
 * Description: create array chars
 * return: pointer || null
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	unsigned int i;


	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)

		return (NULL);



	for (i = 0; i < size; i++)

		str[i] = c;

	return (str);

}
