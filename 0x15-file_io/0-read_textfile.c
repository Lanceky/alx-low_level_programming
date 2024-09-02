#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wrt;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(o, buffer, letters);
	wrt = write(STDOUT_FILENO, buffer, r);

	if (op == -1 || rd == -1 || wrt == -1 || wrt != rd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(rd);

	return (wrt);
}
