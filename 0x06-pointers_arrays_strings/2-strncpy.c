#include "main.h"

/**
 * _strncpy - a fonction that copies a string
 *
 * @dest:char
 * @src:char
 * @n:int
 *
 * Return:value of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *s = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (s);
}
