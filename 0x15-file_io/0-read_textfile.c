#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open, read, write;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	open = open(filename, O_RDONLY);
	read = read(o, buffer, letters);
	write = write(STDOUT_FILENO, buffer, r);

	if (open == -1 || read == -1 || write == -1 || write != read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(read);

	return (write);
}
