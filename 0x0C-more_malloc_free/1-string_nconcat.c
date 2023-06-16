#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Function to conc to strings
 * @s1: sting to conc
 * @s2: string to conc
 * @n: num of bytes
 * retunr: NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ab;
	unsigned int i = 0, j = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	if (n < l2)
		ab = malloc(sizeof(char) * (l1 + n + 1));
	else
		ab = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!ab)
		return (NULL);

	while (i < l1)
	{
		ab[i] = s1[i];
		i++;
	}

	while (n < l2 && i < (l1 + n))
		ab[i++] = s2[j++];

	while (n >= l2 && i < (l1 + l2))
		ab[i++] = s2[j++];

	ab[i] = '\0';

	return (ab);

}
