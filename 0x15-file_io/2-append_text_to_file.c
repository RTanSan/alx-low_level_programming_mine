#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;
	char *ch;

	fp = fopen(filename, "o");
	ch = text_content;

	if (filename == NULL)
	{
		return (-1);
	}
	
	if (ch != 0)
	{
		fputs(text_content, fp);
		return (1);
	}
	return (0);
}
