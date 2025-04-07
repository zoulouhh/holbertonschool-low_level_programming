#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Prints an error message and exits with a specific code.
 * @code: The exit code.
 * @message: The error message to print.
 * @filename: The filename related to the error.
 */
void print_error(int code, const char *message, const char *filename)
{
    dprintf(STDERR_FILENO, "%s %s\n", message, filename);
    exit(code);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments passed to the program.
 * @argv: The arguments passed to the program.
 *
 * Return: 0 on success, exits with specific codes on failure.
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to, read_bytes, write_bytes;
    char buffer[BUFFER_SIZE];

    if (argc != 3)
        print_error(97, "Usage: cp file_from file_to", "");

    /* Open source file */
    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
        print_error(98, "Error: Can't read from file", argv[1]);

    /* Open destination file with correct permissions */
    fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (fd_to == -1)
        print_error(99, "Error: Can't write to", argv[2]);

    /* Read from source and write to destination */
    while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
    {
        write_bytes = write(fd_to, buffer, read_bytes);
        if (write_bytes != read_bytes)
            print_error(99, "Error: Can't write to", argv[2]);
    }

    if (read_bytes == -1) /* Handle read error */
        print_error(98, "Error: Can't read from file", argv[1]);

    /* Close file descriptors */
    if (close(fd_from) == -1)
        print_error(100, "Error: Can't close fd", argv[1]);

    if (close(fd_to) == -1)
        print_error(100, "Error: Can't close fd", argv[2]);

    return (0);
}

