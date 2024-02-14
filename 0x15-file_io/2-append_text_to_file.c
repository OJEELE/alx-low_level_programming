#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, err, len = 0;

	if (filename == NULL || text_content == NULL || text_content[0] == '\0')
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	while (text_content[len])
		len++;
	err = write(fd, text_content, len);
	if (err < 0)
		return (-1);
	close(fd);
	return (1);
}
