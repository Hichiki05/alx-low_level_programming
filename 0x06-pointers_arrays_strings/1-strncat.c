#include "main.h"

/**
 *_strncat - a fonction that concatenates two strings
 *
 * @dest:char
 * @src:char
 * @n:int
 *
 * Return:result of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (s);
}
