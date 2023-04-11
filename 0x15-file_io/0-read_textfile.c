#include "main.h"

/**
 * read_textfile - reads a text file and print the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int dunni;
	ssize_t data, ola;
	char *baus;

	if (!filename)
		return (0);

	dunni = open(filename, O_RDONLY);

	if (dunni == -1)
		return (0);

	baus = malloc(sizeof(char) * (letters));
	if (!baus)
		return (0);

	data = read(dunni, baus, letters);
	ola = write(STDOUT_FILENO, baus, data);

	close(dunni);

	free(baus);

	return (ola);
}
