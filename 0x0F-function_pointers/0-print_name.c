#include "function_pointers.h"

/**
 * print_name - a fonction that prints a name
 *
 * @name:a pointer to a character
 * @f:a pointer to a fonction
 *
 */

void print_name(char *name, void (*f)(char *))
{
	while (*name != '\0')
	{
		f(name);
		name++;
	}
}
