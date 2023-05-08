#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @dunni_filename: dunni_filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *dunni_filename, char *text_content)
{
	int fdb;
	int nletters;
	int rwr;

	if (!dunni_filename)
		return (-1);

	fdb = open(dunni_filename, O_WRONLY | O_APPEND);

	if (fdb == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(fdb, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(fdb);

	return (1);
}
