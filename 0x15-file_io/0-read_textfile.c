#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT in POSIX.
 *
 * @filename:this is char that text file being read
 *
 * @letters: number of letters to be read size_t
 *
 * Return: w- actual number of bytes read,
 *        0 when function fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fde;
	ssize_t wr;
	ssize_t t;

	fde = open(filename, O_RDONLY);
	if (fde == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fde, buf, letters);
	wr = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fde);
	return (wr);
}

