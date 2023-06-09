#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - A function that prints a name
 * @name: name string
 * @f: pointer to the function
 * return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);

}
