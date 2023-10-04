#include <stdlib.h>
#include "main.h"

/**
 * strtow - Splits a string into words.
 * @str: The input string to split.
 *
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k, count;

    if (str == NULL || *str == '\0')
        return (NULL);

    count = word_count(str);
    if (count == 0)
        return (NULL);

    words = (char **)malloc((count + 1) * sizeof(char *));
    if (words == NULL)
        return (NULL);

    for (i = 0, k = 0; i < count; i++)
    {
        while (str[k] && is_space(str[k]))
            k++;

        words[i] = copy_word(&str[k]);
        if (words[i] == NULL)
        {
            free_words(words);
            return (NULL);
        }

        while (str[k] && !is_space(str[k]))
            k++;
    }
    words[count] = NULL;
	return (words);
}
