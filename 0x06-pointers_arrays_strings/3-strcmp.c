#include "main.h"

/**
 * _strcmp - a fonction that compares two strings
 *
 * @s1:char
 * @s2:char
 *
 * Return:0 OR *s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		int diff = *s1 - *s2;

		if (diff != 0)
		{
			return (diff);
		}
		s1++;
		s2++;
	}
	return (0);
}
