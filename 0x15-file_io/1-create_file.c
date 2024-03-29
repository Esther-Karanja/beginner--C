#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success or -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i] != '\0')
	{
		i++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	write(fd, text_content, i);
	return (1);
}
