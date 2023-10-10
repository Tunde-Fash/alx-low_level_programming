#include <stdio.h>
#include "print_filename.h"

/**
 * printFileName - Prints the name of the current source file followed by a w.
 */
void printFileName(void)
{
	printf("%s\n", __FILE__);
}

/**
 * main - The entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	printFileName();
	return (0);
}
