#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: the file to be read read from
 * letters: number of letters it should read and print
 *
 * Return: returns the number of letters it could read and print
 * file can not be opened or read, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count, cread;
	int fd;
	char *c;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	c = malloc(sizeof(char) * letters);

	if (c == NULL)
		return (0);

	cread = read(fd, c, letters);
	count = write(STDOUT_FILENO, c, cread);

	close(fd);
	free(c);

	return (count);
}
