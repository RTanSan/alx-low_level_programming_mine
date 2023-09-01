#include <stdio.h>
#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index.
 *
 * @n: value of the bit
 * @index: index you want to get of bit
 *
 * Return: index or -1mif fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;
	
	i = (1 << (index - 1));
	
	if (n == 0 && index >= 32)
	{
		return (-1);
	}
	return (n & i);
}
