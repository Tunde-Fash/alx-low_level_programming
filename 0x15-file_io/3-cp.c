#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _putchar - Write a character to stdout
 * @c: The character to print
 * Return: 1 (success), -1 (error)
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * cp_file - Copy file_from to file_to
 * @file_from: The source file
 * @file_to: The destination file
 * Return: 0 on success, -1 on error
 */
int cp_file(const char *file_from, const char *file_to)
{
    int fd_from, fd_to, n;
    char buffer[1024];

    if (!file_from || !file_to)
    {
        dprintf(2, "Usage: cp file_from file_to\n");
        exit(97);
    }

    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(2, "Error: Can't read from %s\n", file_from);
        exit(98);
    }

    fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        dprintf(2, "Error: Can't write to %s\n", file_to);
        exit(99);
    }

    while ((n = read(fd_from, buffer, 1024)) > 0)
    {
        if (write(fd_to, buffer, n) != n)
        {
            dprintf(2, "Error: Can't write to %s\n", file_to);
            exit(99);
        }
    }

    if (n == -1)
    {
        dprintf(2, "Error: Can't read from %s\n", file_from);
        exit(98);
    }

    if (close(fd_from) == -1)
    {
        dprintf(2, "Error: Can't close fd %d\n", fd_from);
        exit(100);
    }

    if (close(fd_to) == -1)
    {
        dprintf(2, "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }

    return 0;
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 97-100 on error
 */
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        dprintf(2, "Usage: cp file_from file_to\n");
        return (97);
    }

    if (cp_file(argv[1], argv[2]) == -1)
        return (98);

    return 0;
}

