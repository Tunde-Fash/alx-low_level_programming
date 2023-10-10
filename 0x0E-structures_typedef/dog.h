#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure representing a dog.
 * @name: the name of the dog (string).
 * @age: the age of the dog (float).
 * @owner: the owner of the dog (string).
 */
struct dog {
	char *name;
	float age;
	char *owner;
};

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(struct dog *d);

#endif /* DOG_H */
