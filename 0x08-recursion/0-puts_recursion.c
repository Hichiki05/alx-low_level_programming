#include "main.h"

/**
 * _puts_recursion - a fonction that print a string follow by a new line
 *
 * @*s: the pointer to a string
 * @s:char of the sring
 *
 * Return:always 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
