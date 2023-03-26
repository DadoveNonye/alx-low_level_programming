#include <stdio.h>
#include "main.h"

/**
 * _isupper - script that checks if c is uppercase
 * @c: value to be checked
 * Return: 0
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')

		return (1);
	else

		return (0);

}
