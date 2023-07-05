#include "main.h"

/**
 * factorial - a fonction that returns the factorial of a given number
 *
 * @n:integer
 *
 * Return: -1 if n is lower than 0 , if not it should return the factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
