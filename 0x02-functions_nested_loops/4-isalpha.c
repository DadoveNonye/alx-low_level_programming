#include "main.h"

/**
 * int _isalpha - checks if c is alpebetic, lower or upper
 * @c: charcter to compare
 * Return: 1
 */
int _isalpha(int c)
{
	 if (c <= 'C' || c == 'c')
		 return (1);
		else
		return (0);
}
