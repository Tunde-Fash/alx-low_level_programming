#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: A pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
    char *concatenated_str;
    int total_length = 0;
    int i, j, k = 0;

    if (ac == 0 || av == NULL)
        return (NULL);

    /* Calculate the total length of the concatenated string */
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
            total_length++;
        total_length++; /* Add space for '\n' after each argument */
    }

    /* Allocate memory for the concatenated string */
    concatenated_str = malloc((total_length + 1) * sizeof(char));
    if (concatenated_str == NULL)
        return (NULL);

    /* Copy each argument into the concatenated string with '\n' */
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            concatenated_str[k++] = av[i][j];
        }
        concatenated_str[k++] = '\n';
    }

    concatenated_str[k] = '\0'; /* Null-terminate the concatenated string */
    return (concatenated_str);
}

