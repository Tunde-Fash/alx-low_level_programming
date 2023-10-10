#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: A pointer to a struct dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d == NULL)
        return;

    d->name = malloc(sizeof(char) * (strlen(name) + 1));
    d->owner = malloc(sizeof(char) * (strlen(owner) + 1));

    if (d->name == NULL || d->owner == NULL) {
        if (d->name != NULL)
            free(d->name);
        if (d->owner != NULL)
            free(d->owner);
        exit(EXIT_FAILURE);
    }

    strcpy(d->name, name);
    d->age = age;
    strcpy(d->owner, owner);
}
