#include "main.h"

/**
 * append_text_to_file - it appends text at the end of a file
 * @filename: a filename.
 * @text_content: an added content.
 *
 * Return: 1 if the file does exists. -1 if the file does not exist
 * or if it is an error.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int dunni;
	int dletters;
	int ola;

	if (!filename)
		return (-1);

	dunni = open(filename, O_WRONLY | O_APPEND);

	if (dunni == -1)
		return (-1);

	if (text_content)
	{
		for (dletters = 0; text_content[dletters]; dletters++)
			;

		ola = write(dunni, text_content, dletters);

		if (ola == -1)
			return (-1);
	}

	close(dunni);

	return (1);
}
