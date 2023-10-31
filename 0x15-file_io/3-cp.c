#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

#define BUF_SIZE 1024


int error_handler(int code, ...) {
    va_list args;
    va_start(args, code);

    switch (code) {
        case 97:
            dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
            break;
        case 98:
            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", va_arg(args, const char *));
            break;
        case 99:
            dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", va_arg(args, const char *));
            break;
        case 100:
            dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", va_arg(args, int));
            break;
        default:
            dprintf(STDERR_FILENO, "Unknown error code: %d\n", code);
            break;
    }

    va_end(args);
    exit(code);
}

int open_file(const char *filename, int flags) {
    int fd = open(filename, flags, 0664);
    if (fd == -1) {
        error_handler(99, filename);
    }
    return fd;
}

int close_file(int fd) {
    int status = close(fd);
    if (status == -1) {
        error_handler(100, fd);
    }
    return status;
}

ssize_t copy_file(const char *file_from, const char *file_to) {
    int fd_from, fd_to;
    ssize_t n;
    char buf[BUF_SIZE];

    fd_from = open_file(file_from, O_RDONLY);

    fd_to = open_file(file_to, O_WRONLY | O_CREAT | O_TRUNC);

    while ((n = read(fd_from, buf, BUF_SIZE)) > 0) {
        if (write(fd_to, buf, n) != n) {
            error_handler(99, file_to);
        }
    }

    if (n < 0) {
        error_handler(98, file_from);
    }

    if (close_file(fd_from) == -1 || close_file(fd_to) == -1) {
        return -1;
    }

    return 0;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        error_handler(97);
    }

    if (copy_file(argv[1], argv[2]) == -1) {
        return 99;
    }

    return 0;
}

