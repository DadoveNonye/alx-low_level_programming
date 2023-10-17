#include "main.h"

/**
 * int _isalpha - checks if c is alpebetic, lower or upper
 * @c: charcter to compare
 * Return: 1
 */
int _isalpha(int c)
{
	 if ((c >= 'c' && c <= 'z') || (c >= 'C' && c <= 'Z'))
		 return (1);
		else
		return (0);
}
