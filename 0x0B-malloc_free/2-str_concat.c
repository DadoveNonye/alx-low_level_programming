#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Function that concts two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conctstr;

	int i, co;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = co = 0;

	while (s1[i] != '\0')

		i++;

	while (s2[co] != '\0')

		co++;
	conctstr = malloc(sizeof(char) * (i + co + 1));
	if (conctstr == NULL)

		return (NULL);
	i = co = 0;
	while (s1[i] != '\0')

	{
		conctstr[i] = s1[i];
		i++;

	}

	while (s2[co] != '\0')

	{
		conctstr[i] = s2[co];

		i++, co++;
	}
	conctstr[i] = '\0';
	return (conctstr);
}

