#include "main.h"

/**
 * _strcat - a fonction that concatenates two strings
 *
 * @src:char
 * @dest:char
 *
 *Return:char
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}