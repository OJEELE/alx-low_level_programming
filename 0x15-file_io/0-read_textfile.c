#include "main.h"
/**
 * read_textfile - function that read a text file and prints to POSIX
 * @filename: if the file toread and print
 * @letters: number of letters read and printed
 * Return: returns actual numbers read or 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fop, frd, fwr;
	char *tmp;

	if (filename == NULL)
		return (0);
	tmp = malloc(sizeof(char) * letters);
	if (tmp == NULL)
		return (0);
	fop = open(filename, O_RDONLY);
	if (fop < 0)
	{
		free(tmp);
		return (0);
	}
	frd = read(fop, tmp, letters);
	if (fop < 0)
	{
		free(tmp);
		return (0);
	}
	fwr = write(STDOUT_FILENO, tmp, frd);
	free(tmp);
	close(fop);
	if (fwr < 0)
		return (0);
	return ((size_t)fwr);
}
