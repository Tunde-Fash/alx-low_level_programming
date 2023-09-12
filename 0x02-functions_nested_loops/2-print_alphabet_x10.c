#include <unistd.h>

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times, followed by a new line.
 */
void print_alphabet_x10(void)
{
	char letter = 'a';

	for (int i = 0; i < 10; i++) {
		while (letter <= 'z') {
			write(1, &letter, 1);
			letter++;
		}
		letter = 'a';
		write(1, "\n", 1);
	}
}

int main(void)
{
	print_alphabet_x10();
	return (0);
}
