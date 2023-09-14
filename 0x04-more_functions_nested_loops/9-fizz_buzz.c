#include "main.h"


/*
 * Function to dine nd pt "Fizz," "Buzz," or "FizzBuzz" based on the number.
 * num: The number to be evaluated.
 */
void printFizzBuzz(int num)
{
	if (num % 3 == 0 && num % 5 == 0)
	{
		printf("FizzBuzz");
	}
	else if (num % 3 == 0)
	{
		printf("Fizz");
	}
	else if (num % 5 == 0)
	{
		printf("Buzz");
	}
	else
	{
		printf("%d", num);
	}
}


/*
 * Function to print numbers from 1 to n with FizzBuzz replacements.
 *
 * n: The number up to which numbers and replacements should be printed.
 */
void fizzBuzz(int n)
{
	for (int i = 1; i <= n; i++)
	{
		printFizzBuzz(i);

		/* Add a space after each number or word except for the last one. */
		if (i < n)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
}


/*
 * The main function to execute the Fizz-Buzz program.
 * It calls fizzBuzz with n=100 to print d Fizz-Buzz seqce from 1 to 100.
 */
int main(void)
{
	fizzBuzz(100);
	return (0);
}
