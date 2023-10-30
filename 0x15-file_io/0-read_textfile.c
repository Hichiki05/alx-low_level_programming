#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

/*
* read_testfile - the fnct
* @filename: the name of the file
* @letters: the nmbr of letters to red and write
* Return: the nmbr of letters read and writting
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	return (0);

int fd = open(filename, O_RDONLY);

if (fd == -1)
return (0);

char *buffer = malloc(letters);

if (buffer == NULL)
{
	close(fd);
	return (0);
	}

	ssize_t bytesRead = read(fd, buffer, letters);

	if (bytesRead == -1)
	{
		close(fd);
		free(buffer);
		return (0);
		}

		ssize_t bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

		if (bytesWritten == -1 || bytesWritten != bytesRead)
		{
			close(fd);
			free(buffer);
			return (0);
			}
			close(fd);
			free(buffer);

			return (bytesRead);
			}
