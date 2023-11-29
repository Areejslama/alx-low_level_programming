#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * create_file- create a file
 * @filename:name of file
 * @text content:the content
 * Return:0 Always
*/
int create_file(const char *filename, char *text_content)
{
	int n = 0;
	int file;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	while ( text_content[n] != '\0')
	{
		n++;
	}
	file = open(filename, O_WRONLY| O_CREAT| O_TRUNC, 6000);
	if (file == -1)
	{
		return (-1);
	}
        write(file, text_content, n);
	return (1);
}
