#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Function that returns a pointer to newly allocated space
 * @str: allocated char
 * Return: NULL
 */

char *_strdup(char *str)
{
	char *c;

	int i, z = 0;



	if (str == NULL)

		return (NULL);

	i = 0;

	while (str[i] != '\0')

		i++;



	c = malloc(sizeof(char) * (i + 1));



	if (c == NULL)

		return (NULL);



	for (z = 0; str[z]; z++)

		c[z] = str[z];



	return (c);

}
