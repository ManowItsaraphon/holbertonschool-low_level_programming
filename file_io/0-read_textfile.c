#include "main.h"

/**
 * read_textfile - read a text file and print it to the POSIX standard output
 * @filename: Name of the file or path
 * @letters: numner of letters it should read and print
 * Return: actual numner of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);


	close(fd);

	free(buf);

	return (nwr);
}
