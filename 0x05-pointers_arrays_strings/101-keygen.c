#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

int main(void)
{
    /* Initialize random seed based on the current time */
	srand(time(NULL));

	/* Generate and print random valid passwords */
	for (int i = 0; i < NUM_PASSWORDS_TO_GENERATE; i++)
	{
		char *password = generate_password(PASSWORD_LENGTH);
		printf("Password %d: %s\n", i + 1, password);
		free(password);
	}

	return (EXIT_SUCCESS);
}
