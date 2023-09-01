#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: bit value
 * @index: index of th bit you want to set
 *
 * Return: 1 if succesful -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
	{
		return (-1);
	}

	if (index >= 32)
	{
		return (-1);
	}
	return (*n | (unsigned int)(1 << (index - 1)));
}
