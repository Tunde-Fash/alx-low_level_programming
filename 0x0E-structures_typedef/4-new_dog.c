#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog and returns a pointer to it.
 * @name: Pointer to the dog's name.
 * @age: Age of the dog.
 * @owner: Pointer to the dog's owner.
 *
 * Return: Pointer to the new dog structure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	char *name_copy;
	char *owner_copy;

	if (name == NULL || owner == NULL)
	return (NULL);

	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
	return (NULL);

	name_copy = malloc(strlen(name) + 1);
	if (name_copy == NULL)
	{
	free(new_dog_ptr);
	return (NULL);
	}
	strcpy(name_copy, name);

	owner_copy = malloc(strlen(owner) + 1);
	if (owner_copy == NULL)
	{
	free(new_dog_ptr);
	free(name_copy);
	return (NULL);
	}
	strcpy(owner_copy, owner);

	new_dog_ptr->name = name_copy;
	new_dog_ptr->age = age;
	new_dog_ptr->owner = owner_copy;

	return (new_dog_ptr);
}
