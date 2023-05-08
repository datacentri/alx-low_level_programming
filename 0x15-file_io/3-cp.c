#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @dunni_file_from: dunni_file_from.
 * @dunni_file_to: dunni_file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int dunni_file_from, int dunni_file_to, char *argv[])
{
	if (dunni_file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (dunni_file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int dunni_file_from, dunni_file_to, dunni_err_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp dunni_file_from dunni_file_to");
		exit(97);
	}

	dunni_file_from = open(argv[1], O_RDONLY);
	dunni_file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(dunni_file_from, dunni_file_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(dunni_file_from, buf, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		nwr = write(dunni_file_to, buf, nchars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	dunni_err_close = close(dunni_file_from);
	if (dunni_err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fdb %d\n", dunni_file_from);
		exit(100);
	}

	dunni_err_close = close(dunni_file_to);
	if (dunni_err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fdb %d\n", dunni_file_from);
		exit(100);
	}
	return (0);
}
