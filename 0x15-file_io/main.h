#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int error_handler(int code, ...);
int open_file(const char *filename, int flags);
int close_file(int fd);
ssize_t copy_file(const char *file_from, const char *file_to);
void print_elf_header_info(const char *filename);


#endif
