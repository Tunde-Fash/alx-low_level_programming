#include "main.h"
#include <stdio.h>

/* Custom putchar function (you can implement this elsewhere) */
int _putchar(char c)
{
	return fwrite(1, &c, 1);
}

/* Function to print natural numbers from n to 98 */
void print_to_98(int n)
{
	/* Loop from n to 98 */
	while (n != 98)
	{
		/* Print the current number */
		printf("%d, ", n);

		/* Update n based on whether it's greater or smaller than 98 */
		if (n < 98)
		{
			n++;
		}
		else
		{
			n--;
		}
	}

	/* Print the final number (98) followed by a newline */
	printf("98\n");
}
