#include "main.h"
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * main - Copy the contenT
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 on success, 97, 98, 99, or 100 on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
		}

		fd_from = open(argv[1], O_RDONLY);

		if (fd_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			return (98);
			}

			if (close(fd_from) == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
				return (100);
				}

				if (close(fd_to) == -1)
				{
					dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
					return (100);
					}

					return (0);
					}
