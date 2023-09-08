#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program generates a random number, assigns it to the
 * variable 'n', and prints whether 'n' is positive, negative, or zero.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d is ", n);

	if (n > 0)
	{
	printf("positive");
	}
	else if (n < 0)
	{
	printf("negative");
	}
	else
	{
	printf("zero");
	}

	printf("\n");

	return (0);
}

