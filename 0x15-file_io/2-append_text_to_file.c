#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/uio.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file to create
 * @text_content: size of the letters
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	int fdw;

	if (filename == NULL)
		return (-1);
	fd =  open(filename, O_RDWR | O_APPEND);
	if (text_content == NULL)
	{
		if (fd > 0)
		{
			close(fd);
			return (1);
		}
		return (-1);
	}
	while (*(text_content + len))
		len++;
	fdw = write(fd, text_content, len);
	close(fd);
	if (fdw < 0)
		return (-1);
	return (1);
}
