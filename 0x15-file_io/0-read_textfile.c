#include <unistd.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file to read
 * @letters: count of letters to read and write
 *
 * Return: ssize_t
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd;
	ssize_t wr;
	char *msg;

	msg = malloc(letters);
	if (msg == NULL)
	return (0);

	if (filename == NULL)
	return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(msg);
		return (0);
	}
	rd = read(fd, msg, letters);
	wr = write(STDOUT_FILENO, msg, rd);
	close(fd);
	return (wr);
}
