#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 * @str: The input string to be split.
 *
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
        return (NULL);

    
    int num_words = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        while (str[i] == ' ')
            i++;

        if (str[i] != '\0')
        {
            num_words++;
            while (str[i] != ' ' && str[i] != '\0')
                i++;
        }
    }

    char **words = malloc((num_words + 1) * sizeof(char *));
    if (words == NULL)
        return (NULL);

    int word_index = 0;
    i = 0;
    while (str[i] != '\0')
    {
        while (str[i] == ' ')
            i++;

        if (str[i] != '\0')
        {
            int start = i;
            while (str[i] != ' ' && str[i] != '\0')
                i++;

            int word_length = i - start;
            words[word_index] = malloc((word_length + 1) * sizeof(char));
            if (words[word_index] == NULL)
            {
                for (int j = 0; j < word_index; j++)
                    free(words[j]);
                free(words);
                return (NULL);
            }

	for (int j = 0; j < word_length; j++)
	words[word_index][j] = str[start + j];
	words[word_index][word_length] = '\0';

	word_index++;
	}
	}

	words[num_words] = NULL;
	return (words);
}
