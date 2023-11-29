#include <stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include "main.h"
#include <stdlib.h>
/**
 *  read_textfile- read the file
 *  @filename:name of file
 *  @letters:letters to be printed
 *  Return:0 Always
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t let;
	ssize_t f, r;
	char *file;

	if (filename == NULL)
	{
		return (0);
	}
	file = malloc(letters);
	if (file == NULL)
	{
		return (-1);
	}
	r = open(filename, O_RDONLY);
	if (r == -1)
	{
		free(file);
		return (0);
	}
	let = read(r, file, letters);
	f = write(STDIN_FILENO, file, let);
	close(r);
	return (f);
}
