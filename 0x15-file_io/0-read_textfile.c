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
        int fd;
        char *file;
        size_t let;
	size_t f;
        
	file = malloc(letters);
	if (file == NULL)
	{
		free(file);
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
        fd = open(filename, O_RDONLY);
        if (fd == - 1)
        {       
                return (0);
        }       
        let = read(fd, file, letters);
	f = write(STDIN_FILENO, file, let);
        
	close(fd);
	return (f);
}
