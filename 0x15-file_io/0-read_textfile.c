#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - unction that reads a text file and prints to standard output
 * @filename: file that will be read
 * @letters: number of the letters that will be read
 * Return: actual number of letters it could read and printed
 *	if fails or NULL return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssze_t r;

	fd = open(filename, O_RDONLY);

	if (fd == --1)
		return (0);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
