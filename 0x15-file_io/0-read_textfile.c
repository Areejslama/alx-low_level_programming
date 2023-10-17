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
	  int fd;
	char *buffer;
	ssize_t bts_read, bts_written;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bts_read = read(fd, buffer, letters);
	if (bts_read == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	bts_written = write(STDOUT_FILENO, buffer, bts_read);
	if (bts_written == -1 || bts_written != bts_read)

	{
		close(fd);
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);

	return (bts_written);
}
