#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_file- create a file
 * @filename:name of file
 * @text_content:the content
 * Return:0 Always
*/
int create_file(const char *filename, char *text_content)
{
	ssize_t n = 0;
	int file;


	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
	n = write(file, text_content, strlen(text_content));
	if (n == -1)
	{
		close(file);
		return (-1);
	}
	}
	close(file);
	return (1);
}
