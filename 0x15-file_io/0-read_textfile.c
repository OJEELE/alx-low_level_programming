#include "main.h"
/**
 * read_textfile - function that reads text file and prints to POSIx STDOUT
 * @filename: textfile to be read and printed
 * @letters: number of letters it should read and print
 * Return: actual numbers of letters it could read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdo, fdr, fdw;
	char *tmp;

	if (filename == NULL)
		return (0);
	tmp = malloc(sizeof(char) *letters);
	if (tmp == NULL)
		return (0);

	fdo = open(filename, O_RDONLY);
	if (fdo < 0)
	{
		free(tmp);
		return (0);
	}

	fdr = read(fdo, tmp, letters);
	if (fdr < 0)
	{
		free(tmp);
		return (0);
	}

	fdw = write(STDOUT_FILENO, tmp, fdr);
	free(tmp);
	close(fdo);

	if (fdw < 0)
		return (0);
	return ((size_t)fdw);
}
