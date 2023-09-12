#include <unistd.h>

// Function prototype for _putchar (custom output function)
int _putchar(char c);

// Function prototype for print_alphabet_x10
void print_alphabet_x10(void);

int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times, followed by a new line.
 */
void print_alphabet_x10(void)
{
	char letter = 'a';

	for (int i = 0; i < 10; i++) {
		while (letter <= 'z') {
			_putchar(letter); // Use your custom _putchar function here.
			letter++;
		}
		letter = 'a';
		_putchar('\n'); // Use your custom _putchar function here.
	}
}

// Custom _putchar function implementation (replace this with your own)
int _putchar(char c)
{
	return write(1, &c, 1);
}
}
