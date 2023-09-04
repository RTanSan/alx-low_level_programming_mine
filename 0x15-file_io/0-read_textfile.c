#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: file to be used in stdout
 * @letters: number of letters it should read and print
 *
 * Return: return 0 is succesful
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char ch;
	
	fp = fopen(filename, "r");

	if (fp == NULL)
	{
		return (0);
	}

	while ((ch = fgetc(fp)) != EOF)
	{
		printf("%c", ch);
		letters++;
	}

	fclose(fp);

	return (letters);
}
