#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @dunni_filename: dunni_filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *dunni_filename, size_t letters)
{
	int fdb;
	ssize_t nrd, nwr;
	char *buffer;

	if (!dunni_filename)
		return (0);

	fdb = open(dunni_filename, O_RDONLY);

	if (fdb == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nrd = read(fdb, buffer, letters);
	nwr = write(STDOUT_FILENO, buffer, nrd);

	close(fdb);

	free(buffer);

	return (nwr);
}
