#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	char *ch;

	fp = fopen(filename, "w");
	ch = text_content;

	if (fp == NULL)
	{
		return (-1);
	}

	if (*ch == 0)
	{
		putchar(*ch);
		ch++;
	}

	fclose(fp);
	return (1);
}
