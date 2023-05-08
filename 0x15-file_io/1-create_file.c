#include "main.h"

/**
 * create_file - creates a file
 * @dunni_filename: dunni_filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *dunni_filename, char *text_content)
{
	int fdb;
	int nletters;
	int rwr;

	if (!dunni_filename)
		return (-1);

	fdb = open(dunni_filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fdb == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(fdb, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(fdb);

	return (1);
}
