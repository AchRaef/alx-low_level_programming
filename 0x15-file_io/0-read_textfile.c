#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a text file and prints it to the POSIX standard output.
 * @filename: text file to read
 * @letters: number of letters
 * Return: w- number of bytes read and printed
 *        0 function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bf;
	ssize_t f;
	ssize_t w;
	ssize_t t;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	bf = malloc(sizeof(char) * letters);
	t = read(f, bf, letters);
	w = write(STDOUT_FILENO, bf, t);

	free(bf);
	close(f);
	return (w);
}
