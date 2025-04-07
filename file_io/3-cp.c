#include "main.h"

	#define BUFFER_SIZE 1024

/**
 * close_file_no_free - Closes a file descriptor without freeing the buffer
 * @file_descriptor: The file descriptor to close
 * @returnal: The return value to return
 *
 * Return: The return value passed in
 */

	int close_file_no_free(int file_descriptor, int returnal)
	{
	if (close(file_descriptor) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
		exit(100);
	}
	return (returnal);
	}

/**
 * main_copy - Copies the content of a file to another file.
 * @argc: The number of command line arguments.
 * @argv: The command line arguments.
 *
 * Description: this function is explain 2 line up.
 *
 * Return: 0 on success.
 */

	int main_copy(int argc, char *argv[])
	{
	int fd_from, fd_to;
	ssize_t nread;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_file_no_free(fd_from, 99);
		exit(99);
	}
	while ((nread = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(fd_to, buffer, nread) != nread)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_file_no_free(fd_from, 99);
			close_file_no_free(fd_to, 99);
			exit(99);
		}
	}
	if (nread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close_file_no_free(fd_from, 98);
		close_file_no_free(fd_to, 98);
		exit(98);
	}
	close_file_no_free(fd_from, 0);
	close_file_no_free(fd_to, 0);
	return (0);
	}

/**
 * main - Entry point of the program.
 *@argc: The number of command-line arguments
 *@argv: An array of command-line argument strings
 * Description: Entry point of a programme,1st fonction execute when you start.
 *
 * Return: Always returns 0 on success.
 *
 */
	int main(int argc, char *argv[])
	{
	return (main_copy(argc, argv));
	}
