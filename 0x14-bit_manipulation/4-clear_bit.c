#include <stdio.h>
#include "main.h"

/**
 * clear_bit -  sets the value of a bit to 0 at a given index.
 * @n: value of the bit
 * @index:  index of the bit you want to set
 *
 * Return: 1 if succesful, -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
	{
		return (-1);
	}

	if (index >= 32)
	{
		return (-1);
	}

	return (*n & ~ (unsigned int)(1 << (index - 1)));
}
