#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes.
 * @file: The name of the file buffer is storing.
 * Return: A pointer to the newly-allocated buffering.
 */

char *create_buffer(char *file)
{
	char *buffering;

	buffering = malloc(sizeof(char) * 1024);

	if (buffering == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffering);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor.
 */
void close_file(int fd)
{
	int a;

	a = close(fd);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file.
 * @argc: The number of argument.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int comingfrom, to, readfile, writefile;
	char *buffering;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffering = create_buffer(argv[2]);
	comingfrom = open(argv[1], O_RDONLY);
	readfile = read(comingfrom, buffering, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (comingfrom == -1 || readfile == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffering);
			exit(98);
		}

		writefile = write(to, buffering, readfile);
		if (to == -1 || writefile == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffering);
			exit(99);
		}

		readfile = read(comingfrom, buffering, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (readfile > 0);

	free(buffering);
	close_file(comingfrom);
	close_file(to);

	return (0);
}
