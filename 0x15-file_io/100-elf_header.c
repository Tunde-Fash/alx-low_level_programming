#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>
#include <elf.h>


void error_exit(const char *message) {
    fprintf(stderr, "%s\n", message);
    exit(98);
}


void print_elf_header_info(const char *filename) {
    int fd;
    Elf32_Ehdr header;


    if ((fd = open(filename, O_RDONLY)) == -1) {
        error_exit("Error: Cannot open the file.");
    }


    if (read(fd, &header, sizeof(Elf32_Ehdr)) != sizeof(Elf32_Ehdr)) {
        error_exit("Error: Cannot read ELF header.");
    }

    if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 || header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3) {
        error_exit("Error: Not an ELF file.");
    }

    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header.e_ident[i]);
    }
    printf("\n");

    printf("  Class:                             %s\n", (header.e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", (header.e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", header.e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %d\n", header.e_ident[EI_OSABI]);
    printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
    printf("  Type:                              %d (EXEC (Executable file))\n", header.e_type);
    printf("  Entry point address:               0x%08x\n", header.e_entry);


    close(fd);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        error_exit("Usage: elf_header elf_filename");
    }

    print_elf_header_info(argv[1]);

    return 0;
}
