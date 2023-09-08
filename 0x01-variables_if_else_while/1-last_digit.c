#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program generates a random number, assigns it to the
 * variable 'n', and prints the last digit of 'n' along with a message
 * about its value.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d is %d", n, n % 10);

	if (n % 10 > 5)
	{
	printf(" and is greater than 5\n");
	}
	else if (n % 10 == 0)
	{
	printf(" and is 0\n");
	}
	else
	{
	printf(" and is less than 6 and not 0\n");
	}

	return (0);
}

