#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

/* Helper function to print error messages */
void print_error(const char *message, const char *filename, int exit_code) {
    dprintf(STDERR_FILENO, message, filename);
    exit(exit_code);
}

/* Copy the content of one file to another file */
int copy_file(const char *file_from, const char *file_to) {
    int fd_from, fd_to;
    ssize_t bytes_read;
    char buffer[1024];

    /* Open the source file for reading */
    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1)
        print_error("Error: Can't read from file %s\n", file_from, 98);

    /* Open the destination file for writing, creating or truncating it */
    fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
        print_error("Error: Can't write to file %s\n", file_to, 99);

    while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0) {
        if (write(fd_to, buffer, bytes_read) == -1)
            print_error("Error: Can't write to file %s\n", file_to, 99);
    }

    if (bytes_read == -1)
        print_error("Error: Can't read from file %s\n", file_from, 98);

    if (close(fd_from) == -1)
        print_error("Error: Can't close fd %d\n", file_from, 100);

    if (close(fd_to) == -1)
        print_error("Error: Can't close fd %d\n", file_to, 100);

    return 0;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        return 97;
    }

    int result = copy_file(argv[1], argv[2);
    return result;
}

