/* 3-islower.c */

#include "main.h"

/**
 * _islower - A prog that checks if c is in lowercase
 * @c: character to compare
 * Return: 0
 */

int _islower(int c)
{


		if (c >= 'a' && c <= 'z')
			return (1);
			else
			return (0);

}
