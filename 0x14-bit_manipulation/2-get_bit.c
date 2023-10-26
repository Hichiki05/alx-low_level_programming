#include "main.h"

/**
 * get_bit - Get the value
 * @n: The unsigned
 * @index: The index
 *
 * Return: The value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return ((int)((n >> index) & 1));
}
