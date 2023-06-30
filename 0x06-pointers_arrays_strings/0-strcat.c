#include "main.h"

/**
* _strcat - a fonction that concatenates two strings
*
* @src: the first string
* @dest: the second string
*
*Return: the value of dest
*/

char *_strcat(char *dest, char *src)
{
	char *original = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;

		*dest++;

		*src++;
	}
	*dest = '\0';
	return (original);
}
