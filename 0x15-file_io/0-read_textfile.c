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
	int r;
	ssize_t let;
	ssize_t f;
	char *file;

	if (filename == NULL)
	{
		return (0);
	}
	r = open(filename, O_RDONLY);
	if (r == -1)
	{
		return (0);
	}
	file = malloc(letters);
	if (file == NULL)
	{
		close(r);
		return (0);
	}
	let = read(r, file, letters);
	if (let == -1)
	{
		close(r);
		free(file);
		return (0);
	}
	f = write(STDIN_FILENO, file, let);
	if (f == -1 || f != let)
	{
		close(r);
		free(file);
		return (0);
	}
	close(r);
	free(file);
	return (f);
}
