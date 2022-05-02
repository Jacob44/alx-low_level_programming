#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/uio.h>
#include <unistd.h>

/**
 * create_file - create a function that creates a file.
 * @filename: the name of the file to create
 * @text_content: size of the letters
 *
 * Return: the actual number of letters it could read and print.
 */
int create_file(const char *filename, char *text_content)
{
	int i, fd, len = 1;
	ssize_t fdw;

	if (filename == NULL)
		return (-1);
	fd =  open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
	{
		return (0);
	}
	for (i = 0; text_content[i] == '\0'; i++)
	{
		len++;
	}
	fdw = write(fd, text_content, len);
	close(fdw);
	if (fdw < 0)
		return (-1);
	return (1);
}
