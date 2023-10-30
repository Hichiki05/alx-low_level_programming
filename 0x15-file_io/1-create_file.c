#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Name
 * @text_content: NULL-terminated
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytesWritten, text_length = 0;

	if (filename == NULL)
	return (-1);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

if (fd == -1)
return (-1);

if (text_content != NULL)
{
	while (text_content[text_length] != '\0')
	text_length++;
bytesWritten = write(fd, text_content, text_length);
if (bytesWritten != text_length)
{
	close(fd);
	return (-1);
	}
	}
	close(fd);
	return (1);
	}
