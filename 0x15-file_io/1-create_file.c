#include "main.h"
/**
 * create_file - function creates file
 * @filename: file to create
 * @text_content: NULL terminated string to write to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fop, len = 0, fwr;

	if (filename == NULL)
		return (-1);
	fop = open(filename, O_CREAT | O_WRONLY | O_TRUNC | 0600);
	if (fop < 0)
		return (-1);
	while (text_content && text_content[len])
		len++;
	fwr = write(fop, text_content, len);
	if (fwr < 0)
		return (-1);
	close(fop);
	return (1);
}
