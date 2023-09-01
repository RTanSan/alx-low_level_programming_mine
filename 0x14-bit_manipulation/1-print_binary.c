#include <stdio.h>
#include "main.h"

/**
 * print_binary -  prints the binary representation of a number.
 * @n: binary to be printed
 *
 * Return: return 0 (success)
 */
void print_binary(unsigned long int n)
{
	unsigned int i;

	if (n == 0)
	{
		putchar ('0');
	}

	for (i = 0; i < 32; i++)
	{
		if ((n & (i - 1)))
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}
	}
}
