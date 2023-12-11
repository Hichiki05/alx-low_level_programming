#include "main.h"

/**
 * _isdigit - checks if the input is  digit betwen 0 - 9
 *
 * @c: input
 *
 * Return: return 1 if its a digit, 0 if elese
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
