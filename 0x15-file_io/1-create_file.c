#include "main.h"

/**
 * create_file - it creates a file
 * @filename: a filename.
 * @text_content: a content written in the file.
 *
 * Return: 1 if it's a success. -1 if it is an error/fails.
 */
int create_file(const char *filename, char *text_content)
{
	int dunni;
	int dletters;
	int ola;

	if (!filename)
		return (-1);

	dunni = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (dunni == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (dletters = 0; text_content[dletters]; dletters++)
		;

	ola = write(dunni, text_content, dletters);

	if (ola == -1)
		return (-1);

	close(dunni);

	return (1);
}
