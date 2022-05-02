#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/uio.h>
#include <unistd.h>

/**
 * read_textfile - a function that reads a text file and prints it to the POSIX
 * @filename: file to be opened
 * @letters: size of the letters
 *
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fr;
	ssize_t fdw;
	char *buff = malloc(letters * sizeof(char));

	if (filename == NULL)
		return (0);
	if (buff == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buff);
		return (0);
	}
	fr = read(fd, buff, letters);
	if (fr < 0)
	{
		free(buff);
		return (0);
	}
	fdw = write(STDOUT_FILENO, buff, fr);
	free(buff);
	close(fd);
	if (fdw < 0)
		return (0);
	return (fdw);
}
