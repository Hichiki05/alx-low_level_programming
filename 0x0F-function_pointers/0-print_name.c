#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a fonction that prints a name
 *
 * @name:a pointer to a character
 * @f:a pointer to a fonction
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
