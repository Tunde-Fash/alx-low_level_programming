#ifndef MAIN_H
#define MAIN_H

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);

int _putchar(char c);
int **alloc_grid(int width, int height);

char *argstostr(int ac, char **av);

char **strtow(char *str);
int word_count(char *str);
char *copy_word(char *str);
int is_space(char c);
void free_words(char **words);

#endif /* MAIN_H */

