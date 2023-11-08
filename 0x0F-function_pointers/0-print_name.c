#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function to be pointed to
 * @name: name input
 * @f: pointer to the function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
