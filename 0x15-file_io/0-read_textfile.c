#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile- reads a text file and prints it to the POSIX
 * @filename:name
 * @letters:var
 * Return:0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	  int file;
	  size_t count;
	  size_t f;
	  char *let;

	  let = malloc(letters);
	if (filename == NULL)
	{
		return (0);
	}
	if (let == NULL)
	{
		return (0);
	}
	file = open("filename", "r");
	if (file == -1)
	{
		free(let);
		return (0);
	}
	count = read(file,  let, letters);
	f = write(STDOUT_FILENO, let, count);
	close(file);
	return (f);
}
