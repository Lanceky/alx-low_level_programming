#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters it could read and print,
 *         or 0 if the file cannot be opened, or read, or if filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t read_bytes, written_bytes;
    char *buffer;

    /* Check if filename is NULL */
    if (filename == NULL)
        return (0);

    /* Open the file */
    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    /* Allocate memory for the buffer */
    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL) {
        close(fd);
        return (0);
    }

    /* Read the file content */
    read_bytes = read(fd, buffer, letters);
    if (read_bytes == -1) {
        free(buffer);
        close(fd);
        return (0);
    }

    /* Write to the standard output */
    written_bytes = write(STDOUT_FILENO, buffer, read_bytes);
    if (written_bytes == -1 || written_bytes != read_bytes) {
        free(buffer);
        close(fd);
        return (0);
    }

    /* Clean up */
    free(buffer);
    close(fd);

    return (written_bytes);
}
