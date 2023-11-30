#include <stdio.h>
#include "main.h"
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file- appends text at the end of a file
 * @filename:name of file
 * text_content:content of file
 * Return:1 on success -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t let;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		let = write(fd, text_content, strlen(text_content));
	if (let == -1)
	{
		close(fd);
		return (-1);
	}
	}
	close(fd);
	return (1);
}
