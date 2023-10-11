#include <stdio.h>
#include <stdlib.h>

/**
 * print_error_and_exit - Prints an error message and exits with the specified status code.
 * @message: The error message to be printed.
 * @status: The exit status code.
 */
void print_error_and_exit(const char *message, int status) {
    fprintf(stderr, "%s\n", message);
    exit(status);
}

/**
 * print_opcodes - Prints the opcodes of the main function in hexadecimal format.
 * @num_bytes: The number of bytes to print.
 */
void print_opcodes(int num_bytes) {
    unsigned char *main_ptr = (unsigned char *)print_opcodes;
    for (int i = 0; i < num_bytes; i++) {
        printf("%02x", main_ptr[i]);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        print_error_and_exit("Error: Invalid number of arguments", 1);
    }

    int num_bytes = atoi(argv[1]);

    if (num_bytes < 0) {
        print_error_and_exit("Error: Number of bytes cannot be negative", 2);
    }

    print_opcodes(num_bytes);

    return 0;
}

